// DolRecomp output
#include "../generated.h"

void func_80D34BE0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D34BE0[185] = {
        &&label_80D34BE0,
        &&label_80D34BE4,
        &&label_80D34BE8,
        &&label_80D34BEC,
        &&label_80D34BF0,
        &&label_80D34BF4,
        &&label_80D34BF8,
        &&label_80D34BFC,
        &&label_80D34C00,
        &&label_80D34C04,
        &&label_80D34C08,
        &&label_80D34C0C,
        &&label_80D34C10,
        &&label_80D34C14,
        &&label_80D34C18,
        &&label_80D34C1C,
        &&label_80D34C20,
        &&label_80D34C24,
        &&label_80D34C28,
        &&label_80D34C2C,
        &&label_80D34C30,
        &&label_80D34C34,
        &&label_80D34C38,
        &&label_80D34C3C,
        &&label_80D34C40,
        &&label_80D34C44,
        &&label_80D34C48,
        &&label_80D34C4C,
        &&label_80D34C50,
        &&label_80D34C54,
        &&label_80D34C58,
        &&label_80D34C5C,
        &&label_80D34C60,
        &&label_80D34C64,
        &&label_80D34C68,
        &&label_80D34C6C,
        &&label_80D34C70,
        &&label_80D34C74,
        &&label_80D34C78,
        &&label_80D34C7C,
        &&label_80D34C80,
        &&label_80D34C84,
        &&label_80D34C88,
        &&label_80D34C8C,
        &&label_80D34C90,
        &&label_80D34C94,
        &&label_80D34C98,
        &&label_80D34C9C,
        &&label_80D34CA0,
        &&label_80D34CA4,
        &&label_80D34CA8,
        &&label_80D34CAC,
        &&label_80D34CB0,
        &&label_80D34CB4,
        &&label_80D34CB8,
        &&label_80D34CBC,
        &&label_80D34CC0,
        &&label_80D34CC4,
        &&label_80D34CC8,
        &&label_80D34CCC,
        &&label_80D34CD0,
        &&label_80D34CD4,
        &&label_80D34CD8,
        &&label_80D34CDC,
        &&label_80D34CE0,
        &&label_80D34CE4,
        &&label_80D34CE8,
        &&label_80D34CEC,
        &&label_80D34CF0,
        &&label_80D34CF4,
        &&label_80D34CF8,
        &&label_80D34CFC,
        &&label_80D34D00,
        &&label_80D34D04,
        &&label_80D34D08,
        &&label_80D34D0C,
        &&label_80D34D10,
        &&label_80D34D14,
        &&label_80D34D18,
        &&label_80D34D1C,
        &&label_80D34D20,
        &&label_80D34D24,
        &&label_80D34D28,
        &&label_80D34D2C,
        &&label_80D34D30,
        &&label_80D34D34,
        &&label_80D34D38,
        &&label_80D34D3C,
        &&label_80D34D40,
        &&label_80D34D44,
        &&label_80D34D48,
        &&label_80D34D4C,
        &&label_80D34D50,
        &&label_80D34D54,
        &&label_80D34D58,
        &&label_80D34D5C,
        &&label_80D34D60,
        &&label_80D34D64,
        &&label_80D34D68,
        &&label_80D34D6C,
        &&label_80D34D70,
        &&label_80D34D74,
        &&label_80D34D78,
        &&label_80D34D7C,
        &&label_80D34D80,
        &&label_80D34D84,
        &&label_80D34D88,
        &&label_80D34D8C,
        &&label_80D34D90,
        &&label_80D34D94,
        &&label_80D34D98,
        &&label_80D34D9C,
        &&label_80D34DA0,
        &&label_80D34DA4,
        &&label_80D34DA8,
        &&label_80D34DAC,
        &&label_80D34DB0,
        &&label_80D34DB4,
        &&label_80D34DB8,
        &&label_80D34DBC,
        &&label_80D34DC0,
        &&label_80D34DC4,
        &&label_80D34DC8,
        &&label_80D34DCC,
        &&label_80D34DD0,
        &&label_80D34DD4,
        &&label_80D34DD8,
        &&label_80D34DDC,
        &&label_80D34DE0,
        &&label_80D34DE4,
        &&label_80D34DE8,
        &&label_80D34DEC,
        &&label_80D34DF0,
        &&label_80D34DF4,
        &&label_80D34DF8,
        &&label_80D34DFC,
        &&label_80D34E00,
        &&label_80D34E04,
        &&label_80D34E08,
        &&label_80D34E0C,
        &&label_80D34E10,
        &&label_80D34E14,
        &&label_80D34E18,
        &&label_80D34E1C,
        &&label_80D34E20,
        &&label_80D34E24,
        &&label_80D34E28,
        &&label_80D34E2C,
        &&label_80D34E30,
        &&label_80D34E34,
        &&label_80D34E38,
        &&label_80D34E3C,
        &&label_80D34E40,
        &&label_80D34E44,
        &&label_80D34E48,
        &&label_80D34E4C,
        &&label_80D34E50,
        &&label_80D34E54,
        &&label_80D34E58,
        &&label_80D34E5C,
        &&label_80D34E60,
        &&label_80D34E64,
        &&label_80D34E68,
        &&label_80D34E6C,
        &&label_80D34E70,
        &&label_80D34E74,
        &&label_80D34E78,
        &&label_80D34E7C,
        &&label_80D34E80,
        &&label_80D34E84,
        &&label_80D34E88,
        &&label_80D34E8C,
        &&label_80D34E90,
        &&label_80D34E94,
        &&label_80D34E98,
        &&label_80D34E9C,
        &&label_80D34EA0,
        &&label_80D34EA4,
        &&label_80D34EA8,
        &&label_80D34EAC,
        &&label_80D34EB0,
        &&label_80D34EB4,
        &&label_80D34EB8,
        &&label_80D34EBC,
        &&label_80D34EC0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D34BE0u && pc <= 0x80D34EC0u && ((pc - 0x80D34BE0u) & 3u) == 0u)
            goto *pc_table_80D34BE0[(pc - 0x80D34BE0u) >> 2];
    }
    return;
label_80D34BE0:
    ctx->pc = 0x80D34BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34BE0: stwu     r1, -16(r1)
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
label_80D34BE4:
    ctx->pc = 0x80D34BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34BE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34BE8:
    ctx->pc = 0x80D34BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34BE8: stw     r0, 20(r1)
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
label_80D34BEC:
    ctx->pc = 0x80D34BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BECu)) return;
    // 80D34BEC: cmpwi   r3, 2
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

label_80D34BF0:
    ctx->pc = 0x80D34BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BF0u)) return;
    // 80D34BF0: bc    12, 2, 0x80D34EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D34EA4;
        }
    }

label_80D34BF4:
    ctx->pc = 0x80D34BF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34BF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34BF4: bc    4, 0, 0x80D34C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34C08;
        }
    }

label_80D34BF8:
    ctx->pc = 0x80D34BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34BF8: cmpwi   r3, 0
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

label_80D34BFC:
    ctx->pc = 0x80D34BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BFCu)) return;
    // 80D34BFC: bc    12, 2, 0x80D34EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D34EB4;
        }
    }

label_80D34C00:
    ctx->pc = 0x80D34C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34C00: bc    4, 0, 0x80D34C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34C10;
        }
    }

label_80D34C04:
    ctx->pc = 0x80D34C04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34C04: b       0x80D34EB4
    {
            goto label_80D34EB4;
    }

label_80D34C08:
    ctx->pc = 0x80D34C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34C08: cmpwi   r3, 4
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

label_80D34C0C:
    ctx->pc = 0x80D34C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C0Cu)) return;
    // 80D34C0C: b       0x80D34EB4
    {
            goto label_80D34EB4;
    }

label_80D34C10:
    ctx->pc = 0x80D34C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34C10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34C14:
    ctx->pc = 0x80D34C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C14u)) return;
    // 80D34C14: bl      0x8045EC10
    {
            ctx->lr = 0x80D34C18u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D34C18:
    ctx->pc = 0x80D34C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34C18: bl      0x8045DE7C
    {
            ctx->lr = 0x80D34C1Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D34C1C:
    ctx->pc = 0x80D34C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34C1C: bl      0x80460A60
    {
            ctx->lr = 0x80D34C20u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D34C20:
    ctx->pc = 0x80D34C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34C20: bl      0x80460A24
    {
            ctx->lr = 0x80D34C24u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D34C24:
    ctx->pc = 0x80D34C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34C24: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D34C28:
    ctx->pc = 0x80D34C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C28u)) return;
    // 80D34C28: bl      0x80406090
    {
            ctx->lr = 0x80D34C2Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D34C2C:
    ctx->pc = 0x80D34C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34C2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34C30:
    ctx->pc = 0x80D34C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C30u)) return;
    // 80D34C30: bl      0x8045F220
    {
            ctx->lr = 0x80D34C34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34C34:
    ctx->pc = 0x80D34C34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D34C34: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34C38:
    ctx->pc = 0x80D34C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C38u)) return;
    // 80D34C38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34C3C:
    ctx->pc = 0x80D34C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C3Cu)) return;
    // 80D34C3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34C40:
    ctx->pc = 0x80D34C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C40u)) return;
    // 80D34C40: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34C44:
    ctx->pc = 0x80D34C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C44u)) return;
    // 80D34C44: addi    r6, r6, -17744
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17744);

label_80D34C48:
    ctx->pc = 0x80D34C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34C48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34C48u)) return;
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
label_80D34C4C:
    ctx->pc = 0x80D34C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C4Cu)) return;
    // 80D34C4C: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34C50:
    ctx->pc = 0x80D34C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C50u)) return;
    // 80D34C50: addi    r6, r6, -17740
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17740);

label_80D34C54:
    ctx->pc = 0x80D34C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34C54: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34C54u)) return;
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
label_80D34C58:
    ctx->pc = 0x80D34C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C58u)) return;
    // 80D34C58: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34C58u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34C5C:
    ctx->pc = 0x80D34C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C5Cu)) return;
    // 80D34C5C: bl      0x8045C4B8
    {
            ctx->lr = 0x80D34C60u;
            ctx->pc = 0x8045C4B8u;
            return;
    }

label_80D34C60:
    ctx->pc = 0x80D34C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34C60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34C64:
    ctx->pc = 0x80D34C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C64u)) return;
    // 80D34C64: bl      0x8045F220
    {
            ctx->lr = 0x80D34C68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34C68:
    ctx->pc = 0x80D34C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34C68: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34C6C:
    ctx->pc = 0x80D34C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C6Cu)) return;
    // 80D34C6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34C70:
    ctx->pc = 0x80D34C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C70u)) return;
    // 80D34C70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34C74:
    ctx->pc = 0x80D34C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C74u)) return;
    // 80D34C74: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34C78:
    ctx->pc = 0x80D34C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C78u)) return;
    // 80D34C78: addi    r6, r6, -17736
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17736);

label_80D34C7C:
    ctx->pc = 0x80D34C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34C7C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34C7Cu)) return;
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
label_80D34C80:
    ctx->pc = 0x80D34C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C80u)) return;
    // 80D34C80: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34C84:
    ctx->pc = 0x80D34C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C84u)) return;
    // 80D34C84: addi    r6, r6, -17740
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17740);

label_80D34C88:
    ctx->pc = 0x80D34C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34C88: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34C88u)) return;
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
label_80D34C8C:
    ctx->pc = 0x80D34C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C8Cu)) return;
    // 80D34C8C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34C8Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34C90:
    ctx->pc = 0x80D34C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C90u)) return;
    // 80D34C90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34C94:
    ctx->pc = 0x80D34C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C94u)) return;
    // 80D34C94: bl      0x8045C3C0
    {
            ctx->lr = 0x80D34C98u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D34C98:
    ctx->pc = 0x80D34C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34C98: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D34C9C:
    ctx->pc = 0x80D34C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34C9Cu)) return;
    // 80D34C9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34CA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34CA0:
    ctx->pc = 0x80D34CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34CA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34CA4:
    ctx->pc = 0x80D34CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CA4u)) return;
    // 80D34CA4: bl      0x8045F220
    {
            ctx->lr = 0x80D34CA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34CA8:
    ctx->pc = 0x80D34CA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34CA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34CA8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34CAC:
    ctx->pc = 0x80D34CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CACu)) return;
    // 80D34CAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34CB0:
    ctx->pc = 0x80D34CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CB0u)) return;
    // 80D34CB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34CB4:
    ctx->pc = 0x80D34CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CB4u)) return;
    // 80D34CB4: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34CB8:
    ctx->pc = 0x80D34CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CB8u)) return;
    // 80D34CB8: addi    r6, r6, -17736
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17736);

label_80D34CBC:
    ctx->pc = 0x80D34CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34CBC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34CBCu)) return;
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
label_80D34CC0:
    ctx->pc = 0x80D34CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CC0u)) return;
    // 80D34CC0: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34CC4:
    ctx->pc = 0x80D34CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CC4u)) return;
    // 80D34CC4: addi    r6, r6, -17732
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17732);

label_80D34CC8:
    ctx->pc = 0x80D34CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34CC8: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34CC8u)) return;
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
label_80D34CCC:
    ctx->pc = 0x80D34CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CCCu)) return;
    // 80D34CCC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34CCCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34CD0:
    ctx->pc = 0x80D34CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CD0u)) return;
    // 80D34CD0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34CD4:
    ctx->pc = 0x80D34CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CD4u)) return;
    // 80D34CD4: bl      0x8045C3C0
    {
            ctx->lr = 0x80D34CD8u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D34CD8:
    ctx->pc = 0x80D34CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34CD8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D34CDC:
    ctx->pc = 0x80D34CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CDCu)) return;
    // 80D34CDC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34CE0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34CE0:
    ctx->pc = 0x80D34CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34CE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34CE4:
    ctx->pc = 0x80D34CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CE4u)) return;
    // 80D34CE4: bl      0x8045F220
    {
            ctx->lr = 0x80D34CE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34CE8:
    ctx->pc = 0x80D34CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34CE8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34CEC:
    ctx->pc = 0x80D34CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CECu)) return;
    // 80D34CEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34CF0:
    ctx->pc = 0x80D34CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CF0u)) return;
    // 80D34CF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34CF4:
    ctx->pc = 0x80D34CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CF4u)) return;
    // 80D34CF4: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34CF8:
    ctx->pc = 0x80D34CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CF8u)) return;
    // 80D34CF8: addi    r6, r6, -17736
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17736);

label_80D34CFC:
    ctx->pc = 0x80D34CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34CFC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34CFCu)) return;
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
label_80D34D00:
    ctx->pc = 0x80D34D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D00u)) return;
    // 80D34D00: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34D04:
    ctx->pc = 0x80D34D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D04u)) return;
    // 80D34D04: addi    r6, r6, -17740
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17740);

label_80D34D08:
    ctx->pc = 0x80D34D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34D08: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34D08u)) return;
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
label_80D34D0C:
    ctx->pc = 0x80D34D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D0Cu)) return;
    // 80D34D0C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34D0Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34D10:
    ctx->pc = 0x80D34D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D10u)) return;
    // 80D34D10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34D14:
    ctx->pc = 0x80D34D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D14u)) return;
    // 80D34D14: bl      0x8045C3C0
    {
            ctx->lr = 0x80D34D18u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D34D18:
    ctx->pc = 0x80D34D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34D18: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D34D1C:
    ctx->pc = 0x80D34D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D1Cu)) return;
    // 80D34D1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34D20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34D20:
    ctx->pc = 0x80D34D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34D20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34D24:
    ctx->pc = 0x80D34D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D24u)) return;
    // 80D34D24: bl      0x8045F220
    {
            ctx->lr = 0x80D34D28u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34D28:
    ctx->pc = 0x80D34D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34D28: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34D2C:
    ctx->pc = 0x80D34D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D2Cu)) return;
    // 80D34D2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34D30:
    ctx->pc = 0x80D34D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D30u)) return;
    // 80D34D30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34D34:
    ctx->pc = 0x80D34D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D34u)) return;
    // 80D34D34: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34D38:
    ctx->pc = 0x80D34D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D38u)) return;
    // 80D34D38: addi    r6, r6, -17736
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17736);

label_80D34D3C:
    ctx->pc = 0x80D34D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34D3C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34D3Cu)) return;
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
label_80D34D40:
    ctx->pc = 0x80D34D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D40u)) return;
    // 80D34D40: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34D44:
    ctx->pc = 0x80D34D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D44u)) return;
    // 80D34D44: addi    r6, r6, -17732
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17732);

label_80D34D48:
    ctx->pc = 0x80D34D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34D48: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34D48u)) return;
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
label_80D34D4C:
    ctx->pc = 0x80D34D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D4Cu)) return;
    // 80D34D4C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34D4Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34D50:
    ctx->pc = 0x80D34D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D50u)) return;
    // 80D34D50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34D54:
    ctx->pc = 0x80D34D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D54u)) return;
    // 80D34D54: bl      0x8045C3C0
    {
            ctx->lr = 0x80D34D58u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D34D58:
    ctx->pc = 0x80D34D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34D58: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D34D5C:
    ctx->pc = 0x80D34D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D5Cu)) return;
    // 80D34D5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34D60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34D60:
    ctx->pc = 0x80D34D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34D60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34D64:
    ctx->pc = 0x80D34D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D64u)) return;
    // 80D34D64: bl      0x8045F220
    {
            ctx->lr = 0x80D34D68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34D68:
    ctx->pc = 0x80D34D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34D68: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34D6C:
    ctx->pc = 0x80D34D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D6Cu)) return;
    // 80D34D6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34D70:
    ctx->pc = 0x80D34D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D70u)) return;
    // 80D34D70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34D74:
    ctx->pc = 0x80D34D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D74u)) return;
    // 80D34D74: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34D78:
    ctx->pc = 0x80D34D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D78u)) return;
    // 80D34D78: addi    r6, r6, -17736
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17736);

label_80D34D7C:
    ctx->pc = 0x80D34D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34D7C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34D7Cu)) return;
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
label_80D34D80:
    ctx->pc = 0x80D34D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D80u)) return;
    // 80D34D80: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34D84:
    ctx->pc = 0x80D34D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D84u)) return;
    // 80D34D84: addi    r6, r6, -17740
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17740);

label_80D34D88:
    ctx->pc = 0x80D34D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34D88: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34D88u)) return;
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
label_80D34D8C:
    ctx->pc = 0x80D34D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D8Cu)) return;
    // 80D34D8C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34D8Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34D90:
    ctx->pc = 0x80D34D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D90u)) return;
    // 80D34D90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34D94:
    ctx->pc = 0x80D34D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D94u)) return;
    // 80D34D94: bl      0x8045C3C0
    {
            ctx->lr = 0x80D34D98u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D34D98:
    ctx->pc = 0x80D34D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34D98: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D34D9C:
    ctx->pc = 0x80D34D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34D9Cu)) return;
    // 80D34D9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34DA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34DA0:
    ctx->pc = 0x80D34DA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34DA0: li      r3, 1128
    ctx->gpr[3] = (u32)(s32)(1128);

label_80D34DA4:
    ctx->pc = 0x80D34DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DA4u)) return;
    // 80D34DA4: bl      0x8045BFA0
    {
            ctx->lr = 0x80D34DA8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D34DA8:
    ctx->pc = 0x80D34DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D34DA8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34DAC:
    ctx->pc = 0x80D34DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DACu)) return;
    // 80D34DAC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D34DB0:
    ctx->pc = 0x80D34DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34DB0: lwz     r0, 0(r3)
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
label_80D34DB4:
    ctx->pc = 0x80D34DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DB4u)) return;
    // 80D34DB4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D34DB8:
    ctx->pc = 0x80D34DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DB8u)) return;
    // 80D34DB8: bc    4, 2, 0x80D34DD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34DD0;
        }
    }

label_80D34DBC:
    ctx->pc = 0x80D34DBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34DBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34DC0:
    ctx->pc = 0x80D34DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DC0u)) return;
    // 80D34DC0: bl      0x8045F220
    {
            ctx->lr = 0x80D34DC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34DC4:
    ctx->pc = 0x80D34DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D34DC4: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34DC8:
    ctx->pc = 0x80D34DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DC8u)) return;
    // 80D34DC8: addi    r4, r4, -17524
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17524);

label_80D34DCC:
    ctx->pc = 0x80D34DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DCCu)) return;
    // 80D34DCC: bl      0x8045C060
    {
            ctx->lr = 0x80D34DD0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D34DD0:
    ctx->pc = 0x80D34DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D34DD0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34DD4:
    ctx->pc = 0x80D34DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DD4u)) return;
    // 80D34DD4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D34DD8:
    ctx->pc = 0x80D34DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34DD8: lwz     r0, 0(r3)
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
label_80D34DDC:
    ctx->pc = 0x80D34DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DDCu)) return;
    // 80D34DDC: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D34DE0:
    ctx->pc = 0x80D34DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DE0u)) return;
    // 80D34DE0: bc    4, 2, 0x80D34DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34DF8;
        }
    }

label_80D34DE4:
    ctx->pc = 0x80D34DE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34DE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34DE8:
    ctx->pc = 0x80D34DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DE8u)) return;
    // 80D34DE8: bl      0x8045F220
    {
            ctx->lr = 0x80D34DECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34DEC:
    ctx->pc = 0x80D34DECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D34DEC: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34DF0:
    ctx->pc = 0x80D34DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DF0u)) return;
    // 80D34DF0: addi    r4, r4, -17516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17516);

label_80D34DF4:
    ctx->pc = 0x80D34DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DF4u)) return;
    // 80D34DF4: bl      0x8045C060
    {
            ctx->lr = 0x80D34DF8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D34DF8:
    ctx->pc = 0x80D34DF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34DF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D34DF8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34DFC:
    ctx->pc = 0x80D34DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34DFCu)) return;
    // 80D34DFC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D34E00:
    ctx->pc = 0x80D34E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34E00: lwz     r0, 0(r3)
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
label_80D34E04:
    ctx->pc = 0x80D34E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E04u)) return;
    // 80D34E04: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D34E08:
    ctx->pc = 0x80D34E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E08u)) return;
    // 80D34E08: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D34E0C:
    ctx->pc = 0x80D34E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E0Cu)) return;
    // 80D34E0C: addi    r3, r3, -17552
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17552);

label_80D34E10:
    ctx->pc = 0x80D34E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34E10: lwzx    r3, r3, r0
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
label_80D34E14:
    ctx->pc = 0x80D34E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34E14: lwz     r3, 0(r3)
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
label_80D34E18:
    ctx->pc = 0x80D34E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E18u)) return;
    // 80D34E18: bl      0x8045F6FC
    {
            ctx->lr = 0x80D34E1Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D34E1C:
    ctx->pc = 0x80D34E1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34E1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34E20:
    ctx->pc = 0x80D34E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E20u)) return;
    // 80D34E20: bl      0x8045F220
    {
            ctx->lr = 0x80D34E24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34E24:
    ctx->pc = 0x80D34E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D34E24: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34E28:
    ctx->pc = 0x80D34E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E28u)) return;
    // 80D34E28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34E2C:
    ctx->pc = 0x80D34E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E2Cu)) return;
    // 80D34E2C: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D34E30:
    ctx->pc = 0x80D34E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E30u)) return;
    // 80D34E30: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34E34:
    ctx->pc = 0x80D34E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E34u)) return;
    // 80D34E34: addi    r6, r6, -17744
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17744);

label_80D34E38:
    ctx->pc = 0x80D34E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34E38: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34E38u)) return;
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
label_80D34E3C:
    ctx->pc = 0x80D34E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E3Cu)) return;
    // 80D34E3C: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34E40:
    ctx->pc = 0x80D34E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E40u)) return;
    // 80D34E40: addi    r6, r6, -17740
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17740);

label_80D34E44:
    ctx->pc = 0x80D34E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34E44: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34E44u)) return;
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
label_80D34E48:
    ctx->pc = 0x80D34E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E48u)) return;
    // 80D34E48: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34E4C:
    ctx->pc = 0x80D34E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E4Cu)) return;
    // 80D34E4C: addi    r6, r6, -17728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-17728);

label_80D34E50:
    ctx->pc = 0x80D34E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34E50: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34E50u)) return;
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
label_80D34E54:
    ctx->pc = 0x80D34E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E54u)) return;
    // 80D34E54: bl      0x8045C4B8
    {
            ctx->lr = 0x80D34E58u;
            ctx->pc = 0x8045C4B8u;
            return;
    }

label_80D34E58:
    ctx->pc = 0x80D34E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34E58: bl      0x8045BFF4
    {
            ctx->lr = 0x80D34E5Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D34E5C:
    ctx->pc = 0x80D34E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D34E5C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34E60:
    ctx->pc = 0x80D34E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E60u)) return;
    // 80D34E60: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D34E64:
    ctx->pc = 0x80D34E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34E64: lwz     r0, 0(r3)
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
label_80D34E68:
    ctx->pc = 0x80D34E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E68u)) return;
    // 80D34E68: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D34E6C:
    ctx->pc = 0x80D34E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E6Cu)) return;
    // 80D34E6C: bc    4, 2, 0x80D34E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34E7C;
        }
    }

label_80D34E70:
    ctx->pc = 0x80D34E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34E70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34E74:
    ctx->pc = 0x80D34E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E74u)) return;
    // 80D34E74: bl      0x8045F220
    {
            ctx->lr = 0x80D34E78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34E78:
    ctx->pc = 0x80D34E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34E78: bl      0x8045C034
    {
            ctx->lr = 0x80D34E7Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D34E7C:
    ctx->pc = 0x80D34E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D34E7C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34E80:
    ctx->pc = 0x80D34E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E80u)) return;
    // 80D34E80: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D34E84:
    ctx->pc = 0x80D34E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34E84: lwz     r0, 0(r3)
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
label_80D34E88:
    ctx->pc = 0x80D34E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E88u)) return;
    // 80D34E88: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D34E8C:
    ctx->pc = 0x80D34E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E8Cu)) return;
    // 80D34E8C: bc    4, 2, 0x80D34E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34E9C;
        }
    }

label_80D34E90:
    ctx->pc = 0x80D34E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34E90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34E94:
    ctx->pc = 0x80D34E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34E94u)) return;
    // 80D34E94: bl      0x8045F220
    {
            ctx->lr = 0x80D34E98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34E98:
    ctx->pc = 0x80D34E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34E98: bl      0x8045C034
    {
            ctx->lr = 0x80D34E9Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D34E9C:
    ctx->pc = 0x80D34E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34E9C: bl      0x8045F300
    {
            ctx->lr = 0x80D34EA0u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D34EA0:
    ctx->pc = 0x80D34EA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34EA0: b       0x80D34EB4
    {
            goto label_80D34EB4;
    }

label_80D34EA4:
    ctx->pc = 0x80D34EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34EA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34EA8:
    ctx->pc = 0x80D34EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EA8u)) return;
    // 80D34EA8: bl      0x8045EC10
    {
            ctx->lr = 0x80D34EACu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D34EAC:
    ctx->pc = 0x80D34EACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34EAC: bl      0x8045DE34
    {
            ctx->lr = 0x80D34EB0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D34EB0:
    ctx->pc = 0x80D34EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34EB0: bl      0x80460A80
    {
            ctx->lr = 0x80D34EB4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D34EB4:
    ctx->pc = 0x80D34EB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34EB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34EB4: lwz     r0, 20(r1)
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
label_80D34EB8:
    ctx->pc = 0x80D34EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D34EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34EB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34EBC:
    ctx->pc = 0x80D34EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EBCu)) return;
    // 80D34EBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D34EC0:
    ctx->pc = 0x80D34EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34EC0u)) return;
    // 80D34EC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D34BE0;
        }
    }

    ctx->pc = 0x80D34EC4u;
    return;
return_dispatch_80D34BE0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D34C18u: goto label_80D34C18;
    case 0x80D34C1Cu: goto label_80D34C1C;
    case 0x80D34C20u: goto label_80D34C20;
    case 0x80D34C24u: goto label_80D34C24;
    case 0x80D34C2Cu: goto label_80D34C2C;
    case 0x80D34C34u: goto label_80D34C34;
    case 0x80D34C60u: goto label_80D34C60;
    case 0x80D34C68u: goto label_80D34C68;
    case 0x80D34C98u: goto label_80D34C98;
    case 0x80D34CA0u: goto label_80D34CA0;
    case 0x80D34CA8u: goto label_80D34CA8;
    case 0x80D34CD8u: goto label_80D34CD8;
    case 0x80D34CE0u: goto label_80D34CE0;
    case 0x80D34CE8u: goto label_80D34CE8;
    case 0x80D34D18u: goto label_80D34D18;
    case 0x80D34D20u: goto label_80D34D20;
    case 0x80D34D28u: goto label_80D34D28;
    case 0x80D34D58u: goto label_80D34D58;
    case 0x80D34D60u: goto label_80D34D60;
    case 0x80D34D68u: goto label_80D34D68;
    case 0x80D34D98u: goto label_80D34D98;
    case 0x80D34DA0u: goto label_80D34DA0;
    case 0x80D34DA8u: goto label_80D34DA8;
    case 0x80D34DC4u: goto label_80D34DC4;
    case 0x80D34DD0u: goto label_80D34DD0;
    case 0x80D34DECu: goto label_80D34DEC;
    case 0x80D34DF8u: goto label_80D34DF8;
    case 0x80D34E1Cu: goto label_80D34E1C;
    case 0x80D34E24u: goto label_80D34E24;
    case 0x80D34E58u: goto label_80D34E58;
    case 0x80D34E5Cu: goto label_80D34E5C;
    case 0x80D34E78u: goto label_80D34E78;
    case 0x80D34E7Cu: goto label_80D34E7C;
    case 0x80D34E98u: goto label_80D34E98;
    case 0x80D34E9Cu: goto label_80D34E9C;
    case 0x80D34EA0u: goto label_80D34EA0;
    case 0x80D34EACu: goto label_80D34EAC;
    case 0x80D34EB0u: goto label_80D34EB0;
    case 0x80D34EB4u: goto label_80D34EB4;
    default: return;
    }
}

