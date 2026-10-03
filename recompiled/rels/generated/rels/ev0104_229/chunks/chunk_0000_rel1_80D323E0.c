// DolRecomp output
#include "../generated.h"

void func_80D323E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D323E0[540] = {
        &&label_80D323E0,
        &&label_80D323E4,
        &&label_80D323E8,
        &&label_80D323EC,
        &&label_80D323F0,
        &&label_80D323F4,
        &&label_80D323F8,
        &&label_80D323FC,
        &&label_80D32400,
        &&label_80D32404,
        &&label_80D32408,
        &&label_80D3240C,
        &&label_80D32410,
        &&label_80D32414,
        &&label_80D32418,
        &&label_80D3241C,
        &&label_80D32420,
        &&label_80D32424,
        &&label_80D32428,
        &&label_80D3242C,
        &&label_80D32430,
        &&label_80D32434,
        &&label_80D32438,
        &&label_80D3243C,
        &&label_80D32440,
        &&label_80D32444,
        &&label_80D32448,
        &&label_80D3244C,
        &&label_80D32450,
        &&label_80D32454,
        &&label_80D32458,
        &&label_80D3245C,
        &&label_80D32460,
        &&label_80D32464,
        &&label_80D32468,
        &&label_80D3246C,
        &&label_80D32470,
        &&label_80D32474,
        &&label_80D32478,
        &&label_80D3247C,
        &&label_80D32480,
        &&label_80D32484,
        &&label_80D32488,
        &&label_80D3248C,
        &&label_80D32490,
        &&label_80D32494,
        &&label_80D32498,
        &&label_80D3249C,
        &&label_80D324A0,
        &&label_80D324A4,
        &&label_80D324A8,
        &&label_80D324AC,
        &&label_80D324B0,
        &&label_80D324B4,
        &&label_80D324B8,
        &&label_80D324BC,
        &&label_80D324C0,
        &&label_80D324C4,
        &&label_80D324C8,
        &&label_80D324CC,
        &&label_80D324D0,
        &&label_80D324D4,
        &&label_80D324D8,
        &&label_80D324DC,
        &&label_80D324E0,
        &&label_80D324E4,
        &&label_80D324E8,
        &&label_80D324EC,
        &&label_80D324F0,
        &&label_80D324F4,
        &&label_80D324F8,
        &&label_80D324FC,
        &&label_80D32500,
        &&label_80D32504,
        &&label_80D32508,
        &&label_80D3250C,
        &&label_80D32510,
        &&label_80D32514,
        &&label_80D32518,
        &&label_80D3251C,
        &&label_80D32520,
        &&label_80D32524,
        &&label_80D32528,
        &&label_80D3252C,
        &&label_80D32530,
        &&label_80D32534,
        &&label_80D32538,
        &&label_80D3253C,
        &&label_80D32540,
        &&label_80D32544,
        &&label_80D32548,
        &&label_80D3254C,
        &&label_80D32550,
        &&label_80D32554,
        &&label_80D32558,
        &&label_80D3255C,
        &&label_80D32560,
        &&label_80D32564,
        &&label_80D32568,
        &&label_80D3256C,
        &&label_80D32570,
        &&label_80D32574,
        &&label_80D32578,
        &&label_80D3257C,
        &&label_80D32580,
        &&label_80D32584,
        &&label_80D32588,
        &&label_80D3258C,
        &&label_80D32590,
        &&label_80D32594,
        &&label_80D32598,
        &&label_80D3259C,
        &&label_80D325A0,
        &&label_80D325A4,
        &&label_80D325A8,
        &&label_80D325AC,
        &&label_80D325B0,
        &&label_80D325B4,
        &&label_80D325B8,
        &&label_80D325BC,
        &&label_80D325C0,
        &&label_80D325C4,
        &&label_80D325C8,
        &&label_80D325CC,
        &&label_80D325D0,
        &&label_80D325D4,
        &&label_80D325D8,
        &&label_80D325DC,
        &&label_80D325E0,
        &&label_80D325E4,
        &&label_80D325E8,
        &&label_80D325EC,
        &&label_80D325F0,
        &&label_80D325F4,
        &&label_80D325F8,
        &&label_80D325FC,
        &&label_80D32600,
        &&label_80D32604,
        &&label_80D32608,
        &&label_80D3260C,
        &&label_80D32610,
        &&label_80D32614,
        &&label_80D32618,
        &&label_80D3261C,
        &&label_80D32620,
        &&label_80D32624,
        &&label_80D32628,
        &&label_80D3262C,
        &&label_80D32630,
        &&label_80D32634,
        &&label_80D32638,
        &&label_80D3263C,
        &&label_80D32640,
        &&label_80D32644,
        &&label_80D32648,
        &&label_80D3264C,
        &&label_80D32650,
        &&label_80D32654,
        &&label_80D32658,
        &&label_80D3265C,
        &&label_80D32660,
        &&label_80D32664,
        &&label_80D32668,
        &&label_80D3266C,
        &&label_80D32670,
        &&label_80D32674,
        &&label_80D32678,
        &&label_80D3267C,
        &&label_80D32680,
        &&label_80D32684,
        &&label_80D32688,
        &&label_80D3268C,
        &&label_80D32690,
        &&label_80D32694,
        &&label_80D32698,
        &&label_80D3269C,
        &&label_80D326A0,
        &&label_80D326A4,
        &&label_80D326A8,
        &&label_80D326AC,
        &&label_80D326B0,
        &&label_80D326B4,
        &&label_80D326B8,
        &&label_80D326BC,
        &&label_80D326C0,
        &&label_80D326C4,
        &&label_80D326C8,
        &&label_80D326CC,
        &&label_80D326D0,
        &&label_80D326D4,
        &&label_80D326D8,
        &&label_80D326DC,
        &&label_80D326E0,
        &&label_80D326E4,
        &&label_80D326E8,
        &&label_80D326EC,
        &&label_80D326F0,
        &&label_80D326F4,
        &&label_80D326F8,
        &&label_80D326FC,
        &&label_80D32700,
        &&label_80D32704,
        &&label_80D32708,
        &&label_80D3270C,
        &&label_80D32710,
        &&label_80D32714,
        &&label_80D32718,
        &&label_80D3271C,
        &&label_80D32720,
        &&label_80D32724,
        &&label_80D32728,
        &&label_80D3272C,
        &&label_80D32730,
        &&label_80D32734,
        &&label_80D32738,
        &&label_80D3273C,
        &&label_80D32740,
        &&label_80D32744,
        &&label_80D32748,
        &&label_80D3274C,
        &&label_80D32750,
        &&label_80D32754,
        &&label_80D32758,
        &&label_80D3275C,
        &&label_80D32760,
        &&label_80D32764,
        &&label_80D32768,
        &&label_80D3276C,
        &&label_80D32770,
        &&label_80D32774,
        &&label_80D32778,
        &&label_80D3277C,
        &&label_80D32780,
        &&label_80D32784,
        &&label_80D32788,
        &&label_80D3278C,
        &&label_80D32790,
        &&label_80D32794,
        &&label_80D32798,
        &&label_80D3279C,
        &&label_80D327A0,
        &&label_80D327A4,
        &&label_80D327A8,
        &&label_80D327AC,
        &&label_80D327B0,
        &&label_80D327B4,
        &&label_80D327B8,
        &&label_80D327BC,
        &&label_80D327C0,
        &&label_80D327C4,
        &&label_80D327C8,
        &&label_80D327CC,
        &&label_80D327D0,
        &&label_80D327D4,
        &&label_80D327D8,
        &&label_80D327DC,
        &&label_80D327E0,
        &&label_80D327E4,
        &&label_80D327E8,
        &&label_80D327EC,
        &&label_80D327F0,
        &&label_80D327F4,
        &&label_80D327F8,
        &&label_80D327FC,
        &&label_80D32800,
        &&label_80D32804,
        &&label_80D32808,
        &&label_80D3280C,
        &&label_80D32810,
        &&label_80D32814,
        &&label_80D32818,
        &&label_80D3281C,
        &&label_80D32820,
        &&label_80D32824,
        &&label_80D32828,
        &&label_80D3282C,
        &&label_80D32830,
        &&label_80D32834,
        &&label_80D32838,
        &&label_80D3283C,
        &&label_80D32840,
        &&label_80D32844,
        &&label_80D32848,
        &&label_80D3284C,
        &&label_80D32850,
        &&label_80D32854,
        &&label_80D32858,
        &&label_80D3285C,
        &&label_80D32860,
        &&label_80D32864,
        &&label_80D32868,
        &&label_80D3286C,
        &&label_80D32870,
        &&label_80D32874,
        &&label_80D32878,
        &&label_80D3287C,
        &&label_80D32880,
        &&label_80D32884,
        &&label_80D32888,
        &&label_80D3288C,
        &&label_80D32890,
        &&label_80D32894,
        &&label_80D32898,
        &&label_80D3289C,
        &&label_80D328A0,
        &&label_80D328A4,
        &&label_80D328A8,
        &&label_80D328AC,
        &&label_80D328B0,
        &&label_80D328B4,
        &&label_80D328B8,
        &&label_80D328BC,
        &&label_80D328C0,
        &&label_80D328C4,
        &&label_80D328C8,
        &&label_80D328CC,
        &&label_80D328D0,
        &&label_80D328D4,
        &&label_80D328D8,
        &&label_80D328DC,
        &&label_80D328E0,
        &&label_80D328E4,
        &&label_80D328E8,
        &&label_80D328EC,
        &&label_80D328F0,
        &&label_80D328F4,
        &&label_80D328F8,
        &&label_80D328FC,
        &&label_80D32900,
        &&label_80D32904,
        &&label_80D32908,
        &&label_80D3290C,
        &&label_80D32910,
        &&label_80D32914,
        &&label_80D32918,
        &&label_80D3291C,
        &&label_80D32920,
        &&label_80D32924,
        &&label_80D32928,
        &&label_80D3292C,
        &&label_80D32930,
        &&label_80D32934,
        &&label_80D32938,
        &&label_80D3293C,
        &&label_80D32940,
        &&label_80D32944,
        &&label_80D32948,
        &&label_80D3294C,
        &&label_80D32950,
        &&label_80D32954,
        &&label_80D32958,
        &&label_80D3295C,
        &&label_80D32960,
        &&label_80D32964,
        &&label_80D32968,
        &&label_80D3296C,
        &&label_80D32970,
        &&label_80D32974,
        &&label_80D32978,
        &&label_80D3297C,
        &&label_80D32980,
        &&label_80D32984,
        &&label_80D32988,
        &&label_80D3298C,
        &&label_80D32990,
        &&label_80D32994,
        &&label_80D32998,
        &&label_80D3299C,
        &&label_80D329A0,
        &&label_80D329A4,
        &&label_80D329A8,
        &&label_80D329AC,
        &&label_80D329B0,
        &&label_80D329B4,
        &&label_80D329B8,
        &&label_80D329BC,
        &&label_80D329C0,
        &&label_80D329C4,
        &&label_80D329C8,
        &&label_80D329CC,
        &&label_80D329D0,
        &&label_80D329D4,
        &&label_80D329D8,
        &&label_80D329DC,
        &&label_80D329E0,
        &&label_80D329E4,
        &&label_80D329E8,
        &&label_80D329EC,
        &&label_80D329F0,
        &&label_80D329F4,
        &&label_80D329F8,
        &&label_80D329FC,
        &&label_80D32A00,
        &&label_80D32A04,
        &&label_80D32A08,
        &&label_80D32A0C,
        &&label_80D32A10,
        &&label_80D32A14,
        &&label_80D32A18,
        &&label_80D32A1C,
        &&label_80D32A20,
        &&label_80D32A24,
        &&label_80D32A28,
        &&label_80D32A2C,
        &&label_80D32A30,
        &&label_80D32A34,
        &&label_80D32A38,
        &&label_80D32A3C,
        &&label_80D32A40,
        &&label_80D32A44,
        &&label_80D32A48,
        &&label_80D32A4C,
        &&label_80D32A50,
        &&label_80D32A54,
        &&label_80D32A58,
        &&label_80D32A5C,
        &&label_80D32A60,
        &&label_80D32A64,
        &&label_80D32A68,
        &&label_80D32A6C,
        &&label_80D32A70,
        &&label_80D32A74,
        &&label_80D32A78,
        &&label_80D32A7C,
        &&label_80D32A80,
        &&label_80D32A84,
        &&label_80D32A88,
        &&label_80D32A8C,
        &&label_80D32A90,
        &&label_80D32A94,
        &&label_80D32A98,
        &&label_80D32A9C,
        &&label_80D32AA0,
        &&label_80D32AA4,
        &&label_80D32AA8,
        &&label_80D32AAC,
        &&label_80D32AB0,
        &&label_80D32AB4,
        &&label_80D32AB8,
        &&label_80D32ABC,
        &&label_80D32AC0,
        &&label_80D32AC4,
        &&label_80D32AC8,
        &&label_80D32ACC,
        &&label_80D32AD0,
        &&label_80D32AD4,
        &&label_80D32AD8,
        &&label_80D32ADC,
        &&label_80D32AE0,
        &&label_80D32AE4,
        &&label_80D32AE8,
        &&label_80D32AEC,
        &&label_80D32AF0,
        &&label_80D32AF4,
        &&label_80D32AF8,
        &&label_80D32AFC,
        &&label_80D32B00,
        &&label_80D32B04,
        &&label_80D32B08,
        &&label_80D32B0C,
        &&label_80D32B10,
        &&label_80D32B14,
        &&label_80D32B18,
        &&label_80D32B1C,
        &&label_80D32B20,
        &&label_80D32B24,
        &&label_80D32B28,
        &&label_80D32B2C,
        &&label_80D32B30,
        &&label_80D32B34,
        &&label_80D32B38,
        &&label_80D32B3C,
        &&label_80D32B40,
        &&label_80D32B44,
        &&label_80D32B48,
        &&label_80D32B4C,
        &&label_80D32B50,
        &&label_80D32B54,
        &&label_80D32B58,
        &&label_80D32B5C,
        &&label_80D32B60,
        &&label_80D32B64,
        &&label_80D32B68,
        &&label_80D32B6C,
        &&label_80D32B70,
        &&label_80D32B74,
        &&label_80D32B78,
        &&label_80D32B7C,
        &&label_80D32B80,
        &&label_80D32B84,
        &&label_80D32B88,
        &&label_80D32B8C,
        &&label_80D32B90,
        &&label_80D32B94,
        &&label_80D32B98,
        &&label_80D32B9C,
        &&label_80D32BA0,
        &&label_80D32BA4,
        &&label_80D32BA8,
        &&label_80D32BAC,
        &&label_80D32BB0,
        &&label_80D32BB4,
        &&label_80D32BB8,
        &&label_80D32BBC,
        &&label_80D32BC0,
        &&label_80D32BC4,
        &&label_80D32BC8,
        &&label_80D32BCC,
        &&label_80D32BD0,
        &&label_80D32BD4,
        &&label_80D32BD8,
        &&label_80D32BDC,
        &&label_80D32BE0,
        &&label_80D32BE4,
        &&label_80D32BE8,
        &&label_80D32BEC,
        &&label_80D32BF0,
        &&label_80D32BF4,
        &&label_80D32BF8,
        &&label_80D32BFC,
        &&label_80D32C00,
        &&label_80D32C04,
        &&label_80D32C08,
        &&label_80D32C0C,
        &&label_80D32C10,
        &&label_80D32C14,
        &&label_80D32C18,
        &&label_80D32C1C,
        &&label_80D32C20,
        &&label_80D32C24,
        &&label_80D32C28,
        &&label_80D32C2C,
        &&label_80D32C30,
        &&label_80D32C34,
        &&label_80D32C38,
        &&label_80D32C3C,
        &&label_80D32C40,
        &&label_80D32C44,
        &&label_80D32C48,
        &&label_80D32C4C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D323E0u && pc <= 0x80D32C4Cu && ((pc - 0x80D323E0u) & 3u) == 0u)
            goto *pc_table_80D323E0[(pc - 0x80D323E0u) >> 2];
    }
    return;
label_80D323E0:
    ctx->pc = 0x80D323E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D323E0: stwu     r1, -16(r1)
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
label_80D323E4:
    ctx->pc = 0x80D323E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D323E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D323E8:
    ctx->pc = 0x80D323E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D323E8: stw     r0, 20(r1)
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
label_80D323EC:
    ctx->pc = 0x80D323ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D323EC: stw     r31, 12(r1)
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
label_80D323F0:
    ctx->pc = 0x80D323F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323F0u)) return;
    // 80D323F0: cmpwi   r3, 2
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

label_80D323F4:
    ctx->pc = 0x80D323F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323F4u)) return;
    // 80D323F4: bc    12, 2, 0x80D32890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D32890;
        }
    }

label_80D323F8:
    ctx->pc = 0x80D323F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D323F8: bc    4, 0, 0x80D3240C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3240C;
        }
    }

label_80D323FC:
    ctx->pc = 0x80D323FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D323FC: cmpwi   r3, 0
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

label_80D32400:
    ctx->pc = 0x80D32400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32400u)) return;
    // 80D32400: bc    12, 2, 0x80D328D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D328D0;
        }
    }

label_80D32404:
    ctx->pc = 0x80D32404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32404: bc    4, 0, 0x80D32414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32414;
        }
    }

label_80D32408:
    ctx->pc = 0x80D32408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32408: b       0x80D328D0
    {
            goto label_80D328D0;
    }

label_80D3240C:
    ctx->pc = 0x80D3240Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3240Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3240C: cmpwi   r3, 4
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

label_80D32410:
    ctx->pc = 0x80D32410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32410u)) return;
    // 80D32410: b       0x80D328D0
    {
            goto label_80D328D0;
    }

label_80D32414:
    ctx->pc = 0x80D32414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32414: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32418:
    ctx->pc = 0x80D32418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32418u)) return;
    // 80D32418: bl      0x8045EC10
    {
            ctx->lr = 0x80D3241Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D3241C:
    ctx->pc = 0x80D3241Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3241Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3241C: bl      0x8045DE7C
    {
            ctx->lr = 0x80D32420u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D32420:
    ctx->pc = 0x80D32420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32420: bl      0x80460A60
    {
            ctx->lr = 0x80D32424u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D32424:
    ctx->pc = 0x80D32424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32424: bl      0x80460A24
    {
            ctx->lr = 0x80D32428u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D32428:
    ctx->pc = 0x80D32428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D32428: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3242C:
    ctx->pc = 0x80D3242Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3242Cu)) return;
    // 80D3242C: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80D32430:
    ctx->pc = 0x80D32430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32430u)) return;
    // 80D32430: addi    r4, r4, -5088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5088);

label_80D32434:
    ctx->pc = 0x80D32434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32434u)) return;
    // 80D32434: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32438:
    ctx->pc = 0x80D32438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32438u)) return;
    // 80D32438: addi    r5, r5, -17168
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17168);

label_80D3243C:
    ctx->pc = 0x80D3243Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3243Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3243C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3243Cu)) return;
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
label_80D32440:
    ctx->pc = 0x80D32440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32440u)) return;
    // 80D32440: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32444:
    ctx->pc = 0x80D32444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32444u)) return;
    // 80D32444: addi    r5, r5, -17164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17164);

label_80D32448:
    ctx->pc = 0x80D32448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32448: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32448u)) return;
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
label_80D3244C:
    ctx->pc = 0x80D3244Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3244Cu)) return;
    // 80D3244C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32450:
    ctx->pc = 0x80D32450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32450u)) return;
    // 80D32450: addi    r5, r5, -17160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17160);

label_80D32454:
    ctx->pc = 0x80D32454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32454: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32454u)) return;
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
label_80D32458:
    ctx->pc = 0x80D32458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32458u)) return;
    // 80D32458: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D3245C:
    ctx->pc = 0x80D3245Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3245Cu)) return;
    // 80D3245C: li      r6, 16384
    ctx->gpr[6] = (u32)(s32)(16384);

label_80D32460:
    ctx->pc = 0x80D32460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32460u)) return;
    // 80D32460: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D32464:
    ctx->pc = 0x80D32464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32464u)) return;
    // 80D32464: bl      0x8045ED84
    {
            ctx->lr = 0x80D32468u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D32468:
    ctx->pc = 0x80D32468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32468: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3246C:
    ctx->pc = 0x80D3246Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3246Cu)) return;
    // 80D3246C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32470u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32470:
    ctx->pc = 0x80D32470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32470: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D32474:
    ctx->pc = 0x80D32474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32474u)) return;
    // 80D32474: bl      0x8045F220
    {
            ctx->lr = 0x80D32478u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32478:
    ctx->pc = 0x80D32478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D32478: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D3247C:
    ctx->pc = 0x80D3247Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3247Cu)) return;
    // 80D3247C: addi    r4, r4, -17168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17168);

label_80D32480:
    ctx->pc = 0x80D32480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32480: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32480u)) return;
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
label_80D32484:
    ctx->pc = 0x80D32484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32484u)) return;
    // 80D32484: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32488:
    ctx->pc = 0x80D32488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32488u)) return;
    // 80D32488: addi    r4, r4, -17164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17164);

label_80D3248C:
    ctx->pc = 0x80D3248Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3248Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3248C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3248Cu)) return;
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
label_80D32490:
    ctx->pc = 0x80D32490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32490u)) return;
    // 80D32490: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32494:
    ctx->pc = 0x80D32494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32494u)) return;
    // 80D32494: addi    r4, r4, -17160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17160);

label_80D32498:
    ctx->pc = 0x80D32498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32498: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32498u)) return;
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
label_80D3249C:
    ctx->pc = 0x80D3249Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3249Cu)) return;
    // 80D3249C: bl      0x8045EF2C
    {
            ctx->lr = 0x80D324A0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D324A0:
    ctx->pc = 0x80D324A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D324A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D324A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D324A4:
    ctx->pc = 0x80D324A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324A4u)) return;
    // 80D324A4: bl      0x8045F220
    {
            ctx->lr = 0x80D324A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D324A8:
    ctx->pc = 0x80D324A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D324A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D324A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D324AC:
    ctx->pc = 0x80D324ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324ACu)) return;
    // 80D324AC: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_80D324B0:
    ctx->pc = 0x80D324B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324B0u)) return;
    // 80D324B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D324B4:
    ctx->pc = 0x80D324B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324B4u)) return;
    // 80D324B4: bl      0x8045EEA8
    {
            ctx->lr = 0x80D324B8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D324B8:
    ctx->pc = 0x80D324B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D324B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D324B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D324BC:
    ctx->pc = 0x80D324BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324BCu)) return;
    // 80D324BC: bl      0x8045F220
    {
            ctx->lr = 0x80D324C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D324C0:
    ctx->pc = 0x80D324C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D324C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D324C0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D324C4:
    ctx->pc = 0x80D324C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324C4u)) return;
    // 80D324C4: addi    r4, r4, -17156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17156);

label_80D324C8:
    ctx->pc = 0x80D324C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D324C8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D324C8u)) return;
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
label_80D324CC:
    ctx->pc = 0x80D324CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324CCu)) return;
    // 80D324CC: bl      0x80D32A60
    {
            ctx->lr = 0x80D324D0u;
            goto label_80D32A60;
    }

label_80D324D0:
    ctx->pc = 0x80D324D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D324D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D324D0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D324D4:
    ctx->pc = 0x80D324D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324D4u)) return;
    // 80D324D4: addi    r4, r4, -10432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10432);

label_80D324D8:
    ctx->pc = 0x80D324D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D324D8: stw     r3, 0(r4)
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
label_80D324DC:
    ctx->pc = 0x80D324DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324DCu)) return;
    // 80D324DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D324E0:
    ctx->pc = 0x80D324E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324E0u)) return;
    // 80D324E0: bl      0x8045F220
    {
            ctx->lr = 0x80D324E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D324E4:
    ctx->pc = 0x80D324E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D324E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D324E4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D324E8:
    ctx->pc = 0x80D324E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324E8u)) return;
    // 80D324E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D324EC:
    ctx->pc = 0x80D324ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324ECu)) return;
    // 80D324EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D324F0:
    ctx->pc = 0x80D324F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324F0u)) return;
    // 80D324F0: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D324F4:
    ctx->pc = 0x80D324F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324F4u)) return;
    // 80D324F4: addi    r6, r6, -17152
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17152);

label_80D324F8:
    ctx->pc = 0x80D324F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D324F8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D324F8u)) return;
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
label_80D324FC:
    ctx->pc = 0x80D324FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D324FCu)) return;
    // 80D324FC: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D32500:
    ctx->pc = 0x80D32500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32500u)) return;
    // 80D32500: addi    r6, r6, -17148
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17148);

label_80D32504:
    ctx->pc = 0x80D32504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32504: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32504u)) return;
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
label_80D32508:
    ctx->pc = 0x80D32508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32508u)) return;
    // 80D32508: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D32508u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3250C:
    ctx->pc = 0x80D3250Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3250Cu)) return;
    // 80D3250C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D32510:
    ctx->pc = 0x80D32510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32510u)) return;
    // 80D32510: bl      0x8045C3C0
    {
            ctx->lr = 0x80D32514u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D32514:
    ctx->pc = 0x80D32514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D32514: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32518:
    ctx->pc = 0x80D32518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32518u)) return;
    // 80D32518: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3251C:
    ctx->pc = 0x80D3251Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3251Cu)) return;
    // 80D3251C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32520:
    ctx->pc = 0x80D32520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32520u)) return;
    // 80D32520: addi    r5, r5, -17144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17144);

label_80D32524:
    ctx->pc = 0x80D32524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32524: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32524u)) return;
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
label_80D32528:
    ctx->pc = 0x80D32528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32528u)) return;
    // 80D32528: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3252C:
    ctx->pc = 0x80D3252Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3252Cu)) return;
    // 80D3252C: addi    r5, r5, -17140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17140);

label_80D32530:
    ctx->pc = 0x80D32530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32530: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32530u)) return;
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
label_80D32534:
    ctx->pc = 0x80D32534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32534u)) return;
    // 80D32534: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32538:
    ctx->pc = 0x80D32538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32538u)) return;
    // 80D32538: addi    r5, r5, -17136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17136);

label_80D3253C:
    ctx->pc = 0x80D3253Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3253Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3253C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3253Cu)) return;
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
label_80D32540:
    ctx->pc = 0x80D32540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32540u)) return;
    // 80D32540: bl      0x8045C750
    {
            ctx->lr = 0x80D32544u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32544:
    ctx->pc = 0x80D32544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32544: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32548:
    ctx->pc = 0x80D32548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32548u)) return;
    // 80D32548: bl      0x8045F220
    {
            ctx->lr = 0x80D3254Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3254C:
    ctx->pc = 0x80D3254Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3254Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3254C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32550:
    ctx->pc = 0x80D32550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32550u)) return;
    // 80D32550: addi    r4, r4, -17132
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17132);

label_80D32554:
    ctx->pc = 0x80D32554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32554: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32554u)) return;
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
label_80D32558:
    ctx->pc = 0x80D32558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32558u)) return;
    // 80D32558: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D3255C:
    ctx->pc = 0x80D3255Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3255Cu)) return;
    // 80D3255C: addi    r4, r4, -17128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17128);

label_80D32560:
    ctx->pc = 0x80D32560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32560: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32560u)) return;
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
label_80D32564:
    ctx->pc = 0x80D32564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32564u)) return;
    // 80D32564: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32568:
    ctx->pc = 0x80D32568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32568u)) return;
    // 80D32568: addi    r4, r4, -17124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17124);

label_80D3256C:
    ctx->pc = 0x80D3256Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3256Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3256C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3256Cu)) return;
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
label_80D32570:
    ctx->pc = 0x80D32570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32570u)) return;
    // 80D32570: bl      0x8045EF2C
    {
            ctx->lr = 0x80D32574u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D32574:
    ctx->pc = 0x80D32574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32574: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32578:
    ctx->pc = 0x80D32578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32578u)) return;
    // 80D32578: bl      0x8045F220
    {
            ctx->lr = 0x80D3257Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3257C:
    ctx->pc = 0x80D3257Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3257Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3257C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D32580:
    ctx->pc = 0x80D32580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32580u)) return;
    // 80D32580: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_80D32584:
    ctx->pc = 0x80D32584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32584u)) return;
    // 80D32584: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D32588:
    ctx->pc = 0x80D32588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32588u)) return;
    // 80D32588: bl      0x8045EEA8
    {
            ctx->lr = 0x80D3258Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D3258C:
    ctx->pc = 0x80D3258Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3258Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3258C: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80D32590:
    ctx->pc = 0x80D32590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32590u)) return;
    // 80D32590: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32594u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32594:
    ctx->pc = 0x80D32594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32594: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32598:
    ctx->pc = 0x80D32598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32598u)) return;
    // 80D32598: bl      0x8045F220
    {
            ctx->lr = 0x80D3259Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3259C:
    ctx->pc = 0x80D3259Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3259Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3259C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D325A0:
    ctx->pc = 0x80D325A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325A0u)) return;
    // 80D325A0: addi    r4, r4, -17120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17120);

label_80D325A4:
    ctx->pc = 0x80D325A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D325A4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D325A4u)) return;
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
label_80D325A8:
    ctx->pc = 0x80D325A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325A8u)) return;
    // 80D325A8: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D325AC:
    ctx->pc = 0x80D325ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325ACu)) return;
    // 80D325AC: addi    r4, r4, -17164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17164);

label_80D325B0:
    ctx->pc = 0x80D325B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D325B0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D325B0u)) return;
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
label_80D325B4:
    ctx->pc = 0x80D325B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325B4u)) return;
    // 80D325B4: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D325B8:
    ctx->pc = 0x80D325B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325B8u)) return;
    // 80D325B8: addi    r4, r4, -17116
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17116);

label_80D325BC:
    ctx->pc = 0x80D325BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D325BC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D325BCu)) return;
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
label_80D325C0:
    ctx->pc = 0x80D325C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325C0u)) return;
    // 80D325C0: bl      0x8045E70C
    {
            ctx->lr = 0x80D325C4u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D325C4:
    ctx->pc = 0x80D325C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D325C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D325C4: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D325C8:
    ctx->pc = 0x80D325C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325C8u)) return;
    // 80D325C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D325CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D325CC:
    ctx->pc = 0x80D325CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D325CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D325CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D325D0:
    ctx->pc = 0x80D325D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325D0u)) return;
    // 80D325D0: bl      0x8045F220
    {
            ctx->lr = 0x80D325D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D325D4:
    ctx->pc = 0x80D325D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D325D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D325D4: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D325D8:
    ctx->pc = 0x80D325D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325D8u)) return;
    // 80D325D8: addi    r4, r4, -17112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17112);

label_80D325DC:
    ctx->pc = 0x80D325DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D325DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D325DCu)) return;
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
label_80D325E0:
    ctx->pc = 0x80D325E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325E0u)) return;
    // 80D325E0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D325E4:
    ctx->pc = 0x80D325E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325E4u)) return;
    // 80D325E4: addi    r4, r4, -17108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17108);

label_80D325E8:
    ctx->pc = 0x80D325E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D325E8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D325E8u)) return;
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
label_80D325EC:
    ctx->pc = 0x80D325ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325ECu)) return;
    // 80D325EC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D325F0:
    ctx->pc = 0x80D325F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325F0u)) return;
    // 80D325F0: addi    r4, r4, -17104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17104);

label_80D325F4:
    ctx->pc = 0x80D325F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D325F4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D325F4u)) return;
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
label_80D325F8:
    ctx->pc = 0x80D325F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D325F8u)) return;
    // 80D325F8: bl      0x8045E70C
    {
            ctx->lr = 0x80D325FCu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D325FC:
    ctx->pc = 0x80D325FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D325FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D325FC: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32600:
    ctx->pc = 0x80D32600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32600u)) return;
    // 80D32600: addi    r3, r3, -10432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10432);

label_80D32604:
    ctx->pc = 0x80D32604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32604: lwz     r3, 0(r3)
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
label_80D32608:
    ctx->pc = 0x80D32608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32608u)) return;
    // 80D32608: cmplwi  r3, 0x0000
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

label_80D3260C:
    ctx->pc = 0x80D3260Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3260Cu)) return;
    // 80D3260C: bc    12, 2, 0x80D32624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D32624;
        }
    }

label_80D32610:
    ctx->pc = 0x80D32610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32610: bl      0x8050F9E0
    {
            ctx->lr = 0x80D32614u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D32614:
    ctx->pc = 0x80D32614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D32614: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D32618:
    ctx->pc = 0x80D32618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32618u)) return;
    // 80D32618: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D3261C:
    ctx->pc = 0x80D3261Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3261Cu)) return;
    // 80D3261C: addi    r3, r3, -10432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10432);

label_80D32620:
    ctx->pc = 0x80D32620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D32620: stw     r0, 0(r3)
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
label_80D32624:
    ctx->pc = 0x80D32624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32624: li      r3, 1528
    ctx->gpr[3] = (u32)(s32)(1528);

label_80D32628:
    ctx->pc = 0x80D32628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32628u)) return;
    // 80D32628: bl      0x8045BFA0
    {
            ctx->lr = 0x80D3262Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D3262C:
    ctx->pc = 0x80D3262Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3262Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3262C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32630:
    ctx->pc = 0x80D32630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32630u)) return;
    // 80D32630: bl      0x8045F220
    {
            ctx->lr = 0x80D32634u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32634:
    ctx->pc = 0x80D32634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D32634: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32638:
    ctx->pc = 0x80D32638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32638u)) return;
    // 80D32638: addi    r4, r4, -16628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16628);

label_80D3263C:
    ctx->pc = 0x80D3263Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3263Cu)) return;
    // 80D3263C: bl      0x8045C060
    {
            ctx->lr = 0x80D32640u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32640:
    ctx->pc = 0x80D32640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D32640: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32644:
    ctx->pc = 0x80D32644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32644u)) return;
    // 80D32644: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D32648:
    ctx->pc = 0x80D32648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32648: lwz     r0, 0(r3)
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
label_80D3264C:
    ctx->pc = 0x80D3264Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3264Cu)) return;
    // 80D3264C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D32650:
    ctx->pc = 0x80D32650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32650u)) return;
    // 80D32650: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32654:
    ctx->pc = 0x80D32654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32654u)) return;
    // 80D32654: addi    r3, r3, -16656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16656);

label_80D32658:
    ctx->pc = 0x80D32658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32658: lwzx    r3, r3, r0
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
label_80D3265C:
    ctx->pc = 0x80D3265Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3265Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3265C: lwz     r3, 0(r3)
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
label_80D32660:
    ctx->pc = 0x80D32660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32660u)) return;
    // 80D32660: bl      0x8045F6FC
    {
            ctx->lr = 0x80D32664u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D32664:
    ctx->pc = 0x80D32664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32664: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32668:
    ctx->pc = 0x80D32668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32668u)) return;
    // 80D32668: bl      0x8045F220
    {
            ctx->lr = 0x80D3266Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3266C:
    ctx->pc = 0x80D3266Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3266Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3266C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32670:
    ctx->pc = 0x80D32670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32670u)) return;
    // 80D32670: addi    r4, r4, -10692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10692);

label_80D32674:
    ctx->pc = 0x80D32674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32674u)) return;
    // 80D32674: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D32678:
    ctx->pc = 0x80D32678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32678u)) return;
    // 80D32678: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D3267C:
    ctx->pc = 0x80D3267Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3267Cu)) return;
    // 80D3267C: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D32680:
    ctx->pc = 0x80D32680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32680u)) return;
    // 80D32680: addi    r6, r6, -17100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17100);

label_80D32684:
    ctx->pc = 0x80D32684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32684: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32684u)) return;
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
label_80D32688:
    ctx->pc = 0x80D32688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32688u)) return;
    // 80D32688: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D3268C:
    ctx->pc = 0x80D3268Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3268Cu)) return;
    // 80D3268C: li      r7, 30
    ctx->gpr[7] = (u32)(s32)(30);

label_80D32690:
    ctx->pc = 0x80D32690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32690u)) return;
    // 80D32690: bl      0x8045EBE4
    {
            ctx->lr = 0x80D32694u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D32694:
    ctx->pc = 0x80D32694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32694: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32698:
    ctx->pc = 0x80D32698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32698u)) return;
    // 80D32698: bl      0x8045F220
    {
            ctx->lr = 0x80D3269Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3269C:
    ctx->pc = 0x80D3269Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3269Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3269C: bl      0x8045E760
    {
            ctx->lr = 0x80D326A0u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D326A0:
    ctx->pc = 0x80D326A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D326A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D326A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D326A4:
    ctx->pc = 0x80D326A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326A4u)) return;
    // 80D326A4: bl      0x8045F220
    {
            ctx->lr = 0x80D326A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D326A8:
    ctx->pc = 0x80D326A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D326A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D326A8: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D326AC:
    ctx->pc = 0x80D326ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326ACu)) return;
    // 80D326AC: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D326B0:
    ctx->pc = 0x80D326B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326B0u)) return;
    // 80D326B0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D326B4:
    ctx->pc = 0x80D326B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326B4u)) return;
    // 80D326B4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D326B8:
    ctx->pc = 0x80D326B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326B8u)) return;
    // 80D326B8: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D326BC:
    ctx->pc = 0x80D326BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326BCu)) return;
    // 80D326BC: addi    r6, r6, -17096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17096);

label_80D326C0:
    ctx->pc = 0x80D326C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D326C0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D326C0u)) return;
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
label_80D326C4:
    ctx->pc = 0x80D326C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326C4u)) return;
    // 80D326C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D326C8:
    ctx->pc = 0x80D326C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326C8u)) return;
    // 80D326C8: li      r7, 20
    ctx->gpr[7] = (u32)(s32)(20);

label_80D326CC:
    ctx->pc = 0x80D326CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326CCu)) return;
    // 80D326CC: bl      0x8045EBE4
    {
            ctx->lr = 0x80D326D0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D326D0:
    ctx->pc = 0x80D326D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D326D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D326D0: bl      0x8045BFF4
    {
            ctx->lr = 0x80D326D4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D326D4:
    ctx->pc = 0x80D326D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D326D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D326D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D326D8:
    ctx->pc = 0x80D326D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326D8u)) return;
    // 80D326D8: bl      0x8045F220
    {
            ctx->lr = 0x80D326DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D326DC:
    ctx->pc = 0x80D326DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D326DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D326DC: bl      0x8045C034
    {
            ctx->lr = 0x80D326E0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D326E0:
    ctx->pc = 0x80D326E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D326E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D326E0: bl      0x8045C4A4
    {
            ctx->lr = 0x80D326E4u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D326E4:
    ctx->pc = 0x80D326E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D326E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D326E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D326E8:
    ctx->pc = 0x80D326E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326E8u)) return;
    // 80D326E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D326EC:
    ctx->pc = 0x80D326ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326ECu)) return;
    // 80D326EC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D326F0:
    ctx->pc = 0x80D326F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326F0u)) return;
    // 80D326F0: addi    r5, r5, -17092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17092);

label_80D326F4:
    ctx->pc = 0x80D326F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D326F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D326F4u)) return;
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
label_80D326F8:
    ctx->pc = 0x80D326F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326F8u)) return;
    // 80D326F8: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D326FC:
    ctx->pc = 0x80D326FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D326FCu)) return;
    // 80D326FC: addi    r5, r5, -17088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17088);

label_80D32700:
    ctx->pc = 0x80D32700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32700: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32700u)) return;
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
label_80D32704:
    ctx->pc = 0x80D32704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32704u)) return;
    // 80D32704: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32708:
    ctx->pc = 0x80D32708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32708u)) return;
    // 80D32708: addi    r5, r5, -17084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17084);

label_80D3270C:
    ctx->pc = 0x80D3270Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3270Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3270C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3270Cu)) return;
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
label_80D32710:
    ctx->pc = 0x80D32710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32710u)) return;
    // 80D32710: bl      0x8045C750
    {
            ctx->lr = 0x80D32714u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32714:
    ctx->pc = 0x80D32714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D32714: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32718:
    ctx->pc = 0x80D32718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32718u)) return;
    // 80D32718: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3271C:
    ctx->pc = 0x80D3271Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3271Cu)) return;
    // 80D3271C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D32720:
    ctx->pc = 0x80D32720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32720u)) return;
    // 80D32720: addi    r5, r5, -2375
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2375);

label_80D32724:
    ctx->pc = 0x80D32724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32724u)) return;
    // 80D32724: li      r6, 19141
    ctx->gpr[6] = (u32)(s32)(19141);

label_80D32728:
    ctx->pc = 0x80D32728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32728u)) return;
    // 80D32728: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D3272C:
    ctx->pc = 0x80D3272Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3272Cu)) return;
    // 80D3272C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D32730u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D32730:
    ctx->pc = 0x80D32730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D32730: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32734:
    ctx->pc = 0x80D32734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32734u)) return;
    // 80D32734: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D32738:
    ctx->pc = 0x80D32738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32738u)) return;
    // 80D32738: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3273C:
    ctx->pc = 0x80D3273Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3273Cu)) return;
    // 80D3273C: addi    r5, r5, -17080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17080);

label_80D32740:
    ctx->pc = 0x80D32740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32740: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32740u)) return;
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
label_80D32744:
    ctx->pc = 0x80D32744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32744u)) return;
    // 80D32744: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32748:
    ctx->pc = 0x80D32748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32748u)) return;
    // 80D32748: addi    r5, r5, -17076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17076);

label_80D3274C:
    ctx->pc = 0x80D3274Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3274Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3274C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3274Cu)) return;
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
label_80D32750:
    ctx->pc = 0x80D32750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32750u)) return;
    // 80D32750: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32754:
    ctx->pc = 0x80D32754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32754u)) return;
    // 80D32754: addi    r5, r5, -17072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17072);

label_80D32758:
    ctx->pc = 0x80D32758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32758: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32758u)) return;
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
label_80D3275C:
    ctx->pc = 0x80D3275Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3275Cu)) return;
    // 80D3275C: bl      0x8045C750
    {
            ctx->lr = 0x80D32760u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32760:
    ctx->pc = 0x80D32760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D32760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32764:
    ctx->pc = 0x80D32764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32764u)) return;
    // 80D32764: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D32768:
    ctx->pc = 0x80D32768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32768u)) return;
    // 80D32768: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D3276C:
    ctx->pc = 0x80D3276Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3276Cu)) return;
    // 80D3276C: addi    r5, r5, -2375
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2375);

label_80D32770:
    ctx->pc = 0x80D32770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32770u)) return;
    // 80D32770: li      r6, 20165
    ctx->gpr[6] = (u32)(s32)(20165);

label_80D32774:
    ctx->pc = 0x80D32774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32774u)) return;
    // 80D32774: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D32778:
    ctx->pc = 0x80D32778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32778u)) return;
    // 80D32778: bl      0x8045C7B4
    {
            ctx->lr = 0x80D3277Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D3277C:
    ctx->pc = 0x80D3277Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3277Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3277C: li      r3, 1529
    ctx->gpr[3] = (u32)(s32)(1529);

label_80D32780:
    ctx->pc = 0x80D32780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32780u)) return;
    // 80D32780: bl      0x8045BFA0
    {
            ctx->lr = 0x80D32784u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D32784:
    ctx->pc = 0x80D32784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32784: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D32788:
    ctx->pc = 0x80D32788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32788u)) return;
    // 80D32788: bl      0x8045F220
    {
            ctx->lr = 0x80D3278Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3278C:
    ctx->pc = 0x80D3278Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3278Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3278C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32790:
    ctx->pc = 0x80D32790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32790u)) return;
    // 80D32790: addi    r4, r4, -16624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16624);

label_80D32794:
    ctx->pc = 0x80D32794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32794u)) return;
    // 80D32794: bl      0x8045C060
    {
            ctx->lr = 0x80D32798u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32798:
    ctx->pc = 0x80D32798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D32798: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D3279C:
    ctx->pc = 0x80D3279Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3279Cu)) return;
    // 80D3279C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D327A0:
    ctx->pc = 0x80D327A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D327A0: lwz     r0, 0(r3)
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
label_80D327A4:
    ctx->pc = 0x80D327A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327A4u)) return;
    // 80D327A4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D327A8:
    ctx->pc = 0x80D327A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327A8u)) return;
    // 80D327A8: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D327AC:
    ctx->pc = 0x80D327ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327ACu)) return;
    // 80D327AC: addi    r3, r3, -16656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16656);

label_80D327B0:
    ctx->pc = 0x80D327B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D327B0: lwzx    r3, r3, r0
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
label_80D327B4:
    ctx->pc = 0x80D327B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D327B4: lwz     r3, 4(r3)
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
label_80D327B8:
    ctx->pc = 0x80D327B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327B8u)) return;
    // 80D327B8: bl      0x8045F6FC
    {
            ctx->lr = 0x80D327BCu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D327BC:
    ctx->pc = 0x80D327BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D327BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D327BC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D327C0:
    ctx->pc = 0x80D327C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327C0u)) return;
    // 80D327C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D327C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D327C4:
    ctx->pc = 0x80D327C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D327C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D327C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D327C8:
    ctx->pc = 0x80D327C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327C8u)) return;
    // 80D327C8: bl      0x8045F220
    {
            ctx->lr = 0x80D327CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D327CC:
    ctx->pc = 0x80D327CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D327CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D327CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D327D0:
    ctx->pc = 0x80D327D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327D0u)) return;
    // 80D327D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D327D4:
    ctx->pc = 0x80D327D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327D4u)) return;
    // 80D327D4: bl      0x8045F220
    {
            ctx->lr = 0x80D327D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D327D8:
    ctx->pc = 0x80D327D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D327D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D327D8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D327DC:
    ctx->pc = 0x80D327DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327DCu)) return;
    // 80D327DC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D327E0:
    ctx->pc = 0x80D327E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327E0u)) return;
    // 80D327E0: addi    r5, r5, -17152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17152);

label_80D327E4:
    ctx->pc = 0x80D327E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D327E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D327E4u)) return;
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
label_80D327E8:
    ctx->pc = 0x80D327E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327E8u)) return;
    // 80D327E8: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D327EC:
    ctx->pc = 0x80D327ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327ECu)) return;
    // 80D327EC: addi    r5, r5, -17068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17068);

label_80D327F0:
    ctx->pc = 0x80D327F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D327F0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D327F0u)) return;
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
label_80D327F4:
    ctx->pc = 0x80D327F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327F4u)) return;
    // 80D327F4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D327F4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D327F8:
    ctx->pc = 0x80D327F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D327F8u)) return;
    // 80D327F8: bl      0x8045E734
    {
            ctx->lr = 0x80D327FCu;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D327FC:
    ctx->pc = 0x80D327FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D327FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D327FC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D32800:
    ctx->pc = 0x80D32800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32800u)) return;
    // 80D32800: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32804u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32804:
    ctx->pc = 0x80D32804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32804: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32808:
    ctx->pc = 0x80D32808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32808u)) return;
    // 80D32808: bl      0x8045F220
    {
            ctx->lr = 0x80D3280Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3280C:
    ctx->pc = 0x80D3280Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3280Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3280C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32810:
    ctx->pc = 0x80D32810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32810u)) return;
    // 80D32810: addi    r4, r4, -16620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16620);

label_80D32814:
    ctx->pc = 0x80D32814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32814u)) return;
    // 80D32814: bl      0x8045C060
    {
            ctx->lr = 0x80D32818u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32818:
    ctx->pc = 0x80D32818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3281C:
    ctx->pc = 0x80D3281Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3281Cu)) return;
    // 80D3281C: bl      0x8045F220
    {
            ctx->lr = 0x80D32820u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32820:
    ctx->pc = 0x80D32820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32820: bl      0x8045E760
    {
            ctx->lr = 0x80D32824u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D32824:
    ctx->pc = 0x80D32824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D32824: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32828:
    ctx->pc = 0x80D32828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32828u)) return;
    // 80D32828: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D3282C:
    ctx->pc = 0x80D3282Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3282Cu)) return;
    // 80D3282C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32830:
    ctx->pc = 0x80D32830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32830u)) return;
    // 80D32830: addi    r5, r5, -17064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17064);

label_80D32834:
    ctx->pc = 0x80D32834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32834: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32834u)) return;
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
label_80D32838:
    ctx->pc = 0x80D32838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32838u)) return;
    // 80D32838: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3283C:
    ctx->pc = 0x80D3283Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3283Cu)) return;
    // 80D3283C: addi    r5, r5, -17060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17060);

label_80D32840:
    ctx->pc = 0x80D32840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32840: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32840u)) return;
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
label_80D32844:
    ctx->pc = 0x80D32844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32844u)) return;
    // 80D32844: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32848:
    ctx->pc = 0x80D32848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32848u)) return;
    // 80D32848: addi    r5, r5, -17056
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17056);

label_80D3284C:
    ctx->pc = 0x80D3284Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3284Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3284C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3284Cu)) return;
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
label_80D32850:
    ctx->pc = 0x80D32850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32850u)) return;
    // 80D32850: bl      0x8045C750
    {
            ctx->lr = 0x80D32854u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32854:
    ctx->pc = 0x80D32854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D32854: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32858:
    ctx->pc = 0x80D32858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32858u)) return;
    // 80D32858: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D3285C:
    ctx->pc = 0x80D3285Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3285Cu)) return;
    // 80D3285C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D32860:
    ctx->pc = 0x80D32860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32860u)) return;
    // 80D32860: addi    r5, r6, -5447
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5447);

label_80D32864:
    ctx->pc = 0x80D32864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32864u)) return;
    // 80D32864: addi    r6, r6, -5435
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5435);

label_80D32868:
    ctx->pc = 0x80D32868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32868u)) return;
    // 80D32868: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D3286C:
    ctx->pc = 0x80D3286Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3286Cu)) return;
    // 80D3286C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D32870u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D32870:
    ctx->pc = 0x80D32870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32870: bl      0x8045BFF4
    {
            ctx->lr = 0x80D32874u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D32874:
    ctx->pc = 0x80D32874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32874: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D32878:
    ctx->pc = 0x80D32878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32878u)) return;
    // 80D32878: bl      0x8045F220
    {
            ctx->lr = 0x80D3287Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3287C:
    ctx->pc = 0x80D3287Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3287Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3287C: bl      0x8045C034
    {
            ctx->lr = 0x80D32880u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D32880:
    ctx->pc = 0x80D32880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32880: bl      0x8045F32C
    {
            ctx->lr = 0x80D32884u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D32884:
    ctx->pc = 0x80D32884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32884: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D32888:
    ctx->pc = 0x80D32888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32888u)) return;
    // 80D32888: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3288Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3288C:
    ctx->pc = 0x80D3288Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3288Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3288C: b       0x80D328D0
    {
            goto label_80D328D0;
    }

label_80D32890:
    ctx->pc = 0x80D32890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32890: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32894:
    ctx->pc = 0x80D32894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32894u)) return;
    // 80D32894: addi    r3, r3, -10432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10432);

label_80D32898:
    ctx->pc = 0x80D32898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32898: lwz     r3, 0(r3)
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
label_80D3289C:
    ctx->pc = 0x80D3289Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3289Cu)) return;
    // 80D3289C: cmplwi  r3, 0x0000
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

label_80D328A0:
    ctx->pc = 0x80D328A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328A0u)) return;
    // 80D328A0: bc    12, 2, 0x80D328B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D328B8;
        }
    }

label_80D328A4:
    ctx->pc = 0x80D328A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D328A4: bl      0x8050F9E0
    {
            ctx->lr = 0x80D328A8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D328A8:
    ctx->pc = 0x80D328A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D328A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D328AC:
    ctx->pc = 0x80D328ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328ACu)) return;
    // 80D328AC: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D328B0:
    ctx->pc = 0x80D328B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328B0u)) return;
    // 80D328B0: addi    r3, r3, -10432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10432);

label_80D328B4:
    ctx->pc = 0x80D328B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D328B4: stw     r0, 0(r3)
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
label_80D328B8:
    ctx->pc = 0x80D328B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D328B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D328BC:
    ctx->pc = 0x80D328BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328BCu)) return;
    // 80D328BC: bl      0x8045EC10
    {
            ctx->lr = 0x80D328C0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D328C0:
    ctx->pc = 0x80D328C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D328C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D328C4:
    ctx->pc = 0x80D328C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328C4u)) return;
    // 80D328C4: bl      0x8045ED54
    {
            ctx->lr = 0x80D328C8u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D328C8:
    ctx->pc = 0x80D328C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D328C8: bl      0x8045DE34
    {
            ctx->lr = 0x80D328CCu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D328CC:
    ctx->pc = 0x80D328CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D328CC: bl      0x80460A80
    {
            ctx->lr = 0x80D328D0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D328D0:
    ctx->pc = 0x80D328D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D328D0: lwz     r31, 12(r1)
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
label_80D328D4:
    ctx->pc = 0x80D328D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D328D4: lwz     r0, 20(r1)
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
label_80D328D8:
    ctx->pc = 0x80D328D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D328D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D328D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D328DC:
    ctx->pc = 0x80D328DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328DCu)) return;
    // 80D328DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D328E0:
    ctx->pc = 0x80D328E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328E0u)) return;
    // 80D328E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

label_80D328E4:
    ctx->pc = 0x80D328E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D328E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D328E4: stwu     r1, -16(r1)
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
label_80D328E8:
    ctx->pc = 0x80D328E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D328E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D328EC:
    ctx->pc = 0x80D328ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D328EC: stw     r0, 20(r1)
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
label_80D328F0:
    ctx->pc = 0x80D328F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D328F0: stw     r31, 12(r1)
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
label_80D328F4:
    ctx->pc = 0x80D328F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D328F4: lwz     r4, 32(r3)
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
label_80D328F8:
    ctx->pc = 0x80D328F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D328F8: lwz     r31, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D328FC:
    ctx->pc = 0x80D328FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D328FCu)) return;
    // 80D328FC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D32900:
    ctx->pc = 0x80D32900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32900u)) return;
    // 80D32900: bl      0x8047EB28
    {
            ctx->lr = 0x80D32904u;
            ctx->pc = 0x8047EB28u;
            return;
    }

label_80D32904:
    ctx->pc = 0x80D32904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32904: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D32908:
    ctx->pc = 0x80D32908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32908u)) return;
    // 80D32908: bl      0x8047EA34
    {
            ctx->lr = 0x80D3290Cu;
            ctx->pc = 0x8047EA34u;
            return;
    }

label_80D3290C:
    ctx->pc = 0x80D3290Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3290Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3290C: lwz     r31, 12(r1)
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
label_80D32910:
    ctx->pc = 0x80D32910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32910: lwz     r0, 20(r1)
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
label_80D32914:
    ctx->pc = 0x80D32914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D32914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32914: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32918:
    ctx->pc = 0x80D32918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32918u)) return;
    // 80D32918: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D3291C:
    ctx->pc = 0x80D3291Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3291Cu)) return;
    // 80D3291C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

label_80D32920:
    ctx->pc = 0x80D32920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32920: lwz     r3, 32(r3)
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
label_80D32924:
    ctx->pc = 0x80D32924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32924: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32928:
    ctx->pc = 0x80D32928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32928: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3292C:
    ctx->pc = 0x80D3292Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3292Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3292C: lwz     r3, 32(r5)
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
label_80D32930:
    ctx->pc = 0x80D32930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32930: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D32930u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80D32934:
    ctx->pc = 0x80D32934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32934: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32934u)) return;
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
label_80D32938:
    ctx->pc = 0x80D32938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32938: lwz     r3, 32(r5)
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
label_80D3293C:
    ctx->pc = 0x80D3293Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3293Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3293C: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3293Cu)) return;
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
label_80D32940:
    ctx->pc = 0x80D32940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32940: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32940u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32944:
    ctx->pc = 0x80D32944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32944u)) return;
    // 80D32944: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

label_80D32948:
    ctx->pc = 0x80D32948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D32948: stwu     r1, -32(r1)
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
label_80D3294C:
    ctx->pc = 0x80D3294Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3294Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D3294C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32950:
    ctx->pc = 0x80D32950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D32950: stw     r0, 36(r1)
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
label_80D32954:
    ctx->pc = 0x80D32954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D32954: stw     r31, 28(r1)
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
label_80D32958:
    ctx->pc = 0x80D32958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32958: stw     r30, 24(r1)
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
label_80D3295C:
    ctx->pc = 0x80D3295Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3295Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3295C: stw     r29, 20(r1)
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
label_80D32960:
    ctx->pc = 0x80D32960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32960u)) return;
    // 80D32960: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32964:
    ctx->pc = 0x80D32964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32964u)) return;
    // 80D32964: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D32968:
    ctx->pc = 0x80D32968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32968u)) return;
    // 80D32968: addi    r0, r3, 10528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10528);

label_80D3296C:
    ctx->pc = 0x80D3296Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3296Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3296C: stw     r0, 16(r31)
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
label_80D32970:
    ctx->pc = 0x80D32970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32970u)) return;
    // 80D32970: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D32974:
    ctx->pc = 0x80D32974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32974u)) return;
    // 80D32974: addi    r0, r3, 10468
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10468);

label_80D32978:
    ctx->pc = 0x80D32978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32978: stw     r0, 24(r31)
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
label_80D3297C:
    ctx->pc = 0x80D3297Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3297Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3297C: lwz     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32980:
    ctx->pc = 0x80D32980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32980u)) return;
    // 80D32980: bl      0x8047EA80
    {
            ctx->lr = 0x80D32984u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80D32984:
    ctx->pc = 0x80D32984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D32984: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32988:
    ctx->pc = 0x80D32988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32988: stw     r29, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3298C:
    ctx->pc = 0x80D3298Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3298Cu)) return;
    // 80D3298C: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32990:
    ctx->pc = 0x80D32990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32990u)) return;
    // 80D32990: addi    r3, r3, -10516
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10516);

label_80D32994:
    ctx->pc = 0x80D32994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32994: lwz     r0, 0(r3)
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
label_80D32998:
    ctx->pc = 0x80D32998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32998: stw     r0, 0(r29)
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
label_80D3299C:
    ctx->pc = 0x80D3299Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3299Cu)) return;
    // 80D3299C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D329A0:
    ctx->pc = 0x80D329A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329A0u)) return;
    // 80D329A0: bl      0x80D32920
    {
            ctx->lr = 0x80D329A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D32920u;
                return;
            }
            goto label_80D32920;
    }

label_80D329A4:
    ctx->pc = 0x80D329A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D329A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D329A4: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D329A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80D329A8:
    ctx->pc = 0x80D329A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D329A8: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D329A8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329AC:
    ctx->pc = 0x80D329ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329ACu)) return;
    // 80D329AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D329B0:
    ctx->pc = 0x80D329B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D329B0: stw     r0, 20(r29)
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
label_80D329B4:
    ctx->pc = 0x80D329B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D329B4: stw     r0, 24(r29)
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
label_80D329B8:
    ctx->pc = 0x80D329B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D329B8: stw     r0, 28(r29)
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
label_80D329BC:
    ctx->pc = 0x80D329BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329BCu)) return;
    // 80D329BC: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D329C0:
    ctx->pc = 0x80D329C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329C0u)) return;
    // 80D329C0: addi    r3, r3, -17048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17048);

label_80D329C4:
    ctx->pc = 0x80D329C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D329C4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D329C4u)) return;
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
label_80D329C8:
    ctx->pc = 0x80D329C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D329C8: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D329C8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329CC:
    ctx->pc = 0x80D329CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D329CC: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D329CCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329D0:
    ctx->pc = 0x80D329D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D329D0: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D329D0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329D4:
    ctx->pc = 0x80D329D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329D4u)) return;
    // 80D329D4: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D329D8:
    ctx->pc = 0x80D329D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329D8u)) return;
    // 80D329D8: addi    r3, r3, -10516
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10516);

label_80D329DC:
    ctx->pc = 0x80D329DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D329DC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329E0:
    ctx->pc = 0x80D329E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D329E0: stw     r0, 4(r29)
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
label_80D329E4:
    ctx->pc = 0x80D329E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D329E4: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329E8:
    ctx->pc = 0x80D329E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D329E8: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329EC:
    ctx->pc = 0x80D329ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D329EC: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329F0:
    ctx->pc = 0x80D329F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D329F0: stw     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D329F4:
    ctx->pc = 0x80D329F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329F4u)) return;
    // 80D329F4: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80D329F8:
    ctx->pc = 0x80D329F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329F8u)) return;
    // 80D329F8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80D329FC:
    ctx->pc = 0x80D329FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D329FCu)) return;
    // 80D329FC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D32A00:
    ctx->pc = 0x80D32A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A00u)) return;
    // 80D32A00: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D32A04:
    ctx->pc = 0x80D32A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A04u)) return;
    // 80D32A04: bl      0x8047EBFC
    {
            ctx->lr = 0x80D32A08u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80D32A08:
    ctx->pc = 0x80D32A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D32A08: lha     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A0C:
    ctx->pc = 0x80D32A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A0Cu)) return;
    // 80D32A0C: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80D32A10:
    ctx->pc = 0x80D32A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A10u)) return;
    // 80D32A10: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80D32A14:
    ctx->pc = 0x80D32A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D32A14: sth     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A18:
    ctx->pc = 0x80D32A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D32A18: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A1C:
    ctx->pc = 0x80D32A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A1Cu)) return;
    // 80D32A1C: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32A20:
    ctx->pc = 0x80D32A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A20u)) return;
    // 80D32A20: addi    r3, r3, -17044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17044);

label_80D32A24:
    ctx->pc = 0x80D32A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D32A24: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D32A24u)) return;
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
label_80D32A28:
    ctx->pc = 0x80D32A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D32A28: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32A28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A2C:
    ctx->pc = 0x80D32A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D32A2C: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32A2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A30:
    ctx->pc = 0x80D32A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D32A30: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32A30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A34:
    ctx->pc = 0x80D32A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A34u)) return;
    // 80D32A34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D32A38:
    ctx->pc = 0x80D32A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32A38: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A3C:
    ctx->pc = 0x80D32A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32A3C: stw     r0, 8(r4)
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
label_80D32A40:
    ctx->pc = 0x80D32A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32A40: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A44:
    ctx->pc = 0x80D32A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32A44: lwz     r31, 28(r1)
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
label_80D32A48:
    ctx->pc = 0x80D32A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32A48: lwz     r30, 24(r1)
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
label_80D32A4C:
    ctx->pc = 0x80D32A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32A4C: lwz     r29, 20(r1)
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
label_80D32A50:
    ctx->pc = 0x80D32A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32A50: lwz     r0, 36(r1)
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
label_80D32A54:
    ctx->pc = 0x80D32A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D32A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32A54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A58:
    ctx->pc = 0x80D32A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A58u)) return;
    // 80D32A58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D32A5C:
    ctx->pc = 0x80D32A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A5Cu)) return;
    // 80D32A5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

label_80D32A60:
    ctx->pc = 0x80D32A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D32A60: stwu     r1, -32(r1)
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
label_80D32A64:
    ctx->pc = 0x80D32A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32A64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A68:
    ctx->pc = 0x80D32A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32A68: stw     r0, 36(r1)
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
label_80D32A6C:
    ctx->pc = 0x80D32A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32A6C: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D32A6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A70:
    ctx->pc = 0x80D32A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32A70: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A74:
    ctx->pc = 0x80D32A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A74u)) return;
    // 80D32A74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32A78:
    ctx->pc = 0x80D32A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A78u)) return;
    // 80D32A78: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D32A78u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80D32A7C:
    ctx->pc = 0x80D32A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A7Cu)) return;
    // 80D32A7C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D32A80:
    ctx->pc = 0x80D32A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A80u)) return;
    // 80D32A80: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80D32A84:
    ctx->pc = 0x80D32A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A84u)) return;
    // 80D32A84: lis     r5, -32557
    ctx->gpr[5] = ((u32)(s32)(-32557) << 16);

label_80D32A88:
    ctx->pc = 0x80D32A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A88u)) return;
    // 80D32A88: addi    r5, r5, 10568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10568);

label_80D32A8C:
    ctx->pc = 0x80D32A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A8Cu)) return;
    // 80D32A8C: bl      0x8050FD60
    {
            ctx->lr = 0x80D32A90u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D32A90:
    ctx->pc = 0x80D32A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32A90: lwz     r4, 32(r3)
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
label_80D32A94:
    ctx->pc = 0x80D32A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32A94: stfs     f31, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32A94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32A98:
    ctx->pc = 0x80D32A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32A98: lwz     r4, 32(r3)
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
label_80D32A9C:
    ctx->pc = 0x80D32A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32A9C: stw     r31, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32AA0:
    ctx->pc = 0x80D32AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32AA0: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D32AA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32AA4:
    ctx->pc = 0x80D32AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32AA4: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32AA8:
    ctx->pc = 0x80D32AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32AA8: lwz     r0, 36(r1)
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
label_80D32AAC:
    ctx->pc = 0x80D32AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D32AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32AAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32AB0:
    ctx->pc = 0x80D32AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AB0u)) return;
    // 80D32AB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D32AB4:
    ctx->pc = 0x80D32AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AB4u)) return;
    // 80D32AB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

label_80D32AB8:
    ctx->pc = 0x80D32AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32AB8: lwz     r3, 32(r3)
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
label_80D32ABC:
    ctx->pc = 0x80D32ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32ABC: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32AC0:
    ctx->pc = 0x80D32AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32AC0: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32AC4:
    ctx->pc = 0x80D32AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32AC4: lwz     r3, 32(r5)
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
label_80D32AC8:
    ctx->pc = 0x80D32AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32AC8: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D32AC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80D32ACC:
    ctx->pc = 0x80D32ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32ACC: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32ACCu)) return;
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
label_80D32AD0:
    ctx->pc = 0x80D32AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32AD0: lwz     r3, 32(r5)
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
label_80D32AD4:
    ctx->pc = 0x80D32AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32AD4: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D32AD4u)) return;
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
label_80D32AD8:
    ctx->pc = 0x80D32AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32AD8: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32AD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32ADC:
    ctx->pc = 0x80D32ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32ADCu)) return;
    // 80D32ADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

label_80D32AE0:
    ctx->pc = 0x80D32AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D32AE0: stwu     r1, -32(r1)
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
label_80D32AE4:
    ctx->pc = 0x80D32AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D32AE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32AE8:
    ctx->pc = 0x80D32AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D32AE8: stw     r0, 36(r1)
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
label_80D32AEC:
    ctx->pc = 0x80D32AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D32AEC: stw     r31, 28(r1)
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
label_80D32AF0:
    ctx->pc = 0x80D32AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32AF0: stw     r30, 24(r1)
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
label_80D32AF4:
    ctx->pc = 0x80D32AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32AF4: stw     r29, 20(r1)
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
label_80D32AF8:
    ctx->pc = 0x80D32AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AF8u)) return;
    // 80D32AF8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32AFC:
    ctx->pc = 0x80D32AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32AFCu)) return;
    // 80D32AFC: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D32B00:
    ctx->pc = 0x80D32B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B00u)) return;
    // 80D32B00: addi    r0, r3, 10936
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10936);

label_80D32B04:
    ctx->pc = 0x80D32B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32B04: stw     r0, 16(r31)
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
label_80D32B08:
    ctx->pc = 0x80D32B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B08u)) return;
    // 80D32B08: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D32B0C:
    ctx->pc = 0x80D32B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B0Cu)) return;
    // 80D32B0C: addi    r0, r3, 10468
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10468);

label_80D32B10:
    ctx->pc = 0x80D32B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32B10: stw     r0, 24(r31)
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
label_80D32B14:
    ctx->pc = 0x80D32B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32B14: lwz     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B18:
    ctx->pc = 0x80D32B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B18u)) return;
    // 80D32B18: bl      0x8047EA80
    {
            ctx->lr = 0x80D32B1Cu;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80D32B1C:
    ctx->pc = 0x80D32B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D32B1C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32B20:
    ctx->pc = 0x80D32B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32B20: stw     r29, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B24:
    ctx->pc = 0x80D32B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B24u)) return;
    // 80D32B24: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32B28:
    ctx->pc = 0x80D32B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B28u)) return;
    // 80D32B28: addi    r3, r3, -10516
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10516);

label_80D32B2C:
    ctx->pc = 0x80D32B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32B2C: lwz     r0, 0(r3)
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
label_80D32B30:
    ctx->pc = 0x80D32B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32B30: stw     r0, 0(r29)
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
label_80D32B34:
    ctx->pc = 0x80D32B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B34u)) return;
    // 80D32B34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D32B38:
    ctx->pc = 0x80D32B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B38u)) return;
    // 80D32B38: bl      0x80D32AB8
    {
            ctx->lr = 0x80D32B3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D32AB8u;
                return;
            }
            goto label_80D32AB8;
    }

label_80D32B3C:
    ctx->pc = 0x80D32B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D32B3C: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D32B3Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80D32B40:
    ctx->pc = 0x80D32B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D32B40: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D32B40u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B44:
    ctx->pc = 0x80D32B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B44u)) return;
    // 80D32B44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D32B48:
    ctx->pc = 0x80D32B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D32B48: stw     r0, 20(r29)
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
label_80D32B4C:
    ctx->pc = 0x80D32B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D32B4C: stw     r0, 24(r29)
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
label_80D32B50:
    ctx->pc = 0x80D32B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D32B50: stw     r0, 28(r29)
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
label_80D32B54:
    ctx->pc = 0x80D32B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B54u)) return;
    // 80D32B54: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32B58:
    ctx->pc = 0x80D32B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B58u)) return;
    // 80D32B58: addi    r3, r3, -17048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17048);

label_80D32B5C:
    ctx->pc = 0x80D32B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D32B5C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D32B5Cu)) return;
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
label_80D32B60:
    ctx->pc = 0x80D32B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D32B60: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D32B60u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B64:
    ctx->pc = 0x80D32B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D32B64: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D32B64u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B68:
    ctx->pc = 0x80D32B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D32B68: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D32B68u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B6C:
    ctx->pc = 0x80D32B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B6Cu)) return;
    // 80D32B6C: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32B70:
    ctx->pc = 0x80D32B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B70u)) return;
    // 80D32B70: addi    r3, r3, -10516
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10516);

label_80D32B74:
    ctx->pc = 0x80D32B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32B74: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B78:
    ctx->pc = 0x80D32B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32B78: stw     r0, 4(r29)
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
label_80D32B7C:
    ctx->pc = 0x80D32B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32B7C: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B80:
    ctx->pc = 0x80D32B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32B80: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B84:
    ctx->pc = 0x80D32B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32B84: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B88:
    ctx->pc = 0x80D32B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32B88: stw     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32B8C:
    ctx->pc = 0x80D32B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B8Cu)) return;
    // 80D32B8C: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80D32B90:
    ctx->pc = 0x80D32B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B90u)) return;
    // 80D32B90: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80D32B94:
    ctx->pc = 0x80D32B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B94u)) return;
    // 80D32B94: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D32B98:
    ctx->pc = 0x80D32B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B98u)) return;
    // 80D32B98: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D32B9C:
    ctx->pc = 0x80D32B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32B9Cu)) return;
    // 80D32B9C: bl      0x8047EBFC
    {
            ctx->lr = 0x80D32BA0u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80D32BA0:
    ctx->pc = 0x80D32BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D32BA0: lha     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BA4:
    ctx->pc = 0x80D32BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BA4u)) return;
    // 80D32BA4: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80D32BA8:
    ctx->pc = 0x80D32BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BA8u)) return;
    // 80D32BA8: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80D32BAC:
    ctx->pc = 0x80D32BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D32BAC: sth     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BB0:
    ctx->pc = 0x80D32BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D32BB0: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BB4:
    ctx->pc = 0x80D32BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BB4u)) return;
    // 80D32BB4: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32BB8:
    ctx->pc = 0x80D32BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BB8u)) return;
    // 80D32BB8: addi    r3, r3, -17044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17044);

label_80D32BBC:
    ctx->pc = 0x80D32BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D32BBC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D32BBCu)) return;
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
label_80D32BC0:
    ctx->pc = 0x80D32BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D32BC0: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32BC0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BC4:
    ctx->pc = 0x80D32BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D32BC4: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32BC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BC8:
    ctx->pc = 0x80D32BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D32BC8: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32BC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BCC:
    ctx->pc = 0x80D32BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BCCu)) return;
    // 80D32BCC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D32BD0:
    ctx->pc = 0x80D32BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32BD0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BD4:
    ctx->pc = 0x80D32BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32BD4: stw     r0, 8(r4)
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
label_80D32BD8:
    ctx->pc = 0x80D32BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32BD8: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BDC:
    ctx->pc = 0x80D32BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32BDC: lwz     r31, 28(r1)
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
label_80D32BE0:
    ctx->pc = 0x80D32BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32BE0: lwz     r30, 24(r1)
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
label_80D32BE4:
    ctx->pc = 0x80D32BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32BE4: lwz     r29, 20(r1)
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
label_80D32BE8:
    ctx->pc = 0x80D32BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32BE8: lwz     r0, 36(r1)
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
label_80D32BEC:
    ctx->pc = 0x80D32BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D32BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32BEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32BF0:
    ctx->pc = 0x80D32BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BF0u)) return;
    // 80D32BF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D32BF4:
    ctx->pc = 0x80D32BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BF4u)) return;
    // 80D32BF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

label_80D32BF8:
    ctx->pc = 0x80D32BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D32BF8: stwu     r1, -32(r1)
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
label_80D32BFC:
    ctx->pc = 0x80D32BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32BFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C00:
    ctx->pc = 0x80D32C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32C00: stw     r0, 36(r1)
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
label_80D32C04:
    ctx->pc = 0x80D32C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32C04: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D32C04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C08:
    ctx->pc = 0x80D32C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32C08: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C0C:
    ctx->pc = 0x80D32C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C0Cu)) return;
    // 80D32C0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32C10:
    ctx->pc = 0x80D32C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C10u)) return;
    // 80D32C10: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D32C10u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80D32C14:
    ctx->pc = 0x80D32C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C14u)) return;
    // 80D32C14: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D32C18:
    ctx->pc = 0x80D32C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C18u)) return;
    // 80D32C18: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80D32C1C:
    ctx->pc = 0x80D32C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C1Cu)) return;
    // 80D32C1C: lis     r5, -32557
    ctx->gpr[5] = ((u32)(s32)(-32557) << 16);

label_80D32C20:
    ctx->pc = 0x80D32C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C20u)) return;
    // 80D32C20: addi    r5, r5, 10976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10976);

label_80D32C24:
    ctx->pc = 0x80D32C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C24u)) return;
    // 80D32C24: bl      0x8050FD60
    {
            ctx->lr = 0x80D32C28u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D32C28:
    ctx->pc = 0x80D32C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D32C28: lwz     r4, 32(r3)
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
label_80D32C2C:
    ctx->pc = 0x80D32C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D32C2C: stfs     f31, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32C2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C30:
    ctx->pc = 0x80D32C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D32C30: lwz     r4, 32(r3)
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
label_80D32C34:
    ctx->pc = 0x80D32C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32C34: stw     r31, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C38:
    ctx->pc = 0x80D32C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32C38: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D32C38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C3C:
    ctx->pc = 0x80D32C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D32C3C: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C40:
    ctx->pc = 0x80D32C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32C40: lwz     r0, 36(r1)
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
label_80D32C44:
    ctx->pc = 0x80D32C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D32C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32C44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C48:
    ctx->pc = 0x80D32C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C48u)) return;
    // 80D32C48: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D32C4C:
    ctx->pc = 0x80D32C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C4Cu)) return;
    // 80D32C4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D323E0;
        }
    }

    ctx->pc = 0x80D32C50u;
    return;
return_dispatch_80D323E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D3241Cu: goto label_80D3241C;
    case 0x80D32420u: goto label_80D32420;
    case 0x80D32424u: goto label_80D32424;
    case 0x80D32428u: goto label_80D32428;
    case 0x80D32468u: goto label_80D32468;
    case 0x80D32470u: goto label_80D32470;
    case 0x80D32478u: goto label_80D32478;
    case 0x80D324A0u: goto label_80D324A0;
    case 0x80D324A8u: goto label_80D324A8;
    case 0x80D324B8u: goto label_80D324B8;
    case 0x80D324C0u: goto label_80D324C0;
    case 0x80D324D0u: goto label_80D324D0;
    case 0x80D324E4u: goto label_80D324E4;
    case 0x80D32514u: goto label_80D32514;
    case 0x80D32544u: goto label_80D32544;
    case 0x80D3254Cu: goto label_80D3254C;
    case 0x80D32574u: goto label_80D32574;
    case 0x80D3257Cu: goto label_80D3257C;
    case 0x80D3258Cu: goto label_80D3258C;
    case 0x80D32594u: goto label_80D32594;
    case 0x80D3259Cu: goto label_80D3259C;
    case 0x80D325C4u: goto label_80D325C4;
    case 0x80D325CCu: goto label_80D325CC;
    case 0x80D325D4u: goto label_80D325D4;
    case 0x80D325FCu: goto label_80D325FC;
    case 0x80D32614u: goto label_80D32614;
    case 0x80D3262Cu: goto label_80D3262C;
    case 0x80D32634u: goto label_80D32634;
    case 0x80D32640u: goto label_80D32640;
    case 0x80D32664u: goto label_80D32664;
    case 0x80D3266Cu: goto label_80D3266C;
    case 0x80D32694u: goto label_80D32694;
    case 0x80D3269Cu: goto label_80D3269C;
    case 0x80D326A0u: goto label_80D326A0;
    case 0x80D326A8u: goto label_80D326A8;
    case 0x80D326D0u: goto label_80D326D0;
    case 0x80D326D4u: goto label_80D326D4;
    case 0x80D326DCu: goto label_80D326DC;
    case 0x80D326E0u: goto label_80D326E0;
    case 0x80D326E4u: goto label_80D326E4;
    case 0x80D32714u: goto label_80D32714;
    case 0x80D32730u: goto label_80D32730;
    case 0x80D32760u: goto label_80D32760;
    case 0x80D3277Cu: goto label_80D3277C;
    case 0x80D32784u: goto label_80D32784;
    case 0x80D3278Cu: goto label_80D3278C;
    case 0x80D32798u: goto label_80D32798;
    case 0x80D327BCu: goto label_80D327BC;
    case 0x80D327C4u: goto label_80D327C4;
    case 0x80D327CCu: goto label_80D327CC;
    case 0x80D327D8u: goto label_80D327D8;
    case 0x80D327FCu: goto label_80D327FC;
    case 0x80D32804u: goto label_80D32804;
    case 0x80D3280Cu: goto label_80D3280C;
    case 0x80D32818u: goto label_80D32818;
    case 0x80D32820u: goto label_80D32820;
    case 0x80D32824u: goto label_80D32824;
    case 0x80D32854u: goto label_80D32854;
    case 0x80D32870u: goto label_80D32870;
    case 0x80D32874u: goto label_80D32874;
    case 0x80D3287Cu: goto label_80D3287C;
    case 0x80D32880u: goto label_80D32880;
    case 0x80D32884u: goto label_80D32884;
    case 0x80D3288Cu: goto label_80D3288C;
    case 0x80D328A8u: goto label_80D328A8;
    case 0x80D328C0u: goto label_80D328C0;
    case 0x80D328C8u: goto label_80D328C8;
    case 0x80D328CCu: goto label_80D328CC;
    case 0x80D328D0u: goto label_80D328D0;
    case 0x80D32904u: goto label_80D32904;
    case 0x80D3290Cu: goto label_80D3290C;
    case 0x80D32984u: goto label_80D32984;
    case 0x80D329A4u: goto label_80D329A4;
    case 0x80D32A08u: goto label_80D32A08;
    case 0x80D32A90u: goto label_80D32A90;
    case 0x80D32B1Cu: goto label_80D32B1C;
    case 0x80D32B3Cu: goto label_80D32B3C;
    case 0x80D32BA0u: goto label_80D32BA0;
    case 0x80D32C28u: goto label_80D32C28;
    default: return;
    }
}

