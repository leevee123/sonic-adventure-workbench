// DolRecomp output
#include "../generated.h"

void func_80D67A40(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D67A40[95] = {
        &&label_80D67A40,
        &&label_80D67A44,
        &&label_80D67A48,
        &&label_80D67A4C,
        &&label_80D67A50,
        &&label_80D67A54,
        &&label_80D67A58,
        &&label_80D67A5C,
        &&label_80D67A60,
        &&label_80D67A64,
        &&label_80D67A68,
        &&label_80D67A6C,
        &&label_80D67A70,
        &&label_80D67A74,
        &&label_80D67A78,
        &&label_80D67A7C,
        &&label_80D67A80,
        &&label_80D67A84,
        &&label_80D67A88,
        &&label_80D67A8C,
        &&label_80D67A90,
        &&label_80D67A94,
        &&label_80D67A98,
        &&label_80D67A9C,
        &&label_80D67AA0,
        &&label_80D67AA4,
        &&label_80D67AA8,
        &&label_80D67AAC,
        &&label_80D67AB0,
        &&label_80D67AB4,
        &&label_80D67AB8,
        &&label_80D67ABC,
        &&label_80D67AC0,
        &&label_80D67AC4,
        &&label_80D67AC8,
        &&label_80D67ACC,
        &&label_80D67AD0,
        &&label_80D67AD4,
        &&label_80D67AD8,
        &&label_80D67ADC,
        &&label_80D67AE0,
        &&label_80D67AE4,
        &&label_80D67AE8,
        &&label_80D67AEC,
        &&label_80D67AF0,
        &&label_80D67AF4,
        &&label_80D67AF8,
        &&label_80D67AFC,
        &&label_80D67B00,
        &&label_80D67B04,
        &&label_80D67B08,
        &&label_80D67B0C,
        &&label_80D67B10,
        &&label_80D67B14,
        &&label_80D67B18,
        &&label_80D67B1C,
        &&label_80D67B20,
        &&label_80D67B24,
        &&label_80D67B28,
        &&label_80D67B2C,
        &&label_80D67B30,
        &&label_80D67B34,
        &&label_80D67B38,
        &&label_80D67B3C,
        &&label_80D67B40,
        &&label_80D67B44,
        &&label_80D67B48,
        &&label_80D67B4C,
        &&label_80D67B50,
        &&label_80D67B54,
        &&label_80D67B58,
        &&label_80D67B5C,
        &&label_80D67B60,
        &&label_80D67B64,
        &&label_80D67B68,
        &&label_80D67B6C,
        &&label_80D67B70,
        &&label_80D67B74,
        &&label_80D67B78,
        &&label_80D67B7C,
        &&label_80D67B80,
        &&label_80D67B84,
        &&label_80D67B88,
        &&label_80D67B8C,
        &&label_80D67B90,
        &&label_80D67B94,
        &&label_80D67B98,
        &&label_80D67B9C,
        &&label_80D67BA0,
        &&label_80D67BA4,
        &&label_80D67BA8,
        &&label_80D67BAC,
        &&label_80D67BB0,
        &&label_80D67BB4,
        &&label_80D67BB8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D67A40u && pc <= 0x80D67BB8u && ((pc - 0x80D67A40u) & 3u) == 0u)
            goto *pc_table_80D67A40[(pc - 0x80D67A40u) >> 2];
    }
    return;
label_80D67A40:
    ctx->pc = 0x80D67A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67A40: stwu     r1, -16(r1)
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
label_80D67A44:
    ctx->pc = 0x80D67A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D67A44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67A48:
    ctx->pc = 0x80D67A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67A48: stw     r0, 20(r1)
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
label_80D67A4C:
    ctx->pc = 0x80D67A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A4Cu)) return;
    // 80D67A4C: cmpwi   r3, 2
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

label_80D67A50:
    ctx->pc = 0x80D67A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A50u)) return;
    // 80D67A50: bc    12, 2, 0x80D67B0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67B0C;
        }
    }

label_80D67A54:
    ctx->pc = 0x80D67A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67A54: bc    4, 0, 0x80D67A68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67A68;
        }
    }

label_80D67A58:
    ctx->pc = 0x80D67A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67A58: cmpwi   r3, 0
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

label_80D67A5C:
    ctx->pc = 0x80D67A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A5Cu)) return;
    // 80D67A5C: bc    12, 2, 0x80D67BAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67BAC;
        }
    }

label_80D67A60:
    ctx->pc = 0x80D67A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67A60: bc    4, 0, 0x80D67A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67A70;
        }
    }

label_80D67A64:
    ctx->pc = 0x80D67A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67A64: b       0x80D67BAC
    {
            goto label_80D67BAC;
    }

label_80D67A68:
    ctx->pc = 0x80D67A68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67A68: cmpwi   r3, 4
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

label_80D67A6C:
    ctx->pc = 0x80D67A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A6Cu)) return;
    // 80D67A6C: b       0x80D67BAC
    {
            goto label_80D67BAC;
    }

label_80D67A70:
    ctx->pc = 0x80D67A70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67A70: bl      0x8045DE7C
    {
            ctx->lr = 0x80D67A74u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D67A74:
    ctx->pc = 0x80D67A74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67A74: bl      0x80460A60
    {
            ctx->lr = 0x80D67A78u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D67A78:
    ctx->pc = 0x80D67A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67A78: bl      0x80460A24
    {
            ctx->lr = 0x80D67A7Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D67A7C:
    ctx->pc = 0x80D67A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67A7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67A80:
    ctx->pc = 0x80D67A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A80u)) return;
    // 80D67A80: bl      0x8045F220
    {
            ctx->lr = 0x80D67A84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D67A84:
    ctx->pc = 0x80D67A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D67A84: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67A88:
    ctx->pc = 0x80D67A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A88u)) return;
    // 80D67A88: addi    r4, r4, 6800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6800);

label_80D67A8C:
    ctx->pc = 0x80D67A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67A8C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67A8Cu)) return;
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
label_80D67A90:
    ctx->pc = 0x80D67A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A90u)) return;
    // 80D67A90: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67A94:
    ctx->pc = 0x80D67A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A94u)) return;
    // 80D67A94: addi    r4, r4, 6804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6804);

label_80D67A98:
    ctx->pc = 0x80D67A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67A98: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67A98u)) return;
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
label_80D67A9C:
    ctx->pc = 0x80D67A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A9Cu)) return;
    // 80D67A9C: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67AA0:
    ctx->pc = 0x80D67AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AA0u)) return;
    // 80D67AA0: addi    r4, r4, 6808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6808);

label_80D67AA4:
    ctx->pc = 0x80D67AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67AA4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67AA4u)) return;
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
label_80D67AA8:
    ctx->pc = 0x80D67AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AA8u)) return;
    // 80D67AA8: bl      0x8045EF2C
    {
            ctx->lr = 0x80D67AACu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D67AAC:
    ctx->pc = 0x80D67AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67AAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67AB0:
    ctx->pc = 0x80D67AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AB0u)) return;
    // 80D67AB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67AB4:
    ctx->pc = 0x80D67AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AB4u)) return;
    // 80D67AB4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D67AB8:
    ctx->pc = 0x80D67AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AB8u)) return;
    // 80D67AB8: addi    r5, r6, -6912
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-6912);

label_80D67ABC:
    ctx->pc = 0x80D67ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67ABCu)) return;
    // 80D67ABC: addi    r6, r6, -25088
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25088);

label_80D67AC0:
    ctx->pc = 0x80D67AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AC0u)) return;
    // 80D67AC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67AC4:
    ctx->pc = 0x80D67AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AC4u)) return;
    // 80D67AC4: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67AC8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67AC8:
    ctx->pc = 0x80D67AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67AC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67ACC:
    ctx->pc = 0x80D67ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67ACCu)) return;
    // 80D67ACC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67AD0:
    ctx->pc = 0x80D67AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AD0u)) return;
    // 80D67AD0: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67AD4:
    ctx->pc = 0x80D67AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AD4u)) return;
    // 80D67AD4: addi    r5, r5, 6812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6812);

label_80D67AD8:
    ctx->pc = 0x80D67AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67AD8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67AD8u)) return;
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
label_80D67ADC:
    ctx->pc = 0x80D67ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67ADCu)) return;
    // 80D67ADC: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67AE0:
    ctx->pc = 0x80D67AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AE0u)) return;
    // 80D67AE0: addi    r5, r5, 6816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6816);

label_80D67AE4:
    ctx->pc = 0x80D67AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67AE4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67AE4u)) return;
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
label_80D67AE8:
    ctx->pc = 0x80D67AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AE8u)) return;
    // 80D67AE8: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67AEC:
    ctx->pc = 0x80D67AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AECu)) return;
    // 80D67AEC: addi    r5, r5, 6820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6820);

label_80D67AF0:
    ctx->pc = 0x80D67AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67AF0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67AF0u)) return;
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
label_80D67AF4:
    ctx->pc = 0x80D67AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AF4u)) return;
    // 80D67AF4: bl      0x8045C750
    {
            ctx->lr = 0x80D67AF8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67AF8:
    ctx->pc = 0x80D67AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67AF8: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80D67AFC:
    ctx->pc = 0x80D67AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67AFCu)) return;
    // 80D67AFC: bl      0x80406090
    {
            ctx->lr = 0x80D67B00u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D67B00:
    ctx->pc = 0x80D67B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67B00: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D67B04:
    ctx->pc = 0x80D67B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B04u)) return;
    // 80D67B04: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67B08u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67B08:
    ctx->pc = 0x80D67B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67B08: b       0x80D67BAC
    {
            goto label_80D67BAC;
    }

label_80D67B0C:
    ctx->pc = 0x80D67B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67B0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67B10:
    ctx->pc = 0x80D67B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B10u)) return;
    // 80D67B10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67B14:
    ctx->pc = 0x80D67B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B14u)) return;
    // 80D67B14: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D67B18:
    ctx->pc = 0x80D67B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B18u)) return;
    // 80D67B18: addi    r5, r6, -3584
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-3584);

label_80D67B1C:
    ctx->pc = 0x80D67B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B1Cu)) return;
    // 80D67B1C: addi    r6, r6, -22016
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22016);

label_80D67B20:
    ctx->pc = 0x80D67B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B20u)) return;
    // 80D67B20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67B24:
    ctx->pc = 0x80D67B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B24u)) return;
    // 80D67B24: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67B28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67B28:
    ctx->pc = 0x80D67B28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67B28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67B2C:
    ctx->pc = 0x80D67B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B2Cu)) return;
    // 80D67B2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67B30:
    ctx->pc = 0x80D67B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B30u)) return;
    // 80D67B30: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67B34:
    ctx->pc = 0x80D67B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B34u)) return;
    // 80D67B34: addi    r5, r5, 6824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6824);

label_80D67B38:
    ctx->pc = 0x80D67B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67B38: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67B38u)) return;
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
label_80D67B3C:
    ctx->pc = 0x80D67B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B3Cu)) return;
    // 80D67B3C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67B40:
    ctx->pc = 0x80D67B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B40u)) return;
    // 80D67B40: addi    r5, r5, 6828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6828);

label_80D67B44:
    ctx->pc = 0x80D67B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67B44: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67B44u)) return;
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
label_80D67B48:
    ctx->pc = 0x80D67B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B48u)) return;
    // 80D67B48: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67B4C:
    ctx->pc = 0x80D67B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B4Cu)) return;
    // 80D67B4C: addi    r5, r5, 6832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6832);

label_80D67B50:
    ctx->pc = 0x80D67B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67B50: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67B50u)) return;
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
label_80D67B54:
    ctx->pc = 0x80D67B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B54u)) return;
    // 80D67B54: bl      0x8045C750
    {
            ctx->lr = 0x80D67B58u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67B58:
    ctx->pc = 0x80D67B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67B58: bl      0x8045DE34
    {
            ctx->lr = 0x80D67B5Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D67B5C:
    ctx->pc = 0x80D67B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67B5C: bl      0x80460A80
    {
            ctx->lr = 0x80D67B60u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D67B60:
    ctx->pc = 0x80D67B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67B60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67B64:
    ctx->pc = 0x80D67B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B64u)) return;
    // 80D67B64: bl      0x8045F220
    {
            ctx->lr = 0x80D67B68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D67B68:
    ctx->pc = 0x80D67B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D67B68: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67B6C:
    ctx->pc = 0x80D67B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B6Cu)) return;
    // 80D67B6C: addi    r4, r4, 6836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6836);

label_80D67B70:
    ctx->pc = 0x80D67B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67B70: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67B70u)) return;
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
label_80D67B74:
    ctx->pc = 0x80D67B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B74u)) return;
    // 80D67B74: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67B78:
    ctx->pc = 0x80D67B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B78u)) return;
    // 80D67B78: addi    r4, r4, 6840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6840);

label_80D67B7C:
    ctx->pc = 0x80D67B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67B7C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67B7Cu)) return;
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
label_80D67B80:
    ctx->pc = 0x80D67B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B80u)) return;
    // 80D67B80: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67B84:
    ctx->pc = 0x80D67B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B84u)) return;
    // 80D67B84: addi    r4, r4, 6844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6844);

label_80D67B88:
    ctx->pc = 0x80D67B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67B88: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67B88u)) return;
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
label_80D67B8C:
    ctx->pc = 0x80D67B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B8Cu)) return;
    // 80D67B8C: bl      0x8045EF2C
    {
            ctx->lr = 0x80D67B90u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D67B90:
    ctx->pc = 0x80D67B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67B90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67B94:
    ctx->pc = 0x80D67B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B94u)) return;
    // 80D67B94: bl      0x8045F220
    {
            ctx->lr = 0x80D67B98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D67B98:
    ctx->pc = 0x80D67B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D67B98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67B9C:
    ctx->pc = 0x80D67B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67B9Cu)) return;
    // 80D67B9C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67BA0:
    ctx->pc = 0x80D67BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BA0u)) return;
    // 80D67BA0: addi    r5, r5, -16384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16384);

label_80D67BA4:
    ctx->pc = 0x80D67BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BA4u)) return;
    // 80D67BA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D67BA8:
    ctx->pc = 0x80D67BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BA8u)) return;
    // 80D67BA8: bl      0x8045EEA8
    {
            ctx->lr = 0x80D67BACu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D67BAC:
    ctx->pc = 0x80D67BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67BAC: lwz     r0, 20(r1)
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
label_80D67BB0:
    ctx->pc = 0x80D67BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D67BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67BB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67BB4:
    ctx->pc = 0x80D67BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BB4u)) return;
    // 80D67BB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D67BB8:
    ctx->pc = 0x80D67BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BB8u)) return;
    // 80D67BB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D67A40;
        }
    }

    ctx->pc = 0x80D67BBCu;
    return;
return_dispatch_80D67A40:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D67A74u: goto label_80D67A74;
    case 0x80D67A78u: goto label_80D67A78;
    case 0x80D67A7Cu: goto label_80D67A7C;
    case 0x80D67A84u: goto label_80D67A84;
    case 0x80D67AACu: goto label_80D67AAC;
    case 0x80D67AC8u: goto label_80D67AC8;
    case 0x80D67AF8u: goto label_80D67AF8;
    case 0x80D67B00u: goto label_80D67B00;
    case 0x80D67B08u: goto label_80D67B08;
    case 0x80D67B28u: goto label_80D67B28;
    case 0x80D67B58u: goto label_80D67B58;
    case 0x80D67B5Cu: goto label_80D67B5C;
    case 0x80D67B60u: goto label_80D67B60;
    case 0x80D67B68u: goto label_80D67B68;
    case 0x80D67B90u: goto label_80D67B90;
    case 0x80D67B98u: goto label_80D67B98;
    case 0x80D67BACu: goto label_80D67BAC;
    default: return;
    }
}

