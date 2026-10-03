// DolRecomp output
#include "../generated.h"

void func_80C89DE0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C89DE0[207] = {
        &&label_80C89DE0,
        &&label_80C89DE4,
        &&label_80C89DE8,
        &&label_80C89DEC,
        &&label_80C89DF0,
        &&label_80C89DF4,
        &&label_80C89DF8,
        &&label_80C89DFC,
        &&label_80C89E00,
        &&label_80C89E04,
        &&label_80C89E08,
        &&label_80C89E0C,
        &&label_80C89E10,
        &&label_80C89E14,
        &&label_80C89E18,
        &&label_80C89E1C,
        &&label_80C89E20,
        &&label_80C89E24,
        &&label_80C89E28,
        &&label_80C89E2C,
        &&label_80C89E30,
        &&label_80C89E34,
        &&label_80C89E38,
        &&label_80C89E3C,
        &&label_80C89E40,
        &&label_80C89E44,
        &&label_80C89E48,
        &&label_80C89E4C,
        &&label_80C89E50,
        &&label_80C89E54,
        &&label_80C89E58,
        &&label_80C89E5C,
        &&label_80C89E60,
        &&label_80C89E64,
        &&label_80C89E68,
        &&label_80C89E6C,
        &&label_80C89E70,
        &&label_80C89E74,
        &&label_80C89E78,
        &&label_80C89E7C,
        &&label_80C89E80,
        &&label_80C89E84,
        &&label_80C89E88,
        &&label_80C89E8C,
        &&label_80C89E90,
        &&label_80C89E94,
        &&label_80C89E98,
        &&label_80C89E9C,
        &&label_80C89EA0,
        &&label_80C89EA4,
        &&label_80C89EA8,
        &&label_80C89EAC,
        &&label_80C89EB0,
        &&label_80C89EB4,
        &&label_80C89EB8,
        &&label_80C89EBC,
        &&label_80C89EC0,
        &&label_80C89EC4,
        &&label_80C89EC8,
        &&label_80C89ECC,
        &&label_80C89ED0,
        &&label_80C89ED4,
        &&label_80C89ED8,
        &&label_80C89EDC,
        &&label_80C89EE0,
        &&label_80C89EE4,
        &&label_80C89EE8,
        &&label_80C89EEC,
        &&label_80C89EF0,
        &&label_80C89EF4,
        &&label_80C89EF8,
        &&label_80C89EFC,
        &&label_80C89F00,
        &&label_80C89F04,
        &&label_80C89F08,
        &&label_80C89F0C,
        &&label_80C89F10,
        &&label_80C89F14,
        &&label_80C89F18,
        &&label_80C89F1C,
        &&label_80C89F20,
        &&label_80C89F24,
        &&label_80C89F28,
        &&label_80C89F2C,
        &&label_80C89F30,
        &&label_80C89F34,
        &&label_80C89F38,
        &&label_80C89F3C,
        &&label_80C89F40,
        &&label_80C89F44,
        &&label_80C89F48,
        &&label_80C89F4C,
        &&label_80C89F50,
        &&label_80C89F54,
        &&label_80C89F58,
        &&label_80C89F5C,
        &&label_80C89F60,
        &&label_80C89F64,
        &&label_80C89F68,
        &&label_80C89F6C,
        &&label_80C89F70,
        &&label_80C89F74,
        &&label_80C89F78,
        &&label_80C89F7C,
        &&label_80C89F80,
        &&label_80C89F84,
        &&label_80C89F88,
        &&label_80C89F8C,
        &&label_80C89F90,
        &&label_80C89F94,
        &&label_80C89F98,
        &&label_80C89F9C,
        &&label_80C89FA0,
        &&label_80C89FA4,
        &&label_80C89FA8,
        &&label_80C89FAC,
        &&label_80C89FB0,
        &&label_80C89FB4,
        &&label_80C89FB8,
        &&label_80C89FBC,
        &&label_80C89FC0,
        &&label_80C89FC4,
        &&label_80C89FC8,
        &&label_80C89FCC,
        &&label_80C89FD0,
        &&label_80C89FD4,
        &&label_80C89FD8,
        &&label_80C89FDC,
        &&label_80C89FE0,
        &&label_80C89FE4,
        &&label_80C89FE8,
        &&label_80C89FEC,
        &&label_80C89FF0,
        &&label_80C89FF4,
        &&label_80C89FF8,
        &&label_80C89FFC,
        &&label_80C8A000,
        &&label_80C8A004,
        &&label_80C8A008,
        &&label_80C8A00C,
        &&label_80C8A010,
        &&label_80C8A014,
        &&label_80C8A018,
        &&label_80C8A01C,
        &&label_80C8A020,
        &&label_80C8A024,
        &&label_80C8A028,
        &&label_80C8A02C,
        &&label_80C8A030,
        &&label_80C8A034,
        &&label_80C8A038,
        &&label_80C8A03C,
        &&label_80C8A040,
        &&label_80C8A044,
        &&label_80C8A048,
        &&label_80C8A04C,
        &&label_80C8A050,
        &&label_80C8A054,
        &&label_80C8A058,
        &&label_80C8A05C,
        &&label_80C8A060,
        &&label_80C8A064,
        &&label_80C8A068,
        &&label_80C8A06C,
        &&label_80C8A070,
        &&label_80C8A074,
        &&label_80C8A078,
        &&label_80C8A07C,
        &&label_80C8A080,
        &&label_80C8A084,
        &&label_80C8A088,
        &&label_80C8A08C,
        &&label_80C8A090,
        &&label_80C8A094,
        &&label_80C8A098,
        &&label_80C8A09C,
        &&label_80C8A0A0,
        &&label_80C8A0A4,
        &&label_80C8A0A8,
        &&label_80C8A0AC,
        &&label_80C8A0B0,
        &&label_80C8A0B4,
        &&label_80C8A0B8,
        &&label_80C8A0BC,
        &&label_80C8A0C0,
        &&label_80C8A0C4,
        &&label_80C8A0C8,
        &&label_80C8A0CC,
        &&label_80C8A0D0,
        &&label_80C8A0D4,
        &&label_80C8A0D8,
        &&label_80C8A0DC,
        &&label_80C8A0E0,
        &&label_80C8A0E4,
        &&label_80C8A0E8,
        &&label_80C8A0EC,
        &&label_80C8A0F0,
        &&label_80C8A0F4,
        &&label_80C8A0F8,
        &&label_80C8A0FC,
        &&label_80C8A100,
        &&label_80C8A104,
        &&label_80C8A108,
        &&label_80C8A10C,
        &&label_80C8A110,
        &&label_80C8A114,
        &&label_80C8A118
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C89DE0u && pc <= 0x80C8A118u && ((pc - 0x80C89DE0u) & 3u) == 0u)
            goto *pc_table_80C89DE0[(pc - 0x80C89DE0u) >> 2];
    }
    return;
label_80C89DE0:
    ctx->pc = 0x80C89DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C89DE0: stwu     r1, -16(r1)
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
label_80C89DE4:
    ctx->pc = 0x80C89DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C89DE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C89DE8:
    ctx->pc = 0x80C89DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C89DE8: stw     r0, 20(r1)
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
label_80C89DEC:
    ctx->pc = 0x80C89DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89DECu)) return;
    // 80C89DEC: cmpwi   r3, 2
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

label_80C89DF0:
    ctx->pc = 0x80C89DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89DF0u)) return;
    // 80C89DF0: bc    12, 2, 0x80C8A0FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8A0FC;
        }
    }

label_80C89DF4:
    ctx->pc = 0x80C89DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89DF4: bc    4, 0, 0x80C89E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C89E08;
        }
    }

label_80C89DF8:
    ctx->pc = 0x80C89DF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89DF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89DF8: cmpwi   r3, 0
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

label_80C89DFC:
    ctx->pc = 0x80C89DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89DFCu)) return;
    // 80C89DFC: bc    12, 2, 0x80C8A10C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8A10C;
        }
    }

label_80C89E00:
    ctx->pc = 0x80C89E00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89E00: bc    4, 0, 0x80C89E10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C89E10;
        }
    }

label_80C89E04:
    ctx->pc = 0x80C89E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89E04: b       0x80C8A10C
    {
            goto label_80C8A10C;
    }

label_80C89E08:
    ctx->pc = 0x80C89E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89E08: cmpwi   r3, 4
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

label_80C89E0C:
    ctx->pc = 0x80C89E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E0Cu)) return;
    // 80C89E0C: b       0x80C8A10C
    {
            goto label_80C8A10C;
    }

label_80C89E10:
    ctx->pc = 0x80C89E10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89E10: bl      0x8045DE7C
    {
            ctx->lr = 0x80C89E14u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C89E14:
    ctx->pc = 0x80C89E14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89E14: bl      0x80460A60
    {
            ctx->lr = 0x80C89E18u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C89E18:
    ctx->pc = 0x80C89E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89E18: bl      0x80460A24
    {
            ctx->lr = 0x80C89E1Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C89E1C:
    ctx->pc = 0x80C89E1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89E1C: li      r3, 91
    ctx->gpr[3] = (u32)(s32)(91);

label_80C89E20:
    ctx->pc = 0x80C89E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E20u)) return;
    // 80C89E20: bl      0x80406090
    {
            ctx->lr = 0x80C89E24u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C89E24:
    ctx->pc = 0x80C89E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89E24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89E28:
    ctx->pc = 0x80C89E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E28u)) return;
    // 80C89E28: bl      0x8045F220
    {
            ctx->lr = 0x80C89E2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89E2C:
    ctx->pc = 0x80C89E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C89E2C: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89E30:
    ctx->pc = 0x80C89E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E30u)) return;
    // 80C89E30: addi    r4, r4, -21616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21616);

label_80C89E34:
    ctx->pc = 0x80C89E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C89E34: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89E34u)) return;
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
label_80C89E38:
    ctx->pc = 0x80C89E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E38u)) return;
    // 80C89E38: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89E3C:
    ctx->pc = 0x80C89E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E3Cu)) return;
    // 80C89E3C: addi    r4, r4, -21612
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21612);

label_80C89E40:
    ctx->pc = 0x80C89E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C89E40: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89E40u)) return;
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
label_80C89E44:
    ctx->pc = 0x80C89E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E44u)) return;
    // 80C89E44: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89E48:
    ctx->pc = 0x80C89E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E48u)) return;
    // 80C89E48: addi    r4, r4, -21608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21608);

label_80C89E4C:
    ctx->pc = 0x80C89E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C89E4C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89E4Cu)) return;
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
label_80C89E50:
    ctx->pc = 0x80C89E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E50u)) return;
    // 80C89E50: bl      0x8045EF2C
    {
            ctx->lr = 0x80C89E54u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C89E54:
    ctx->pc = 0x80C89E54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89E54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89E58:
    ctx->pc = 0x80C89E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E58u)) return;
    // 80C89E58: bl      0x8045F220
    {
            ctx->lr = 0x80C89E5Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89E5C:
    ctx->pc = 0x80C89E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C89E5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C89E60:
    ctx->pc = 0x80C89E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E60u)) return;
    // 80C89E60: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C89E64:
    ctx->pc = 0x80C89E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E64u)) return;
    // 80C89E64: addi    r5, r5, -22447
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22447);

label_80C89E68:
    ctx->pc = 0x80C89E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E68u)) return;
    // 80C89E68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C89E6C:
    ctx->pc = 0x80C89E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E6Cu)) return;
    // 80C89E6C: bl      0x8045EEA8
    {
            ctx->lr = 0x80C89E70u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C89E70:
    ctx->pc = 0x80C89E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C89E70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C89E74:
    ctx->pc = 0x80C89E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E74u)) return;
    // 80C89E74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C89E78:
    ctx->pc = 0x80C89E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E78u)) return;
    // 80C89E78: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C89E7C:
    ctx->pc = 0x80C89E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E7Cu)) return;
    // 80C89E7C: addi    r5, r5, -21604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21604);

label_80C89E80:
    ctx->pc = 0x80C89E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C89E80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C89E80u)) return;
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
label_80C89E84:
    ctx->pc = 0x80C89E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E84u)) return;
    // 80C89E84: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C89E88:
    ctx->pc = 0x80C89E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E88u)) return;
    // 80C89E88: addi    r5, r5, -21600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21600);

label_80C89E8C:
    ctx->pc = 0x80C89E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C89E8C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C89E8Cu)) return;
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
label_80C89E90:
    ctx->pc = 0x80C89E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E90u)) return;
    // 80C89E90: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C89E94:
    ctx->pc = 0x80C89E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E94u)) return;
    // 80C89E94: addi    r5, r5, -21596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21596);

label_80C89E98:
    ctx->pc = 0x80C89E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C89E98: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C89E98u)) return;
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
label_80C89E9C:
    ctx->pc = 0x80C89E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89E9Cu)) return;
    // 80C89E9C: bl      0x8045C750
    {
            ctx->lr = 0x80C89EA0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C89EA0:
    ctx->pc = 0x80C89EA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89EA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C89EA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C89EA4:
    ctx->pc = 0x80C89EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EA4u)) return;
    // 80C89EA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C89EA8:
    ctx->pc = 0x80C89EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EA8u)) return;
    // 80C89EA8: li      r5, 3840
    ctx->gpr[5] = (u32)(s32)(3840);

label_80C89EAC:
    ctx->pc = 0x80C89EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EACu)) return;
    // 80C89EAC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C89EB0:
    ctx->pc = 0x80C89EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EB0u)) return;
    // 80C89EB0: addi    r6, r6, -19968
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-19968);

label_80C89EB4:
    ctx->pc = 0x80C89EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EB4u)) return;
    // 80C89EB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C89EB8:
    ctx->pc = 0x80C89EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EB8u)) return;
    // 80C89EB8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C89EBCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C89EBC:
    ctx->pc = 0x80C89EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89EBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89EC0:
    ctx->pc = 0x80C89EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EC0u)) return;
    // 80C89EC0: bl      0x8045F220
    {
            ctx->lr = 0x80C89EC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89EC4:
    ctx->pc = 0x80C89EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89EC4: bl      0x8045EB8C
    {
            ctx->lr = 0x80C89EC8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C89EC8:
    ctx->pc = 0x80C89EC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89EC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89EC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89ECC:
    ctx->pc = 0x80C89ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89ECCu)) return;
    // 80C89ECC: bl      0x8045F220
    {
            ctx->lr = 0x80C89ED0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89ED0:
    ctx->pc = 0x80C89ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C89ED0: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C89ED4:
    ctx->pc = 0x80C89ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89ED4u)) return;
    // 80C89ED4: addi    r4, r4, 17636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17636);

label_80C89ED8:
    ctx->pc = 0x80C89ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89ED8u)) return;
    // 80C89ED8: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C89EDC:
    ctx->pc = 0x80C89EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EDCu)) return;
    // 80C89EDC: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C89EE0:
    ctx->pc = 0x80C89EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EE0u)) return;
    // 80C89EE0: lis     r6, -27403
    ctx->gpr[6] = ((u32)(s32)(-27403) << 16);

label_80C89EE4:
    ctx->pc = 0x80C89EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EE4u)) return;
    // 80C89EE4: addi    r6, r6, -21592
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21592);

label_80C89EE8:
    ctx->pc = 0x80C89EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C89EE8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C89EE8u)) return;
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
label_80C89EEC:
    ctx->pc = 0x80C89EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EECu)) return;
    // 80C89EEC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C89EF0:
    ctx->pc = 0x80C89EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EF0u)) return;
    // 80C89EF0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80C89EF4:
    ctx->pc = 0x80C89EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EF4u)) return;
    // 80C89EF4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C89EF8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C89EF8:
    ctx->pc = 0x80C89EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89EF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89EFC:
    ctx->pc = 0x80C89EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89EFCu)) return;
    // 80C89EFC: bl      0x8045F220
    {
            ctx->lr = 0x80C89F00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89F00:
    ctx->pc = 0x80C89F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C89F00: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89F04:
    ctx->pc = 0x80C89F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F04u)) return;
    // 80C89F04: addi    r4, r4, -21588
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21588);

label_80C89F08:
    ctx->pc = 0x80C89F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C89F08: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89F08u)) return;
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
label_80C89F0C:
    ctx->pc = 0x80C89F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F0Cu)) return;
    // 80C89F0C: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89F10:
    ctx->pc = 0x80C89F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F10u)) return;
    // 80C89F10: addi    r4, r4, -21612
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21612);

label_80C89F14:
    ctx->pc = 0x80C89F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C89F14: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89F14u)) return;
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
label_80C89F18:
    ctx->pc = 0x80C89F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F18u)) return;
    // 80C89F18: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89F1C:
    ctx->pc = 0x80C89F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F1Cu)) return;
    // 80C89F1C: addi    r4, r4, -21584
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21584);

label_80C89F20:
    ctx->pc = 0x80C89F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C89F20: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89F20u)) return;
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
label_80C89F24:
    ctx->pc = 0x80C89F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F24u)) return;
    // 80C89F24: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89F28:
    ctx->pc = 0x80C89F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F28u)) return;
    // 80C89F28: addi    r4, r4, -21580
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21580);

label_80C89F2C:
    ctx->pc = 0x80C89F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C89F2C: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89F2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C89F30:
    ctx->pc = 0x80C89F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F30u)) return;
    // 80C89F30: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C89F34:
    ctx->pc = 0x80C89F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F34u)) return;
    // 80C89F34: addi    r4, r4, -21576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21576);

label_80C89F38:
    ctx->pc = 0x80C89F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C89F38: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C89F38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C89F3C:
    ctx->pc = 0x80C89F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F3Cu)) return;
    // 80C89F3C: bl      0x8045E570
    {
            ctx->lr = 0x80C89F40u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C89F40:
    ctx->pc = 0x80C89F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C89F40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C89F44:
    ctx->pc = 0x80C89F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F44u)) return;
    // 80C89F44: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80C89F48:
    ctx->pc = 0x80C89F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F48u)) return;
    // 80C89F48: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C89F4C:
    ctx->pc = 0x80C89F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F4Cu)) return;
    // 80C89F4C: addi    r5, r5, -21604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21604);

label_80C89F50:
    ctx->pc = 0x80C89F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C89F50: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C89F50u)) return;
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
label_80C89F54:
    ctx->pc = 0x80C89F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F54u)) return;
    // 80C89F54: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C89F58:
    ctx->pc = 0x80C89F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F58u)) return;
    // 80C89F58: addi    r5, r5, -21572
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21572);

label_80C89F5C:
    ctx->pc = 0x80C89F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C89F5C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C89F5Cu)) return;
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
label_80C89F60:
    ctx->pc = 0x80C89F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F60u)) return;
    // 80C89F60: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C89F64:
    ctx->pc = 0x80C89F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F64u)) return;
    // 80C89F64: addi    r5, r5, -21596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21596);

label_80C89F68:
    ctx->pc = 0x80C89F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C89F68: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C89F68u)) return;
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
label_80C89F6C:
    ctx->pc = 0x80C89F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F6Cu)) return;
    // 80C89F6C: bl      0x8045C750
    {
            ctx->lr = 0x80C89F70u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C89F70:
    ctx->pc = 0x80C89F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89F70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89F74:
    ctx->pc = 0x80C89F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F74u)) return;
    // 80C89F74: bl      0x8045F220
    {
            ctx->lr = 0x80C89F78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89F78:
    ctx->pc = 0x80C89F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C89F78: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C89F7C:
    ctx->pc = 0x80C89F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F7Cu)) return;
    // 80C89F7C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C89F80:
    ctx->pc = 0x80C89F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F80u)) return;
    // 80C89F80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C89F84:
    ctx->pc = 0x80C89F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F84u)) return;
    // 80C89F84: lis     r6, -27403
    ctx->gpr[6] = ((u32)(s32)(-27403) << 16);

label_80C89F88:
    ctx->pc = 0x80C89F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F88u)) return;
    // 80C89F88: addi    r6, r6, -21612
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21612);

label_80C89F8C:
    ctx->pc = 0x80C89F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C89F8C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C89F8Cu)) return;
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
label_80C89F90:
    ctx->pc = 0x80C89F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F90u)) return;
    // 80C89F90: lis     r6, -27403
    ctx->gpr[6] = ((u32)(s32)(-27403) << 16);

label_80C89F94:
    ctx->pc = 0x80C89F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F94u)) return;
    // 80C89F94: addi    r6, r6, -21568
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21568);

label_80C89F98:
    ctx->pc = 0x80C89F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C89F98: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C89F98u)) return;
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
label_80C89F9C:
    ctx->pc = 0x80C89F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89F9Cu)) return;
    // 80C89F9C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80C89F9Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80C89FA0:
    ctx->pc = 0x80C89FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FA0u)) return;
    // 80C89FA0: li      r6, 256
    ctx->gpr[6] = (u32)(s32)(256);

label_80C89FA4:
    ctx->pc = 0x80C89FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FA4u)) return;
    // 80C89FA4: bl      0x8045C3C0
    {
            ctx->lr = 0x80C89FA8u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80C89FA8:
    ctx->pc = 0x80C89FA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89FA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89FA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89FAC:
    ctx->pc = 0x80C89FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FACu)) return;
    // 80C89FAC: bl      0x8045F220
    {
            ctx->lr = 0x80C89FB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89FB0:
    ctx->pc = 0x80C89FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89FB0: bl      0x8045E4DC
    {
            ctx->lr = 0x80C89FB4u;
            ctx->pc = 0x8045E4DCu;
            return;
    }

label_80C89FB4:
    ctx->pc = 0x80C89FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C89FB4: bl      0x8045C4A4
    {
            ctx->lr = 0x80C89FB8u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80C89FB8:
    ctx->pc = 0x80C89FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89FB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C89FBC:
    ctx->pc = 0x80C89FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FBCu)) return;
    // 80C89FBC: bl      0x8045F220
    {
            ctx->lr = 0x80C89FC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C89FC0:
    ctx->pc = 0x80C89FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C89FC0: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C89FC4:
    ctx->pc = 0x80C89FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FC4u)) return;
    // 80C89FC4: addi    r4, r4, 5568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5568);

label_80C89FC8:
    ctx->pc = 0x80C89FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FC8u)) return;
    // 80C89FC8: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C89FCC:
    ctx->pc = 0x80C89FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FCCu)) return;
    // 80C89FCC: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C89FD0:
    ctx->pc = 0x80C89FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FD0u)) return;
    // 80C89FD0: lis     r6, -27403
    ctx->gpr[6] = ((u32)(s32)(-27403) << 16);

label_80C89FD4:
    ctx->pc = 0x80C89FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FD4u)) return;
    // 80C89FD4: addi    r6, r6, -21564
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21564);

label_80C89FD8:
    ctx->pc = 0x80C89FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C89FD8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C89FD8u)) return;
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
label_80C89FDC:
    ctx->pc = 0x80C89FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FDCu)) return;
    // 80C89FDC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C89FE0:
    ctx->pc = 0x80C89FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FE0u)) return;
    // 80C89FE0: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C89FE4:
    ctx->pc = 0x80C89FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FE4u)) return;
    // 80C89FE4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C89FE8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C89FE8:
    ctx->pc = 0x80C89FE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89FE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C89FE8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C89FEC:
    ctx->pc = 0x80C89FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FECu)) return;
    // 80C89FEC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C89FF0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C89FF0:
    ctx->pc = 0x80C89FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C89FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C89FF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C89FF4:
    ctx->pc = 0x80C89FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FF4u)) return;
    // 80C89FF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C89FF8:
    ctx->pc = 0x80C89FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FF8u)) return;
    // 80C89FF8: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C89FFC:
    ctx->pc = 0x80C89FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C89FFCu)) return;
    // 80C89FFC: addi    r5, r5, -21560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21560);

label_80C8A000:
    ctx->pc = 0x80C8A000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8A000: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8A000u)) return;
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
label_80C8A004:
    ctx->pc = 0x80C8A004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A004u)) return;
    // 80C8A004: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C8A008:
    ctx->pc = 0x80C8A008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A008u)) return;
    // 80C8A008: addi    r5, r5, -21556
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21556);

label_80C8A00C:
    ctx->pc = 0x80C8A00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A00Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8A00C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8A00Cu)) return;
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
label_80C8A010:
    ctx->pc = 0x80C8A010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A010u)) return;
    // 80C8A010: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C8A014:
    ctx->pc = 0x80C8A014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A014u)) return;
    // 80C8A014: addi    r5, r5, -21552
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21552);

label_80C8A018:
    ctx->pc = 0x80C8A018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8A018: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8A018u)) return;
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
label_80C8A01C:
    ctx->pc = 0x80C8A01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A01Cu)) return;
    // 80C8A01C: bl      0x8045C750
    {
            ctx->lr = 0x80C8A020u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C8A020:
    ctx->pc = 0x80C8A020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8A020: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8A024:
    ctx->pc = 0x80C8A024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A024u)) return;
    // 80C8A024: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8A028:
    ctx->pc = 0x80C8A028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A028u)) return;
    // 80C8A028: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80C8A02C:
    ctx->pc = 0x80C8A02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A02Cu)) return;
    // 80C8A02C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C8A030:
    ctx->pc = 0x80C8A030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A030u)) return;
    // 80C8A030: addi    r6, r6, -24832
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24832);

label_80C8A034:
    ctx->pc = 0x80C8A034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A034u)) return;
    // 80C8A034: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C8A038:
    ctx->pc = 0x80C8A038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A038u)) return;
    // 80C8A038: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8A03Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8A03C:
    ctx->pc = 0x80C8A03Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A03Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C8A03C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8A040:
    ctx->pc = 0x80C8A040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A040u)) return;
    // 80C8A040: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80C8A044:
    ctx->pc = 0x80C8A044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A044u)) return;
    // 80C8A044: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C8A048:
    ctx->pc = 0x80C8A048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A048u)) return;
    // 80C8A048: addi    r5, r5, -21560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21560);

label_80C8A04C:
    ctx->pc = 0x80C8A04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A04Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8A04C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8A04Cu)) return;
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
label_80C8A050:
    ctx->pc = 0x80C8A050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A050u)) return;
    // 80C8A050: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C8A054:
    ctx->pc = 0x80C8A054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A054u)) return;
    // 80C8A054: addi    r5, r5, -21548
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21548);

label_80C8A058:
    ctx->pc = 0x80C8A058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8A058: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8A058u)) return;
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
label_80C8A05C:
    ctx->pc = 0x80C8A05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A05Cu)) return;
    // 80C8A05C: lis     r5, -27403
    ctx->gpr[5] = ((u32)(s32)(-27403) << 16);

label_80C8A060:
    ctx->pc = 0x80C8A060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A060u)) return;
    // 80C8A060: addi    r5, r5, -21552
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21552);

label_80C8A064:
    ctx->pc = 0x80C8A064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8A064: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8A064u)) return;
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
label_80C8A068:
    ctx->pc = 0x80C8A068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A068u)) return;
    // 80C8A068: bl      0x8045C750
    {
            ctx->lr = 0x80C8A06Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C8A06C:
    ctx->pc = 0x80C8A06Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A06Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8A06C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8A070:
    ctx->pc = 0x80C8A070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A070u)) return;
    // 80C8A070: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C8A074:
    ctx->pc = 0x80C8A074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A074u)) return;
    // 80C8A074: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80C8A078:
    ctx->pc = 0x80C8A078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A078u)) return;
    // 80C8A078: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C8A07C:
    ctx->pc = 0x80C8A07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A07Cu)) return;
    // 80C8A07C: addi    r6, r6, -24832
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24832);

label_80C8A080:
    ctx->pc = 0x80C8A080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A080u)) return;
    // 80C8A080: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C8A084:
    ctx->pc = 0x80C8A084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A084u)) return;
    // 80C8A084: bl      0x8045C7B4
    {
            ctx->lr = 0x80C8A088u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C8A088:
    ctx->pc = 0x80C8A088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C8A088: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80C8A08C:
    ctx->pc = 0x80C8A08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A08Cu)) return;
    // 80C8A08C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C8A090:
    ctx->pc = 0x80C8A090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A090u)) return;
    // 80C8A090: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C8A094:
    ctx->pc = 0x80C8A094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8A094: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8A098:
    ctx->pc = 0x80C8A098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A098u)) return;
    // 80C8A098: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8A09C:
    ctx->pc = 0x80C8A09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A09Cu)) return;
    // 80C8A09C: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C8A0A0:
    ctx->pc = 0x80C8A0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0A0u)) return;
    // 80C8A0A0: addi    r4, r4, -21316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21316);

label_80C8A0A4:
    ctx->pc = 0x80C8A0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8A0A4: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8A0A8:
    ctx->pc = 0x80C8A0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8A0A8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8A0AC:
    ctx->pc = 0x80C8A0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0ACu)) return;
    // 80C8A0AC: bl      0x8045F608
    {
            ctx->lr = 0x80C8A0B0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C8A0B0:
    ctx->pc = 0x80C8A0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8A0B0: bl      0x8045F300
    {
            ctx->lr = 0x80C8A0B4u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80C8A0B4:
    ctx->pc = 0x80C8A0B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8A0B4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C8A0B8:
    ctx->pc = 0x80C8A0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0B8u)) return;
    // 80C8A0B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C8A0BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C8A0BC:
    ctx->pc = 0x80C8A0BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8A0BC: li      r3, 1241
    ctx->gpr[3] = (u32)(s32)(1241);

label_80C8A0C0:
    ctx->pc = 0x80C8A0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0C0u)) return;
    // 80C8A0C0: bl      0x8045BFA0
    {
            ctx->lr = 0x80C8A0C4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C8A0C4:
    ctx->pc = 0x80C8A0C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C8A0C4: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80C8A0C8:
    ctx->pc = 0x80C8A0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0C8u)) return;
    // 80C8A0C8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C8A0CC:
    ctx->pc = 0x80C8A0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0CCu)) return;
    // 80C8A0CC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C8A0D0:
    ctx->pc = 0x80C8A0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8A0D0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8A0D4:
    ctx->pc = 0x80C8A0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0D4u)) return;
    // 80C8A0D4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8A0D8:
    ctx->pc = 0x80C8A0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0D8u)) return;
    // 80C8A0D8: lis     r4, -27403
    ctx->gpr[4] = ((u32)(s32)(-27403) << 16);

label_80C8A0DC:
    ctx->pc = 0x80C8A0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0DCu)) return;
    // 80C8A0DC: addi    r4, r4, -21316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21316);

label_80C8A0E0:
    ctx->pc = 0x80C8A0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8A0E0: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8A0E4:
    ctx->pc = 0x80C8A0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8A0E4: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8A0E8:
    ctx->pc = 0x80C8A0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0E8u)) return;
    // 80C8A0E8: bl      0x8045F608
    {
            ctx->lr = 0x80C8A0ECu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C8A0EC:
    ctx->pc = 0x80C8A0ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8A0EC: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C8A0F0:
    ctx->pc = 0x80C8A0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A0F0u)) return;
    // 80C8A0F0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C8A0F4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C8A0F4:
    ctx->pc = 0x80C8A0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8A0F4: bl      0x8045F300
    {
            ctx->lr = 0x80C8A0F8u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80C8A0F8:
    ctx->pc = 0x80C8A0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8A0F8: b       0x80C8A10C
    {
            goto label_80C8A10C;
    }

label_80C8A0FC:
    ctx->pc = 0x80C8A0FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A0FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8A0FC: bl      0x8045DE34
    {
            ctx->lr = 0x80C8A100u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C8A100:
    ctx->pc = 0x80C8A100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8A100: bl      0x80460A80
    {
            ctx->lr = 0x80C8A104u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C8A104:
    ctx->pc = 0x80C8A104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8A104: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8A108:
    ctx->pc = 0x80C8A108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A108u)) return;
    // 80C8A108: bl      0x8045EC10
    {
            ctx->lr = 0x80C8A10Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C8A10C:
    ctx->pc = 0x80C8A10Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8A10Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8A10C: lwz     r0, 20(r1)
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
label_80C8A110:
    ctx->pc = 0x80C8A110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8A110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8A110: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8A114:
    ctx->pc = 0x80C8A114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A114u)) return;
    // 80C8A114: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8A118:
    ctx->pc = 0x80C8A118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8A118u)) return;
    // 80C8A118: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C89DE0;
        }
    }

    ctx->pc = 0x80C8A11Cu;
    return;
return_dispatch_80C89DE0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C89E14u: goto label_80C89E14;
    case 0x80C89E18u: goto label_80C89E18;
    case 0x80C89E1Cu: goto label_80C89E1C;
    case 0x80C89E24u: goto label_80C89E24;
    case 0x80C89E2Cu: goto label_80C89E2C;
    case 0x80C89E54u: goto label_80C89E54;
    case 0x80C89E5Cu: goto label_80C89E5C;
    case 0x80C89E70u: goto label_80C89E70;
    case 0x80C89EA0u: goto label_80C89EA0;
    case 0x80C89EBCu: goto label_80C89EBC;
    case 0x80C89EC4u: goto label_80C89EC4;
    case 0x80C89EC8u: goto label_80C89EC8;
    case 0x80C89ED0u: goto label_80C89ED0;
    case 0x80C89EF8u: goto label_80C89EF8;
    case 0x80C89F00u: goto label_80C89F00;
    case 0x80C89F40u: goto label_80C89F40;
    case 0x80C89F70u: goto label_80C89F70;
    case 0x80C89F78u: goto label_80C89F78;
    case 0x80C89FA8u: goto label_80C89FA8;
    case 0x80C89FB0u: goto label_80C89FB0;
    case 0x80C89FB4u: goto label_80C89FB4;
    case 0x80C89FB8u: goto label_80C89FB8;
    case 0x80C89FC0u: goto label_80C89FC0;
    case 0x80C89FE8u: goto label_80C89FE8;
    case 0x80C89FF0u: goto label_80C89FF0;
    case 0x80C8A020u: goto label_80C8A020;
    case 0x80C8A03Cu: goto label_80C8A03C;
    case 0x80C8A06Cu: goto label_80C8A06C;
    case 0x80C8A088u: goto label_80C8A088;
    case 0x80C8A0B0u: goto label_80C8A0B0;
    case 0x80C8A0B4u: goto label_80C8A0B4;
    case 0x80C8A0BCu: goto label_80C8A0BC;
    case 0x80C8A0C4u: goto label_80C8A0C4;
    case 0x80C8A0ECu: goto label_80C8A0EC;
    case 0x80C8A0F4u: goto label_80C8A0F4;
    case 0x80C8A0F8u: goto label_80C8A0F8;
    case 0x80C8A100u: goto label_80C8A100;
    case 0x80C8A104u: goto label_80C8A104;
    case 0x80C8A10Cu: goto label_80C8A10C;
    default: return;
    }
}

