// DolRecomp output
#include "../generated.h"

void func_80D67D20(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D67D20[86] = {
        &&label_80D67D20,
        &&label_80D67D24,
        &&label_80D67D28,
        &&label_80D67D2C,
        &&label_80D67D30,
        &&label_80D67D34,
        &&label_80D67D38,
        &&label_80D67D3C,
        &&label_80D67D40,
        &&label_80D67D44,
        &&label_80D67D48,
        &&label_80D67D4C,
        &&label_80D67D50,
        &&label_80D67D54,
        &&label_80D67D58,
        &&label_80D67D5C,
        &&label_80D67D60,
        &&label_80D67D64,
        &&label_80D67D68,
        &&label_80D67D6C,
        &&label_80D67D70,
        &&label_80D67D74,
        &&label_80D67D78,
        &&label_80D67D7C,
        &&label_80D67D80,
        &&label_80D67D84,
        &&label_80D67D88,
        &&label_80D67D8C,
        &&label_80D67D90,
        &&label_80D67D94,
        &&label_80D67D98,
        &&label_80D67D9C,
        &&label_80D67DA0,
        &&label_80D67DA4,
        &&label_80D67DA8,
        &&label_80D67DAC,
        &&label_80D67DB0,
        &&label_80D67DB4,
        &&label_80D67DB8,
        &&label_80D67DBC,
        &&label_80D67DC0,
        &&label_80D67DC4,
        &&label_80D67DC8,
        &&label_80D67DCC,
        &&label_80D67DD0,
        &&label_80D67DD4,
        &&label_80D67DD8,
        &&label_80D67DDC,
        &&label_80D67DE0,
        &&label_80D67DE4,
        &&label_80D67DE8,
        &&label_80D67DEC,
        &&label_80D67DF0,
        &&label_80D67DF4,
        &&label_80D67DF8,
        &&label_80D67DFC,
        &&label_80D67E00,
        &&label_80D67E04,
        &&label_80D67E08,
        &&label_80D67E0C,
        &&label_80D67E10,
        &&label_80D67E14,
        &&label_80D67E18,
        &&label_80D67E1C,
        &&label_80D67E20,
        &&label_80D67E24,
        &&label_80D67E28,
        &&label_80D67E2C,
        &&label_80D67E30,
        &&label_80D67E34,
        &&label_80D67E38,
        &&label_80D67E3C,
        &&label_80D67E40,
        &&label_80D67E44,
        &&label_80D67E48,
        &&label_80D67E4C,
        &&label_80D67E50,
        &&label_80D67E54,
        &&label_80D67E58,
        &&label_80D67E5C,
        &&label_80D67E60,
        &&label_80D67E64,
        &&label_80D67E68,
        &&label_80D67E6C,
        &&label_80D67E70,
        &&label_80D67E74
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D67D20u && pc <= 0x80D67E74u && ((pc - 0x80D67D20u) & 3u) == 0u)
            goto *pc_table_80D67D20[(pc - 0x80D67D20u) >> 2];
    }
    return;
label_80D67D20:
    ctx->pc = 0x80D67D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67D20: stwu     r1, -16(r1)
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
label_80D67D24:
    ctx->pc = 0x80D67D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D67D24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67D28:
    ctx->pc = 0x80D67D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67D28: stw     r0, 20(r1)
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
label_80D67D2C:
    ctx->pc = 0x80D67D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D2Cu)) return;
    // 80D67D2C: cmpwi   r3, 2
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

label_80D67D30:
    ctx->pc = 0x80D67D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D30u)) return;
    // 80D67D30: bc    12, 2, 0x80D67E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67E0C;
        }
    }

label_80D67D34:
    ctx->pc = 0x80D67D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D34: bc    4, 0, 0x80D67D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67D48;
        }
    }

label_80D67D38:
    ctx->pc = 0x80D67D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67D38: cmpwi   r3, 0
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

label_80D67D3C:
    ctx->pc = 0x80D67D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D3Cu)) return;
    // 80D67D3C: bc    12, 2, 0x80D67E68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67E68;
        }
    }

label_80D67D40:
    ctx->pc = 0x80D67D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D40: bc    4, 0, 0x80D67D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67D50;
        }
    }

label_80D67D44:
    ctx->pc = 0x80D67D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D44: b       0x80D67E68
    {
            goto label_80D67E68;
    }

label_80D67D48:
    ctx->pc = 0x80D67D48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67D48: cmpwi   r3, 4
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

label_80D67D4C:
    ctx->pc = 0x80D67D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D4Cu)) return;
    // 80D67D4C: b       0x80D67E68
    {
            goto label_80D67E68;
    }

label_80D67D50:
    ctx->pc = 0x80D67D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D50: bl      0x8045DE7C
    {
            ctx->lr = 0x80D67D54u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D67D54:
    ctx->pc = 0x80D67D54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D54: bl      0x80460A60
    {
            ctx->lr = 0x80D67D58u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D67D58:
    ctx->pc = 0x80D67D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D58: bl      0x80460A24
    {
            ctx->lr = 0x80D67D5Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D67D5C:
    ctx->pc = 0x80D67D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D67D5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67D60:
    ctx->pc = 0x80D67D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D60u)) return;
    // 80D67D60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67D64:
    ctx->pc = 0x80D67D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D64u)) return;
    // 80D67D64: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80D67D68:
    ctx->pc = 0x80D67D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D68u)) return;
    // 80D67D68: li      r6, 26112
    ctx->gpr[6] = (u32)(s32)(26112);

label_80D67D6C:
    ctx->pc = 0x80D67D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D6Cu)) return;
    // 80D67D6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67D70:
    ctx->pc = 0x80D67D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D70u)) return;
    // 80D67D70: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67D74u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67D74:
    ctx->pc = 0x80D67D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67D74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67D78:
    ctx->pc = 0x80D67D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D78u)) return;
    // 80D67D78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67D7C:
    ctx->pc = 0x80D67D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D7Cu)) return;
    // 80D67D7C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67D80:
    ctx->pc = 0x80D67D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D80u)) return;
    // 80D67D80: addi    r5, r5, 6992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6992);

label_80D67D84:
    ctx->pc = 0x80D67D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67D84: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67D84u)) return;
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
label_80D67D88:
    ctx->pc = 0x80D67D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D88u)) return;
    // 80D67D88: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67D8C:
    ctx->pc = 0x80D67D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D8Cu)) return;
    // 80D67D8C: addi    r5, r5, 6996
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6996);

label_80D67D90:
    ctx->pc = 0x80D67D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67D90: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67D90u)) return;
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
label_80D67D94:
    ctx->pc = 0x80D67D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D94u)) return;
    // 80D67D94: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67D98:
    ctx->pc = 0x80D67D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D98u)) return;
    // 80D67D98: addi    r5, r5, 7000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7000);

label_80D67D9C:
    ctx->pc = 0x80D67D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67D9C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67D9Cu)) return;
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
label_80D67DA0:
    ctx->pc = 0x80D67DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DA0u)) return;
    // 80D67DA0: bl      0x8045C750
    {
            ctx->lr = 0x80D67DA4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67DA4:
    ctx->pc = 0x80D67DA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67DA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67DA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67DA8:
    ctx->pc = 0x80D67DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DA8u)) return;
    // 80D67DA8: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D67DAC:
    ctx->pc = 0x80D67DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DACu)) return;
    // 80D67DAC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67DB0:
    ctx->pc = 0x80D67DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DB0u)) return;
    // 80D67DB0: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_80D67DB4:
    ctx->pc = 0x80D67DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DB4u)) return;
    // 80D67DB4: li      r6, 15872
    ctx->gpr[6] = (u32)(s32)(15872);

label_80D67DB8:
    ctx->pc = 0x80D67DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DB8u)) return;
    // 80D67DB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67DBC:
    ctx->pc = 0x80D67DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DBCu)) return;
    // 80D67DBC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67DC0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67DC0:
    ctx->pc = 0x80D67DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67DC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67DC4:
    ctx->pc = 0x80D67DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DC4u)) return;
    // 80D67DC4: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D67DC8:
    ctx->pc = 0x80D67DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DC8u)) return;
    // 80D67DC8: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67DCC:
    ctx->pc = 0x80D67DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DCCu)) return;
    // 80D67DCC: addi    r5, r5, 7004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7004);

label_80D67DD0:
    ctx->pc = 0x80D67DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67DD0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67DD0u)) return;
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
label_80D67DD4:
    ctx->pc = 0x80D67DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DD4u)) return;
    // 80D67DD4: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67DD8:
    ctx->pc = 0x80D67DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DD8u)) return;
    // 80D67DD8: addi    r5, r5, 7008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7008);

label_80D67DDC:
    ctx->pc = 0x80D67DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67DDC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67DDCu)) return;
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
label_80D67DE0:
    ctx->pc = 0x80D67DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DE0u)) return;
    // 80D67DE0: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67DE4:
    ctx->pc = 0x80D67DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DE4u)) return;
    // 80D67DE4: addi    r5, r5, 7012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7012);

label_80D67DE8:
    ctx->pc = 0x80D67DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67DE8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67DE8u)) return;
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
label_80D67DEC:
    ctx->pc = 0x80D67DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DECu)) return;
    // 80D67DEC: bl      0x8045C750
    {
            ctx->lr = 0x80D67DF0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67DF0:
    ctx->pc = 0x80D67DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67DF0: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80D67DF4:
    ctx->pc = 0x80D67DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DF4u)) return;
    // 80D67DF4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67DF8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67DF8:
    ctx->pc = 0x80D67DF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67DF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67DF8: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80D67DFC:
    ctx->pc = 0x80D67DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67DFCu)) return;
    // 80D67DFC: bl      0x80406090
    {
            ctx->lr = 0x80D67E00u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D67E00:
    ctx->pc = 0x80D67E00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67E00: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D67E04:
    ctx->pc = 0x80D67E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E04u)) return;
    // 80D67E04: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67E08u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67E08:
    ctx->pc = 0x80D67E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67E08: b       0x80D67E68
    {
            goto label_80D67E68;
    }

label_80D67E0C:
    ctx->pc = 0x80D67E0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67E0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67E10:
    ctx->pc = 0x80D67E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E10u)) return;
    // 80D67E10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67E14:
    ctx->pc = 0x80D67E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E14u)) return;
    // 80D67E14: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D67E18:
    ctx->pc = 0x80D67E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E18u)) return;
    // 80D67E18: addi    r5, r6, -4153
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4153);

label_80D67E1C:
    ctx->pc = 0x80D67E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E1Cu)) return;
    // 80D67E1C: addi    r6, r6, -14342
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14342);

label_80D67E20:
    ctx->pc = 0x80D67E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E20u)) return;
    // 80D67E20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67E24:
    ctx->pc = 0x80D67E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E24u)) return;
    // 80D67E24: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67E28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67E28:
    ctx->pc = 0x80D67E28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67E28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67E2C:
    ctx->pc = 0x80D67E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E2Cu)) return;
    // 80D67E2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67E30:
    ctx->pc = 0x80D67E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E30u)) return;
    // 80D67E30: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67E34:
    ctx->pc = 0x80D67E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E34u)) return;
    // 80D67E34: addi    r5, r5, 7016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7016);

label_80D67E38:
    ctx->pc = 0x80D67E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67E38: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67E38u)) return;
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
label_80D67E3C:
    ctx->pc = 0x80D67E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E3Cu)) return;
    // 80D67E3C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67E40:
    ctx->pc = 0x80D67E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E40u)) return;
    // 80D67E40: addi    r5, r5, 7020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7020);

label_80D67E44:
    ctx->pc = 0x80D67E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67E44: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67E44u)) return;
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
label_80D67E48:
    ctx->pc = 0x80D67E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E48u)) return;
    // 80D67E48: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67E4C:
    ctx->pc = 0x80D67E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E4Cu)) return;
    // 80D67E4C: addi    r5, r5, 7024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7024);

label_80D67E50:
    ctx->pc = 0x80D67E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67E50: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67E50u)) return;
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
label_80D67E54:
    ctx->pc = 0x80D67E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E54u)) return;
    // 80D67E54: bl      0x8045C750
    {
            ctx->lr = 0x80D67E58u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67E58:
    ctx->pc = 0x80D67E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67E58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67E5C:
    ctx->pc = 0x80D67E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E5Cu)) return;
    // 80D67E5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67E60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67E60:
    ctx->pc = 0x80D67E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67E60: bl      0x8045DE34
    {
            ctx->lr = 0x80D67E64u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D67E64:
    ctx->pc = 0x80D67E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67E64: bl      0x80460A80
    {
            ctx->lr = 0x80D67E68u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D67E68:
    ctx->pc = 0x80D67E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67E68: lwz     r0, 20(r1)
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
label_80D67E6C:
    ctx->pc = 0x80D67E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D67E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67E6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67E70:
    ctx->pc = 0x80D67E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E70u)) return;
    // 80D67E70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D67E74:
    ctx->pc = 0x80D67E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E74u)) return;
    // 80D67E74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D67D20;
        }
    }

    ctx->pc = 0x80D67E78u;
    return;
return_dispatch_80D67D20:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D67D54u: goto label_80D67D54;
    case 0x80D67D58u: goto label_80D67D58;
    case 0x80D67D5Cu: goto label_80D67D5C;
    case 0x80D67D74u: goto label_80D67D74;
    case 0x80D67DA4u: goto label_80D67DA4;
    case 0x80D67DC0u: goto label_80D67DC0;
    case 0x80D67DF0u: goto label_80D67DF0;
    case 0x80D67DF8u: goto label_80D67DF8;
    case 0x80D67E00u: goto label_80D67E00;
    case 0x80D67E08u: goto label_80D67E08;
    case 0x80D67E28u: goto label_80D67E28;
    case 0x80D67E58u: goto label_80D67E58;
    case 0x80D67E60u: goto label_80D67E60;
    case 0x80D67E64u: goto label_80D67E64;
    case 0x80D67E68u: goto label_80D67E68;
    default: return;
    }
}

