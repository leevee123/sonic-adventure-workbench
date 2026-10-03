// DolRecomp output
#include "../generated.h"

void func_80C8F680(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C8F680[209] = {
        &&label_80C8F680,
        &&label_80C8F684,
        &&label_80C8F688,
        &&label_80C8F68C,
        &&label_80C8F690,
        &&label_80C8F694,
        &&label_80C8F698,
        &&label_80C8F69C,
        &&label_80C8F6A0,
        &&label_80C8F6A4,
        &&label_80C8F6A8,
        &&label_80C8F6AC,
        &&label_80C8F6B0,
        &&label_80C8F6B4,
        &&label_80C8F6B8,
        &&label_80C8F6BC,
        &&label_80C8F6C0,
        &&label_80C8F6C4,
        &&label_80C8F6C8,
        &&label_80C8F6CC,
        &&label_80C8F6D0,
        &&label_80C8F6D4,
        &&label_80C8F6D8,
        &&label_80C8F6DC,
        &&label_80C8F6E0,
        &&label_80C8F6E4,
        &&label_80C8F6E8,
        &&label_80C8F6EC,
        &&label_80C8F6F0,
        &&label_80C8F6F4,
        &&label_80C8F6F8,
        &&label_80C8F6FC,
        &&label_80C8F700,
        &&label_80C8F704,
        &&label_80C8F708,
        &&label_80C8F70C,
        &&label_80C8F710,
        &&label_80C8F714,
        &&label_80C8F718,
        &&label_80C8F71C,
        &&label_80C8F720,
        &&label_80C8F724,
        &&label_80C8F728,
        &&label_80C8F72C,
        &&label_80C8F730,
        &&label_80C8F734,
        &&label_80C8F738,
        &&label_80C8F73C,
        &&label_80C8F740,
        &&label_80C8F744,
        &&label_80C8F748,
        &&label_80C8F74C,
        &&label_80C8F750,
        &&label_80C8F754,
        &&label_80C8F758,
        &&label_80C8F75C,
        &&label_80C8F760,
        &&label_80C8F764,
        &&label_80C8F768,
        &&label_80C8F76C,
        &&label_80C8F770,
        &&label_80C8F774,
        &&label_80C8F778,
        &&label_80C8F77C,
        &&label_80C8F780,
        &&label_80C8F784,
        &&label_80C8F788,
        &&label_80C8F78C,
        &&label_80C8F790,
        &&label_80C8F794,
        &&label_80C8F798,
        &&label_80C8F79C,
        &&label_80C8F7A0,
        &&label_80C8F7A4,
        &&label_80C8F7A8,
        &&label_80C8F7AC,
        &&label_80C8F7B0,
        &&label_80C8F7B4,
        &&label_80C8F7B8,
        &&label_80C8F7BC,
        &&label_80C8F7C0,
        &&label_80C8F7C4,
        &&label_80C8F7C8,
        &&label_80C8F7CC,
        &&label_80C8F7D0,
        &&label_80C8F7D4,
        &&label_80C8F7D8,
        &&label_80C8F7DC,
        &&label_80C8F7E0,
        &&label_80C8F7E4,
        &&label_80C8F7E8,
        &&label_80C8F7EC,
        &&label_80C8F7F0,
        &&label_80C8F7F4,
        &&label_80C8F7F8,
        &&label_80C8F7FC,
        &&label_80C8F800,
        &&label_80C8F804,
        &&label_80C8F808,
        &&label_80C8F80C,
        &&label_80C8F810,
        &&label_80C8F814,
        &&label_80C8F818,
        &&label_80C8F81C,
        &&label_80C8F820,
        &&label_80C8F824,
        &&label_80C8F828,
        &&label_80C8F82C,
        &&label_80C8F830,
        &&label_80C8F834,
        &&label_80C8F838,
        &&label_80C8F83C,
        &&label_80C8F840,
        &&label_80C8F844,
        &&label_80C8F848,
        &&label_80C8F84C,
        &&label_80C8F850,
        &&label_80C8F854,
        &&label_80C8F858,
        &&label_80C8F85C,
        &&label_80C8F860,
        &&label_80C8F864,
        &&label_80C8F868,
        &&label_80C8F86C,
        &&label_80C8F870,
        &&label_80C8F874,
        &&label_80C8F878,
        &&label_80C8F87C,
        &&label_80C8F880,
        &&label_80C8F884,
        &&label_80C8F888,
        &&label_80C8F88C,
        &&label_80C8F890,
        &&label_80C8F894,
        &&label_80C8F898,
        &&label_80C8F89C,
        &&label_80C8F8A0,
        &&label_80C8F8A4,
        &&label_80C8F8A8,
        &&label_80C8F8AC,
        &&label_80C8F8B0,
        &&label_80C8F8B4,
        &&label_80C8F8B8,
        &&label_80C8F8BC,
        &&label_80C8F8C0,
        &&label_80C8F8C4,
        &&label_80C8F8C8,
        &&label_80C8F8CC,
        &&label_80C8F8D0,
        &&label_80C8F8D4,
        &&label_80C8F8D8,
        &&label_80C8F8DC,
        &&label_80C8F8E0,
        &&label_80C8F8E4,
        &&label_80C8F8E8,
        &&label_80C8F8EC,
        &&label_80C8F8F0,
        &&label_80C8F8F4,
        &&label_80C8F8F8,
        &&label_80C8F8FC,
        &&label_80C8F900,
        &&label_80C8F904,
        &&label_80C8F908,
        &&label_80C8F90C,
        &&label_80C8F910,
        &&label_80C8F914,
        &&label_80C8F918,
        &&label_80C8F91C,
        &&label_80C8F920,
        &&label_80C8F924,
        &&label_80C8F928,
        &&label_80C8F92C,
        &&label_80C8F930,
        &&label_80C8F934,
        &&label_80C8F938,
        &&label_80C8F93C,
        &&label_80C8F940,
        &&label_80C8F944,
        &&label_80C8F948,
        &&label_80C8F94C,
        &&label_80C8F950,
        &&label_80C8F954,
        &&label_80C8F958,
        &&label_80C8F95C,
        &&label_80C8F960,
        &&label_80C8F964,
        &&label_80C8F968,
        &&label_80C8F96C,
        &&label_80C8F970,
        &&label_80C8F974,
        &&label_80C8F978,
        &&label_80C8F97C,
        &&label_80C8F980,
        &&label_80C8F984,
        &&label_80C8F988,
        &&label_80C8F98C,
        &&label_80C8F990,
        &&label_80C8F994,
        &&label_80C8F998,
        &&label_80C8F99C,
        &&label_80C8F9A0,
        &&label_80C8F9A4,
        &&label_80C8F9A8,
        &&label_80C8F9AC,
        &&label_80C8F9B0,
        &&label_80C8F9B4,
        &&label_80C8F9B8,
        &&label_80C8F9BC,
        &&label_80C8F9C0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C8F680u && pc <= 0x80C8F9C0u && ((pc - 0x80C8F680u) & 3u) == 0u)
            goto *pc_table_80C8F680[(pc - 0x80C8F680u) >> 2];
    }
    return;
label_80C8F680:
    ctx->pc = 0x80C8F680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F680: stwu     r1, -16(r1)
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
label_80C8F684:
    ctx->pc = 0x80C8F684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F684: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F688:
    ctx->pc = 0x80C8F688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F688: stw     r0, 20(r1)
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
label_80C8F68C:
    ctx->pc = 0x80C8F68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F68Cu)) return;
    // 80C8F68C: cmpwi   r3, 2
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

label_80C8F690:
    ctx->pc = 0x80C8F690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F690u)) return;
    // 80C8F690: bc    12, 2, 0x80C8F9A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8F9A0;
        }
    }

label_80C8F694:
    ctx->pc = 0x80C8F694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F694: bc    4, 0, 0x80C8F6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8F6A8;
        }
    }

label_80C8F698:
    ctx->pc = 0x80C8F698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F698: cmpwi   r3, 0
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

label_80C8F69C:
    ctx->pc = 0x80C8F69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F69Cu)) return;
    // 80C8F69C: bc    12, 2, 0x80C8F9B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8F9B4;
        }
    }

label_80C8F6A0:
    ctx->pc = 0x80C8F6A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F6A0: bc    4, 0, 0x80C8F6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8F6B0;
        }
    }

label_80C8F6A4:
    ctx->pc = 0x80C8F6A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F6A4: b       0x80C8F9B4
    {
            goto label_80C8F9B4;
    }

label_80C8F6A8:
    ctx->pc = 0x80C8F6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F6A8: cmpwi   r3, 4
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

label_80C8F6AC:
    ctx->pc = 0x80C8F6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6ACu)) return;
    // 80C8F6AC: b       0x80C8F9B4
    {
            goto label_80C8F9B4;
    }

label_80C8F6B0:
    ctx->pc = 0x80C8F6B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F6B0: bl      0x8045DE7C
    {
            ctx->lr = 0x80C8F6B4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C8F6B4:
    ctx->pc = 0x80C8F6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F6B4: bl      0x80460A60
    {
            ctx->lr = 0x80C8F6B8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C8F6B8:
    ctx->pc = 0x80C8F6B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F6B8: bl      0x80460A24
    {
            ctx->lr = 0x80C8F6BCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C8F6BC:
    ctx->pc = 0x80C8F6BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F6BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F6C0:
    ctx->pc = 0x80C8F6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6C0u)) return;
    // 80C8F6C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C8F6C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C8F6C4:
    ctx->pc = 0x80C8F6C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F6C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F6C8:
    ctx->pc = 0x80C8F6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6C8u)) return;
    // 80C8F6C8: bl      0x8045EC10
    {
            ctx->lr = 0x80C8F6CCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C8F6CC:
    ctx->pc = 0x80C8F6CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F6CC: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80C8F6D0:
    ctx->pc = 0x80C8F6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6D0u)) return;
    // 80C8F6D0: bl      0x80406090
    {
            ctx->lr = 0x80C8F6D4u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C8F6D4:
    ctx->pc = 0x80C8F6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F6D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F6D8:
    ctx->pc = 0x80C8F6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6D8u)) return;
    // 80C8F6D8: bl      0x8045EC10
    {
            ctx->lr = 0x80C8F6DCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C8F6DC:
    ctx->pc = 0x80C8F6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F6DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F6E0:
    ctx->pc = 0x80C8F6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6E0u)) return;
    // 80C8F6E0: bl      0x8045F220
    {
            ctx->lr = 0x80C8F6E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C8F6E4:
    ctx->pc = 0x80C8F6E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F6E4: bl      0x8045EB8C
    {
            ctx->lr = 0x80C8F6E8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C8F6E8:
    ctx->pc = 0x80C8F6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F6E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F6EC:
    ctx->pc = 0x80C8F6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6ECu)) return;
    // 80C8F6EC: bl      0x8045F220
    {
            ctx->lr = 0x80C8F6F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C8F6F0:
    ctx->pc = 0x80C8F6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C8F6F0: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C8F6F4:
    ctx->pc = 0x80C8F6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6F4u)) return;
    // 80C8F6F4: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80C8F6F8:
    ctx->pc = 0x80C8F6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6F8u)) return;
    // 80C8F6F8: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C8F6FC:
    ctx->pc = 0x80C8F6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F6FCu)) return;
    // 80C8F6FC: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C8F700:
    ctx->pc = 0x80C8F700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F700u)) return;
    // 80C8F700: lis     r6, -27400
    ctx->gpr[6] = ((u32)(s32)(-27400) << 16);

label_80C8F704:
    ctx->pc = 0x80C8F704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F704u)) return;
    // 80C8F704: addi    r6, r6, 24752
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24752);

label_80C8F708:
    ctx->pc = 0x80C8F708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F708: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C8F708u)) return;
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
label_80C8F70C:
    ctx->pc = 0x80C8F70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F70Cu)) return;
    // 80C8F70C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C8F710:
    ctx->pc = 0x80C8F710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F710u)) return;
    // 80C8F710: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C8F714:
    ctx->pc = 0x80C8F714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F714u)) return;
    // 80C8F714: bl      0x8045EBE4
    {
            ctx->lr = 0x80C8F718u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C8F718:
    ctx->pc = 0x80C8F718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F718: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F71C:
    ctx->pc = 0x80C8F71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F71Cu)) return;
    // 80C8F71C: bl      0x8045F220
    {
            ctx->lr = 0x80C8F720u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C8F720:
    ctx->pc = 0x80C8F720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C8F720: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F724:
    ctx->pc = 0x80C8F724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F724u)) return;
    // 80C8F724: addi    r4, r4, 24756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24756);

label_80C8F728:
    ctx->pc = 0x80C8F728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F728: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F728u)) return;
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
label_80C8F72C:
    ctx->pc = 0x80C8F72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F72Cu)) return;
    // 80C8F72C: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F730:
    ctx->pc = 0x80C8F730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F730u)) return;
    // 80C8F730: addi    r4, r4, 24760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24760);

label_80C8F734:
    ctx->pc = 0x80C8F734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F734: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F734u)) return;
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
label_80C8F738:
    ctx->pc = 0x80C8F738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F738u)) return;
    // 80C8F738: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F73C:
    ctx->pc = 0x80C8F73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F73Cu)) return;
    // 80C8F73C: addi    r4, r4, 24764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24764);

label_80C8F740:
    ctx->pc = 0x80C8F740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F740: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F740u)) return;
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
label_80C8F744:
    ctx->pc = 0x80C8F744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F744u)) return;
    // 80C8F744: bl      0x8045EF2C
    {
            ctx->lr = 0x80C8F748u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C8F748:
    ctx->pc = 0x80C8F748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F748: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F74C:
    ctx->pc = 0x80C8F74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F74Cu)) return;
    // 80C8F74C: bl      0x8045F220
    {
            ctx->lr = 0x80C8F750u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C8F750:
    ctx->pc = 0x80C8F750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8F750: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8F754:
    ctx->pc = 0x80C8F754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F754u)) return;
    // 80C8F754: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_80C8F758:
    ctx->pc = 0x80C8F758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F758u)) return;
    // 80C8F758: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C8F75C:
    ctx->pc = 0x80C8F75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F75Cu)) return;
    // 80C8F75C: bl      0x8045EEA8
    {
            ctx->lr = 0x80C8F760u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C8F760:
    ctx->pc = 0x80C8F760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C8F760: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F764:
    ctx->pc = 0x80C8F764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F764u)) return;
    // 80C8F764: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8F768:
    ctx->pc = 0x80C8F768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F768u)) return;
    // 80C8F768: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F76C:
    ctx->pc = 0x80C8F76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F76Cu)) return;
    // 80C8F76C: addi    r5, r5, 24768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24768);

label_80C8F770:
    ctx->pc = 0x80C8F770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F770: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F770u)) return;
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
label_80C8F774:
    ctx->pc = 0x80C8F774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F774u)) return;
    // 80C8F774: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F778:
    ctx->pc = 0x80C8F778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F778u)) return;
    // 80C8F778: addi    r5, r5, 24772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24772);

label_80C8F77C:
    ctx->pc = 0x80C8F77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F77C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F77Cu)) return;
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
label_80C8F780:
    ctx->pc = 0x80C8F780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F780u)) return;
    // 80C8F780: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F784:
    ctx->pc = 0x80C8F784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F784u)) return;
    // 80C8F784: addi    r5, r5, 24776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24776);

label_80C8F788:
    ctx->pc = 0x80C8F788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F788: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F788u)) return;
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
label_80C8F78C:
    ctx->pc = 0x80C8F78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F78Cu)) return;
    // 80C8F78C: bl      0x8045C750
    {
            ctx->lr = 0x80C8F790u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C8F790:
    ctx->pc = 0x80C8F790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8F790: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F794:
    ctx->pc = 0x80C8F794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F794u)) return;
    // 80C8F794: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8F798:
    ctx->pc = 0x80C8F798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F798u)) return;
    // 80C8F798: li      r5, 939
    ctx->gpr[5] = (u32)(s32)(939);

label_80C8F79C:
    ctx->pc = 0x80C8F79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F79Cu)) return;
    // 80C8F79C: li      r6, 17435
    ctx->gpr[6] = (u32)(s32)(17435);

label_80C8F7A0:
    ctx->pc = 0x80C8F7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7A0u)) return;
    // 80C8F7A0: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80C8F7A4:
    ctx->pc = 0x80C8F7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7A4u)) return;
    // 80C8F7A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8F7A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8F7A8:
    ctx->pc = 0x80C8F7A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F7A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C8F7A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F7AC:
    ctx->pc = 0x80C8F7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7ACu)) return;
    // 80C8F7AC: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80C8F7B0:
    ctx->pc = 0x80C8F7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7B0u)) return;
    // 80C8F7B0: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F7B4:
    ctx->pc = 0x80C8F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7B4u)) return;
    // 80C8F7B4: addi    r5, r5, 24780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24780);

label_80C8F7B8:
    ctx->pc = 0x80C8F7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F7B8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F7B8u)) return;
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
label_80C8F7BC:
    ctx->pc = 0x80C8F7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7BCu)) return;
    // 80C8F7BC: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F7C0:
    ctx->pc = 0x80C8F7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7C0u)) return;
    // 80C8F7C0: addi    r5, r5, 24784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24784);

label_80C8F7C4:
    ctx->pc = 0x80C8F7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F7C4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F7C4u)) return;
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
label_80C8F7C8:
    ctx->pc = 0x80C8F7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7C8u)) return;
    // 80C8F7C8: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F7CC:
    ctx->pc = 0x80C8F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7CCu)) return;
    // 80C8F7CC: addi    r5, r5, 24788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24788);

label_80C8F7D0:
    ctx->pc = 0x80C8F7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F7D0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F7D0u)) return;
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
label_80C8F7D4:
    ctx->pc = 0x80C8F7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7D4u)) return;
    // 80C8F7D4: bl      0x8045C750
    {
            ctx->lr = 0x80C8F7D8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C8F7D8:
    ctx->pc = 0x80C8F7D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F7D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8F7D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F7DC:
    ctx->pc = 0x80C8F7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7DCu)) return;
    // 80C8F7DC: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80C8F7E0:
    ctx->pc = 0x80C8F7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7E0u)) return;
    // 80C8F7E0: li      r5, 5291
    ctx->gpr[5] = (u32)(s32)(5291);

label_80C8F7E4:
    ctx->pc = 0x80C8F7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7E4u)) return;
    // 80C8F7E4: li      r6, 17435
    ctx->gpr[6] = (u32)(s32)(17435);

label_80C8F7E8:
    ctx->pc = 0x80C8F7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7E8u)) return;
    // 80C8F7E8: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80C8F7EC:
    ctx->pc = 0x80C8F7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7ECu)) return;
    // 80C8F7EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8F7F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8F7F0:
    ctx->pc = 0x80C8F7F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F7F0: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80C8F7F4:
    ctx->pc = 0x80C8F7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7F4u)) return;
    // 80C8F7F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C8F7F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C8F7F8:
    ctx->pc = 0x80C8F7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C8F7F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F7FC:
    ctx->pc = 0x80C8F7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F7FCu)) return;
    // 80C8F7FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8F800:
    ctx->pc = 0x80C8F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F800u)) return;
    // 80C8F800: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F804:
    ctx->pc = 0x80C8F804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F804u)) return;
    // 80C8F804: addi    r5, r5, 24792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24792);

label_80C8F808:
    ctx->pc = 0x80C8F808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F808: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F808u)) return;
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
label_80C8F80C:
    ctx->pc = 0x80C8F80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F80Cu)) return;
    // 80C8F80C: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F810:
    ctx->pc = 0x80C8F810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F810u)) return;
    // 80C8F810: addi    r5, r5, 24796
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24796);

label_80C8F814:
    ctx->pc = 0x80C8F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F814: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F814u)) return;
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
label_80C8F818:
    ctx->pc = 0x80C8F818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F818u)) return;
    // 80C8F818: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F81C:
    ctx->pc = 0x80C8F81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F81Cu)) return;
    // 80C8F81C: addi    r5, r5, 24800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24800);

label_80C8F820:
    ctx->pc = 0x80C8F820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F820: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F820u)) return;
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
label_80C8F824:
    ctx->pc = 0x80C8F824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F824u)) return;
    // 80C8F824: bl      0x8045C750
    {
            ctx->lr = 0x80C8F828u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C8F828:
    ctx->pc = 0x80C8F828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8F828: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F82C:
    ctx->pc = 0x80C8F82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F82Cu)) return;
    // 80C8F82C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8F830:
    ctx->pc = 0x80C8F830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F830u)) return;
    // 80C8F830: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C8F834:
    ctx->pc = 0x80C8F834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F834u)) return;
    // 80C8F834: addi    r5, r5, -5973
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5973);

label_80C8F838:
    ctx->pc = 0x80C8F838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F838u)) return;
    // 80C8F838: li      r6, 11803
    ctx->gpr[6] = (u32)(s32)(11803);

label_80C8F83C:
    ctx->pc = 0x80C8F83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F83Cu)) return;
    // 80C8F83C: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80C8F840:
    ctx->pc = 0x80C8F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F840u)) return;
    // 80C8F840: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8F844u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8F844:
    ctx->pc = 0x80C8F844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C8F844: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F848:
    ctx->pc = 0x80C8F848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F848u)) return;
    // 80C8F848: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80C8F84C:
    ctx->pc = 0x80C8F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F84Cu)) return;
    // 80C8F84C: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F850:
    ctx->pc = 0x80C8F850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F850u)) return;
    // 80C8F850: addi    r5, r5, 24804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24804);

label_80C8F854:
    ctx->pc = 0x80C8F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F854: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F854u)) return;
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
label_80C8F858:
    ctx->pc = 0x80C8F858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F858u)) return;
    // 80C8F858: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F85C:
    ctx->pc = 0x80C8F85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F85Cu)) return;
    // 80C8F85C: addi    r5, r5, 24808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24808);

label_80C8F860:
    ctx->pc = 0x80C8F860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F860: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F860u)) return;
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
label_80C8F864:
    ctx->pc = 0x80C8F864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F864u)) return;
    // 80C8F864: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F868:
    ctx->pc = 0x80C8F868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F868u)) return;
    // 80C8F868: addi    r5, r5, 24812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24812);

label_80C8F86C:
    ctx->pc = 0x80C8F86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F86C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F86Cu)) return;
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
label_80C8F870:
    ctx->pc = 0x80C8F870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F870u)) return;
    // 80C8F870: bl      0x8045C750
    {
            ctx->lr = 0x80C8F874u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C8F874:
    ctx->pc = 0x80C8F874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8F874: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F878:
    ctx->pc = 0x80C8F878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F878u)) return;
    // 80C8F878: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80C8F87C:
    ctx->pc = 0x80C8F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F87Cu)) return;
    // 80C8F87C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C8F880:
    ctx->pc = 0x80C8F880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F880u)) return;
    // 80C8F880: addi    r5, r5, -7253
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7253);

label_80C8F884:
    ctx->pc = 0x80C8F884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F884u)) return;
    // 80C8F884: li      r6, 3867
    ctx->gpr[6] = (u32)(s32)(3867);

label_80C8F888:
    ctx->pc = 0x80C8F888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F888u)) return;
    // 80C8F888: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80C8F88C:
    ctx->pc = 0x80C8F88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F88Cu)) return;
    // 80C8F88C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8F890u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8F890:
    ctx->pc = 0x80C8F890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C8F890: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C8F894:
    ctx->pc = 0x80C8F894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F894u)) return;
    // 80C8F894: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C8F898:
    ctx->pc = 0x80C8F898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F898: lwz     r0, 0(r3)
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
label_80C8F89C:
    ctx->pc = 0x80C8F89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F89Cu)) return;
    // 80C8F89C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8F8A0:
    ctx->pc = 0x80C8F8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8A0u)) return;
    // 80C8F8A0: lis     r3, -27400
    ctx->gpr[3] = ((u32)(s32)(-27400) << 16);

label_80C8F8A4:
    ctx->pc = 0x80C8F8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8A4u)) return;
    // 80C8F8A4: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C8F8A8:
    ctx->pc = 0x80C8F8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F8A8: lwzx    r3, r3, r0
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
label_80C8F8AC:
    ctx->pc = 0x80C8F8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F8AC: lwz     r3, 0(r3)
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
label_80C8F8B0:
    ctx->pc = 0x80C8F8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8B0u)) return;
    // 80C8F8B0: bl      0x8045F6FC
    {
            ctx->lr = 0x80C8F8B4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C8F8B4:
    ctx->pc = 0x80C8F8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F8B4: li      r3, 1273
    ctx->gpr[3] = (u32)(s32)(1273);

label_80C8F8B8:
    ctx->pc = 0x80C8F8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8B8u)) return;
    // 80C8F8B8: bl      0x8045BFA0
    {
            ctx->lr = 0x80C8F8BCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C8F8BC:
    ctx->pc = 0x80C8F8BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F8BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F8BC: bl      0x8045BFF4
    {
            ctx->lr = 0x80C8F8C0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C8F8C0:
    ctx->pc = 0x80C8F8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F8C0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C8F8C4:
    ctx->pc = 0x80C8F8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8C4u)) return;
    // 80C8F8C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C8F8C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C8F8C8:
    ctx->pc = 0x80C8F8C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F8C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C8F8C8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C8F8CC:
    ctx->pc = 0x80C8F8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8CCu)) return;
    // 80C8F8CC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C8F8D0:
    ctx->pc = 0x80C8F8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F8D0: lwz     r0, 0(r3)
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
label_80C8F8D4:
    ctx->pc = 0x80C8F8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8D4u)) return;
    // 80C8F8D4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8F8D8:
    ctx->pc = 0x80C8F8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8D8u)) return;
    // 80C8F8D8: lis     r3, -27400
    ctx->gpr[3] = ((u32)(s32)(-27400) << 16);

label_80C8F8DC:
    ctx->pc = 0x80C8F8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8DCu)) return;
    // 80C8F8DC: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C8F8E0:
    ctx->pc = 0x80C8F8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F8E0: lwzx    r3, r3, r0
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
label_80C8F8E4:
    ctx->pc = 0x80C8F8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F8E4: lwz     r3, 4(r3)
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
label_80C8F8E8:
    ctx->pc = 0x80C8F8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8E8u)) return;
    // 80C8F8E8: bl      0x8045F6FC
    {
            ctx->lr = 0x80C8F8ECu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C8F8EC:
    ctx->pc = 0x80C8F8ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F8ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F8EC: li      r3, 1274
    ctx->gpr[3] = (u32)(s32)(1274);

label_80C8F8F0:
    ctx->pc = 0x80C8F8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8F0u)) return;
    // 80C8F8F0: bl      0x8045BFA0
    {
            ctx->lr = 0x80C8F8F4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C8F8F4:
    ctx->pc = 0x80C8F8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F8F4: bl      0x8045BFF4
    {
            ctx->lr = 0x80C8F8F8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C8F8F8:
    ctx->pc = 0x80C8F8F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F8F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F8F8: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80C8F8FC:
    ctx->pc = 0x80C8F8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F8FCu)) return;
    // 80C8F8FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C8F900u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C8F900:
    ctx->pc = 0x80C8F900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C8F900: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F904:
    ctx->pc = 0x80C8F904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F904u)) return;
    // 80C8F904: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8F908:
    ctx->pc = 0x80C8F908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F908u)) return;
    // 80C8F908: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F90C:
    ctx->pc = 0x80C8F90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F90Cu)) return;
    // 80C8F90C: addi    r5, r5, 24816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24816);

label_80C8F910:
    ctx->pc = 0x80C8F910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F910: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F910u)) return;
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
label_80C8F914:
    ctx->pc = 0x80C8F914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F914u)) return;
    // 80C8F914: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F918:
    ctx->pc = 0x80C8F918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F918u)) return;
    // 80C8F918: addi    r5, r5, 24820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24820);

label_80C8F91C:
    ctx->pc = 0x80C8F91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F91Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F91C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F91Cu)) return;
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
label_80C8F920:
    ctx->pc = 0x80C8F920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F920u)) return;
    // 80C8F920: lis     r5, -27400
    ctx->gpr[5] = ((u32)(s32)(-27400) << 16);

label_80C8F924:
    ctx->pc = 0x80C8F924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F924u)) return;
    // 80C8F924: addi    r5, r5, 24824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24824);

label_80C8F928:
    ctx->pc = 0x80C8F928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F928: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F928u)) return;
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
label_80C8F92C:
    ctx->pc = 0x80C8F92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F92Cu)) return;
    // 80C8F92C: bl      0x8045C750
    {
            ctx->lr = 0x80C8F930u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C8F930:
    ctx->pc = 0x80C8F930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8F930: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F934:
    ctx->pc = 0x80C8F934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F934u)) return;
    // 80C8F934: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8F938:
    ctx->pc = 0x80C8F938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F938u)) return;
    // 80C8F938: li      r5, 427
    ctx->gpr[5] = (u32)(s32)(427);

label_80C8F93C:
    ctx->pc = 0x80C8F93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F93Cu)) return;
    // 80C8F93C: li      r6, 22299
    ctx->gpr[6] = (u32)(s32)(22299);

label_80C8F940:
    ctx->pc = 0x80C8F940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F940u)) return;
    // 80C8F940: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80C8F944:
    ctx->pc = 0x80C8F944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F944u)) return;
    // 80C8F944: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8F948u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8F948:
    ctx->pc = 0x80C8F948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8F948: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F94C:
    ctx->pc = 0x80C8F94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F94Cu)) return;
    // 80C8F94C: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80C8F950:
    ctx->pc = 0x80C8F950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F950u)) return;
    // 80C8F950: li      r5, 939
    ctx->gpr[5] = (u32)(s32)(939);

label_80C8F954:
    ctx->pc = 0x80C8F954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F954u)) return;
    // 80C8F954: li      r6, 22299
    ctx->gpr[6] = (u32)(s32)(22299);

label_80C8F958:
    ctx->pc = 0x80C8F958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F958u)) return;
    // 80C8F958: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80C8F95C:
    ctx->pc = 0x80C8F95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F95Cu)) return;
    // 80C8F95C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8F960u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8F960:
    ctx->pc = 0x80C8F960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C8F960: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C8F964:
    ctx->pc = 0x80C8F964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F964u)) return;
    // 80C8F964: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C8F968:
    ctx->pc = 0x80C8F968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F968: lwz     r0, 0(r3)
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
label_80C8F96C:
    ctx->pc = 0x80C8F96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F96Cu)) return;
    // 80C8F96C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8F970:
    ctx->pc = 0x80C8F970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F970u)) return;
    // 80C8F970: lis     r3, -27400
    ctx->gpr[3] = ((u32)(s32)(-27400) << 16);

label_80C8F974:
    ctx->pc = 0x80C8F974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F974u)) return;
    // 80C8F974: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C8F978:
    ctx->pc = 0x80C8F978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F978: lwzx    r3, r3, r0
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
label_80C8F97C:
    ctx->pc = 0x80C8F97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F97C: lwz     r3, 8(r3)
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
label_80C8F980:
    ctx->pc = 0x80C8F980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F980u)) return;
    // 80C8F980: bl      0x8045F6FC
    {
            ctx->lr = 0x80C8F984u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C8F984:
    ctx->pc = 0x80C8F984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F984: li      r3, 1275
    ctx->gpr[3] = (u32)(s32)(1275);

label_80C8F988:
    ctx->pc = 0x80C8F988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F988u)) return;
    // 80C8F988: bl      0x8045BFA0
    {
            ctx->lr = 0x80C8F98Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C8F98C:
    ctx->pc = 0x80C8F98Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F98Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F98C: bl      0x8045BFF4
    {
            ctx->lr = 0x80C8F990u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C8F990:
    ctx->pc = 0x80C8F990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F990: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80C8F994:
    ctx->pc = 0x80C8F994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F994u)) return;
    // 80C8F994: bl      0x8045F7C8
    {
            ctx->lr = 0x80C8F998u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C8F998:
    ctx->pc = 0x80C8F998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F998: bl      0x8045F32C
    {
            ctx->lr = 0x80C8F99Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C8F99C:
    ctx->pc = 0x80C8F99Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F99Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F99C: b       0x80C8F9B4
    {
            goto label_80C8F9B4;
    }

label_80C8F9A0:
    ctx->pc = 0x80C8F9A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F9A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F9A0: bl      0x8045DE34
    {
            ctx->lr = 0x80C8F9A4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C8F9A4:
    ctx->pc = 0x80C8F9A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F9A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F9A4: bl      0x80460A80
    {
            ctx->lr = 0x80C8F9A8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C8F9A8:
    ctx->pc = 0x80C8F9A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F9A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F9AC:
    ctx->pc = 0x80C8F9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F9ACu)) return;
    // 80C8F9AC: bl      0x8045EC10
    {
            ctx->lr = 0x80C8F9B0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C8F9B0:
    ctx->pc = 0x80C8F9B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F9B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F9B0: bl      0x8045BF80
    {
            ctx->lr = 0x80C8F9B4u;
            ctx->pc = 0x8045BF80u;
            return;
    }

label_80C8F9B4:
    ctx->pc = 0x80C8F9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F9B4: lwz     r0, 20(r1)
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
label_80C8F9B8:
    ctx->pc = 0x80C8F9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F9B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F9BC:
    ctx->pc = 0x80C8F9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F9BCu)) return;
    // 80C8F9BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F9C0:
    ctx->pc = 0x80C8F9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F9C0u)) return;
    // 80C8F9C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8F680;
        }
    }

    ctx->pc = 0x80C8F9C4u;
    return;
return_dispatch_80C8F680:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C8F6B4u: goto label_80C8F6B4;
    case 0x80C8F6B8u: goto label_80C8F6B8;
    case 0x80C8F6BCu: goto label_80C8F6BC;
    case 0x80C8F6C4u: goto label_80C8F6C4;
    case 0x80C8F6CCu: goto label_80C8F6CC;
    case 0x80C8F6D4u: goto label_80C8F6D4;
    case 0x80C8F6DCu: goto label_80C8F6DC;
    case 0x80C8F6E4u: goto label_80C8F6E4;
    case 0x80C8F6E8u: goto label_80C8F6E8;
    case 0x80C8F6F0u: goto label_80C8F6F0;
    case 0x80C8F718u: goto label_80C8F718;
    case 0x80C8F720u: goto label_80C8F720;
    case 0x80C8F748u: goto label_80C8F748;
    case 0x80C8F750u: goto label_80C8F750;
    case 0x80C8F760u: goto label_80C8F760;
    case 0x80C8F790u: goto label_80C8F790;
    case 0x80C8F7A8u: goto label_80C8F7A8;
    case 0x80C8F7D8u: goto label_80C8F7D8;
    case 0x80C8F7F0u: goto label_80C8F7F0;
    case 0x80C8F7F8u: goto label_80C8F7F8;
    case 0x80C8F828u: goto label_80C8F828;
    case 0x80C8F844u: goto label_80C8F844;
    case 0x80C8F874u: goto label_80C8F874;
    case 0x80C8F890u: goto label_80C8F890;
    case 0x80C8F8B4u: goto label_80C8F8B4;
    case 0x80C8F8BCu: goto label_80C8F8BC;
    case 0x80C8F8C0u: goto label_80C8F8C0;
    case 0x80C8F8C8u: goto label_80C8F8C8;
    case 0x80C8F8ECu: goto label_80C8F8EC;
    case 0x80C8F8F4u: goto label_80C8F8F4;
    case 0x80C8F8F8u: goto label_80C8F8F8;
    case 0x80C8F900u: goto label_80C8F900;
    case 0x80C8F930u: goto label_80C8F930;
    case 0x80C8F948u: goto label_80C8F948;
    case 0x80C8F960u: goto label_80C8F960;
    case 0x80C8F984u: goto label_80C8F984;
    case 0x80C8F98Cu: goto label_80C8F98C;
    case 0x80C8F990u: goto label_80C8F990;
    case 0x80C8F998u: goto label_80C8F998;
    case 0x80C8F99Cu: goto label_80C8F99C;
    case 0x80C8F9A4u: goto label_80C8F9A4;
    case 0x80C8F9A8u: goto label_80C8F9A8;
    case 0x80C8F9B0u: goto label_80C8F9B0;
    case 0x80C8F9B4u: goto label_80C8F9B4;
    default: return;
    }
}

