// DolRecomp output
#include "../generated.h"

void func_80CBAA20(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CBAA20[200] = {
        &&label_80CBAA20,
        &&label_80CBAA24,
        &&label_80CBAA28,
        &&label_80CBAA2C,
        &&label_80CBAA30,
        &&label_80CBAA34,
        &&label_80CBAA38,
        &&label_80CBAA3C,
        &&label_80CBAA40,
        &&label_80CBAA44,
        &&label_80CBAA48,
        &&label_80CBAA4C,
        &&label_80CBAA50,
        &&label_80CBAA54,
        &&label_80CBAA58,
        &&label_80CBAA5C,
        &&label_80CBAA60,
        &&label_80CBAA64,
        &&label_80CBAA68,
        &&label_80CBAA6C,
        &&label_80CBAA70,
        &&label_80CBAA74,
        &&label_80CBAA78,
        &&label_80CBAA7C,
        &&label_80CBAA80,
        &&label_80CBAA84,
        &&label_80CBAA88,
        &&label_80CBAA8C,
        &&label_80CBAA90,
        &&label_80CBAA94,
        &&label_80CBAA98,
        &&label_80CBAA9C,
        &&label_80CBAAA0,
        &&label_80CBAAA4,
        &&label_80CBAAA8,
        &&label_80CBAAAC,
        &&label_80CBAAB0,
        &&label_80CBAAB4,
        &&label_80CBAAB8,
        &&label_80CBAABC,
        &&label_80CBAAC0,
        &&label_80CBAAC4,
        &&label_80CBAAC8,
        &&label_80CBAACC,
        &&label_80CBAAD0,
        &&label_80CBAAD4,
        &&label_80CBAAD8,
        &&label_80CBAADC,
        &&label_80CBAAE0,
        &&label_80CBAAE4,
        &&label_80CBAAE8,
        &&label_80CBAAEC,
        &&label_80CBAAF0,
        &&label_80CBAAF4,
        &&label_80CBAAF8,
        &&label_80CBAAFC,
        &&label_80CBAB00,
        &&label_80CBAB04,
        &&label_80CBAB08,
        &&label_80CBAB0C,
        &&label_80CBAB10,
        &&label_80CBAB14,
        &&label_80CBAB18,
        &&label_80CBAB1C,
        &&label_80CBAB20,
        &&label_80CBAB24,
        &&label_80CBAB28,
        &&label_80CBAB2C,
        &&label_80CBAB30,
        &&label_80CBAB34,
        &&label_80CBAB38,
        &&label_80CBAB3C,
        &&label_80CBAB40,
        &&label_80CBAB44,
        &&label_80CBAB48,
        &&label_80CBAB4C,
        &&label_80CBAB50,
        &&label_80CBAB54,
        &&label_80CBAB58,
        &&label_80CBAB5C,
        &&label_80CBAB60,
        &&label_80CBAB64,
        &&label_80CBAB68,
        &&label_80CBAB6C,
        &&label_80CBAB70,
        &&label_80CBAB74,
        &&label_80CBAB78,
        &&label_80CBAB7C,
        &&label_80CBAB80,
        &&label_80CBAB84,
        &&label_80CBAB88,
        &&label_80CBAB8C,
        &&label_80CBAB90,
        &&label_80CBAB94,
        &&label_80CBAB98,
        &&label_80CBAB9C,
        &&label_80CBABA0,
        &&label_80CBABA4,
        &&label_80CBABA8,
        &&label_80CBABAC,
        &&label_80CBABB0,
        &&label_80CBABB4,
        &&label_80CBABB8,
        &&label_80CBABBC,
        &&label_80CBABC0,
        &&label_80CBABC4,
        &&label_80CBABC8,
        &&label_80CBABCC,
        &&label_80CBABD0,
        &&label_80CBABD4,
        &&label_80CBABD8,
        &&label_80CBABDC,
        &&label_80CBABE0,
        &&label_80CBABE4,
        &&label_80CBABE8,
        &&label_80CBABEC,
        &&label_80CBABF0,
        &&label_80CBABF4,
        &&label_80CBABF8,
        &&label_80CBABFC,
        &&label_80CBAC00,
        &&label_80CBAC04,
        &&label_80CBAC08,
        &&label_80CBAC0C,
        &&label_80CBAC10,
        &&label_80CBAC14,
        &&label_80CBAC18,
        &&label_80CBAC1C,
        &&label_80CBAC20,
        &&label_80CBAC24,
        &&label_80CBAC28,
        &&label_80CBAC2C,
        &&label_80CBAC30,
        &&label_80CBAC34,
        &&label_80CBAC38,
        &&label_80CBAC3C,
        &&label_80CBAC40,
        &&label_80CBAC44,
        &&label_80CBAC48,
        &&label_80CBAC4C,
        &&label_80CBAC50,
        &&label_80CBAC54,
        &&label_80CBAC58,
        &&label_80CBAC5C,
        &&label_80CBAC60,
        &&label_80CBAC64,
        &&label_80CBAC68,
        &&label_80CBAC6C,
        &&label_80CBAC70,
        &&label_80CBAC74,
        &&label_80CBAC78,
        &&label_80CBAC7C,
        &&label_80CBAC80,
        &&label_80CBAC84,
        &&label_80CBAC88,
        &&label_80CBAC8C,
        &&label_80CBAC90,
        &&label_80CBAC94,
        &&label_80CBAC98,
        &&label_80CBAC9C,
        &&label_80CBACA0,
        &&label_80CBACA4,
        &&label_80CBACA8,
        &&label_80CBACAC,
        &&label_80CBACB0,
        &&label_80CBACB4,
        &&label_80CBACB8,
        &&label_80CBACBC,
        &&label_80CBACC0,
        &&label_80CBACC4,
        &&label_80CBACC8,
        &&label_80CBACCC,
        &&label_80CBACD0,
        &&label_80CBACD4,
        &&label_80CBACD8,
        &&label_80CBACDC,
        &&label_80CBACE0,
        &&label_80CBACE4,
        &&label_80CBACE8,
        &&label_80CBACEC,
        &&label_80CBACF0,
        &&label_80CBACF4,
        &&label_80CBACF8,
        &&label_80CBACFC,
        &&label_80CBAD00,
        &&label_80CBAD04,
        &&label_80CBAD08,
        &&label_80CBAD0C,
        &&label_80CBAD10,
        &&label_80CBAD14,
        &&label_80CBAD18,
        &&label_80CBAD1C,
        &&label_80CBAD20,
        &&label_80CBAD24,
        &&label_80CBAD28,
        &&label_80CBAD2C,
        &&label_80CBAD30,
        &&label_80CBAD34,
        &&label_80CBAD38,
        &&label_80CBAD3C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CBAA20u && pc <= 0x80CBAD3Cu && ((pc - 0x80CBAA20u) & 3u) == 0u)
            goto *pc_table_80CBAA20[(pc - 0x80CBAA20u) >> 2];
    }
    return;
label_80CBAA20:
    ctx->pc = 0x80CBAA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBAA20: stwu     r1, -16(r1)
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
label_80CBAA24:
    ctx->pc = 0x80CBAA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CBAA24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CBAA28:
    ctx->pc = 0x80CBAA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CBAA28: stw     r0, 20(r1)
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
label_80CBAA2C:
    ctx->pc = 0x80CBAA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA2Cu)) return;
    // 80CBAA2C: cmpwi   r3, 2
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

label_80CBAA30:
    ctx->pc = 0x80CBAA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA30u)) return;
    // 80CBAA30: bc    12, 2, 0x80CBACD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CBACD8;
        }
    }

label_80CBAA34:
    ctx->pc = 0x80CBAA34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAA34: bc    4, 0, 0x80CBAA48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CBAA48;
        }
    }

label_80CBAA38:
    ctx->pc = 0x80CBAA38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAA38: cmpwi   r3, 0
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

label_80CBAA3C:
    ctx->pc = 0x80CBAA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA3Cu)) return;
    // 80CBAA3C: bc    12, 2, 0x80CBAD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CBAD30;
        }
    }

label_80CBAA40:
    ctx->pc = 0x80CBAA40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAA40: bc    4, 0, 0x80CBAA50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CBAA50;
        }
    }

label_80CBAA44:
    ctx->pc = 0x80CBAA44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAA44: b       0x80CBAD30
    {
            goto label_80CBAD30;
    }

label_80CBAA48:
    ctx->pc = 0x80CBAA48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAA48: cmpwi   r3, 4
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

label_80CBAA4C:
    ctx->pc = 0x80CBAA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA4Cu)) return;
    // 80CBAA4C: b       0x80CBAD30
    {
            goto label_80CBAD30;
    }

label_80CBAA50:
    ctx->pc = 0x80CBAA50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAA50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAA54:
    ctx->pc = 0x80CBAA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA54u)) return;
    // 80CBAA54: bl      0x8045EC10
    {
            ctx->lr = 0x80CBAA58u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CBAA58:
    ctx->pc = 0x80CBAA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAA58: bl      0x8045DE7C
    {
            ctx->lr = 0x80CBAA5Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CBAA5C:
    ctx->pc = 0x80CBAA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAA5C: bl      0x80460A60
    {
            ctx->lr = 0x80CBAA60u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CBAA60:
    ctx->pc = 0x80CBAA60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAA60: bl      0x80460A24
    {
            ctx->lr = 0x80CBAA64u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CBAA64:
    ctx->pc = 0x80CBAA64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAA64: li      r3, 76
    ctx->gpr[3] = (u32)(s32)(76);

label_80CBAA68:
    ctx->pc = 0x80CBAA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA68u)) return;
    // 80CBAA68: bl      0x80406090
    {
            ctx->lr = 0x80CBAA6Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80CBAA6C:
    ctx->pc = 0x80CBAA6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAA6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAA70:
    ctx->pc = 0x80CBAA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA70u)) return;
    // 80CBAA70: bl      0x8045F220
    {
            ctx->lr = 0x80CBAA74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBAA74:
    ctx->pc = 0x80CBAA74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CBAA74: lis     r4, -27381
    ctx->gpr[4] = ((u32)(s32)(-27381) << 16);

label_80CBAA78:
    ctx->pc = 0x80CBAA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA78u)) return;
    // 80CBAA78: addi    r4, r4, -19160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19160);

label_80CBAA7C:
    ctx->pc = 0x80CBAA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CBAA7C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CBAA7Cu)) return;
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
label_80CBAA80:
    ctx->pc = 0x80CBAA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA80u)) return;
    // 80CBAA80: lis     r4, -27381
    ctx->gpr[4] = ((u32)(s32)(-27381) << 16);

label_80CBAA84:
    ctx->pc = 0x80CBAA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA84u)) return;
    // 80CBAA84: addi    r4, r4, -19156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19156);

label_80CBAA88:
    ctx->pc = 0x80CBAA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBAA88: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CBAA88u)) return;
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
label_80CBAA8C:
    ctx->pc = 0x80CBAA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA8Cu)) return;
    // 80CBAA8C: lis     r4, -27381
    ctx->gpr[4] = ((u32)(s32)(-27381) << 16);

label_80CBAA90:
    ctx->pc = 0x80CBAA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA90u)) return;
    // 80CBAA90: addi    r4, r4, -19152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19152);

label_80CBAA94:
    ctx->pc = 0x80CBAA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBAA94: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CBAA94u)) return;
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
label_80CBAA98:
    ctx->pc = 0x80CBAA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAA98u)) return;
    // 80CBAA98: bl      0x8045EF2C
    {
            ctx->lr = 0x80CBAA9Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CBAA9C:
    ctx->pc = 0x80CBAA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAA9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAAA0:
    ctx->pc = 0x80CBAAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAA0u)) return;
    // 80CBAAA0: bl      0x8045F220
    {
            ctx->lr = 0x80CBAAA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBAAA4:
    ctx->pc = 0x80CBAAA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAAA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CBAAA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CBAAA8:
    ctx->pc = 0x80CBAAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAA8u)) return;
    // 80CBAAA8: li      r5, 5120
    ctx->gpr[5] = (u32)(s32)(5120);

label_80CBAAAC:
    ctx->pc = 0x80CBAAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAACu)) return;
    // 80CBAAAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CBAAB0:
    ctx->pc = 0x80CBAAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAB0u)) return;
    // 80CBAAB0: bl      0x8045EEA8
    {
            ctx->lr = 0x80CBAAB4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CBAAB4:
    ctx->pc = 0x80CBAAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CBAAB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CBAAB8:
    ctx->pc = 0x80CBAAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAB8u)) return;
    // 80CBAAB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CBAABC:
    ctx->pc = 0x80CBAABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAABCu)) return;
    // 80CBAABC: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAAC0:
    ctx->pc = 0x80CBAAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAC0u)) return;
    // 80CBAAC0: addi    r5, r5, -19148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19148);

label_80CBAAC4:
    ctx->pc = 0x80CBAAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CBAAC4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAAC4u)) return;
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
label_80CBAAC8:
    ctx->pc = 0x80CBAAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAC8u)) return;
    // 80CBAAC8: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAACC:
    ctx->pc = 0x80CBAACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAACCu)) return;
    // 80CBAACC: addi    r5, r5, -19144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19144);

label_80CBAAD0:
    ctx->pc = 0x80CBAAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBAAD0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAAD0u)) return;
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
label_80CBAAD4:
    ctx->pc = 0x80CBAAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAD4u)) return;
    // 80CBAAD4: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAAD8:
    ctx->pc = 0x80CBAAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAD8u)) return;
    // 80CBAAD8: addi    r5, r5, -19140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19140);

label_80CBAADC:
    ctx->pc = 0x80CBAADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBAADC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAADCu)) return;
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
label_80CBAAE0:
    ctx->pc = 0x80CBAAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAE0u)) return;
    // 80CBAAE0: bl      0x8045C750
    {
            ctx->lr = 0x80CBAAE4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CBAAE4:
    ctx->pc = 0x80CBAAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CBAAE4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CBAAE8:
    ctx->pc = 0x80CBAAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAE8u)) return;
    // 80CBAAE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CBAAEC:
    ctx->pc = 0x80CBAAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAECu)) return;
    // 80CBAAEC: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_80CBAAF0:
    ctx->pc = 0x80CBAAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAF0u)) return;
    // 80CBAAF0: li      r6, 5376
    ctx->gpr[6] = (u32)(s32)(5376);

label_80CBAAF4:
    ctx->pc = 0x80CBAAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAF4u)) return;
    // 80CBAAF4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CBAAF8:
    ctx->pc = 0x80CBAAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAAF8u)) return;
    // 80CBAAF8: bl      0x8045C7B4
    {
            ctx->lr = 0x80CBAAFCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CBAAFC:
    ctx->pc = 0x80CBAAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CBAAFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAB00:
    ctx->pc = 0x80CBAB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB00u)) return;
    // 80CBAB00: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80CBAB04:
    ctx->pc = 0x80CBAB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB04u)) return;
    // 80CBAB04: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAB08:
    ctx->pc = 0x80CBAB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB08u)) return;
    // 80CBAB08: addi    r5, r5, -19136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19136);

label_80CBAB0C:
    ctx->pc = 0x80CBAB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CBAB0C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAB0Cu)) return;
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
label_80CBAB10:
    ctx->pc = 0x80CBAB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB10u)) return;
    // 80CBAB10: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAB14:
    ctx->pc = 0x80CBAB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB14u)) return;
    // 80CBAB14: addi    r5, r5, -19132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19132);

label_80CBAB18:
    ctx->pc = 0x80CBAB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBAB18: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAB18u)) return;
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
label_80CBAB1C:
    ctx->pc = 0x80CBAB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB1Cu)) return;
    // 80CBAB1C: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAB20:
    ctx->pc = 0x80CBAB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB20u)) return;
    // 80CBAB20: addi    r5, r5, -19128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19128);

label_80CBAB24:
    ctx->pc = 0x80CBAB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBAB24: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAB24u)) return;
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
label_80CBAB28:
    ctx->pc = 0x80CBAB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB28u)) return;
    // 80CBAB28: bl      0x8045C750
    {
            ctx->lr = 0x80CBAB2Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CBAB2C:
    ctx->pc = 0x80CBAB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAB2C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CBAB30:
    ctx->pc = 0x80CBAB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB30u)) return;
    // 80CBAB30: bl      0x8045F7C8
    {
            ctx->lr = 0x80CBAB34u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CBAB34:
    ctx->pc = 0x80CBAB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CBAB34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAB38:
    ctx->pc = 0x80CBAB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB38u)) return;
    // 80CBAB38: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80CBAB3C:
    ctx->pc = 0x80CBAB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB3Cu)) return;
    // 80CBAB3C: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAB40:
    ctx->pc = 0x80CBAB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB40u)) return;
    // 80CBAB40: addi    r5, r5, -19124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19124);

label_80CBAB44:
    ctx->pc = 0x80CBAB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CBAB44: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAB44u)) return;
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
label_80CBAB48:
    ctx->pc = 0x80CBAB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB48u)) return;
    // 80CBAB48: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAB4C:
    ctx->pc = 0x80CBAB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB4Cu)) return;
    // 80CBAB4C: addi    r5, r5, -19120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19120);

label_80CBAB50:
    ctx->pc = 0x80CBAB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBAB50: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAB50u)) return;
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
label_80CBAB54:
    ctx->pc = 0x80CBAB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB54u)) return;
    // 80CBAB54: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAB58:
    ctx->pc = 0x80CBAB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB58u)) return;
    // 80CBAB58: addi    r5, r5, -19116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19116);

label_80CBAB5C:
    ctx->pc = 0x80CBAB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBAB5C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAB5Cu)) return;
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
label_80CBAB60:
    ctx->pc = 0x80CBAB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB60u)) return;
    // 80CBAB60: bl      0x8045C750
    {
            ctx->lr = 0x80CBAB64u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CBAB64:
    ctx->pc = 0x80CBAB64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CBAB64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CBAB68:
    ctx->pc = 0x80CBAB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB68u)) return;
    // 80CBAB68: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80CBAB6C:
    ctx->pc = 0x80CBAB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB6Cu)) return;
    // 80CBAB6C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CBAB70:
    ctx->pc = 0x80CBAB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB70u)) return;
    // 80CBAB70: addi    r5, r5, -1792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1792);

label_80CBAB74:
    ctx->pc = 0x80CBAB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB74u)) return;
    // 80CBAB74: li      r6, 5376
    ctx->gpr[6] = (u32)(s32)(5376);

label_80CBAB78:
    ctx->pc = 0x80CBAB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB78u)) return;
    // 80CBAB78: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CBAB7C:
    ctx->pc = 0x80CBAB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB7Cu)) return;
    // 80CBAB7C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CBAB80u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CBAB80:
    ctx->pc = 0x80CBAB80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAB80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAB80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAB84:
    ctx->pc = 0x80CBAB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB84u)) return;
    // 80CBAB84: bl      0x8045F220
    {
            ctx->lr = 0x80CBAB88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBAB88:
    ctx->pc = 0x80CBAB88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAB88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAB88: bl      0x8045EB8C
    {
            ctx->lr = 0x80CBAB8Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CBAB8C:
    ctx->pc = 0x80CBAB8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAB8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CBAB8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAB90:
    ctx->pc = 0x80CBAB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB90u)) return;
    // 80CBAB90: lis     r4, -27381
    ctx->gpr[4] = ((u32)(s32)(-27381) << 16);

label_80CBAB94:
    ctx->pc = 0x80CBAB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB94u)) return;
    // 80CBAB94: addi    r4, r4, -19168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19168);

label_80CBAB98:
    ctx->pc = 0x80CBAB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAB98u)) return;
    // 80CBAB98: bl      0x8045E7E0
    {
            ctx->lr = 0x80CBAB9Cu;
            ctx->pc = 0x8045E7E0u;
            return;
    }

label_80CBAB9C:
    ctx->pc = 0x80CBAB9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAB9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAB9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBABA0:
    ctx->pc = 0x80CBABA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABA0u)) return;
    // 80CBABA0: bl      0x8045F220
    {
            ctx->lr = 0x80CBABA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBABA4:
    ctx->pc = 0x80CBABA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBABA4: bl      0x8045C360
    {
            ctx->lr = 0x80CBABA8u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80CBABA8:
    ctx->pc = 0x80CBABA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBABA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBABAC:
    ctx->pc = 0x80CBABACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABACu)) return;
    // 80CBABAC: bl      0x8045F220
    {
            ctx->lr = 0x80CBABB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBABB0:
    ctx->pc = 0x80CBABB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBABB0: bl      0x8045C034
    {
            ctx->lr = 0x80CBABB4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CBABB4:
    ctx->pc = 0x80CBABB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBABB4: li      r3, 1323
    ctx->gpr[3] = (u32)(s32)(1323);

label_80CBABB8:
    ctx->pc = 0x80CBABB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABB8u)) return;
    // 80CBABB8: bl      0x8045BFA0
    {
            ctx->lr = 0x80CBABBCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CBABBC:
    ctx->pc = 0x80CBABBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CBABBC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CBABC0:
    ctx->pc = 0x80CBABC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABC0u)) return;
    // 80CBABC0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CBABC4:
    ctx->pc = 0x80CBABC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CBABC4: lwz     r0, 0(r3)
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
label_80CBABC8:
    ctx->pc = 0x80CBABC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABC8u)) return;
    // 80CBABC8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CBABCC:
    ctx->pc = 0x80CBABCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABCCu)) return;
    // 80CBABCC: lis     r3, -27381
    ctx->gpr[3] = ((u32)(s32)(-27381) << 16);

label_80CBABD0:
    ctx->pc = 0x80CBABD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABD0u)) return;
    // 80CBABD0: addi    r3, r3, -18476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18476);

label_80CBABD4:
    ctx->pc = 0x80CBABD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CBABD4: lwzx    r3, r3, r0
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
label_80CBABD8:
    ctx->pc = 0x80CBABD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBABD8: lwz     r3, 0(r3)
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
label_80CBABDC:
    ctx->pc = 0x80CBABDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABDCu)) return;
    // 80CBABDC: bl      0x8045F6FC
    {
            ctx->lr = 0x80CBABE0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CBABE0:
    ctx->pc = 0x80CBABE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBABE0: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CBABE4:
    ctx->pc = 0x80CBABE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABE4u)) return;
    // 80CBABE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CBABE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CBABE8:
    ctx->pc = 0x80CBABE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBABE8: bl      0x8045F300
    {
            ctx->lr = 0x80CBABECu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80CBABEC:
    ctx->pc = 0x80CBABECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBABEC: bl      0x8045BFF4
    {
            ctx->lr = 0x80CBABF0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CBABF0:
    ctx->pc = 0x80CBABF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBABF0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CBABF4:
    ctx->pc = 0x80CBABF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABF4u)) return;
    // 80CBABF4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CBABF8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CBABF8:
    ctx->pc = 0x80CBABF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBABF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBABF8: li      r3, 1324
    ctx->gpr[3] = (u32)(s32)(1324);

label_80CBABFC:
    ctx->pc = 0x80CBABFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBABFCu)) return;
    // 80CBABFC: bl      0x8045BFA0
    {
            ctx->lr = 0x80CBAC00u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CBAC00:
    ctx->pc = 0x80CBAC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CBAC00: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CBAC04:
    ctx->pc = 0x80CBAC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC04u)) return;
    // 80CBAC04: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CBAC08:
    ctx->pc = 0x80CBAC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CBAC08: lwz     r0, 0(r3)
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
label_80CBAC0C:
    ctx->pc = 0x80CBAC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC0Cu)) return;
    // 80CBAC0C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CBAC10:
    ctx->pc = 0x80CBAC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC10u)) return;
    // 80CBAC10: lis     r3, -27381
    ctx->gpr[3] = ((u32)(s32)(-27381) << 16);

label_80CBAC14:
    ctx->pc = 0x80CBAC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC14u)) return;
    // 80CBAC14: addi    r3, r3, -18476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18476);

label_80CBAC18:
    ctx->pc = 0x80CBAC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CBAC18: lwzx    r3, r3, r0
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
label_80CBAC1C:
    ctx->pc = 0x80CBAC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBAC1C: lwz     r3, 4(r3)
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
label_80CBAC20:
    ctx->pc = 0x80CBAC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC20u)) return;
    // 80CBAC20: bl      0x8045F6FC
    {
            ctx->lr = 0x80CBAC24u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CBAC24:
    ctx->pc = 0x80CBAC24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAC24: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80CBAC28:
    ctx->pc = 0x80CBAC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC28u)) return;
    // 80CBAC28: bl      0x8045F7C8
    {
            ctx->lr = 0x80CBAC2Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CBAC2C:
    ctx->pc = 0x80CBAC2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAC2C: bl      0x8045BFF4
    {
            ctx->lr = 0x80CBAC30u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CBAC30:
    ctx->pc = 0x80CBAC30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAC30: bl      0x8045F300
    {
            ctx->lr = 0x80CBAC34u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80CBAC34:
    ctx->pc = 0x80CBAC34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAC34: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80CBAC38:
    ctx->pc = 0x80CBAC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC38u)) return;
    // 80CBAC38: bl      0x8045F7C8
    {
            ctx->lr = 0x80CBAC3Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CBAC3C:
    ctx->pc = 0x80CBAC3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAC3C: bl      0x8045C3AC
    {
            ctx->lr = 0x80CBAC40u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80CBAC40:
    ctx->pc = 0x80CBAC40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CBAC40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CBAC44:
    ctx->pc = 0x80CBAC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC44u)) return;
    // 80CBAC44: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80CBAC48:
    ctx->pc = 0x80CBAC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC48u)) return;
    // 80CBAC48: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CBAC4C:
    ctx->pc = 0x80CBAC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC4Cu)) return;
    // 80CBAC4C: addi    r5, r5, -2048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2048);

label_80CBAC50:
    ctx->pc = 0x80CBAC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC50u)) return;
    // 80CBAC50: li      r6, 6144
    ctx->gpr[6] = (u32)(s32)(6144);

label_80CBAC54:
    ctx->pc = 0x80CBAC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC54u)) return;
    // 80CBAC54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CBAC58:
    ctx->pc = 0x80CBAC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC58u)) return;
    // 80CBAC58: bl      0x8045C7B4
    {
            ctx->lr = 0x80CBAC5Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CBAC5C:
    ctx->pc = 0x80CBAC5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CBAC5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CBAC60:
    ctx->pc = 0x80CBAC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC60u)) return;
    // 80CBAC60: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80CBAC64:
    ctx->pc = 0x80CBAC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC64u)) return;
    // 80CBAC64: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAC68:
    ctx->pc = 0x80CBAC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC68u)) return;
    // 80CBAC68: addi    r5, r5, -19112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19112);

label_80CBAC6C:
    ctx->pc = 0x80CBAC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CBAC6C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAC6Cu)) return;
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
label_80CBAC70:
    ctx->pc = 0x80CBAC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC70u)) return;
    // 80CBAC70: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAC74:
    ctx->pc = 0x80CBAC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC74u)) return;
    // 80CBAC74: addi    r5, r5, -19108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19108);

label_80CBAC78:
    ctx->pc = 0x80CBAC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBAC78: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAC78u)) return;
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
label_80CBAC7C:
    ctx->pc = 0x80CBAC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC7Cu)) return;
    // 80CBAC7C: lis     r5, -27381
    ctx->gpr[5] = ((u32)(s32)(-27381) << 16);

label_80CBAC80:
    ctx->pc = 0x80CBAC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC80u)) return;
    // 80CBAC80: addi    r5, r5, -19104
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19104);

label_80CBAC84:
    ctx->pc = 0x80CBAC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBAC84: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CBAC84u)) return;
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
label_80CBAC88:
    ctx->pc = 0x80CBAC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC88u)) return;
    // 80CBAC88: bl      0x8045C750
    {
            ctx->lr = 0x80CBAC8Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CBAC8C:
    ctx->pc = 0x80CBAC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAC8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAC90:
    ctx->pc = 0x80CBAC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC90u)) return;
    // 80CBAC90: bl      0x8045F220
    {
            ctx->lr = 0x80CBAC94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBAC94:
    ctx->pc = 0x80CBAC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBAC94: bl      0x8045C034
    {
            ctx->lr = 0x80CBAC98u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CBAC98:
    ctx->pc = 0x80CBAC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAC98: li      r3, 1325
    ctx->gpr[3] = (u32)(s32)(1325);

label_80CBAC9C:
    ctx->pc = 0x80CBAC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAC9Cu)) return;
    // 80CBAC9C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CBACA0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CBACA0:
    ctx->pc = 0x80CBACA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CBACA0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CBACA4:
    ctx->pc = 0x80CBACA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACA4u)) return;
    // 80CBACA4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CBACA8:
    ctx->pc = 0x80CBACA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CBACA8: lwz     r0, 0(r3)
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
label_80CBACAC:
    ctx->pc = 0x80CBACACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACACu)) return;
    // 80CBACAC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CBACB0:
    ctx->pc = 0x80CBACB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACB0u)) return;
    // 80CBACB0: lis     r3, -27381
    ctx->gpr[3] = ((u32)(s32)(-27381) << 16);

label_80CBACB4:
    ctx->pc = 0x80CBACB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACB4u)) return;
    // 80CBACB4: addi    r3, r3, -18476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18476);

label_80CBACB8:
    ctx->pc = 0x80CBACB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CBACB8: lwzx    r3, r3, r0
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
label_80CBACBC:
    ctx->pc = 0x80CBACBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBACBC: lwz     r3, 8(r3)
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
label_80CBACC0:
    ctx->pc = 0x80CBACC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACC0u)) return;
    // 80CBACC0: bl      0x8045F6FC
    {
            ctx->lr = 0x80CBACC4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CBACC4:
    ctx->pc = 0x80CBACC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBACC4: li      r3, 240
    ctx->gpr[3] = (u32)(s32)(240);

label_80CBACC8:
    ctx->pc = 0x80CBACC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACC8u)) return;
    // 80CBACC8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CBACCCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CBACCC:
    ctx->pc = 0x80CBACCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBACCC: bl      0x8045F300
    {
            ctx->lr = 0x80CBACD0u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80CBACD0:
    ctx->pc = 0x80CBACD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBACD0: bl      0x8045F32C
    {
            ctx->lr = 0x80CBACD4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CBACD4:
    ctx->pc = 0x80CBACD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBACD4: b       0x80CBAD30
    {
            goto label_80CBAD30;
    }

label_80CBACD8:
    ctx->pc = 0x80CBACD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBACD8: bl      0x8045DE34
    {
            ctx->lr = 0x80CBACDCu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CBACDC:
    ctx->pc = 0x80CBACDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CBACDC: bl      0x80460A80
    {
            ctx->lr = 0x80CBACE0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CBACE0:
    ctx->pc = 0x80CBACE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBACE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBACE4:
    ctx->pc = 0x80CBACE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACE4u)) return;
    // 80CBACE4: bl      0x8045F220
    {
            ctx->lr = 0x80CBACE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBACE8:
    ctx->pc = 0x80CBACE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBACE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CBACE8: lis     r4, -27381
    ctx->gpr[4] = ((u32)(s32)(-27381) << 16);

label_80CBACEC:
    ctx->pc = 0x80CBACECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACECu)) return;
    // 80CBACEC: addi    r4, r4, -19100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19100);

label_80CBACF0:
    ctx->pc = 0x80CBACF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CBACF0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CBACF0u)) return;
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
label_80CBACF4:
    ctx->pc = 0x80CBACF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACF4u)) return;
    // 80CBACF4: lis     r4, -27381
    ctx->gpr[4] = ((u32)(s32)(-27381) << 16);

label_80CBACF8:
    ctx->pc = 0x80CBACF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACF8u)) return;
    // 80CBACF8: addi    r4, r4, -19096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19096);

label_80CBACFC:
    ctx->pc = 0x80CBACFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBACFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBACFC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CBACFCu)) return;
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
label_80CBAD00:
    ctx->pc = 0x80CBAD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD00u)) return;
    // 80CBAD00: lis     r4, -27381
    ctx->gpr[4] = ((u32)(s32)(-27381) << 16);

label_80CBAD04:
    ctx->pc = 0x80CBAD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD04u)) return;
    // 80CBAD04: addi    r4, r4, -19092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19092);

label_80CBAD08:
    ctx->pc = 0x80CBAD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CBAD08: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CBAD08u)) return;
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
label_80CBAD0C:
    ctx->pc = 0x80CBAD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD0Cu)) return;
    // 80CBAD0C: bl      0x8045EF2C
    {
            ctx->lr = 0x80CBAD10u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CBAD10:
    ctx->pc = 0x80CBAD10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAD10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAD10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAD14:
    ctx->pc = 0x80CBAD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD14u)) return;
    // 80CBAD14: bl      0x8045F220
    {
            ctx->lr = 0x80CBAD18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CBAD18:
    ctx->pc = 0x80CBAD18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAD18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CBAD18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CBAD1C:
    ctx->pc = 0x80CBAD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD1Cu)) return;
    // 80CBAD1C: li      r5, 2780
    ctx->gpr[5] = (u32)(s32)(2780);

label_80CBAD20:
    ctx->pc = 0x80CBAD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD20u)) return;
    // 80CBAD20: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CBAD24:
    ctx->pc = 0x80CBAD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD24u)) return;
    // 80CBAD24: bl      0x8045EEA8
    {
            ctx->lr = 0x80CBAD28u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CBAD28:
    ctx->pc = 0x80CBAD28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAD28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CBAD28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CBAD2C:
    ctx->pc = 0x80CBAD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD2Cu)) return;
    // 80CBAD2C: bl      0x8045EC10
    {
            ctx->lr = 0x80CBAD30u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CBAD30:
    ctx->pc = 0x80CBAD30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CBAD30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CBAD30: lwz     r0, 20(r1)
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
label_80CBAD34:
    ctx->pc = 0x80CBAD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CBAD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CBAD34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CBAD38:
    ctx->pc = 0x80CBAD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD38u)) return;
    // 80CBAD38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CBAD3C:
    ctx->pc = 0x80CBAD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CBAD3Cu)) return;
    // 80CBAD3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CBAA20;
        }
    }

    ctx->pc = 0x80CBAD40u;
    return;
return_dispatch_80CBAA20:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CBAA58u: goto label_80CBAA58;
    case 0x80CBAA5Cu: goto label_80CBAA5C;
    case 0x80CBAA60u: goto label_80CBAA60;
    case 0x80CBAA64u: goto label_80CBAA64;
    case 0x80CBAA6Cu: goto label_80CBAA6C;
    case 0x80CBAA74u: goto label_80CBAA74;
    case 0x80CBAA9Cu: goto label_80CBAA9C;
    case 0x80CBAAA4u: goto label_80CBAAA4;
    case 0x80CBAAB4u: goto label_80CBAAB4;
    case 0x80CBAAE4u: goto label_80CBAAE4;
    case 0x80CBAAFCu: goto label_80CBAAFC;
    case 0x80CBAB2Cu: goto label_80CBAB2C;
    case 0x80CBAB34u: goto label_80CBAB34;
    case 0x80CBAB64u: goto label_80CBAB64;
    case 0x80CBAB80u: goto label_80CBAB80;
    case 0x80CBAB88u: goto label_80CBAB88;
    case 0x80CBAB8Cu: goto label_80CBAB8C;
    case 0x80CBAB9Cu: goto label_80CBAB9C;
    case 0x80CBABA4u: goto label_80CBABA4;
    case 0x80CBABA8u: goto label_80CBABA8;
    case 0x80CBABB0u: goto label_80CBABB0;
    case 0x80CBABB4u: goto label_80CBABB4;
    case 0x80CBABBCu: goto label_80CBABBC;
    case 0x80CBABE0u: goto label_80CBABE0;
    case 0x80CBABE8u: goto label_80CBABE8;
    case 0x80CBABECu: goto label_80CBABEC;
    case 0x80CBABF0u: goto label_80CBABF0;
    case 0x80CBABF8u: goto label_80CBABF8;
    case 0x80CBAC00u: goto label_80CBAC00;
    case 0x80CBAC24u: goto label_80CBAC24;
    case 0x80CBAC2Cu: goto label_80CBAC2C;
    case 0x80CBAC30u: goto label_80CBAC30;
    case 0x80CBAC34u: goto label_80CBAC34;
    case 0x80CBAC3Cu: goto label_80CBAC3C;
    case 0x80CBAC40u: goto label_80CBAC40;
    case 0x80CBAC5Cu: goto label_80CBAC5C;
    case 0x80CBAC8Cu: goto label_80CBAC8C;
    case 0x80CBAC94u: goto label_80CBAC94;
    case 0x80CBAC98u: goto label_80CBAC98;
    case 0x80CBACA0u: goto label_80CBACA0;
    case 0x80CBACC4u: goto label_80CBACC4;
    case 0x80CBACCCu: goto label_80CBACCC;
    case 0x80CBACD0u: goto label_80CBACD0;
    case 0x80CBACD4u: goto label_80CBACD4;
    case 0x80CBACDCu: goto label_80CBACDC;
    case 0x80CBACE0u: goto label_80CBACE0;
    case 0x80CBACE8u: goto label_80CBACE8;
    case 0x80CBAD10u: goto label_80CBAD10;
    case 0x80CBAD18u: goto label_80CBAD18;
    case 0x80CBAD28u: goto label_80CBAD28;
    case 0x80CBAD30u: goto label_80CBAD30;
    default: return;
    }
}

