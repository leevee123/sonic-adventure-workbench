// DolRecomp output
#include "../generated.h"

void func_80D31200(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D31200[369] = {
        &&label_80D31200,
        &&label_80D31204,
        &&label_80D31208,
        &&label_80D3120C,
        &&label_80D31210,
        &&label_80D31214,
        &&label_80D31218,
        &&label_80D3121C,
        &&label_80D31220,
        &&label_80D31224,
        &&label_80D31228,
        &&label_80D3122C,
        &&label_80D31230,
        &&label_80D31234,
        &&label_80D31238,
        &&label_80D3123C,
        &&label_80D31240,
        &&label_80D31244,
        &&label_80D31248,
        &&label_80D3124C,
        &&label_80D31250,
        &&label_80D31254,
        &&label_80D31258,
        &&label_80D3125C,
        &&label_80D31260,
        &&label_80D31264,
        &&label_80D31268,
        &&label_80D3126C,
        &&label_80D31270,
        &&label_80D31274,
        &&label_80D31278,
        &&label_80D3127C,
        &&label_80D31280,
        &&label_80D31284,
        &&label_80D31288,
        &&label_80D3128C,
        &&label_80D31290,
        &&label_80D31294,
        &&label_80D31298,
        &&label_80D3129C,
        &&label_80D312A0,
        &&label_80D312A4,
        &&label_80D312A8,
        &&label_80D312AC,
        &&label_80D312B0,
        &&label_80D312B4,
        &&label_80D312B8,
        &&label_80D312BC,
        &&label_80D312C0,
        &&label_80D312C4,
        &&label_80D312C8,
        &&label_80D312CC,
        &&label_80D312D0,
        &&label_80D312D4,
        &&label_80D312D8,
        &&label_80D312DC,
        &&label_80D312E0,
        &&label_80D312E4,
        &&label_80D312E8,
        &&label_80D312EC,
        &&label_80D312F0,
        &&label_80D312F4,
        &&label_80D312F8,
        &&label_80D312FC,
        &&label_80D31300,
        &&label_80D31304,
        &&label_80D31308,
        &&label_80D3130C,
        &&label_80D31310,
        &&label_80D31314,
        &&label_80D31318,
        &&label_80D3131C,
        &&label_80D31320,
        &&label_80D31324,
        &&label_80D31328,
        &&label_80D3132C,
        &&label_80D31330,
        &&label_80D31334,
        &&label_80D31338,
        &&label_80D3133C,
        &&label_80D31340,
        &&label_80D31344,
        &&label_80D31348,
        &&label_80D3134C,
        &&label_80D31350,
        &&label_80D31354,
        &&label_80D31358,
        &&label_80D3135C,
        &&label_80D31360,
        &&label_80D31364,
        &&label_80D31368,
        &&label_80D3136C,
        &&label_80D31370,
        &&label_80D31374,
        &&label_80D31378,
        &&label_80D3137C,
        &&label_80D31380,
        &&label_80D31384,
        &&label_80D31388,
        &&label_80D3138C,
        &&label_80D31390,
        &&label_80D31394,
        &&label_80D31398,
        &&label_80D3139C,
        &&label_80D313A0,
        &&label_80D313A4,
        &&label_80D313A8,
        &&label_80D313AC,
        &&label_80D313B0,
        &&label_80D313B4,
        &&label_80D313B8,
        &&label_80D313BC,
        &&label_80D313C0,
        &&label_80D313C4,
        &&label_80D313C8,
        &&label_80D313CC,
        &&label_80D313D0,
        &&label_80D313D4,
        &&label_80D313D8,
        &&label_80D313DC,
        &&label_80D313E0,
        &&label_80D313E4,
        &&label_80D313E8,
        &&label_80D313EC,
        &&label_80D313F0,
        &&label_80D313F4,
        &&label_80D313F8,
        &&label_80D313FC,
        &&label_80D31400,
        &&label_80D31404,
        &&label_80D31408,
        &&label_80D3140C,
        &&label_80D31410,
        &&label_80D31414,
        &&label_80D31418,
        &&label_80D3141C,
        &&label_80D31420,
        &&label_80D31424,
        &&label_80D31428,
        &&label_80D3142C,
        &&label_80D31430,
        &&label_80D31434,
        &&label_80D31438,
        &&label_80D3143C,
        &&label_80D31440,
        &&label_80D31444,
        &&label_80D31448,
        &&label_80D3144C,
        &&label_80D31450,
        &&label_80D31454,
        &&label_80D31458,
        &&label_80D3145C,
        &&label_80D31460,
        &&label_80D31464,
        &&label_80D31468,
        &&label_80D3146C,
        &&label_80D31470,
        &&label_80D31474,
        &&label_80D31478,
        &&label_80D3147C,
        &&label_80D31480,
        &&label_80D31484,
        &&label_80D31488,
        &&label_80D3148C,
        &&label_80D31490,
        &&label_80D31494,
        &&label_80D31498,
        &&label_80D3149C,
        &&label_80D314A0,
        &&label_80D314A4,
        &&label_80D314A8,
        &&label_80D314AC,
        &&label_80D314B0,
        &&label_80D314B4,
        &&label_80D314B8,
        &&label_80D314BC,
        &&label_80D314C0,
        &&label_80D314C4,
        &&label_80D314C8,
        &&label_80D314CC,
        &&label_80D314D0,
        &&label_80D314D4,
        &&label_80D314D8,
        &&label_80D314DC,
        &&label_80D314E0,
        &&label_80D314E4,
        &&label_80D314E8,
        &&label_80D314EC,
        &&label_80D314F0,
        &&label_80D314F4,
        &&label_80D314F8,
        &&label_80D314FC,
        &&label_80D31500,
        &&label_80D31504,
        &&label_80D31508,
        &&label_80D3150C,
        &&label_80D31510,
        &&label_80D31514,
        &&label_80D31518,
        &&label_80D3151C,
        &&label_80D31520,
        &&label_80D31524,
        &&label_80D31528,
        &&label_80D3152C,
        &&label_80D31530,
        &&label_80D31534,
        &&label_80D31538,
        &&label_80D3153C,
        &&label_80D31540,
        &&label_80D31544,
        &&label_80D31548,
        &&label_80D3154C,
        &&label_80D31550,
        &&label_80D31554,
        &&label_80D31558,
        &&label_80D3155C,
        &&label_80D31560,
        &&label_80D31564,
        &&label_80D31568,
        &&label_80D3156C,
        &&label_80D31570,
        &&label_80D31574,
        &&label_80D31578,
        &&label_80D3157C,
        &&label_80D31580,
        &&label_80D31584,
        &&label_80D31588,
        &&label_80D3158C,
        &&label_80D31590,
        &&label_80D31594,
        &&label_80D31598,
        &&label_80D3159C,
        &&label_80D315A0,
        &&label_80D315A4,
        &&label_80D315A8,
        &&label_80D315AC,
        &&label_80D315B0,
        &&label_80D315B4,
        &&label_80D315B8,
        &&label_80D315BC,
        &&label_80D315C0,
        &&label_80D315C4,
        &&label_80D315C8,
        &&label_80D315CC,
        &&label_80D315D0,
        &&label_80D315D4,
        &&label_80D315D8,
        &&label_80D315DC,
        &&label_80D315E0,
        &&label_80D315E4,
        &&label_80D315E8,
        &&label_80D315EC,
        &&label_80D315F0,
        &&label_80D315F4,
        &&label_80D315F8,
        &&label_80D315FC,
        &&label_80D31600,
        &&label_80D31604,
        &&label_80D31608,
        &&label_80D3160C,
        &&label_80D31610,
        &&label_80D31614,
        &&label_80D31618,
        &&label_80D3161C,
        &&label_80D31620,
        &&label_80D31624,
        &&label_80D31628,
        &&label_80D3162C,
        &&label_80D31630,
        &&label_80D31634,
        &&label_80D31638,
        &&label_80D3163C,
        &&label_80D31640,
        &&label_80D31644,
        &&label_80D31648,
        &&label_80D3164C,
        &&label_80D31650,
        &&label_80D31654,
        &&label_80D31658,
        &&label_80D3165C,
        &&label_80D31660,
        &&label_80D31664,
        &&label_80D31668,
        &&label_80D3166C,
        &&label_80D31670,
        &&label_80D31674,
        &&label_80D31678,
        &&label_80D3167C,
        &&label_80D31680,
        &&label_80D31684,
        &&label_80D31688,
        &&label_80D3168C,
        &&label_80D31690,
        &&label_80D31694,
        &&label_80D31698,
        &&label_80D3169C,
        &&label_80D316A0,
        &&label_80D316A4,
        &&label_80D316A8,
        &&label_80D316AC,
        &&label_80D316B0,
        &&label_80D316B4,
        &&label_80D316B8,
        &&label_80D316BC,
        &&label_80D316C0,
        &&label_80D316C4,
        &&label_80D316C8,
        &&label_80D316CC,
        &&label_80D316D0,
        &&label_80D316D4,
        &&label_80D316D8,
        &&label_80D316DC,
        &&label_80D316E0,
        &&label_80D316E4,
        &&label_80D316E8,
        &&label_80D316EC,
        &&label_80D316F0,
        &&label_80D316F4,
        &&label_80D316F8,
        &&label_80D316FC,
        &&label_80D31700,
        &&label_80D31704,
        &&label_80D31708,
        &&label_80D3170C,
        &&label_80D31710,
        &&label_80D31714,
        &&label_80D31718,
        &&label_80D3171C,
        &&label_80D31720,
        &&label_80D31724,
        &&label_80D31728,
        &&label_80D3172C,
        &&label_80D31730,
        &&label_80D31734,
        &&label_80D31738,
        &&label_80D3173C,
        &&label_80D31740,
        &&label_80D31744,
        &&label_80D31748,
        &&label_80D3174C,
        &&label_80D31750,
        &&label_80D31754,
        &&label_80D31758,
        &&label_80D3175C,
        &&label_80D31760,
        &&label_80D31764,
        &&label_80D31768,
        &&label_80D3176C,
        &&label_80D31770,
        &&label_80D31774,
        &&label_80D31778,
        &&label_80D3177C,
        &&label_80D31780,
        &&label_80D31784,
        &&label_80D31788,
        &&label_80D3178C,
        &&label_80D31790,
        &&label_80D31794,
        &&label_80D31798,
        &&label_80D3179C,
        &&label_80D317A0,
        &&label_80D317A4,
        &&label_80D317A8,
        &&label_80D317AC,
        &&label_80D317B0,
        &&label_80D317B4,
        &&label_80D317B8,
        &&label_80D317BC,
        &&label_80D317C0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D31200u && pc <= 0x80D317C0u && ((pc - 0x80D31200u) & 3u) == 0u)
            goto *pc_table_80D31200[(pc - 0x80D31200u) >> 2];
    }
    return;
label_80D31200:
    ctx->pc = 0x80D31200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31200: stwu     r1, -16(r1)
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
label_80D31204:
    ctx->pc = 0x80D31204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D31204: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D31208:
    ctx->pc = 0x80D31208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31208: stw     r0, 20(r1)
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
label_80D3120C:
    ctx->pc = 0x80D3120Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3120Cu)) return;
    // 80D3120C: cmpwi   r3, 2
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

label_80D31210:
    ctx->pc = 0x80D31210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31210u)) return;
    // 80D31210: bc    12, 2, 0x80D31798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D31798;
        }
    }

label_80D31214:
    ctx->pc = 0x80D31214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31214: bc    4, 0, 0x80D31228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31228;
        }
    }

label_80D31218:
    ctx->pc = 0x80D31218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31218: cmpwi   r3, 0
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

label_80D3121C:
    ctx->pc = 0x80D3121Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3121Cu)) return;
    // 80D3121C: bc    12, 2, 0x80D317B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D317B4;
        }
    }

label_80D31220:
    ctx->pc = 0x80D31220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31220: bc    4, 0, 0x80D31230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31230;
        }
    }

label_80D31224:
    ctx->pc = 0x80D31224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31224: b       0x80D317B4
    {
            goto label_80D317B4;
    }

label_80D31228:
    ctx->pc = 0x80D31228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31228: cmpwi   r3, 4
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

label_80D3122C:
    ctx->pc = 0x80D3122Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3122Cu)) return;
    // 80D3122C: b       0x80D317B4
    {
            goto label_80D317B4;
    }

label_80D31230:
    ctx->pc = 0x80D31230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31230: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31234:
    ctx->pc = 0x80D31234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31234u)) return;
    // 80D31234: bl      0x8045EC10
    {
            ctx->lr = 0x80D31238u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D31238:
    ctx->pc = 0x80D31238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31238: bl      0x8045DE7C
    {
            ctx->lr = 0x80D3123Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D3123C:
    ctx->pc = 0x80D3123Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3123Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3123C: bl      0x80460A60
    {
            ctx->lr = 0x80D31240u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D31240:
    ctx->pc = 0x80D31240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31240: bl      0x80460A24
    {
            ctx->lr = 0x80D31244u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D31244:
    ctx->pc = 0x80D31244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31244: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D31248:
    ctx->pc = 0x80D31248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31248u)) return;
    // 80D31248: bl      0x80406090
    {
            ctx->lr = 0x80D3124Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D3124C:
    ctx->pc = 0x80D3124Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3124Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80D3124C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31250:
    ctx->pc = 0x80D31250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31250u)) return;
    // 80D31250: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80D31254:
    ctx->pc = 0x80D31254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31254u)) return;
    // 80D31254: addi    r4, r4, -5088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5088);

label_80D31258:
    ctx->pc = 0x80D31258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31258u)) return;
    // 80D31258: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3125C:
    ctx->pc = 0x80D3125Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3125Cu)) return;
    // 80D3125C: addi    r5, r5, -1776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1776);

label_80D31260:
    ctx->pc = 0x80D31260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D31260: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31260u)) return;
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
label_80D31264:
    ctx->pc = 0x80D31264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31264u)) return;
    // 80D31264: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31268:
    ctx->pc = 0x80D31268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31268u)) return;
    // 80D31268: addi    r5, r5, -1772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1772);

label_80D3126C:
    ctx->pc = 0x80D3126Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3126Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3126C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3126Cu)) return;
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
label_80D31270:
    ctx->pc = 0x80D31270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31270u)) return;
    // 80D31270: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31274:
    ctx->pc = 0x80D31274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31274u)) return;
    // 80D31274: addi    r5, r5, -1768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1768);

label_80D31278:
    ctx->pc = 0x80D31278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D31278: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31278u)) return;
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
label_80D3127C:
    ctx->pc = 0x80D3127Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3127Cu)) return;
    // 80D3127C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D31280:
    ctx->pc = 0x80D31280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31280u)) return;
    // 80D31280: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D31284:
    ctx->pc = 0x80D31284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31284u)) return;
    // 80D31284: addi    r6, r6, -1878
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1878);

label_80D31288:
    ctx->pc = 0x80D31288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31288u)) return;
    // 80D31288: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D3128C:
    ctx->pc = 0x80D3128Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3128Cu)) return;
    // 80D3128C: bl      0x8045ED84
    {
            ctx->lr = 0x80D31290u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D31290:
    ctx->pc = 0x80D31290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31290: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31294:
    ctx->pc = 0x80D31294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31294u)) return;
    // 80D31294: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31298u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31298:
    ctx->pc = 0x80D31298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31298: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3129C:
    ctx->pc = 0x80D3129Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3129Cu)) return;
    // 80D3129C: bl      0x8045F220
    {
            ctx->lr = 0x80D312A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D312A0:
    ctx->pc = 0x80D312A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D312A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D312A0: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D312A4:
    ctx->pc = 0x80D312A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312A4u)) return;
    // 80D312A4: addi    r4, r4, -1764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1764);

label_80D312A8:
    ctx->pc = 0x80D312A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D312A8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D312A8u)) return;
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
label_80D312AC:
    ctx->pc = 0x80D312ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312ACu)) return;
    // 80D312AC: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D312B0:
    ctx->pc = 0x80D312B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312B0u)) return;
    // 80D312B0: addi    r4, r4, -1772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1772);

label_80D312B4:
    ctx->pc = 0x80D312B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D312B4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D312B4u)) return;
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
label_80D312B8:
    ctx->pc = 0x80D312B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312B8u)) return;
    // 80D312B8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D312BC:
    ctx->pc = 0x80D312BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312BCu)) return;
    // 80D312BC: addi    r4, r4, -1760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1760);

label_80D312C0:
    ctx->pc = 0x80D312C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D312C0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D312C0u)) return;
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
label_80D312C4:
    ctx->pc = 0x80D312C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312C4u)) return;
    // 80D312C4: bl      0x8045EF2C
    {
            ctx->lr = 0x80D312C8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D312C8:
    ctx->pc = 0x80D312C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D312C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D312C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D312CC:
    ctx->pc = 0x80D312CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312CCu)) return;
    // 80D312CC: bl      0x8045F220
    {
            ctx->lr = 0x80D312D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D312D0:
    ctx->pc = 0x80D312D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D312D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D312D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D312D4:
    ctx->pc = 0x80D312D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312D4u)) return;
    // 80D312D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D312D8:
    ctx->pc = 0x80D312D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312D8u)) return;
    // 80D312D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D312DC:
    ctx->pc = 0x80D312DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312DCu)) return;
    // 80D312DC: bl      0x8045EEA8
    {
            ctx->lr = 0x80D312E0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D312E0:
    ctx->pc = 0x80D312E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D312E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D312E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D312E4:
    ctx->pc = 0x80D312E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312E4u)) return;
    // 80D312E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D312E8:
    ctx->pc = 0x80D312E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312E8u)) return;
    // 80D312E8: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D312EC:
    ctx->pc = 0x80D312ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312ECu)) return;
    // 80D312EC: addi    r5, r5, -1756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1756);

label_80D312F0:
    ctx->pc = 0x80D312F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D312F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D312F0u)) return;
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
label_80D312F4:
    ctx->pc = 0x80D312F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312F4u)) return;
    // 80D312F4: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D312F8:
    ctx->pc = 0x80D312F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312F8u)) return;
    // 80D312F8: addi    r5, r5, -1752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1752);

label_80D312FC:
    ctx->pc = 0x80D312FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D312FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D312FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D312FCu)) return;
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
label_80D31300:
    ctx->pc = 0x80D31300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31300u)) return;
    // 80D31300: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31304:
    ctx->pc = 0x80D31304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31304u)) return;
    // 80D31304: addi    r5, r5, -1748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1748);

label_80D31308:
    ctx->pc = 0x80D31308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31308: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31308u)) return;
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
label_80D3130C:
    ctx->pc = 0x80D3130Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3130Cu)) return;
    // 80D3130C: bl      0x8045C750
    {
            ctx->lr = 0x80D31310u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31310:
    ctx->pc = 0x80D31310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D31310: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31314:
    ctx->pc = 0x80D31314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31314u)) return;
    // 80D31314: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31318:
    ctx->pc = 0x80D31318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31318u)) return;
    // 80D31318: li      r5, 2827
    ctx->gpr[5] = (u32)(s32)(2827);

label_80D3131C:
    ctx->pc = 0x80D3131Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3131Cu)) return;
    // 80D3131C: li      r6, 3982
    ctx->gpr[6] = (u32)(s32)(3982);

label_80D31320:
    ctx->pc = 0x80D31320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31320u)) return;
    // 80D31320: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D31324:
    ctx->pc = 0x80D31324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31324u)) return;
    // 80D31324: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31328u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31328:
    ctx->pc = 0x80D31328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31328: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3132C:
    ctx->pc = 0x80D3132Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3132Cu)) return;
    // 80D3132C: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80D31330:
    ctx->pc = 0x80D31330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31330u)) return;
    // 80D31330: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31334:
    ctx->pc = 0x80D31334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31334u)) return;
    // 80D31334: addi    r5, r5, -1744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1744);

label_80D31338:
    ctx->pc = 0x80D31338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31338: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31338u)) return;
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
label_80D3133C:
    ctx->pc = 0x80D3133Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3133Cu)) return;
    // 80D3133C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31340:
    ctx->pc = 0x80D31340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31340u)) return;
    // 80D31340: addi    r5, r5, -1740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1740);

label_80D31344:
    ctx->pc = 0x80D31344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31344: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31344u)) return;
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
label_80D31348:
    ctx->pc = 0x80D31348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31348u)) return;
    // 80D31348: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3134C:
    ctx->pc = 0x80D3134Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3134Cu)) return;
    // 80D3134C: addi    r5, r5, -1736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1736);

label_80D31350:
    ctx->pc = 0x80D31350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31350: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31350u)) return;
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
label_80D31354:
    ctx->pc = 0x80D31354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31354u)) return;
    // 80D31354: bl      0x8045C750
    {
            ctx->lr = 0x80D31358u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31358:
    ctx->pc = 0x80D31358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D31358: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3135C:
    ctx->pc = 0x80D3135Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3135Cu)) return;
    // 80D3135C: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D31360:
    ctx->pc = 0x80D31360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31360u)) return;
    // 80D31360: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80D31364:
    ctx->pc = 0x80D31364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31364u)) return;
    // 80D31364: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D31368:
    ctx->pc = 0x80D31368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31368u)) return;
    // 80D31368: addi    r6, r6, -7306
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7306);

label_80D3136C:
    ctx->pc = 0x80D3136Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3136Cu)) return;
    // 80D3136C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D31370:
    ctx->pc = 0x80D31370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31370u)) return;
    // 80D31370: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31374u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31374:
    ctx->pc = 0x80D31374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D31374: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31378:
    ctx->pc = 0x80D31378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31378u)) return;
    // 80D31378: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D3137C:
    ctx->pc = 0x80D3137Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3137Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3137C: lwz     r0, 0(r3)
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
label_80D31380:
    ctx->pc = 0x80D31380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31380u)) return;
    // 80D31380: cmpwi   r0, 0
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

label_80D31384:
    ctx->pc = 0x80D31384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31384u)) return;
    // 80D31384: bc    4, 2, 0x80D3139C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3139C;
        }
    }

label_80D31388:
    ctx->pc = 0x80D31388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31388: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3138C:
    ctx->pc = 0x80D3138Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3138Cu)) return;
    // 80D3138C: bl      0x8045F220
    {
            ctx->lr = 0x80D31390u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31390:
    ctx->pc = 0x80D31390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31390: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31394:
    ctx->pc = 0x80D31394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31394u)) return;
    // 80D31394: addi    r4, r4, -876
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-876);

label_80D31398:
    ctx->pc = 0x80D31398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31398u)) return;
    // 80D31398: bl      0x8045C060
    {
            ctx->lr = 0x80D3139Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D3139C:
    ctx->pc = 0x80D3139Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3139Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3139C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D313A0:
    ctx->pc = 0x80D313A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313A0u)) return;
    // 80D313A0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D313A4:
    ctx->pc = 0x80D313A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D313A4: lwz     r0, 0(r3)
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
label_80D313A8:
    ctx->pc = 0x80D313A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313A8u)) return;
    // 80D313A8: cmpwi   r0, 1
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

label_80D313AC:
    ctx->pc = 0x80D313ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313ACu)) return;
    // 80D313AC: bc    4, 2, 0x80D313C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D313C4;
        }
    }

label_80D313B0:
    ctx->pc = 0x80D313B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D313B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D313B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D313B4:
    ctx->pc = 0x80D313B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313B4u)) return;
    // 80D313B4: bl      0x8045F220
    {
            ctx->lr = 0x80D313B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D313B8:
    ctx->pc = 0x80D313B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D313B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D313B8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D313BC:
    ctx->pc = 0x80D313BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313BCu)) return;
    // 80D313BC: addi    r4, r4, -852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-852);

label_80D313C0:
    ctx->pc = 0x80D313C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313C0u)) return;
    // 80D313C0: bl      0x8045C060
    {
            ctx->lr = 0x80D313C4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D313C4:
    ctx->pc = 0x80D313C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D313C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D313C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D313C8:
    ctx->pc = 0x80D313C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313C8u)) return;
    // 80D313C8: bl      0x8045F220
    {
            ctx->lr = 0x80D313CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D313CC:
    ctx->pc = 0x80D313CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D313CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D313CC: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D313D0:
    ctx->pc = 0x80D313D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313D0u)) return;
    // 80D313D0: addi    r4, r4, -848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-848);

label_80D313D4:
    ctx->pc = 0x80D313D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313D4u)) return;
    // 80D313D4: bl      0x8045C060
    {
            ctx->lr = 0x80D313D8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D313D8:
    ctx->pc = 0x80D313D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D313D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D313D8: li      r3, 1513
    ctx->gpr[3] = (u32)(s32)(1513);

label_80D313DC:
    ctx->pc = 0x80D313DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313DCu)) return;
    // 80D313DC: bl      0x8045BFA0
    {
            ctx->lr = 0x80D313E0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D313E0:
    ctx->pc = 0x80D313E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D313E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D313E0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D313E4:
    ctx->pc = 0x80D313E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313E4u)) return;
    // 80D313E4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D313E8:
    ctx->pc = 0x80D313E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D313E8: lwz     r0, 0(r3)
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
label_80D313EC:
    ctx->pc = 0x80D313ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313ECu)) return;
    // 80D313EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D313F0:
    ctx->pc = 0x80D313F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313F0u)) return;
    // 80D313F0: lis     r3, -27330
    ctx->gpr[3] = ((u32)(s32)(-27330) << 16);

label_80D313F4:
    ctx->pc = 0x80D313F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313F4u)) return;
    // 80D313F4: addi    r3, r3, -904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-904);

label_80D313F8:
    ctx->pc = 0x80D313F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D313F8: lwzx    r3, r3, r0
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
label_80D313FC:
    ctx->pc = 0x80D313FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D313FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D313FC: lwz     r3, 0(r3)
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
label_80D31400:
    ctx->pc = 0x80D31400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31400u)) return;
    // 80D31400: bl      0x8045F6FC
    {
            ctx->lr = 0x80D31404u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D31404:
    ctx->pc = 0x80D31404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31404: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80D31408:
    ctx->pc = 0x80D31408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31408u)) return;
    // 80D31408: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3140Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3140C:
    ctx->pc = 0x80D3140Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3140Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3140C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31410:
    ctx->pc = 0x80D31410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31410u)) return;
    // 80D31410: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D31414:
    ctx->pc = 0x80D31414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31414: lwz     r0, 0(r3)
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
label_80D31418:
    ctx->pc = 0x80D31418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31418u)) return;
    // 80D31418: cmpwi   r0, 0
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

label_80D3141C:
    ctx->pc = 0x80D3141Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3141Cu)) return;
    // 80D3141C: bc    4, 2, 0x80D3142C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3142C;
        }
    }

label_80D31420:
    ctx->pc = 0x80D31420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31420: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31424:
    ctx->pc = 0x80D31424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31424u)) return;
    // 80D31424: bl      0x8045F220
    {
            ctx->lr = 0x80D31428u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31428:
    ctx->pc = 0x80D31428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31428: bl      0x8045C034
    {
            ctx->lr = 0x80D3142Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D3142C:
    ctx->pc = 0x80D3142Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3142Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3142C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31430:
    ctx->pc = 0x80D31430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31430u)) return;
    // 80D31430: bl      0x8045F220
    {
            ctx->lr = 0x80D31434u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31434:
    ctx->pc = 0x80D31434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31434: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31438:
    ctx->pc = 0x80D31438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31438u)) return;
    // 80D31438: addi    r4, r4, 20304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20304);

label_80D3143C:
    ctx->pc = 0x80D3143Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3143Cu)) return;
    // 80D3143C: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D31440:
    ctx->pc = 0x80D31440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31440u)) return;
    // 80D31440: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D31444:
    ctx->pc = 0x80D31444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31444u)) return;
    // 80D31444: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D31448:
    ctx->pc = 0x80D31448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31448u)) return;
    // 80D31448: addi    r6, r6, -1732
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1732);

label_80D3144C:
    ctx->pc = 0x80D3144Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3144Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3144C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D3144Cu)) return;
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
label_80D31450:
    ctx->pc = 0x80D31450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31450u)) return;
    // 80D31450: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D31454:
    ctx->pc = 0x80D31454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31454u)) return;
    // 80D31454: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D31458:
    ctx->pc = 0x80D31458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31458u)) return;
    // 80D31458: bl      0x8045EBE4
    {
            ctx->lr = 0x80D3145Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D3145C:
    ctx->pc = 0x80D3145Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3145Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3145C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D31460:
    ctx->pc = 0x80D31460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31460u)) return;
    // 80D31460: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31464u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31464:
    ctx->pc = 0x80D31464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31464: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31468:
    ctx->pc = 0x80D31468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31468u)) return;
    // 80D31468: bl      0x8045F220
    {
            ctx->lr = 0x80D3146Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3146C:
    ctx->pc = 0x80D3146Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3146Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3146C: bl      0x8045EB8C
    {
            ctx->lr = 0x80D31470u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D31470:
    ctx->pc = 0x80D31470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31470: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31474:
    ctx->pc = 0x80D31474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31474u)) return;
    // 80D31474: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31478:
    ctx->pc = 0x80D31478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31478u)) return;
    // 80D31478: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3147C:
    ctx->pc = 0x80D3147Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3147Cu)) return;
    // 80D3147C: addi    r5, r5, -1728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1728);

label_80D31480:
    ctx->pc = 0x80D31480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31480: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31480u)) return;
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
label_80D31484:
    ctx->pc = 0x80D31484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31484u)) return;
    // 80D31484: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31488:
    ctx->pc = 0x80D31488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31488u)) return;
    // 80D31488: addi    r5, r5, -1724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1724);

label_80D3148C:
    ctx->pc = 0x80D3148Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3148Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3148C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3148Cu)) return;
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
label_80D31490:
    ctx->pc = 0x80D31490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31490u)) return;
    // 80D31490: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31494:
    ctx->pc = 0x80D31494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31494u)) return;
    // 80D31494: addi    r5, r5, -1720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1720);

label_80D31498:
    ctx->pc = 0x80D31498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31498: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31498u)) return;
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
label_80D3149C:
    ctx->pc = 0x80D3149Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3149Cu)) return;
    // 80D3149C: bl      0x8045C750
    {
            ctx->lr = 0x80D314A0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D314A0:
    ctx->pc = 0x80D314A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D314A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D314A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D314A4:
    ctx->pc = 0x80D314A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314A4u)) return;
    // 80D314A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D314A8:
    ctx->pc = 0x80D314A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314A8u)) return;
    // 80D314A8: li      r5, 1421
    ctx->gpr[5] = (u32)(s32)(1421);

label_80D314AC:
    ctx->pc = 0x80D314ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314ACu)) return;
    // 80D314AC: li      r6, 28818
    ctx->gpr[6] = (u32)(s32)(28818);

label_80D314B0:
    ctx->pc = 0x80D314B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314B0u)) return;
    // 80D314B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D314B4:
    ctx->pc = 0x80D314B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314B4u)) return;
    // 80D314B4: bl      0x8045C7B4
    {
            ctx->lr = 0x80D314B8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D314B8:
    ctx->pc = 0x80D314B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D314B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D314B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D314BC:
    ctx->pc = 0x80D314BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314BCu)) return;
    // 80D314BC: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D314C0:
    ctx->pc = 0x80D314C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314C0u)) return;
    // 80D314C0: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D314C4:
    ctx->pc = 0x80D314C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314C4u)) return;
    // 80D314C4: addi    r5, r5, -1716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1716);

label_80D314C8:
    ctx->pc = 0x80D314C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D314C8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D314C8u)) return;
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
label_80D314CC:
    ctx->pc = 0x80D314CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314CCu)) return;
    // 80D314CC: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D314D0:
    ctx->pc = 0x80D314D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314D0u)) return;
    // 80D314D0: addi    r5, r5, -1712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1712);

label_80D314D4:
    ctx->pc = 0x80D314D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D314D4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D314D4u)) return;
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
label_80D314D8:
    ctx->pc = 0x80D314D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314D8u)) return;
    // 80D314D8: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D314DC:
    ctx->pc = 0x80D314DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314DCu)) return;
    // 80D314DC: addi    r5, r5, -1708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1708);

label_80D314E0:
    ctx->pc = 0x80D314E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D314E0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D314E0u)) return;
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
label_80D314E4:
    ctx->pc = 0x80D314E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314E4u)) return;
    // 80D314E4: bl      0x8045C750
    {
            ctx->lr = 0x80D314E8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D314E8:
    ctx->pc = 0x80D314E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D314E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D314E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D314EC:
    ctx->pc = 0x80D314ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314ECu)) return;
    // 80D314EC: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D314F0:
    ctx->pc = 0x80D314F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314F0u)) return;
    // 80D314F0: li      r5, 1421
    ctx->gpr[5] = (u32)(s32)(1421);

label_80D314F4:
    ctx->pc = 0x80D314F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314F4u)) return;
    // 80D314F4: li      r6, 29842
    ctx->gpr[6] = (u32)(s32)(29842);

label_80D314F8:
    ctx->pc = 0x80D314F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314F8u)) return;
    // 80D314F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D314FC:
    ctx->pc = 0x80D314FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D314FCu)) return;
    // 80D314FC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31500u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31500:
    ctx->pc = 0x80D31500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31500: li      r3, 1514
    ctx->gpr[3] = (u32)(s32)(1514);

label_80D31504:
    ctx->pc = 0x80D31504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31504u)) return;
    // 80D31504: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31508u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31508:
    ctx->pc = 0x80D31508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D31508: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D3150C:
    ctx->pc = 0x80D3150Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3150Cu)) return;
    // 80D3150C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D31510:
    ctx->pc = 0x80D31510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31510: lwz     r0, 0(r3)
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
label_80D31514:
    ctx->pc = 0x80D31514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31514u)) return;
    // 80D31514: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31518:
    ctx->pc = 0x80D31518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31518u)) return;
    // 80D31518: lis     r3, -27330
    ctx->gpr[3] = ((u32)(s32)(-27330) << 16);

label_80D3151C:
    ctx->pc = 0x80D3151Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3151Cu)) return;
    // 80D3151C: addi    r3, r3, -904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-904);

label_80D31520:
    ctx->pc = 0x80D31520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31520: lwzx    r3, r3, r0
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
label_80D31524:
    ctx->pc = 0x80D31524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31524: lwz     r3, 4(r3)
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
label_80D31528:
    ctx->pc = 0x80D31528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31528u)) return;
    // 80D31528: bl      0x8045F6FC
    {
            ctx->lr = 0x80D3152Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D3152C:
    ctx->pc = 0x80D3152Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3152Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3152C: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D31530:
    ctx->pc = 0x80D31530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31530u)) return;
    // 80D31530: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31534u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31534:
    ctx->pc = 0x80D31534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31534: bl      0x8045F32C
    {
            ctx->lr = 0x80D31538u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D31538:
    ctx->pc = 0x80D31538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31538: bl      0x8045F300
    {
            ctx->lr = 0x80D3153Cu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D3153C:
    ctx->pc = 0x80D3153Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3153Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D3153C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31540:
    ctx->pc = 0x80D31540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31540u)) return;
    // 80D31540: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31544:
    ctx->pc = 0x80D31544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31544u)) return;
    // 80D31544: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31548:
    ctx->pc = 0x80D31548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31548u)) return;
    // 80D31548: addi    r5, r5, -1704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1704);

label_80D3154C:
    ctx->pc = 0x80D3154Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3154Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3154C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3154Cu)) return;
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
label_80D31550:
    ctx->pc = 0x80D31550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31550u)) return;
    // 80D31550: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31554:
    ctx->pc = 0x80D31554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31554u)) return;
    // 80D31554: addi    r5, r5, -1700
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1700);

label_80D31558:
    ctx->pc = 0x80D31558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31558: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31558u)) return;
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
label_80D3155C:
    ctx->pc = 0x80D3155Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3155Cu)) return;
    // 80D3155C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31560:
    ctx->pc = 0x80D31560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31560u)) return;
    // 80D31560: addi    r5, r5, -1696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1696);

label_80D31564:
    ctx->pc = 0x80D31564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31564: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31564u)) return;
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
label_80D31568:
    ctx->pc = 0x80D31568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31568u)) return;
    // 80D31568: bl      0x8045C750
    {
            ctx->lr = 0x80D3156Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D3156C:
    ctx->pc = 0x80D3156Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3156Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3156C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31570:
    ctx->pc = 0x80D31570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31570u)) return;
    // 80D31570: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31574:
    ctx->pc = 0x80D31574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31574u)) return;
    // 80D31574: li      r5, 1771
    ctx->gpr[5] = (u32)(s32)(1771);

label_80D31578:
    ctx->pc = 0x80D31578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31578u)) return;
    // 80D31578: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D3157C:
    ctx->pc = 0x80D3157Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3157Cu)) return;
    // 80D3157C: addi    r6, r6, -3726
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3726);

label_80D31580:
    ctx->pc = 0x80D31580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31580u)) return;
    // 80D31580: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D31584:
    ctx->pc = 0x80D31584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31584u)) return;
    // 80D31584: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31588u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31588:
    ctx->pc = 0x80D31588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31588: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3158C:
    ctx->pc = 0x80D3158Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3158Cu)) return;
    // 80D3158C: li      r4, 210
    ctx->gpr[4] = (u32)(s32)(210);

label_80D31590:
    ctx->pc = 0x80D31590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31590u)) return;
    // 80D31590: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31594:
    ctx->pc = 0x80D31594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31594u)) return;
    // 80D31594: addi    r5, r5, -1756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1756);

label_80D31598:
    ctx->pc = 0x80D31598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31598: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31598u)) return;
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
label_80D3159C:
    ctx->pc = 0x80D3159Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3159Cu)) return;
    // 80D3159C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D315A0:
    ctx->pc = 0x80D315A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315A0u)) return;
    // 80D315A0: addi    r5, r5, -1752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1752);

label_80D315A4:
    ctx->pc = 0x80D315A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D315A4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D315A4u)) return;
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
label_80D315A8:
    ctx->pc = 0x80D315A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315A8u)) return;
    // 80D315A8: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D315AC:
    ctx->pc = 0x80D315ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315ACu)) return;
    // 80D315AC: addi    r5, r5, -1748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1748);

label_80D315B0:
    ctx->pc = 0x80D315B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D315B0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D315B0u)) return;
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
label_80D315B4:
    ctx->pc = 0x80D315B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315B4u)) return;
    // 80D315B4: bl      0x8045C750
    {
            ctx->lr = 0x80D315B8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D315B8:
    ctx->pc = 0x80D315B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D315B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D315B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D315BC:
    ctx->pc = 0x80D315BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315BCu)) return;
    // 80D315BC: li      r4, 210
    ctx->gpr[4] = (u32)(s32)(210);

label_80D315C0:
    ctx->pc = 0x80D315C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315C0u)) return;
    // 80D315C0: li      r5, 2827
    ctx->gpr[5] = (u32)(s32)(2827);

label_80D315C4:
    ctx->pc = 0x80D315C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315C4u)) return;
    // 80D315C4: li      r6, 3982
    ctx->gpr[6] = (u32)(s32)(3982);

label_80D315C8:
    ctx->pc = 0x80D315C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315C8u)) return;
    // 80D315C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D315CC:
    ctx->pc = 0x80D315CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315CCu)) return;
    // 80D315CC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D315D0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D315D0:
    ctx->pc = 0x80D315D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D315D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D315D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D315D4:
    ctx->pc = 0x80D315D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315D4u)) return;
    // 80D315D4: bl      0x8045F220
    {
            ctx->lr = 0x80D315D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D315D8:
    ctx->pc = 0x80D315D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D315D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D315D8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D315DC:
    ctx->pc = 0x80D315DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315DCu)) return;
    // 80D315DC: addi    r4, r4, -1764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1764);

label_80D315E0:
    ctx->pc = 0x80D315E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D315E0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D315E0u)) return;
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
label_80D315E4:
    ctx->pc = 0x80D315E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315E4u)) return;
    // 80D315E4: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D315E8:
    ctx->pc = 0x80D315E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315E8u)) return;
    // 80D315E8: addi    r4, r4, -1772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1772);

label_80D315EC:
    ctx->pc = 0x80D315ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D315EC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D315ECu)) return;
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
label_80D315F0:
    ctx->pc = 0x80D315F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315F0u)) return;
    // 80D315F0: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D315F4:
    ctx->pc = 0x80D315F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315F4u)) return;
    // 80D315F4: addi    r4, r4, -1692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1692);

label_80D315F8:
    ctx->pc = 0x80D315F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D315F8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D315F8u)) return;
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
label_80D315FC:
    ctx->pc = 0x80D315FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D315FCu)) return;
    // 80D315FC: bl      0x8045E70C
    {
            ctx->lr = 0x80D31600u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D31600:
    ctx->pc = 0x80D31600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31600: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31604:
    ctx->pc = 0x80D31604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31604u)) return;
    // 80D31604: bl      0x8045F220
    {
            ctx->lr = 0x80D31608u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31608:
    ctx->pc = 0x80D31608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31608: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D3160C:
    ctx->pc = 0x80D3160Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3160Cu)) return;
    // 80D3160C: addi    r4, r4, -840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-840);

label_80D31610:
    ctx->pc = 0x80D31610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31610u)) return;
    // 80D31610: bl      0x8045C060
    {
            ctx->lr = 0x80D31614u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31614:
    ctx->pc = 0x80D31614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31614: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31618:
    ctx->pc = 0x80D31618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31618u)) return;
    // 80D31618: bl      0x8045F220
    {
            ctx->lr = 0x80D3161Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3161C:
    ctx->pc = 0x80D3161Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3161Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3161C: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31620:
    ctx->pc = 0x80D31620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31620u)) return;
    // 80D31620: addi    r4, r4, -1776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1776);

label_80D31624:
    ctx->pc = 0x80D31624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31624: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31624u)) return;
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
label_80D31628:
    ctx->pc = 0x80D31628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31628u)) return;
    // 80D31628: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D3162C:
    ctx->pc = 0x80D3162Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3162Cu)) return;
    // 80D3162C: addi    r4, r4, -1772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1772);

label_80D31630:
    ctx->pc = 0x80D31630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31630: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31630u)) return;
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
label_80D31634:
    ctx->pc = 0x80D31634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31634u)) return;
    // 80D31634: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31638:
    ctx->pc = 0x80D31638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31638u)) return;
    // 80D31638: addi    r4, r4, -1768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1768);

label_80D3163C:
    ctx->pc = 0x80D3163Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3163Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3163C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3163Cu)) return;
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
label_80D31640:
    ctx->pc = 0x80D31640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31640u)) return;
    // 80D31640: bl      0x8045E70C
    {
            ctx->lr = 0x80D31644u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D31644:
    ctx->pc = 0x80D31644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31644: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D31648:
    ctx->pc = 0x80D31648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31648u)) return;
    // 80D31648: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3164Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3164C:
    ctx->pc = 0x80D3164Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3164Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3164C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31650:
    ctx->pc = 0x80D31650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31650u)) return;
    // 80D31650: bl      0x8045F220
    {
            ctx->lr = 0x80D31654u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31654:
    ctx->pc = 0x80D31654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31654: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31658:
    ctx->pc = 0x80D31658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31658u)) return;
    // 80D31658: addi    r4, r4, -836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-836);

label_80D3165C:
    ctx->pc = 0x80D3165Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3165Cu)) return;
    // 80D3165C: bl      0x8045C060
    {
            ctx->lr = 0x80D31660u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31660:
    ctx->pc = 0x80D31660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31664:
    ctx->pc = 0x80D31664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31664u)) return;
    // 80D31664: bl      0x8045F220
    {
            ctx->lr = 0x80D31668u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31668:
    ctx->pc = 0x80D31668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31668: bl      0x8045E760
    {
            ctx->lr = 0x80D3166Cu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D3166C:
    ctx->pc = 0x80D3166Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3166Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3166C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31670:
    ctx->pc = 0x80D31670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31670u)) return;
    // 80D31670: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D31674:
    ctx->pc = 0x80D31674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31674: lwz     r0, 0(r3)
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
label_80D31678:
    ctx->pc = 0x80D31678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31678u)) return;
    // 80D31678: cmpwi   r0, 0
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

label_80D3167C:
    ctx->pc = 0x80D3167Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3167Cu)) return;
    // 80D3167C: bc    4, 2, 0x80D31694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31694;
        }
    }

label_80D31680:
    ctx->pc = 0x80D31680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31680: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31684:
    ctx->pc = 0x80D31684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31684u)) return;
    // 80D31684: bl      0x8045F220
    {
            ctx->lr = 0x80D31688u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31688:
    ctx->pc = 0x80D31688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31688: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D3168C:
    ctx->pc = 0x80D3168Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3168Cu)) return;
    // 80D3168C: addi    r4, r4, -832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-832);

label_80D31690:
    ctx->pc = 0x80D31690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31690u)) return;
    // 80D31690: bl      0x8045C060
    {
            ctx->lr = 0x80D31694u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31694:
    ctx->pc = 0x80D31694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D31694: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31698:
    ctx->pc = 0x80D31698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31698u)) return;
    // 80D31698: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D3169C:
    ctx->pc = 0x80D3169Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3169Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3169C: lwz     r0, 0(r3)
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
label_80D316A0:
    ctx->pc = 0x80D316A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316A0u)) return;
    // 80D316A0: cmpwi   r0, 1
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

label_80D316A4:
    ctx->pc = 0x80D316A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316A4u)) return;
    // 80D316A4: bc    4, 2, 0x80D316BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D316BC;
        }
    }

label_80D316A8:
    ctx->pc = 0x80D316A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D316A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D316AC:
    ctx->pc = 0x80D316ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316ACu)) return;
    // 80D316AC: bl      0x8045F220
    {
            ctx->lr = 0x80D316B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D316B0:
    ctx->pc = 0x80D316B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D316B0: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D316B4:
    ctx->pc = 0x80D316B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316B4u)) return;
    // 80D316B4: addi    r4, r4, -820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-820);

label_80D316B8:
    ctx->pc = 0x80D316B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316B8u)) return;
    // 80D316B8: bl      0x8045C060
    {
            ctx->lr = 0x80D316BCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D316BC:
    ctx->pc = 0x80D316BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D316BC: li      r3, 1515
    ctx->gpr[3] = (u32)(s32)(1515);

label_80D316C0:
    ctx->pc = 0x80D316C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316C0u)) return;
    // 80D316C0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D316C4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D316C4:
    ctx->pc = 0x80D316C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D316C4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D316C8:
    ctx->pc = 0x80D316C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316C8u)) return;
    // 80D316C8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D316CC:
    ctx->pc = 0x80D316CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D316CC: lwz     r0, 0(r3)
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
label_80D316D0:
    ctx->pc = 0x80D316D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316D0u)) return;
    // 80D316D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D316D4:
    ctx->pc = 0x80D316D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316D4u)) return;
    // 80D316D4: lis     r3, -27330
    ctx->gpr[3] = ((u32)(s32)(-27330) << 16);

label_80D316D8:
    ctx->pc = 0x80D316D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316D8u)) return;
    // 80D316D8: addi    r3, r3, -904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-904);

label_80D316DC:
    ctx->pc = 0x80D316DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D316DC: lwzx    r3, r3, r0
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
label_80D316E0:
    ctx->pc = 0x80D316E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D316E0: lwz     r3, 8(r3)
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
label_80D316E4:
    ctx->pc = 0x80D316E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316E4u)) return;
    // 80D316E4: bl      0x8045F6FC
    {
            ctx->lr = 0x80D316E8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D316E8:
    ctx->pc = 0x80D316E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D316E8: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D316EC:
    ctx->pc = 0x80D316ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316ECu)) return;
    // 80D316EC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D316F0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D316F0:
    ctx->pc = 0x80D316F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D316F0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D316F4:
    ctx->pc = 0x80D316F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D316F4u)) return;
    // 80D316F4: bl      0x8045F220
    {
            ctx->lr = 0x80D316F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D316F8:
    ctx->pc = 0x80D316F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D316F8: bl      0x8045E760
    {
            ctx->lr = 0x80D316FCu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D316FC:
    ctx->pc = 0x80D316FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D316FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D316FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31700:
    ctx->pc = 0x80D31700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31700u)) return;
    // 80D31700: bl      0x8045F220
    {
            ctx->lr = 0x80D31704u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31704:
    ctx->pc = 0x80D31704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31704: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31708:
    ctx->pc = 0x80D31708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31708u)) return;
    // 80D31708: addi    r4, r4, -816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-816);

label_80D3170C:
    ctx->pc = 0x80D3170Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3170Cu)) return;
    // 80D3170C: bl      0x8045C060
    {
            ctx->lr = 0x80D31710u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31710:
    ctx->pc = 0x80D31710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31710: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D31714:
    ctx->pc = 0x80D31714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31714u)) return;
    // 80D31714: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31718u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31718:
    ctx->pc = 0x80D31718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31718: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3171C:
    ctx->pc = 0x80D3171Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3171Cu)) return;
    // 80D3171C: bl      0x8045F220
    {
            ctx->lr = 0x80D31720u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31720:
    ctx->pc = 0x80D31720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31720: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31724:
    ctx->pc = 0x80D31724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31724u)) return;
    // 80D31724: addi    r4, r4, 9916
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9916);

label_80D31728:
    ctx->pc = 0x80D31728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31728u)) return;
    // 80D31728: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D3172C:
    ctx->pc = 0x80D3172Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3172Cu)) return;
    // 80D3172C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D31730:
    ctx->pc = 0x80D31730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31730u)) return;
    // 80D31730: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D31734:
    ctx->pc = 0x80D31734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31734u)) return;
    // 80D31734: addi    r6, r6, -1688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1688);

label_80D31738:
    ctx->pc = 0x80D31738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D31738: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D31738u)) return;
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
label_80D3173C:
    ctx->pc = 0x80D3173Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3173Cu)) return;
    // 80D3173C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D31740:
    ctx->pc = 0x80D31740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31740u)) return;
    // 80D31740: li      r7, 20
    ctx->gpr[7] = (u32)(s32)(20);

label_80D31744:
    ctx->pc = 0x80D31744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31744u)) return;
    // 80D31744: bl      0x8045EBE4
    {
            ctx->lr = 0x80D31748u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D31748:
    ctx->pc = 0x80D31748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31748: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3174C:
    ctx->pc = 0x80D3174Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3174Cu)) return;
    // 80D3174C: bl      0x8045F220
    {
            ctx->lr = 0x80D31750u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31750:
    ctx->pc = 0x80D31750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31750: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D31754:
    ctx->pc = 0x80D31754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31754u)) return;
    // 80D31754: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D31758:
    ctx->pc = 0x80D31758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31758u)) return;
    // 80D31758: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D3175C:
    ctx->pc = 0x80D3175Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3175Cu)) return;
    // 80D3175C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D31760:
    ctx->pc = 0x80D31760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31760u)) return;
    // 80D31760: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D31764:
    ctx->pc = 0x80D31764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31764u)) return;
    // 80D31764: addi    r6, r6, -1732
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1732);

label_80D31768:
    ctx->pc = 0x80D31768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D31768: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D31768u)) return;
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
label_80D3176C:
    ctx->pc = 0x80D3176Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3176Cu)) return;
    // 80D3176C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D31770:
    ctx->pc = 0x80D31770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31770u)) return;
    // 80D31770: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80D31774:
    ctx->pc = 0x80D31774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31774u)) return;
    // 80D31774: bl      0x8045EBE4
    {
            ctx->lr = 0x80D31778u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D31778:
    ctx->pc = 0x80D31778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31778: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D3177C:
    ctx->pc = 0x80D3177Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3177Cu)) return;
    // 80D3177C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31780u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31780:
    ctx->pc = 0x80D31780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31780: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31784:
    ctx->pc = 0x80D31784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31784u)) return;
    // 80D31784: bl      0x8045F220
    {
            ctx->lr = 0x80D31788u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31788:
    ctx->pc = 0x80D31788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31788: bl      0x8045C034
    {
            ctx->lr = 0x80D3178Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D3178C:
    ctx->pc = 0x80D3178Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3178Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3178C: bl      0x8045F300
    {
            ctx->lr = 0x80D31790u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D31790:
    ctx->pc = 0x80D31790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31790: bl      0x8045BFF4
    {
            ctx->lr = 0x80D31794u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D31794:
    ctx->pc = 0x80D31794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31794: b       0x80D317B4
    {
            goto label_80D317B4;
    }

label_80D31798:
    ctx->pc = 0x80D31798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31798: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3179C:
    ctx->pc = 0x80D3179Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3179Cu)) return;
    // 80D3179C: bl      0x8045F220
    {
            ctx->lr = 0x80D317A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D317A0:
    ctx->pc = 0x80D317A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D317A0: bl      0x8045EFD8
    {
            ctx->lr = 0x80D317A4u;
            ctx->pc = 0x8045EFD8u;
            return;
    }

label_80D317A4:
    ctx->pc = 0x80D317A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D317A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D317A8:
    ctx->pc = 0x80D317A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317A8u)) return;
    // 80D317A8: bl      0x8045ED54
    {
            ctx->lr = 0x80D317ACu;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D317AC:
    ctx->pc = 0x80D317ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D317AC: bl      0x8045DE34
    {
            ctx->lr = 0x80D317B0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D317B0:
    ctx->pc = 0x80D317B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D317B0: bl      0x80460A80
    {
            ctx->lr = 0x80D317B4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D317B4:
    ctx->pc = 0x80D317B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D317B4: lwz     r0, 20(r1)
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
label_80D317B8:
    ctx->pc = 0x80D317B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D317B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D317B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D317BC:
    ctx->pc = 0x80D317BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317BCu)) return;
    // 80D317BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D317C0:
    ctx->pc = 0x80D317C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317C0u)) return;
    // 80D317C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D31200;
        }
    }

    ctx->pc = 0x80D317C4u;
    return;
return_dispatch_80D31200:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D31238u: goto label_80D31238;
    case 0x80D3123Cu: goto label_80D3123C;
    case 0x80D31240u: goto label_80D31240;
    case 0x80D31244u: goto label_80D31244;
    case 0x80D3124Cu: goto label_80D3124C;
    case 0x80D31290u: goto label_80D31290;
    case 0x80D31298u: goto label_80D31298;
    case 0x80D312A0u: goto label_80D312A0;
    case 0x80D312C8u: goto label_80D312C8;
    case 0x80D312D0u: goto label_80D312D0;
    case 0x80D312E0u: goto label_80D312E0;
    case 0x80D31310u: goto label_80D31310;
    case 0x80D31328u: goto label_80D31328;
    case 0x80D31358u: goto label_80D31358;
    case 0x80D31374u: goto label_80D31374;
    case 0x80D31390u: goto label_80D31390;
    case 0x80D3139Cu: goto label_80D3139C;
    case 0x80D313B8u: goto label_80D313B8;
    case 0x80D313C4u: goto label_80D313C4;
    case 0x80D313CCu: goto label_80D313CC;
    case 0x80D313D8u: goto label_80D313D8;
    case 0x80D313E0u: goto label_80D313E0;
    case 0x80D31404u: goto label_80D31404;
    case 0x80D3140Cu: goto label_80D3140C;
    case 0x80D31428u: goto label_80D31428;
    case 0x80D3142Cu: goto label_80D3142C;
    case 0x80D31434u: goto label_80D31434;
    case 0x80D3145Cu: goto label_80D3145C;
    case 0x80D31464u: goto label_80D31464;
    case 0x80D3146Cu: goto label_80D3146C;
    case 0x80D31470u: goto label_80D31470;
    case 0x80D314A0u: goto label_80D314A0;
    case 0x80D314B8u: goto label_80D314B8;
    case 0x80D314E8u: goto label_80D314E8;
    case 0x80D31500u: goto label_80D31500;
    case 0x80D31508u: goto label_80D31508;
    case 0x80D3152Cu: goto label_80D3152C;
    case 0x80D31534u: goto label_80D31534;
    case 0x80D31538u: goto label_80D31538;
    case 0x80D3153Cu: goto label_80D3153C;
    case 0x80D3156Cu: goto label_80D3156C;
    case 0x80D31588u: goto label_80D31588;
    case 0x80D315B8u: goto label_80D315B8;
    case 0x80D315D0u: goto label_80D315D0;
    case 0x80D315D8u: goto label_80D315D8;
    case 0x80D31600u: goto label_80D31600;
    case 0x80D31608u: goto label_80D31608;
    case 0x80D31614u: goto label_80D31614;
    case 0x80D3161Cu: goto label_80D3161C;
    case 0x80D31644u: goto label_80D31644;
    case 0x80D3164Cu: goto label_80D3164C;
    case 0x80D31654u: goto label_80D31654;
    case 0x80D31660u: goto label_80D31660;
    case 0x80D31668u: goto label_80D31668;
    case 0x80D3166Cu: goto label_80D3166C;
    case 0x80D31688u: goto label_80D31688;
    case 0x80D31694u: goto label_80D31694;
    case 0x80D316B0u: goto label_80D316B0;
    case 0x80D316BCu: goto label_80D316BC;
    case 0x80D316C4u: goto label_80D316C4;
    case 0x80D316E8u: goto label_80D316E8;
    case 0x80D316F0u: goto label_80D316F0;
    case 0x80D316F8u: goto label_80D316F8;
    case 0x80D316FCu: goto label_80D316FC;
    case 0x80D31704u: goto label_80D31704;
    case 0x80D31710u: goto label_80D31710;
    case 0x80D31718u: goto label_80D31718;
    case 0x80D31720u: goto label_80D31720;
    case 0x80D31748u: goto label_80D31748;
    case 0x80D31750u: goto label_80D31750;
    case 0x80D31778u: goto label_80D31778;
    case 0x80D31780u: goto label_80D31780;
    case 0x80D31788u: goto label_80D31788;
    case 0x80D3178Cu: goto label_80D3178C;
    case 0x80D31790u: goto label_80D31790;
    case 0x80D31794u: goto label_80D31794;
    case 0x80D317A0u: goto label_80D317A0;
    case 0x80D317A4u: goto label_80D317A4;
    case 0x80D317ACu: goto label_80D317AC;
    case 0x80D317B0u: goto label_80D317B0;
    case 0x80D317B4u: goto label_80D317B4;
    default: return;
    }
}

