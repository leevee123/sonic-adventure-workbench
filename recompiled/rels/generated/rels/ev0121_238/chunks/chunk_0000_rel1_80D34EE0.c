// DolRecomp output
#include "../generated.h"

void func_80D34EE0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D34EE0[90] = {
        &&label_80D34EE0,
        &&label_80D34EE4,
        &&label_80D34EE8,
        &&label_80D34EEC,
        &&label_80D34EF0,
        &&label_80D34EF4,
        &&label_80D34EF8,
        &&label_80D34EFC,
        &&label_80D34F00,
        &&label_80D34F04,
        &&label_80D34F08,
        &&label_80D34F0C,
        &&label_80D34F10,
        &&label_80D34F14,
        &&label_80D34F18,
        &&label_80D34F1C,
        &&label_80D34F20,
        &&label_80D34F24,
        &&label_80D34F28,
        &&label_80D34F2C,
        &&label_80D34F30,
        &&label_80D34F34,
        &&label_80D34F38,
        &&label_80D34F3C,
        &&label_80D34F40,
        &&label_80D34F44,
        &&label_80D34F48,
        &&label_80D34F4C,
        &&label_80D34F50,
        &&label_80D34F54,
        &&label_80D34F58,
        &&label_80D34F5C,
        &&label_80D34F60,
        &&label_80D34F64,
        &&label_80D34F68,
        &&label_80D34F6C,
        &&label_80D34F70,
        &&label_80D34F74,
        &&label_80D34F78,
        &&label_80D34F7C,
        &&label_80D34F80,
        &&label_80D34F84,
        &&label_80D34F88,
        &&label_80D34F8C,
        &&label_80D34F90,
        &&label_80D34F94,
        &&label_80D34F98,
        &&label_80D34F9C,
        &&label_80D34FA0,
        &&label_80D34FA4,
        &&label_80D34FA8,
        &&label_80D34FAC,
        &&label_80D34FB0,
        &&label_80D34FB4,
        &&label_80D34FB8,
        &&label_80D34FBC,
        &&label_80D34FC0,
        &&label_80D34FC4,
        &&label_80D34FC8,
        &&label_80D34FCC,
        &&label_80D34FD0,
        &&label_80D34FD4,
        &&label_80D34FD8,
        &&label_80D34FDC,
        &&label_80D34FE0,
        &&label_80D34FE4,
        &&label_80D34FE8,
        &&label_80D34FEC,
        &&label_80D34FF0,
        &&label_80D34FF4,
        &&label_80D34FF8,
        &&label_80D34FFC,
        &&label_80D35000,
        &&label_80D35004,
        &&label_80D35008,
        &&label_80D3500C,
        &&label_80D35010,
        &&label_80D35014,
        &&label_80D35018,
        &&label_80D3501C,
        &&label_80D35020,
        &&label_80D35024,
        &&label_80D35028,
        &&label_80D3502C,
        &&label_80D35030,
        &&label_80D35034,
        &&label_80D35038,
        &&label_80D3503C,
        &&label_80D35040,
        &&label_80D35044
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D34EE0u && pc <= 0x80D35044u && ((pc - 0x80D34EE0u) & 3u) == 0u)
            goto *pc_table_80D34EE0[(pc - 0x80D34EE0u) >> 2];
    }
    return;
label_80D34EE0:
    ctx->pc = 0x80D34EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34EE0: stwu     r1, -16(r1)
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
label_80D34EE4:
    ctx->pc = 0x80D34EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34EE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34EE8:
    ctx->pc = 0x80D34EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34EE8: stw     r0, 20(r1)
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
label_80D34EEC:
    ctx->pc = 0x80D34EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EECu)) return;
    // 80D34EEC: cmpwi   r3, 2
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

label_80D34EF0:
    ctx->pc = 0x80D34EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EF0u)) return;
    // 80D34EF0: bc    12, 2, 0x80D35028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D35028;
        }
    }

label_80D34EF4:
    ctx->pc = 0x80D34EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34EF4: bc    4, 0, 0x80D34F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34F08;
        }
    }

label_80D34EF8:
    ctx->pc = 0x80D34EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34EF8: cmpwi   r3, 0
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

label_80D34EFC:
    ctx->pc = 0x80D34EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EFCu)) return;
    // 80D34EFC: bc    12, 2, 0x80D35038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D35038;
        }
    }

label_80D34F00:
    ctx->pc = 0x80D34F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34F00: bc    4, 0, 0x80D34F10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34F10;
        }
    }

label_80D34F04:
    ctx->pc = 0x80D34F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34F04: b       0x80D35038
    {
            goto label_80D35038;
    }

label_80D34F08:
    ctx->pc = 0x80D34F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34F08: cmpwi   r3, 4
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

label_80D34F0C:
    ctx->pc = 0x80D34F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F0Cu)) return;
    // 80D34F0C: b       0x80D35038
    {
            goto label_80D35038;
    }

label_80D34F10:
    ctx->pc = 0x80D34F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34F10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34F14:
    ctx->pc = 0x80D34F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F14u)) return;
    // 80D34F14: bl      0x8045EC10
    {
            ctx->lr = 0x80D34F18u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D34F18:
    ctx->pc = 0x80D34F18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34F18: bl      0x8045DE7C
    {
            ctx->lr = 0x80D34F1Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D34F1C:
    ctx->pc = 0x80D34F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34F1C: bl      0x80460A60
    {
            ctx->lr = 0x80D34F20u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D34F20:
    ctx->pc = 0x80D34F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34F20: bl      0x80460A24
    {
            ctx->lr = 0x80D34F24u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D34F24:
    ctx->pc = 0x80D34F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34F24: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D34F28:
    ctx->pc = 0x80D34F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F28u)) return;
    // 80D34F28: bl      0x80406090
    {
            ctx->lr = 0x80D34F2Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D34F2C:
    ctx->pc = 0x80D34F2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34F2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34F30:
    ctx->pc = 0x80D34F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F30u)) return;
    // 80D34F30: bl      0x8045F220
    {
            ctx->lr = 0x80D34F34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34F34:
    ctx->pc = 0x80D34F34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D34F34: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34F38:
    ctx->pc = 0x80D34F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F38u)) return;
    // 80D34F38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34F3C:
    ctx->pc = 0x80D34F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F3Cu)) return;
    // 80D34F3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34F40:
    ctx->pc = 0x80D34F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F40u)) return;
    // 80D34F40: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34F44:
    ctx->pc = 0x80D34F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F44u)) return;
    // 80D34F44: addi    r6, r6, -17456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17456);

label_80D34F48:
    ctx->pc = 0x80D34F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34F48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34F48u)) return;
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
label_80D34F4C:
    ctx->pc = 0x80D34F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F4Cu)) return;
    // 80D34F4C: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34F50:
    ctx->pc = 0x80D34F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F50u)) return;
    // 80D34F50: addi    r6, r6, -17452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17452);

label_80D34F54:
    ctx->pc = 0x80D34F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34F54: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34F54u)) return;
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
label_80D34F58:
    ctx->pc = 0x80D34F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F58u)) return;
    // 80D34F58: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34F58u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34F5C:
    ctx->pc = 0x80D34F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F5Cu)) return;
    // 80D34F5C: bl      0x8045C4B8
    {
            ctx->lr = 0x80D34F60u;
            ctx->pc = 0x8045C4B8u;
            return;
    }

label_80D34F60:
    ctx->pc = 0x80D34F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34F60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34F64:
    ctx->pc = 0x80D34F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F64u)) return;
    // 80D34F64: bl      0x8045F220
    {
            ctx->lr = 0x80D34F68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34F68:
    ctx->pc = 0x80D34F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34F68: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34F6C:
    ctx->pc = 0x80D34F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F6Cu)) return;
    // 80D34F6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34F70:
    ctx->pc = 0x80D34F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F70u)) return;
    // 80D34F70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34F74:
    ctx->pc = 0x80D34F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F74u)) return;
    // 80D34F74: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34F78:
    ctx->pc = 0x80D34F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F78u)) return;
    // 80D34F78: addi    r6, r6, -17448
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17448);

label_80D34F7C:
    ctx->pc = 0x80D34F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34F7C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34F7Cu)) return;
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
label_80D34F80:
    ctx->pc = 0x80D34F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F80u)) return;
    // 80D34F80: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34F84:
    ctx->pc = 0x80D34F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F84u)) return;
    // 80D34F84: addi    r6, r6, -17452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17452);

label_80D34F88:
    ctx->pc = 0x80D34F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34F88: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34F88u)) return;
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
label_80D34F8C:
    ctx->pc = 0x80D34F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F8Cu)) return;
    // 80D34F8C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34F8Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34F90:
    ctx->pc = 0x80D34F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F90u)) return;
    // 80D34F90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34F94:
    ctx->pc = 0x80D34F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F94u)) return;
    // 80D34F94: bl      0x8045C3C0
    {
            ctx->lr = 0x80D34F98u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D34F98:
    ctx->pc = 0x80D34F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34F98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34F9C:
    ctx->pc = 0x80D34F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34F9Cu)) return;
    // 80D34F9C: bl      0x8045F220
    {
            ctx->lr = 0x80D34FA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34FA0:
    ctx->pc = 0x80D34FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D34FA0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34FA4:
    ctx->pc = 0x80D34FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FA4u)) return;
    // 80D34FA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34FA8:
    ctx->pc = 0x80D34FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FA8u)) return;
    // 80D34FA8: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D34FAC:
    ctx->pc = 0x80D34FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FACu)) return;
    // 80D34FAC: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34FB0:
    ctx->pc = 0x80D34FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FB0u)) return;
    // 80D34FB0: addi    r6, r6, -17456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17456);

label_80D34FB4:
    ctx->pc = 0x80D34FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34FB4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34FB4u)) return;
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
label_80D34FB8:
    ctx->pc = 0x80D34FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FB8u)) return;
    // 80D34FB8: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34FBC:
    ctx->pc = 0x80D34FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FBCu)) return;
    // 80D34FBC: addi    r6, r6, -17452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17452);

label_80D34FC0:
    ctx->pc = 0x80D34FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34FC0: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34FC0u)) return;
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
label_80D34FC4:
    ctx->pc = 0x80D34FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FC4u)) return;
    // 80D34FC4: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34FC8:
    ctx->pc = 0x80D34FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FC8u)) return;
    // 80D34FC8: addi    r6, r6, -17444
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17444);

label_80D34FCC:
    ctx->pc = 0x80D34FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34FCC: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34FCCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D34FD0:
    ctx->pc = 0x80D34FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FD0u)) return;
    // 80D34FD0: bl      0x8045C4B8
    {
            ctx->lr = 0x80D34FD4u;
            ctx->pc = 0x8045C4B8u;
            return;
    }

label_80D34FD4:
    ctx->pc = 0x80D34FD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34FD4: li      r3, 1129
    ctx->gpr[3] = (u32)(s32)(1129);

label_80D34FD8:
    ctx->pc = 0x80D34FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FD8u)) return;
    // 80D34FD8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D34FDCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D34FDC:
    ctx->pc = 0x80D34FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34FDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34FE0:
    ctx->pc = 0x80D34FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FE0u)) return;
    // 80D34FE0: bl      0x8045F220
    {
            ctx->lr = 0x80D34FE4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34FE4:
    ctx->pc = 0x80D34FE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34FE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D34FE4: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34FE8:
    ctx->pc = 0x80D34FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FE8u)) return;
    // 80D34FE8: addi    r4, r4, -17200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17200);

label_80D34FEC:
    ctx->pc = 0x80D34FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FECu)) return;
    // 80D34FEC: bl      0x8045C060
    {
            ctx->lr = 0x80D34FF0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D34FF0:
    ctx->pc = 0x80D34FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D34FF0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34FF4:
    ctx->pc = 0x80D34FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FF4u)) return;
    // 80D34FF4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D34FF8:
    ctx->pc = 0x80D34FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34FF8: lwz     r0, 0(r3)
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
label_80D34FFC:
    ctx->pc = 0x80D34FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34FFCu)) return;
    // 80D34FFC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35000:
    ctx->pc = 0x80D35000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35000u)) return;
    // 80D35000: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35004:
    ctx->pc = 0x80D35004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35004u)) return;
    // 80D35004: addi    r3, r3, -17228
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17228);

label_80D35008:
    ctx->pc = 0x80D35008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35008: lwzx    r3, r3, r0
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
label_80D3500C:
    ctx->pc = 0x80D3500Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3500Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3500C: lwz     r3, 0(r3)
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
label_80D35010:
    ctx->pc = 0x80D35010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35010u)) return;
    // 80D35010: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35014u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35014:
    ctx->pc = 0x80D35014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35014: bl      0x8045BFF4
    {
            ctx->lr = 0x80D35018u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D35018:
    ctx->pc = 0x80D35018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35018: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3501C:
    ctx->pc = 0x80D3501Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3501Cu)) return;
    // 80D3501C: bl      0x8045F220
    {
            ctx->lr = 0x80D35020u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35020:
    ctx->pc = 0x80D35020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35020: bl      0x8045C034
    {
            ctx->lr = 0x80D35024u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D35024:
    ctx->pc = 0x80D35024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35024: b       0x80D35038
    {
            goto label_80D35038;
    }

label_80D35028:
    ctx->pc = 0x80D35028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35028: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3502C:
    ctx->pc = 0x80D3502Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3502Cu)) return;
    // 80D3502C: bl      0x8045EC10
    {
            ctx->lr = 0x80D35030u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D35030:
    ctx->pc = 0x80D35030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35030: bl      0x8045DE34
    {
            ctx->lr = 0x80D35034u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D35034:
    ctx->pc = 0x80D35034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35034: bl      0x80460A80
    {
            ctx->lr = 0x80D35038u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D35038:
    ctx->pc = 0x80D35038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35038: lwz     r0, 20(r1)
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
label_80D3503C:
    ctx->pc = 0x80D3503Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D3503Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3503C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35040:
    ctx->pc = 0x80D35040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35040u)) return;
    // 80D35040: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D35044:
    ctx->pc = 0x80D35044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35044u)) return;
    // 80D35044: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D34EE0;
        }
    }

    ctx->pc = 0x80D35048u;
    return;
return_dispatch_80D34EE0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D34F18u: goto label_80D34F18;
    case 0x80D34F1Cu: goto label_80D34F1C;
    case 0x80D34F20u: goto label_80D34F20;
    case 0x80D34F24u: goto label_80D34F24;
    case 0x80D34F2Cu: goto label_80D34F2C;
    case 0x80D34F34u: goto label_80D34F34;
    case 0x80D34F60u: goto label_80D34F60;
    case 0x80D34F68u: goto label_80D34F68;
    case 0x80D34F98u: goto label_80D34F98;
    case 0x80D34FA0u: goto label_80D34FA0;
    case 0x80D34FD4u: goto label_80D34FD4;
    case 0x80D34FDCu: goto label_80D34FDC;
    case 0x80D34FE4u: goto label_80D34FE4;
    case 0x80D34FF0u: goto label_80D34FF0;
    case 0x80D35014u: goto label_80D35014;
    case 0x80D35018u: goto label_80D35018;
    case 0x80D35020u: goto label_80D35020;
    case 0x80D35024u: goto label_80D35024;
    case 0x80D35030u: goto label_80D35030;
    case 0x80D35034u: goto label_80D35034;
    case 0x80D35038u: goto label_80D35038;
    default: return;
    }
}

