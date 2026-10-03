// DolRecomp output
#include "../generated.h"

void func_80D322E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D322E0[57] = {
        &&label_80D322E0,
        &&label_80D322E4,
        &&label_80D322E8,
        &&label_80D322EC,
        &&label_80D322F0,
        &&label_80D322F4,
        &&label_80D322F8,
        &&label_80D322FC,
        &&label_80D32300,
        &&label_80D32304,
        &&label_80D32308,
        &&label_80D3230C,
        &&label_80D32310,
        &&label_80D32314,
        &&label_80D32318,
        &&label_80D3231C,
        &&label_80D32320,
        &&label_80D32324,
        &&label_80D32328,
        &&label_80D3232C,
        &&label_80D32330,
        &&label_80D32334,
        &&label_80D32338,
        &&label_80D3233C,
        &&label_80D32340,
        &&label_80D32344,
        &&label_80D32348,
        &&label_80D3234C,
        &&label_80D32350,
        &&label_80D32354,
        &&label_80D32358,
        &&label_80D3235C,
        &&label_80D32360,
        &&label_80D32364,
        &&label_80D32368,
        &&label_80D3236C,
        &&label_80D32370,
        &&label_80D32374,
        &&label_80D32378,
        &&label_80D3237C,
        &&label_80D32380,
        &&label_80D32384,
        &&label_80D32388,
        &&label_80D3238C,
        &&label_80D32390,
        &&label_80D32394,
        &&label_80D32398,
        &&label_80D3239C,
        &&label_80D323A0,
        &&label_80D323A4,
        &&label_80D323A8,
        &&label_80D323AC,
        &&label_80D323B0,
        &&label_80D323B4,
        &&label_80D323B8,
        &&label_80D323BC,
        &&label_80D323C0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D322E0u && pc <= 0x80D323C0u && ((pc - 0x80D322E0u) & 3u) == 0u)
            goto *pc_table_80D322E0[(pc - 0x80D322E0u) >> 2];
    }
    return;
label_80D322E0:
    ctx->pc = 0x80D322E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D322E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D322E0: stwu     r1, -16(r1)
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
label_80D322E4:
    ctx->pc = 0x80D322E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D322E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D322E8:
    ctx->pc = 0x80D322E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D322E8: stw     r0, 20(r1)
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
label_80D322EC:
    ctx->pc = 0x80D322ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322ECu)) return;
    // 80D322EC: cmpwi   r3, 2
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

label_80D322F0:
    ctx->pc = 0x80D322F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322F0u)) return;
    // 80D322F0: bc    12, 2, 0x80D323AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D323AC;
        }
    }

label_80D322F4:
    ctx->pc = 0x80D322F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D322F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D322F4: bc    4, 0, 0x80D32308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32308;
        }
    }

label_80D322F8:
    ctx->pc = 0x80D322F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D322F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D322F8: cmpwi   r3, 0
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

label_80D322FC:
    ctx->pc = 0x80D322FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322FCu)) return;
    // 80D322FC: bc    12, 2, 0x80D323B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D323B4;
        }
    }

label_80D32300:
    ctx->pc = 0x80D32300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32300: bc    4, 0, 0x80D32310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32310;
        }
    }

label_80D32304:
    ctx->pc = 0x80D32304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32304: b       0x80D323B4
    {
            goto label_80D323B4;
    }

label_80D32308:
    ctx->pc = 0x80D32308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32308: cmpwi   r3, 4
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

label_80D3230C:
    ctx->pc = 0x80D3230Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3230Cu)) return;
    // 80D3230C: b       0x80D323B4
    {
            goto label_80D323B4;
    }

label_80D32310:
    ctx->pc = 0x80D32310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32310: bl      0x8045DE7C
    {
            ctx->lr = 0x80D32314u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D32314:
    ctx->pc = 0x80D32314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32314: bl      0x80460A60
    {
            ctx->lr = 0x80D32318u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D32318:
    ctx->pc = 0x80D32318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32318: bl      0x80460A24
    {
            ctx->lr = 0x80D3231Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D3231C:
    ctx->pc = 0x80D3231Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3231Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3231C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32320:
    ctx->pc = 0x80D32320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32320u)) return;
    // 80D32320: bl      0x8045EC10
    {
            ctx->lr = 0x80D32324u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D32324:
    ctx->pc = 0x80D32324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32324: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32328:
    ctx->pc = 0x80D32328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32328u)) return;
    // 80D32328: bl      0x8045F220
    {
            ctx->lr = 0x80D3232Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3232C:
    ctx->pc = 0x80D3232Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3232Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3232C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32330:
    ctx->pc = 0x80D32330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32330u)) return;
    // 80D32330: addi    r4, r4, -17488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17488);

label_80D32334:
    ctx->pc = 0x80D32334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32334: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32334u)) return;
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
label_80D32338:
    ctx->pc = 0x80D32338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32338u)) return;
    // 80D32338: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D3233C:
    ctx->pc = 0x80D3233Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3233Cu)) return;
    // 80D3233C: addi    r4, r4, -17484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17484);

label_80D32340:
    ctx->pc = 0x80D32340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32340: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32340u)) return;
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
label_80D32344:
    ctx->pc = 0x80D32344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32344u)) return;
    // 80D32344: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32348:
    ctx->pc = 0x80D32348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32348u)) return;
    // 80D32348: addi    r4, r4, -17480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17480);

label_80D3234C:
    ctx->pc = 0x80D3234Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3234Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3234C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3234Cu)) return;
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
label_80D32350:
    ctx->pc = 0x80D32350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32350u)) return;
    // 80D32350: bl      0x8045E70C
    {
            ctx->lr = 0x80D32354u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D32354:
    ctx->pc = 0x80D32354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32354: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32358:
    ctx->pc = 0x80D32358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32358u)) return;
    // 80D32358: bl      0x8045F220
    {
            ctx->lr = 0x80D3235Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3235C:
    ctx->pc = 0x80D3235Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3235Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3235C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32360:
    ctx->pc = 0x80D32360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32360u)) return;
    // 80D32360: addi    r4, r4, -17224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17224);

label_80D32364:
    ctx->pc = 0x80D32364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32364u)) return;
    // 80D32364: bl      0x8045C060
    {
            ctx->lr = 0x80D32368u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32368:
    ctx->pc = 0x80D32368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32368: li      r3, 1527
    ctx->gpr[3] = (u32)(s32)(1527);

label_80D3236C:
    ctx->pc = 0x80D3236Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3236Cu)) return;
    // 80D3236C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D32370u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D32370:
    ctx->pc = 0x80D32370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D32370: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32374:
    ctx->pc = 0x80D32374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32374u)) return;
    // 80D32374: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D32378:
    ctx->pc = 0x80D32378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32378: lwz     r0, 0(r3)
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
label_80D3237C:
    ctx->pc = 0x80D3237Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3237Cu)) return;
    // 80D3237C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D32380:
    ctx->pc = 0x80D32380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32380u)) return;
    // 80D32380: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32384:
    ctx->pc = 0x80D32384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32384u)) return;
    // 80D32384: addi    r3, r3, -17252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17252);

label_80D32388:
    ctx->pc = 0x80D32388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32388: lwzx    r3, r3, r0
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
label_80D3238C:
    ctx->pc = 0x80D3238Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3238Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3238C: lwz     r3, 0(r3)
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
label_80D32390:
    ctx->pc = 0x80D32390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32390u)) return;
    // 80D32390: bl      0x8045F6FC
    {
            ctx->lr = 0x80D32394u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D32394:
    ctx->pc = 0x80D32394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32394: bl      0x8045BFF4
    {
            ctx->lr = 0x80D32398u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D32398:
    ctx->pc = 0x80D32398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32398: bl      0x8045F300
    {
            ctx->lr = 0x80D3239Cu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D3239C:
    ctx->pc = 0x80D3239Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3239Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3239C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D323A0:
    ctx->pc = 0x80D323A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323A0u)) return;
    // 80D323A0: bl      0x8045F220
    {
            ctx->lr = 0x80D323A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D323A4:
    ctx->pc = 0x80D323A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D323A4: bl      0x8045E760
    {
            ctx->lr = 0x80D323A8u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D323A8:
    ctx->pc = 0x80D323A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D323A8: b       0x80D323B4
    {
            goto label_80D323B4;
    }

label_80D323AC:
    ctx->pc = 0x80D323ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D323AC: bl      0x8045DE34
    {
            ctx->lr = 0x80D323B0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D323B0:
    ctx->pc = 0x80D323B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D323B0: bl      0x80460A80
    {
            ctx->lr = 0x80D323B4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D323B4:
    ctx->pc = 0x80D323B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D323B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D323B4: lwz     r0, 20(r1)
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
label_80D323B8:
    ctx->pc = 0x80D323B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D323B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D323B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D323BC:
    ctx->pc = 0x80D323BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323BCu)) return;
    // 80D323BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D323C0:
    ctx->pc = 0x80D323C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D323C0u)) return;
    // 80D323C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D322E0;
        }
    }

    ctx->pc = 0x80D323C4u;
    return;
return_dispatch_80D322E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D32314u: goto label_80D32314;
    case 0x80D32318u: goto label_80D32318;
    case 0x80D3231Cu: goto label_80D3231C;
    case 0x80D32324u: goto label_80D32324;
    case 0x80D3232Cu: goto label_80D3232C;
    case 0x80D32354u: goto label_80D32354;
    case 0x80D3235Cu: goto label_80D3235C;
    case 0x80D32368u: goto label_80D32368;
    case 0x80D32370u: goto label_80D32370;
    case 0x80D32394u: goto label_80D32394;
    case 0x80D32398u: goto label_80D32398;
    case 0x80D3239Cu: goto label_80D3239C;
    case 0x80D323A4u: goto label_80D323A4;
    case 0x80D323A8u: goto label_80D323A8;
    case 0x80D323B0u: goto label_80D323B0;
    case 0x80D323B4u: goto label_80D323B4;
    default: return;
    }
}

