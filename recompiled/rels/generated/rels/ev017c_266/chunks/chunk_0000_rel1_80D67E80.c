// DolRecomp output
#include "../generated.h"

void func_80D67E80(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D67E80[86] = {
        &&label_80D67E80,
        &&label_80D67E84,
        &&label_80D67E88,
        &&label_80D67E8C,
        &&label_80D67E90,
        &&label_80D67E94,
        &&label_80D67E98,
        &&label_80D67E9C,
        &&label_80D67EA0,
        &&label_80D67EA4,
        &&label_80D67EA8,
        &&label_80D67EAC,
        &&label_80D67EB0,
        &&label_80D67EB4,
        &&label_80D67EB8,
        &&label_80D67EBC,
        &&label_80D67EC0,
        &&label_80D67EC4,
        &&label_80D67EC8,
        &&label_80D67ECC,
        &&label_80D67ED0,
        &&label_80D67ED4,
        &&label_80D67ED8,
        &&label_80D67EDC,
        &&label_80D67EE0,
        &&label_80D67EE4,
        &&label_80D67EE8,
        &&label_80D67EEC,
        &&label_80D67EF0,
        &&label_80D67EF4,
        &&label_80D67EF8,
        &&label_80D67EFC,
        &&label_80D67F00,
        &&label_80D67F04,
        &&label_80D67F08,
        &&label_80D67F0C,
        &&label_80D67F10,
        &&label_80D67F14,
        &&label_80D67F18,
        &&label_80D67F1C,
        &&label_80D67F20,
        &&label_80D67F24,
        &&label_80D67F28,
        &&label_80D67F2C,
        &&label_80D67F30,
        &&label_80D67F34,
        &&label_80D67F38,
        &&label_80D67F3C,
        &&label_80D67F40,
        &&label_80D67F44,
        &&label_80D67F48,
        &&label_80D67F4C,
        &&label_80D67F50,
        &&label_80D67F54,
        &&label_80D67F58,
        &&label_80D67F5C,
        &&label_80D67F60,
        &&label_80D67F64,
        &&label_80D67F68,
        &&label_80D67F6C,
        &&label_80D67F70,
        &&label_80D67F74,
        &&label_80D67F78,
        &&label_80D67F7C,
        &&label_80D67F80,
        &&label_80D67F84,
        &&label_80D67F88,
        &&label_80D67F8C,
        &&label_80D67F90,
        &&label_80D67F94,
        &&label_80D67F98,
        &&label_80D67F9C,
        &&label_80D67FA0,
        &&label_80D67FA4,
        &&label_80D67FA8,
        &&label_80D67FAC,
        &&label_80D67FB0,
        &&label_80D67FB4,
        &&label_80D67FB8,
        &&label_80D67FBC,
        &&label_80D67FC0,
        &&label_80D67FC4,
        &&label_80D67FC8,
        &&label_80D67FCC,
        &&label_80D67FD0,
        &&label_80D67FD4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D67E80u && pc <= 0x80D67FD4u && ((pc - 0x80D67E80u) & 3u) == 0u)
            goto *pc_table_80D67E80[(pc - 0x80D67E80u) >> 2];
    }
    return;
label_80D67E80:
    ctx->pc = 0x80D67E80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67E80: stwu     r1, -16(r1)
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
label_80D67E84:
    ctx->pc = 0x80D67E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D67E84: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67E88:
    ctx->pc = 0x80D67E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67E88: stw     r0, 20(r1)
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
label_80D67E8C:
    ctx->pc = 0x80D67E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E8Cu)) return;
    // 80D67E8C: cmpwi   r3, 2
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

label_80D67E90:
    ctx->pc = 0x80D67E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E90u)) return;
    // 80D67E90: bc    12, 2, 0x80D67F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67F6C;
        }
    }

label_80D67E94:
    ctx->pc = 0x80D67E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67E94: bc    4, 0, 0x80D67EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67EA8;
        }
    }

label_80D67E98:
    ctx->pc = 0x80D67E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67E98: cmpwi   r3, 0
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

label_80D67E9C:
    ctx->pc = 0x80D67E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67E9Cu)) return;
    // 80D67E9C: bc    12, 2, 0x80D67FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67FC8;
        }
    }

label_80D67EA0:
    ctx->pc = 0x80D67EA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67EA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67EA0: bc    4, 0, 0x80D67EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67EB0;
        }
    }

label_80D67EA4:
    ctx->pc = 0x80D67EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67EA4: b       0x80D67FC8
    {
            goto label_80D67FC8;
    }

label_80D67EA8:
    ctx->pc = 0x80D67EA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67EA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67EA8: cmpwi   r3, 4
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

label_80D67EAC:
    ctx->pc = 0x80D67EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EACu)) return;
    // 80D67EAC: b       0x80D67FC8
    {
            goto label_80D67FC8;
    }

label_80D67EB0:
    ctx->pc = 0x80D67EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67EB0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D67EB4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D67EB4:
    ctx->pc = 0x80D67EB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67EB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67EB4: bl      0x80460A60
    {
            ctx->lr = 0x80D67EB8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D67EB8:
    ctx->pc = 0x80D67EB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67EB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67EB8: bl      0x80460A24
    {
            ctx->lr = 0x80D67EBCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D67EBC:
    ctx->pc = 0x80D67EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D67EBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67EC0:
    ctx->pc = 0x80D67EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EC0u)) return;
    // 80D67EC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67EC4:
    ctx->pc = 0x80D67EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EC4u)) return;
    // 80D67EC4: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80D67EC8:
    ctx->pc = 0x80D67EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EC8u)) return;
    // 80D67EC8: li      r6, 26112
    ctx->gpr[6] = (u32)(s32)(26112);

label_80D67ECC:
    ctx->pc = 0x80D67ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67ECCu)) return;
    // 80D67ECC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67ED0:
    ctx->pc = 0x80D67ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67ED0u)) return;
    // 80D67ED0: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67ED4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67ED4:
    ctx->pc = 0x80D67ED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67ED4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67ED8:
    ctx->pc = 0x80D67ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67ED8u)) return;
    // 80D67ED8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67EDC:
    ctx->pc = 0x80D67EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EDCu)) return;
    // 80D67EDC: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67EE0:
    ctx->pc = 0x80D67EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EE0u)) return;
    // 80D67EE0: addi    r5, r5, 7088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7088);

label_80D67EE4:
    ctx->pc = 0x80D67EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67EE4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67EE4u)) return;
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
label_80D67EE8:
    ctx->pc = 0x80D67EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EE8u)) return;
    // 80D67EE8: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67EEC:
    ctx->pc = 0x80D67EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EECu)) return;
    // 80D67EEC: addi    r5, r5, 7092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7092);

label_80D67EF0:
    ctx->pc = 0x80D67EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67EF0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67EF0u)) return;
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
label_80D67EF4:
    ctx->pc = 0x80D67EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EF4u)) return;
    // 80D67EF4: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67EF8:
    ctx->pc = 0x80D67EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EF8u)) return;
    // 80D67EF8: addi    r5, r5, 7096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7096);

label_80D67EFC:
    ctx->pc = 0x80D67EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67EFC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67EFCu)) return;
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
label_80D67F00:
    ctx->pc = 0x80D67F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F00u)) return;
    // 80D67F00: bl      0x8045C750
    {
            ctx->lr = 0x80D67F04u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67F04:
    ctx->pc = 0x80D67F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67F04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67F08:
    ctx->pc = 0x80D67F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F08u)) return;
    // 80D67F08: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D67F0C:
    ctx->pc = 0x80D67F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F0Cu)) return;
    // 80D67F0C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67F10:
    ctx->pc = 0x80D67F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F10u)) return;
    // 80D67F10: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_80D67F14:
    ctx->pc = 0x80D67F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F14u)) return;
    // 80D67F14: li      r6, 15872
    ctx->gpr[6] = (u32)(s32)(15872);

label_80D67F18:
    ctx->pc = 0x80D67F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F18u)) return;
    // 80D67F18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67F1C:
    ctx->pc = 0x80D67F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F1Cu)) return;
    // 80D67F1C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67F20u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67F20:
    ctx->pc = 0x80D67F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67F20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67F24:
    ctx->pc = 0x80D67F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F24u)) return;
    // 80D67F24: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D67F28:
    ctx->pc = 0x80D67F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F28u)) return;
    // 80D67F28: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67F2C:
    ctx->pc = 0x80D67F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F2Cu)) return;
    // 80D67F2C: addi    r5, r5, 7100
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7100);

label_80D67F30:
    ctx->pc = 0x80D67F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67F30: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67F30u)) return;
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
label_80D67F34:
    ctx->pc = 0x80D67F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F34u)) return;
    // 80D67F34: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67F38:
    ctx->pc = 0x80D67F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F38u)) return;
    // 80D67F38: addi    r5, r5, 7104
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7104);

label_80D67F3C:
    ctx->pc = 0x80D67F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67F3C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67F3Cu)) return;
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
label_80D67F40:
    ctx->pc = 0x80D67F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F40u)) return;
    // 80D67F40: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67F44:
    ctx->pc = 0x80D67F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F44u)) return;
    // 80D67F44: addi    r5, r5, 7108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7108);

label_80D67F48:
    ctx->pc = 0x80D67F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67F48: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67F48u)) return;
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
label_80D67F4C:
    ctx->pc = 0x80D67F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F4Cu)) return;
    // 80D67F4C: bl      0x8045C750
    {
            ctx->lr = 0x80D67F50u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67F50:
    ctx->pc = 0x80D67F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67F50: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80D67F54:
    ctx->pc = 0x80D67F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F54u)) return;
    // 80D67F54: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67F58u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67F58:
    ctx->pc = 0x80D67F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67F58: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80D67F5C:
    ctx->pc = 0x80D67F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F5Cu)) return;
    // 80D67F5C: bl      0x80406090
    {
            ctx->lr = 0x80D67F60u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D67F60:
    ctx->pc = 0x80D67F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67F60: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D67F64:
    ctx->pc = 0x80D67F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F64u)) return;
    // 80D67F64: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67F68u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67F68:
    ctx->pc = 0x80D67F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67F68: b       0x80D67FC8
    {
            goto label_80D67FC8;
    }

label_80D67F6C:
    ctx->pc = 0x80D67F6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67F6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67F70:
    ctx->pc = 0x80D67F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F70u)) return;
    // 80D67F70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67F74:
    ctx->pc = 0x80D67F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F74u)) return;
    // 80D67F74: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67F78:
    ctx->pc = 0x80D67F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F78u)) return;
    // 80D67F78: addi    r5, r5, -3840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3840);

label_80D67F7C:
    ctx->pc = 0x80D67F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F7Cu)) return;
    // 80D67F7C: li      r6, 28416
    ctx->gpr[6] = (u32)(s32)(28416);

label_80D67F80:
    ctx->pc = 0x80D67F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F80u)) return;
    // 80D67F80: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67F84:
    ctx->pc = 0x80D67F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F84u)) return;
    // 80D67F84: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67F88u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67F88:
    ctx->pc = 0x80D67F88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67F88: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67F8C:
    ctx->pc = 0x80D67F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F8Cu)) return;
    // 80D67F8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67F90:
    ctx->pc = 0x80D67F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F90u)) return;
    // 80D67F90: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67F94:
    ctx->pc = 0x80D67F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F94u)) return;
    // 80D67F94: addi    r5, r5, 7112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7112);

label_80D67F98:
    ctx->pc = 0x80D67F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67F98: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67F98u)) return;
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
label_80D67F9C:
    ctx->pc = 0x80D67F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67F9Cu)) return;
    // 80D67F9C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67FA0:
    ctx->pc = 0x80D67FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FA0u)) return;
    // 80D67FA0: addi    r5, r5, 7116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7116);

label_80D67FA4:
    ctx->pc = 0x80D67FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67FA4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67FA4u)) return;
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
label_80D67FA8:
    ctx->pc = 0x80D67FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FA8u)) return;
    // 80D67FA8: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67FAC:
    ctx->pc = 0x80D67FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FACu)) return;
    // 80D67FAC: addi    r5, r5, 7120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7120);

label_80D67FB0:
    ctx->pc = 0x80D67FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67FB0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67FB0u)) return;
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
label_80D67FB4:
    ctx->pc = 0x80D67FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FB4u)) return;
    // 80D67FB4: bl      0x8045C750
    {
            ctx->lr = 0x80D67FB8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67FB8:
    ctx->pc = 0x80D67FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67FB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67FBC:
    ctx->pc = 0x80D67FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FBCu)) return;
    // 80D67FBC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67FC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67FC0:
    ctx->pc = 0x80D67FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67FC0: bl      0x8045DE34
    {
            ctx->lr = 0x80D67FC4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D67FC4:
    ctx->pc = 0x80D67FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67FC4: bl      0x80460A80
    {
            ctx->lr = 0x80D67FC8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D67FC8:
    ctx->pc = 0x80D67FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67FC8: lwz     r0, 20(r1)
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
label_80D67FCC:
    ctx->pc = 0x80D67FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D67FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67FCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67FD0:
    ctx->pc = 0x80D67FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FD0u)) return;
    // 80D67FD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D67FD4:
    ctx->pc = 0x80D67FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67FD4u)) return;
    // 80D67FD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D67E80;
        }
    }

    ctx->pc = 0x80D67FD8u;
    return;
return_dispatch_80D67E80:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D67EB4u: goto label_80D67EB4;
    case 0x80D67EB8u: goto label_80D67EB8;
    case 0x80D67EBCu: goto label_80D67EBC;
    case 0x80D67ED4u: goto label_80D67ED4;
    case 0x80D67F04u: goto label_80D67F04;
    case 0x80D67F20u: goto label_80D67F20;
    case 0x80D67F50u: goto label_80D67F50;
    case 0x80D67F58u: goto label_80D67F58;
    case 0x80D67F60u: goto label_80D67F60;
    case 0x80D67F68u: goto label_80D67F68;
    case 0x80D67F88u: goto label_80D67F88;
    case 0x80D67FB8u: goto label_80D67FB8;
    case 0x80D67FC0u: goto label_80D67FC0;
    case 0x80D67FC4u: goto label_80D67FC4;
    case 0x80D67FC8u: goto label_80D67FC8;
    default: return;
    }
}

