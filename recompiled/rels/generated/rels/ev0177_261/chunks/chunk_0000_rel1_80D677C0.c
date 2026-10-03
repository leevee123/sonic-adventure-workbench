// DolRecomp output
#include "../generated.h"

void func_80D677C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D677C0[57] = {
        &&label_80D677C0,
        &&label_80D677C4,
        &&label_80D677C8,
        &&label_80D677CC,
        &&label_80D677D0,
        &&label_80D677D4,
        &&label_80D677D8,
        &&label_80D677DC,
        &&label_80D677E0,
        &&label_80D677E4,
        &&label_80D677E8,
        &&label_80D677EC,
        &&label_80D677F0,
        &&label_80D677F4,
        &&label_80D677F8,
        &&label_80D677FC,
        &&label_80D67800,
        &&label_80D67804,
        &&label_80D67808,
        &&label_80D6780C,
        &&label_80D67810,
        &&label_80D67814,
        &&label_80D67818,
        &&label_80D6781C,
        &&label_80D67820,
        &&label_80D67824,
        &&label_80D67828,
        &&label_80D6782C,
        &&label_80D67830,
        &&label_80D67834,
        &&label_80D67838,
        &&label_80D6783C,
        &&label_80D67840,
        &&label_80D67844,
        &&label_80D67848,
        &&label_80D6784C,
        &&label_80D67850,
        &&label_80D67854,
        &&label_80D67858,
        &&label_80D6785C,
        &&label_80D67860,
        &&label_80D67864,
        &&label_80D67868,
        &&label_80D6786C,
        &&label_80D67870,
        &&label_80D67874,
        &&label_80D67878,
        &&label_80D6787C,
        &&label_80D67880,
        &&label_80D67884,
        &&label_80D67888,
        &&label_80D6788C,
        &&label_80D67890,
        &&label_80D67894,
        &&label_80D67898,
        &&label_80D6789C,
        &&label_80D678A0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D677C0u && pc <= 0x80D678A0u && ((pc - 0x80D677C0u) & 3u) == 0u)
            goto *pc_table_80D677C0[(pc - 0x80D677C0u) >> 2];
    }
    return;
label_80D677C0:
    ctx->pc = 0x80D677C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D677C0: stwu     r1, -16(r1)
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
label_80D677C4:
    ctx->pc = 0x80D677C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D677C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D677C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D677C8:
    ctx->pc = 0x80D677C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D677C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D677C8: stw     r0, 20(r1)
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
label_80D677CC:
    ctx->pc = 0x80D677CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D677CCu)) return;
    // 80D677CC: cmpwi   r3, 2
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

label_80D677D0:
    ctx->pc = 0x80D677D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D677D0u)) return;
    // 80D677D0: bc    12, 2, 0x80D6788C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6788C;
        }
    }

label_80D677D4:
    ctx->pc = 0x80D677D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D677D4: bc    4, 0, 0x80D677E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D677E8;
        }
    }

label_80D677D8:
    ctx->pc = 0x80D677D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D677D8: cmpwi   r3, 0
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

label_80D677DC:
    ctx->pc = 0x80D677DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D677DCu)) return;
    // 80D677DC: bc    12, 2, 0x80D67894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67894;
        }
    }

label_80D677E0:
    ctx->pc = 0x80D677E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D677E0: bc    4, 0, 0x80D677F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D677F0;
        }
    }

label_80D677E4:
    ctx->pc = 0x80D677E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D677E4: b       0x80D67894
    {
            goto label_80D67894;
    }

label_80D677E8:
    ctx->pc = 0x80D677E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D677E8: cmpwi   r3, 4
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

label_80D677EC:
    ctx->pc = 0x80D677ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D677ECu)) return;
    // 80D677EC: b       0x80D67894
    {
            goto label_80D67894;
    }

label_80D677F0:
    ctx->pc = 0x80D677F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D677F0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D677F4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D677F4:
    ctx->pc = 0x80D677F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D677F4: bl      0x80460A60
    {
            ctx->lr = 0x80D677F8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D677F8:
    ctx->pc = 0x80D677F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D677F8: bl      0x80460A24
    {
            ctx->lr = 0x80D677FCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D677FC:
    ctx->pc = 0x80D677FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D677FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D677FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67800:
    ctx->pc = 0x80D67800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67800u)) return;
    // 80D67800: bl      0x8045F220
    {
            ctx->lr = 0x80D67804u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D67804:
    ctx->pc = 0x80D67804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D67804: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67808:
    ctx->pc = 0x80D67808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67808u)) return;
    // 80D67808: addi    r4, r4, 6608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6608);

label_80D6780C:
    ctx->pc = 0x80D6780Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6780Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6780C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6780Cu)) return;
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
label_80D67810:
    ctx->pc = 0x80D67810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67810u)) return;
    // 80D67810: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67814:
    ctx->pc = 0x80D67814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67814u)) return;
    // 80D67814: addi    r4, r4, 6612
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6612);

label_80D67818:
    ctx->pc = 0x80D67818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67818: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67818u)) return;
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
label_80D6781C:
    ctx->pc = 0x80D6781Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6781Cu)) return;
    // 80D6781C: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67820:
    ctx->pc = 0x80D67820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67820u)) return;
    // 80D67820: addi    r4, r4, 6616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6616);

label_80D67824:
    ctx->pc = 0x80D67824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67824: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67824u)) return;
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
label_80D67828:
    ctx->pc = 0x80D67828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67828u)) return;
    // 80D67828: bl      0x8045EF2C
    {
            ctx->lr = 0x80D6782Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D6782C:
    ctx->pc = 0x80D6782Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6782Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6782C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67830:
    ctx->pc = 0x80D67830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67830u)) return;
    // 80D67830: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67834:
    ctx->pc = 0x80D67834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67834u)) return;
    // 80D67834: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67838:
    ctx->pc = 0x80D67838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67838u)) return;
    // 80D67838: addi    r5, r5, -5376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5376);

label_80D6783C:
    ctx->pc = 0x80D6783Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6783Cu)) return;
    // 80D6783C: li      r6, 30208
    ctx->gpr[6] = (u32)(s32)(30208);

label_80D67840:
    ctx->pc = 0x80D67840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67840u)) return;
    // 80D67840: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67844:
    ctx->pc = 0x80D67844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67844u)) return;
    // 80D67844: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67848u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67848:
    ctx->pc = 0x80D67848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67848: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6784C:
    ctx->pc = 0x80D6784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6784Cu)) return;
    // 80D6784C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67850:
    ctx->pc = 0x80D67850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67850u)) return;
    // 80D67850: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67854:
    ctx->pc = 0x80D67854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67854u)) return;
    // 80D67854: addi    r5, r5, 6620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6620);

label_80D67858:
    ctx->pc = 0x80D67858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67858: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67858u)) return;
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
label_80D6785C:
    ctx->pc = 0x80D6785Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6785Cu)) return;
    // 80D6785C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67860:
    ctx->pc = 0x80D67860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67860u)) return;
    // 80D67860: addi    r5, r5, 6624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6624);

label_80D67864:
    ctx->pc = 0x80D67864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67864: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67864u)) return;
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
label_80D67868:
    ctx->pc = 0x80D67868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67868u)) return;
    // 80D67868: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D6786C:
    ctx->pc = 0x80D6786Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6786Cu)) return;
    // 80D6786C: addi    r5, r5, 6628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6628);

label_80D67870:
    ctx->pc = 0x80D67870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67870: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67870u)) return;
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
label_80D67874:
    ctx->pc = 0x80D67874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67874u)) return;
    // 80D67874: bl      0x8045C750
    {
            ctx->lr = 0x80D67878u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67878:
    ctx->pc = 0x80D67878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67878: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80D6787C:
    ctx->pc = 0x80D6787Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6787Cu)) return;
    // 80D6787C: bl      0x80406090
    {
            ctx->lr = 0x80D67880u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D67880:
    ctx->pc = 0x80D67880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67880: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D67884:
    ctx->pc = 0x80D67884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67884u)) return;
    // 80D67884: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67888u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67888:
    ctx->pc = 0x80D67888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67888: b       0x80D67894
    {
            goto label_80D67894;
    }

label_80D6788C:
    ctx->pc = 0x80D6788Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6788Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6788C: bl      0x8045DE34
    {
            ctx->lr = 0x80D67890u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D67890:
    ctx->pc = 0x80D67890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67890: bl      0x80460A80
    {
            ctx->lr = 0x80D67894u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D67894:
    ctx->pc = 0x80D67894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67894: lwz     r0, 20(r1)
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
label_80D67898:
    ctx->pc = 0x80D67898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D67898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67898: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6789C:
    ctx->pc = 0x80D6789Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6789Cu)) return;
    // 80D6789C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D678A0:
    ctx->pc = 0x80D678A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D678A0u)) return;
    // 80D678A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D677C0;
        }
    }

    ctx->pc = 0x80D678A4u;
    return;
return_dispatch_80D677C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D677F4u: goto label_80D677F4;
    case 0x80D677F8u: goto label_80D677F8;
    case 0x80D677FCu: goto label_80D677FC;
    case 0x80D67804u: goto label_80D67804;
    case 0x80D6782Cu: goto label_80D6782C;
    case 0x80D67848u: goto label_80D67848;
    case 0x80D67878u: goto label_80D67878;
    case 0x80D67880u: goto label_80D67880;
    case 0x80D67888u: goto label_80D67888;
    case 0x80D67890u: goto label_80D67890;
    case 0x80D67894u: goto label_80D67894;
    default: return;
    }
}

