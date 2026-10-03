// DolRecomp output
#include "../generated.h"

void func_80D67BC0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D67BC0[86] = {
        &&label_80D67BC0,
        &&label_80D67BC4,
        &&label_80D67BC8,
        &&label_80D67BCC,
        &&label_80D67BD0,
        &&label_80D67BD4,
        &&label_80D67BD8,
        &&label_80D67BDC,
        &&label_80D67BE0,
        &&label_80D67BE4,
        &&label_80D67BE8,
        &&label_80D67BEC,
        &&label_80D67BF0,
        &&label_80D67BF4,
        &&label_80D67BF8,
        &&label_80D67BFC,
        &&label_80D67C00,
        &&label_80D67C04,
        &&label_80D67C08,
        &&label_80D67C0C,
        &&label_80D67C10,
        &&label_80D67C14,
        &&label_80D67C18,
        &&label_80D67C1C,
        &&label_80D67C20,
        &&label_80D67C24,
        &&label_80D67C28,
        &&label_80D67C2C,
        &&label_80D67C30,
        &&label_80D67C34,
        &&label_80D67C38,
        &&label_80D67C3C,
        &&label_80D67C40,
        &&label_80D67C44,
        &&label_80D67C48,
        &&label_80D67C4C,
        &&label_80D67C50,
        &&label_80D67C54,
        &&label_80D67C58,
        &&label_80D67C5C,
        &&label_80D67C60,
        &&label_80D67C64,
        &&label_80D67C68,
        &&label_80D67C6C,
        &&label_80D67C70,
        &&label_80D67C74,
        &&label_80D67C78,
        &&label_80D67C7C,
        &&label_80D67C80,
        &&label_80D67C84,
        &&label_80D67C88,
        &&label_80D67C8C,
        &&label_80D67C90,
        &&label_80D67C94,
        &&label_80D67C98,
        &&label_80D67C9C,
        &&label_80D67CA0,
        &&label_80D67CA4,
        &&label_80D67CA8,
        &&label_80D67CAC,
        &&label_80D67CB0,
        &&label_80D67CB4,
        &&label_80D67CB8,
        &&label_80D67CBC,
        &&label_80D67CC0,
        &&label_80D67CC4,
        &&label_80D67CC8,
        &&label_80D67CCC,
        &&label_80D67CD0,
        &&label_80D67CD4,
        &&label_80D67CD8,
        &&label_80D67CDC,
        &&label_80D67CE0,
        &&label_80D67CE4,
        &&label_80D67CE8,
        &&label_80D67CEC,
        &&label_80D67CF0,
        &&label_80D67CF4,
        &&label_80D67CF8,
        &&label_80D67CFC,
        &&label_80D67D00,
        &&label_80D67D04,
        &&label_80D67D08,
        &&label_80D67D0C,
        &&label_80D67D10,
        &&label_80D67D14
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D67BC0u && pc <= 0x80D67D14u && ((pc - 0x80D67BC0u) & 3u) == 0u)
            goto *pc_table_80D67BC0[(pc - 0x80D67BC0u) >> 2];
    }
    return;
label_80D67BC0:
    ctx->pc = 0x80D67BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67BC0: stwu     r1, -16(r1)
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
label_80D67BC4:
    ctx->pc = 0x80D67BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D67BC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67BC8:
    ctx->pc = 0x80D67BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67BC8: stw     r0, 20(r1)
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
label_80D67BCC:
    ctx->pc = 0x80D67BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BCCu)) return;
    // 80D67BCC: cmpwi   r3, 2
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

label_80D67BD0:
    ctx->pc = 0x80D67BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BD0u)) return;
    // 80D67BD0: bc    12, 2, 0x80D67CAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67CAC;
        }
    }

label_80D67BD4:
    ctx->pc = 0x80D67BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67BD4: bc    4, 0, 0x80D67BE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67BE8;
        }
    }

label_80D67BD8:
    ctx->pc = 0x80D67BD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67BD8: cmpwi   r3, 0
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

label_80D67BDC:
    ctx->pc = 0x80D67BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BDCu)) return;
    // 80D67BDC: bc    12, 2, 0x80D67D08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67D08;
        }
    }

label_80D67BE0:
    ctx->pc = 0x80D67BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67BE0: bc    4, 0, 0x80D67BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D67BF0;
        }
    }

label_80D67BE4:
    ctx->pc = 0x80D67BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67BE4: b       0x80D67D08
    {
            goto label_80D67D08;
    }

label_80D67BE8:
    ctx->pc = 0x80D67BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67BE8: cmpwi   r3, 4
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

label_80D67BEC:
    ctx->pc = 0x80D67BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67BECu)) return;
    // 80D67BEC: b       0x80D67D08
    {
            goto label_80D67D08;
    }

label_80D67BF0:
    ctx->pc = 0x80D67BF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67BF0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D67BF4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D67BF4:
    ctx->pc = 0x80D67BF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67BF4: bl      0x80460A60
    {
            ctx->lr = 0x80D67BF8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D67BF8:
    ctx->pc = 0x80D67BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67BF8: bl      0x80460A24
    {
            ctx->lr = 0x80D67BFCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D67BFC:
    ctx->pc = 0x80D67BFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67BFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D67BFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67C00:
    ctx->pc = 0x80D67C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C00u)) return;
    // 80D67C00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67C04:
    ctx->pc = 0x80D67C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C04u)) return;
    // 80D67C04: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80D67C08:
    ctx->pc = 0x80D67C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C08u)) return;
    // 80D67C08: li      r6, 26112
    ctx->gpr[6] = (u32)(s32)(26112);

label_80D67C0C:
    ctx->pc = 0x80D67C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C0Cu)) return;
    // 80D67C0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67C10:
    ctx->pc = 0x80D67C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C10u)) return;
    // 80D67C10: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67C14u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67C14:
    ctx->pc = 0x80D67C14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67C14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67C14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67C18:
    ctx->pc = 0x80D67C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C18u)) return;
    // 80D67C18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67C1C:
    ctx->pc = 0x80D67C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C1Cu)) return;
    // 80D67C1C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67C20:
    ctx->pc = 0x80D67C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C20u)) return;
    // 80D67C20: addi    r5, r5, 6896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6896);

label_80D67C24:
    ctx->pc = 0x80D67C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67C24: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67C24u)) return;
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
label_80D67C28:
    ctx->pc = 0x80D67C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C28u)) return;
    // 80D67C28: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67C2C:
    ctx->pc = 0x80D67C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C2Cu)) return;
    // 80D67C2C: addi    r5, r5, 6900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6900);

label_80D67C30:
    ctx->pc = 0x80D67C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67C30: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67C30u)) return;
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
label_80D67C34:
    ctx->pc = 0x80D67C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C34u)) return;
    // 80D67C34: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67C38:
    ctx->pc = 0x80D67C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C38u)) return;
    // 80D67C38: addi    r5, r5, 6904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6904);

label_80D67C3C:
    ctx->pc = 0x80D67C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67C3C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67C3Cu)) return;
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
label_80D67C40:
    ctx->pc = 0x80D67C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C40u)) return;
    // 80D67C40: bl      0x8045C750
    {
            ctx->lr = 0x80D67C44u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67C44:
    ctx->pc = 0x80D67C44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67C44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67C44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67C48:
    ctx->pc = 0x80D67C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C48u)) return;
    // 80D67C48: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D67C4C:
    ctx->pc = 0x80D67C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C4Cu)) return;
    // 80D67C4C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67C50:
    ctx->pc = 0x80D67C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C50u)) return;
    // 80D67C50: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_80D67C54:
    ctx->pc = 0x80D67C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C54u)) return;
    // 80D67C54: li      r6, 15872
    ctx->gpr[6] = (u32)(s32)(15872);

label_80D67C58:
    ctx->pc = 0x80D67C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C58u)) return;
    // 80D67C58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67C5C:
    ctx->pc = 0x80D67C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C5Cu)) return;
    // 80D67C5C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67C60u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67C60:
    ctx->pc = 0x80D67C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67C60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67C64:
    ctx->pc = 0x80D67C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C64u)) return;
    // 80D67C64: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D67C68:
    ctx->pc = 0x80D67C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C68u)) return;
    // 80D67C68: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67C6C:
    ctx->pc = 0x80D67C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C6Cu)) return;
    // 80D67C6C: addi    r5, r5, 6908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6908);

label_80D67C70:
    ctx->pc = 0x80D67C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67C70: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67C70u)) return;
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
label_80D67C74:
    ctx->pc = 0x80D67C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C74u)) return;
    // 80D67C74: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67C78:
    ctx->pc = 0x80D67C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C78u)) return;
    // 80D67C78: addi    r5, r5, 6912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6912);

label_80D67C7C:
    ctx->pc = 0x80D67C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67C7C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67C7Cu)) return;
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
label_80D67C80:
    ctx->pc = 0x80D67C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C80u)) return;
    // 80D67C80: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67C84:
    ctx->pc = 0x80D67C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C84u)) return;
    // 80D67C84: addi    r5, r5, 6916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6916);

label_80D67C88:
    ctx->pc = 0x80D67C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67C88: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67C88u)) return;
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
label_80D67C8C:
    ctx->pc = 0x80D67C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C8Cu)) return;
    // 80D67C8C: bl      0x8045C750
    {
            ctx->lr = 0x80D67C90u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67C90:
    ctx->pc = 0x80D67C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67C90: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80D67C94:
    ctx->pc = 0x80D67C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C94u)) return;
    // 80D67C94: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67C98u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67C98:
    ctx->pc = 0x80D67C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67C98: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80D67C9C:
    ctx->pc = 0x80D67C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67C9Cu)) return;
    // 80D67C9C: bl      0x80406090
    {
            ctx->lr = 0x80D67CA0u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D67CA0:
    ctx->pc = 0x80D67CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67CA0: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D67CA4:
    ctx->pc = 0x80D67CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CA4u)) return;
    // 80D67CA4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67CA8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67CA8:
    ctx->pc = 0x80D67CA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67CA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67CA8: b       0x80D67D08
    {
            goto label_80D67D08;
    }

label_80D67CAC:
    ctx->pc = 0x80D67CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D67CAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67CB0:
    ctx->pc = 0x80D67CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CB0u)) return;
    // 80D67CB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67CB4:
    ctx->pc = 0x80D67CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CB4u)) return;
    // 80D67CB4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D67CB8:
    ctx->pc = 0x80D67CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CB8u)) return;
    // 80D67CB8: addi    r5, r6, -4153
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4153);

label_80D67CBC:
    ctx->pc = 0x80D67CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CBCu)) return;
    // 80D67CBC: addi    r6, r6, -14342
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14342);

label_80D67CC0:
    ctx->pc = 0x80D67CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CC0u)) return;
    // 80D67CC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67CC4:
    ctx->pc = 0x80D67CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CC4u)) return;
    // 80D67CC4: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67CC8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67CC8:
    ctx->pc = 0x80D67CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67CC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67CCC:
    ctx->pc = 0x80D67CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CCCu)) return;
    // 80D67CCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67CD0:
    ctx->pc = 0x80D67CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CD0u)) return;
    // 80D67CD0: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67CD4:
    ctx->pc = 0x80D67CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CD4u)) return;
    // 80D67CD4: addi    r5, r5, 6920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6920);

label_80D67CD8:
    ctx->pc = 0x80D67CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67CD8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67CD8u)) return;
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
label_80D67CDC:
    ctx->pc = 0x80D67CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CDCu)) return;
    // 80D67CDC: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67CE0:
    ctx->pc = 0x80D67CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CE0u)) return;
    // 80D67CE0: addi    r5, r5, 6924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6924);

label_80D67CE4:
    ctx->pc = 0x80D67CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67CE4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67CE4u)) return;
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
label_80D67CE8:
    ctx->pc = 0x80D67CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CE8u)) return;
    // 80D67CE8: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67CEC:
    ctx->pc = 0x80D67CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CECu)) return;
    // 80D67CEC: addi    r5, r5, 6928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6928);

label_80D67CF0:
    ctx->pc = 0x80D67CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67CF0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67CF0u)) return;
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
label_80D67CF4:
    ctx->pc = 0x80D67CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CF4u)) return;
    // 80D67CF4: bl      0x8045C750
    {
            ctx->lr = 0x80D67CF8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67CF8:
    ctx->pc = 0x80D67CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67CF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67CFC:
    ctx->pc = 0x80D67CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67CFCu)) return;
    // 80D67CFC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67D00u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67D00:
    ctx->pc = 0x80D67D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D00: bl      0x8045DE34
    {
            ctx->lr = 0x80D67D04u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D67D04:
    ctx->pc = 0x80D67D04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67D04: bl      0x80460A80
    {
            ctx->lr = 0x80D67D08u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D67D08:
    ctx->pc = 0x80D67D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67D08: lwz     r0, 20(r1)
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
label_80D67D0C:
    ctx->pc = 0x80D67D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D67D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67D0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67D10:
    ctx->pc = 0x80D67D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D10u)) return;
    // 80D67D10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D67D14:
    ctx->pc = 0x80D67D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67D14u)) return;
    // 80D67D14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D67BC0;
        }
    }

    ctx->pc = 0x80D67D18u;
    return;
return_dispatch_80D67BC0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D67BF4u: goto label_80D67BF4;
    case 0x80D67BF8u: goto label_80D67BF8;
    case 0x80D67BFCu: goto label_80D67BFC;
    case 0x80D67C14u: goto label_80D67C14;
    case 0x80D67C44u: goto label_80D67C44;
    case 0x80D67C60u: goto label_80D67C60;
    case 0x80D67C90u: goto label_80D67C90;
    case 0x80D67C98u: goto label_80D67C98;
    case 0x80D67CA0u: goto label_80D67CA0;
    case 0x80D67CA8u: goto label_80D67CA8;
    case 0x80D67CC8u: goto label_80D67CC8;
    case 0x80D67CF8u: goto label_80D67CF8;
    case 0x80D67D00u: goto label_80D67D00;
    case 0x80D67D04u: goto label_80D67D04;
    case 0x80D67D08u: goto label_80D67D08;
    default: return;
    }
}

