// DolRecomp output
#include "../generated.h"

void func_80D676C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D676C0[57] = {
        &&label_80D676C0,
        &&label_80D676C4,
        &&label_80D676C8,
        &&label_80D676CC,
        &&label_80D676D0,
        &&label_80D676D4,
        &&label_80D676D8,
        &&label_80D676DC,
        &&label_80D676E0,
        &&label_80D676E4,
        &&label_80D676E8,
        &&label_80D676EC,
        &&label_80D676F0,
        &&label_80D676F4,
        &&label_80D676F8,
        &&label_80D676FC,
        &&label_80D67700,
        &&label_80D67704,
        &&label_80D67708,
        &&label_80D6770C,
        &&label_80D67710,
        &&label_80D67714,
        &&label_80D67718,
        &&label_80D6771C,
        &&label_80D67720,
        &&label_80D67724,
        &&label_80D67728,
        &&label_80D6772C,
        &&label_80D67730,
        &&label_80D67734,
        &&label_80D67738,
        &&label_80D6773C,
        &&label_80D67740,
        &&label_80D67744,
        &&label_80D67748,
        &&label_80D6774C,
        &&label_80D67750,
        &&label_80D67754,
        &&label_80D67758,
        &&label_80D6775C,
        &&label_80D67760,
        &&label_80D67764,
        &&label_80D67768,
        &&label_80D6776C,
        &&label_80D67770,
        &&label_80D67774,
        &&label_80D67778,
        &&label_80D6777C,
        &&label_80D67780,
        &&label_80D67784,
        &&label_80D67788,
        &&label_80D6778C,
        &&label_80D67790,
        &&label_80D67794,
        &&label_80D67798,
        &&label_80D6779C,
        &&label_80D677A0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D676C0u && pc <= 0x80D677A0u && ((pc - 0x80D676C0u) & 3u) == 0u)
            goto *pc_table_80D676C0[(pc - 0x80D676C0u) >> 2];
    }
    return;
label_80D676C0:
    ctx->pc = 0x80D676C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D676C0: stwu     r1, -16(r1)
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
label_80D676C4:
    ctx->pc = 0x80D676C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D676C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D676C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D676C8:
    ctx->pc = 0x80D676C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D676C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D676C8: stw     r0, 20(r1)
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
label_80D676CC:
    ctx->pc = 0x80D676CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D676CCu)) return;
    // 80D676CC: cmpwi   r3, 2
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

label_80D676D0:
    ctx->pc = 0x80D676D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D676D0u)) return;
    // 80D676D0: bc    12, 2, 0x80D6778C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6778C;
        }
    }

label_80D676D4:
    ctx->pc = 0x80D676D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D676D4: bc    4, 0, 0x80D676E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D676E8;
        }
    }

label_80D676D8:
    ctx->pc = 0x80D676D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D676D8: cmpwi   r3, 0
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

label_80D676DC:
    ctx->pc = 0x80D676DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D676DCu)) return;
    // 80D676DC: bc    12, 2, 0x80D67794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67794;
        }
    }

label_80D676E0:
    ctx->pc = 0x80D676E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D676E0: bc    4, 0, 0x80D676F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D676F0;
        }
    }

label_80D676E4:
    ctx->pc = 0x80D676E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D676E4: b       0x80D67794
    {
            goto label_80D67794;
    }

label_80D676E8:
    ctx->pc = 0x80D676E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D676E8: cmpwi   r3, 4
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

label_80D676EC:
    ctx->pc = 0x80D676ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D676ECu)) return;
    // 80D676EC: b       0x80D67794
    {
            goto label_80D67794;
    }

label_80D676F0:
    ctx->pc = 0x80D676F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D676F0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D676F4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D676F4:
    ctx->pc = 0x80D676F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D676F4: bl      0x80460A60
    {
            ctx->lr = 0x80D676F8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D676F8:
    ctx->pc = 0x80D676F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D676F8: bl      0x80460A24
    {
            ctx->lr = 0x80D676FCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D676FC:
    ctx->pc = 0x80D676FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D676FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D676FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67700:
    ctx->pc = 0x80D67700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67700u)) return;
    // 80D67700: bl      0x8045F220
    {
            ctx->lr = 0x80D67704u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D67704:
    ctx->pc = 0x80D67704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D67704: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67708:
    ctx->pc = 0x80D67708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67708u)) return;
    // 80D67708: addi    r4, r4, 6512
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6512);

label_80D6770C:
    ctx->pc = 0x80D6770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6770Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6770C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6770Cu)) return;
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
label_80D67710:
    ctx->pc = 0x80D67710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67710u)) return;
    // 80D67710: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67714:
    ctx->pc = 0x80D67714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67714u)) return;
    // 80D67714: addi    r4, r4, 6516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6516);

label_80D67718:
    ctx->pc = 0x80D67718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67718: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67718u)) return;
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
label_80D6771C:
    ctx->pc = 0x80D6771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6771Cu)) return;
    // 80D6771C: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67720:
    ctx->pc = 0x80D67720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67720u)) return;
    // 80D67720: addi    r4, r4, 6520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6520);

label_80D67724:
    ctx->pc = 0x80D67724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67724: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67724u)) return;
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
label_80D67728:
    ctx->pc = 0x80D67728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67728u)) return;
    // 80D67728: bl      0x8045EF2C
    {
            ctx->lr = 0x80D6772Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D6772C:
    ctx->pc = 0x80D6772Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6772Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6772C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67730:
    ctx->pc = 0x80D67730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67730u)) return;
    // 80D67730: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67734:
    ctx->pc = 0x80D67734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67734u)) return;
    // 80D67734: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67738:
    ctx->pc = 0x80D67738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67738u)) return;
    // 80D67738: addi    r5, r5, -5376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5376);

label_80D6773C:
    ctx->pc = 0x80D6773Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6773Cu)) return;
    // 80D6773C: li      r6, 30208
    ctx->gpr[6] = (u32)(s32)(30208);

label_80D67740:
    ctx->pc = 0x80D67740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67740u)) return;
    // 80D67740: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67744:
    ctx->pc = 0x80D67744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67744u)) return;
    // 80D67744: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67748u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67748:
    ctx->pc = 0x80D67748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67748: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6774C:
    ctx->pc = 0x80D6774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6774Cu)) return;
    // 80D6774C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67750:
    ctx->pc = 0x80D67750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67750u)) return;
    // 80D67750: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67754:
    ctx->pc = 0x80D67754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67754u)) return;
    // 80D67754: addi    r5, r5, 6524
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6524);

label_80D67758:
    ctx->pc = 0x80D67758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67758: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67758u)) return;
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
label_80D6775C:
    ctx->pc = 0x80D6775Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6775Cu)) return;
    // 80D6775C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67760:
    ctx->pc = 0x80D67760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67760u)) return;
    // 80D67760: addi    r5, r5, 6528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6528);

label_80D67764:
    ctx->pc = 0x80D67764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67764: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67764u)) return;
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
label_80D67768:
    ctx->pc = 0x80D67768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67768u)) return;
    // 80D67768: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D6776C:
    ctx->pc = 0x80D6776Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6776Cu)) return;
    // 80D6776C: addi    r5, r5, 6532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6532);

label_80D67770:
    ctx->pc = 0x80D67770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67770: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67770u)) return;
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
label_80D67774:
    ctx->pc = 0x80D67774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67774u)) return;
    // 80D67774: bl      0x8045C750
    {
            ctx->lr = 0x80D67778u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67778:
    ctx->pc = 0x80D67778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67778: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80D6777C:
    ctx->pc = 0x80D6777Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6777Cu)) return;
    // 80D6777C: bl      0x80406090
    {
            ctx->lr = 0x80D67780u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D67780:
    ctx->pc = 0x80D67780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67780: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D67784:
    ctx->pc = 0x80D67784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67784u)) return;
    // 80D67784: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67788u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67788:
    ctx->pc = 0x80D67788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67788: b       0x80D67794
    {
            goto label_80D67794;
    }

label_80D6778C:
    ctx->pc = 0x80D6778Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6778Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6778C: bl      0x8045DE34
    {
            ctx->lr = 0x80D67790u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D67790:
    ctx->pc = 0x80D67790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67790: bl      0x80460A80
    {
            ctx->lr = 0x80D67794u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D67794:
    ctx->pc = 0x80D67794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67794: lwz     r0, 20(r1)
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
label_80D67798:
    ctx->pc = 0x80D67798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D67798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67798: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6779C:
    ctx->pc = 0x80D6779Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6779Cu)) return;
    // 80D6779C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D677A0:
    ctx->pc = 0x80D677A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D677A0u)) return;
    // 80D677A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D676C0;
        }
    }

    ctx->pc = 0x80D677A4u;
    return;
return_dispatch_80D676C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D676F4u: goto label_80D676F4;
    case 0x80D676F8u: goto label_80D676F8;
    case 0x80D676FCu: goto label_80D676FC;
    case 0x80D67704u: goto label_80D67704;
    case 0x80D6772Cu: goto label_80D6772C;
    case 0x80D67748u: goto label_80D67748;
    case 0x80D67778u: goto label_80D67778;
    case 0x80D67780u: goto label_80D67780;
    case 0x80D67788u: goto label_80D67788;
    case 0x80D67790u: goto label_80D67790;
    case 0x80D67794u: goto label_80D67794;
    default: return;
    }
}

