// DolRecomp output
#include "../generated.h"

void func_80A40DE0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80A40DE0[151] = {
        &&label_80A40DE0,
        &&label_80A40DE4,
        &&label_80A40DE8,
        &&label_80A40DEC,
        &&label_80A40DF0,
        &&label_80A40DF4,
        &&label_80A40DF8,
        &&label_80A40DFC,
        &&label_80A40E00,
        &&label_80A40E04,
        &&label_80A40E08,
        &&label_80A40E0C,
        &&label_80A40E10,
        &&label_80A40E14,
        &&label_80A40E18,
        &&label_80A40E1C,
        &&label_80A40E20,
        &&label_80A40E24,
        &&label_80A40E28,
        &&label_80A40E2C,
        &&label_80A40E30,
        &&label_80A40E34,
        &&label_80A40E38,
        &&label_80A40E3C,
        &&label_80A40E40,
        &&label_80A40E44,
        &&label_80A40E48,
        &&label_80A40E4C,
        &&label_80A40E50,
        &&label_80A40E54,
        &&label_80A40E58,
        &&label_80A40E5C,
        &&label_80A40E60,
        &&label_80A40E64,
        &&label_80A40E68,
        &&label_80A40E6C,
        &&label_80A40E70,
        &&label_80A40E74,
        &&label_80A40E78,
        &&label_80A40E7C,
        &&label_80A40E80,
        &&label_80A40E84,
        &&label_80A40E88,
        &&label_80A40E8C,
        &&label_80A40E90,
        &&label_80A40E94,
        &&label_80A40E98,
        &&label_80A40E9C,
        &&label_80A40EA0,
        &&label_80A40EA4,
        &&label_80A40EA8,
        &&label_80A40EAC,
        &&label_80A40EB0,
        &&label_80A40EB4,
        &&label_80A40EB8,
        &&label_80A40EBC,
        &&label_80A40EC0,
        &&label_80A40EC4,
        &&label_80A40EC8,
        &&label_80A40ECC,
        &&label_80A40ED0,
        &&label_80A40ED4,
        &&label_80A40ED8,
        &&label_80A40EDC,
        &&label_80A40EE0,
        &&label_80A40EE4,
        &&label_80A40EE8,
        &&label_80A40EEC,
        &&label_80A40EF0,
        &&label_80A40EF4,
        &&label_80A40EF8,
        &&label_80A40EFC,
        &&label_80A40F00,
        &&label_80A40F04,
        &&label_80A40F08,
        &&label_80A40F0C,
        &&label_80A40F10,
        &&label_80A40F14,
        &&label_80A40F18,
        &&label_80A40F1C,
        &&label_80A40F20,
        &&label_80A40F24,
        &&label_80A40F28,
        &&label_80A40F2C,
        &&label_80A40F30,
        &&label_80A40F34,
        &&label_80A40F38,
        &&label_80A40F3C,
        &&label_80A40F40,
        &&label_80A40F44,
        &&label_80A40F48,
        &&label_80A40F4C,
        &&label_80A40F50,
        &&label_80A40F54,
        &&label_80A40F58,
        &&label_80A40F5C,
        &&label_80A40F60,
        &&label_80A40F64,
        &&label_80A40F68,
        &&label_80A40F6C,
        &&label_80A40F70,
        &&label_80A40F74,
        &&label_80A40F78,
        &&label_80A40F7C,
        &&label_80A40F80,
        &&label_80A40F84,
        &&label_80A40F88,
        &&label_80A40F8C,
        &&label_80A40F90,
        &&label_80A40F94,
        &&label_80A40F98,
        &&label_80A40F9C,
        &&label_80A40FA0,
        &&label_80A40FA4,
        &&label_80A40FA8,
        &&label_80A40FAC,
        &&label_80A40FB0,
        &&label_80A40FB4,
        &&label_80A40FB8,
        &&label_80A40FBC,
        &&label_80A40FC0,
        &&label_80A40FC4,
        &&label_80A40FC8,
        &&label_80A40FCC,
        &&label_80A40FD0,
        &&label_80A40FD4,
        &&label_80A40FD8,
        &&label_80A40FDC,
        &&label_80A40FE0,
        &&label_80A40FE4,
        &&label_80A40FE8,
        &&label_80A40FEC,
        &&label_80A40FF0,
        &&label_80A40FF4,
        &&label_80A40FF8,
        &&label_80A40FFC,
        &&label_80A41000,
        &&label_80A41004,
        &&label_80A41008,
        &&label_80A4100C,
        &&label_80A41010,
        &&label_80A41014,
        &&label_80A41018,
        &&label_80A4101C,
        &&label_80A41020,
        &&label_80A41024,
        &&label_80A41028,
        &&label_80A4102C,
        &&label_80A41030,
        &&label_80A41034,
        &&label_80A41038
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80A40DE0u && pc <= 0x80A41038u && ((pc - 0x80A40DE0u) & 3u) == 0u)
            goto *pc_table_80A40DE0[(pc - 0x80A40DE0u) >> 2];
    }
    return;
label_80A40DE0:
    ctx->pc = 0x80A40DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80A40DE0: lis     r8, -32604
    ctx->gpr[8] = ((u32)(s32)(-32604) << 16);

label_80A40DE4:
    ctx->pc = 0x80A40DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A40DE4: lfs     f0, 8644(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A40DE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8644);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40DE8:
    ctx->pc = 0x80A40DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40DE8u)) return;
    // 80A40DE8: lis     r7, -28618
    ctx->gpr[7] = ((u32)(s32)(-28618) << 16);

label_80A40DEC:
    ctx->pc = 0x80A40DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40DECu)) return;
    // 80A40DEC: addi    r4, r8, 2424
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(2424);

label_80A40DF0:
    ctx->pc = 0x80A40DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40DF0u)) return;
    // 80A40DF0: fabs    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A40DF0u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) & 0x7FFFFFFFFFFFFFFFull);

label_80A40DF4:
    ctx->pc = 0x80A40DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A40DF4: stfs     f7, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40DF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40DF8:
    ctx->pc = 0x80A40DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A40DF8: stw     r4, 20448(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20448);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40DFC:
    ctx->pc = 0x80A40DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40DFCu)) return;
    // 80A40DFC: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A40DFCu)) return;
    ppc_frsp(ctx, 2, 2);

label_80A40E00:
    ctx->pc = 0x80A40E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A40E00: stfs     f7, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E04:
    ctx->pc = 0x80A40E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A40E04: stfs     f6, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E08:
    ctx->pc = 0x80A40E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A40E08: stfs     f6, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E08u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E0C:
    ctx->pc = 0x80A40E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A40E0C: stfs     f5, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E0Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E10:
    ctx->pc = 0x80A40E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A40E10: stfs     f5, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E14:
    ctx->pc = 0x80A40E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A40E14: stfs     f4, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E14u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E18:
    ctx->pc = 0x80A40E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A40E18: stfs     f4, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E1C:
    ctx->pc = 0x80A40E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A40E1C: stfs     f3, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E1Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E20:
    ctx->pc = 0x80A40E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A40E20: stfs     f2, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E20u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E24:
    ctx->pc = 0x80A40E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A40E24: stfs     f1, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E24u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E28:
    ctx->pc = 0x80A40E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A40E28: stfs     f0, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40E28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E2C:
    ctx->pc = 0x80A40E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A40E2C: stb     r0, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E30:
    ctx->pc = 0x80A40E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E30u)) return;
    // 80A40E30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A40DE0;
        }
    }

label_80A40E34:
    ctx->pc = 0x80A40E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A40E34: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E38:
    ctx->pc = 0x80A40E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A40E38: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E3C:
    ctx->pc = 0x80A40E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A40E3C: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E40:
    ctx->pc = 0x80A40E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A40E40: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40E40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E44:
    ctx->pc = 0x80A40E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A40E44: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A40E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80A40E44u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E48:
    ctx->pc = 0x80A40E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A40E48: stw     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E4C:
    ctx->pc = 0x80A40E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E4Cu)) return;
    // 80A40E4C: lis     r4, -27707
    ctx->gpr[4] = ((u32)(s32)(-27707) << 16);

label_80A40E50:
    ctx->pc = 0x80A40E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A40E50: lfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A40E50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
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
label_80A40E54:
    ctx->pc = 0x80A40E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A40E54: lfs     f0, 8588(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A40E54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E58:
    ctx->pc = 0x80A40E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E58u)) return;
    // 80A40E58: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A40E5C:
    ctx->pc = 0x80A40E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A40E5C: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40E5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E60:
    ctx->pc = 0x80A40E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E60u)) return;
    // 80A40E60: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80A40E64:
    ctx->pc = 0x80A40E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E64u)) return;
    // 80A40E64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A40E68:
    ctx->pc = 0x80A40E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E68u)) return;
    // 80A40E68: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A40E6C:
    ctx->pc = 0x80A40E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A40E6C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40E6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E70:
    ctx->pc = 0x80A40E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A40E70: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40E70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E74:
    ctx->pc = 0x80A40E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A40E74: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40E74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E78:
    ctx->pc = 0x80A40E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A40E78: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E7C:
    ctx->pc = 0x80A40E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A40E7C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40E7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E80:
    ctx->pc = 0x80A40E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E80u)) return;
    // 80A40E80: bl      0x80035FF4
    {
            ctx->lr = 0x80A40E84u;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_80A40E84:
    ctx->pc = 0x80A40E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80A40E84: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A40E88:
    ctx->pc = 0x80A40E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E88u)) return;
    // 80A40E88: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A40E8C:
    ctx->pc = 0x80A40E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E8Cu)) return;
    // 80A40E8C: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A40E90:
    ctx->pc = 0x80A40E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E90u)) return;
    // 80A40E90: lis     r6, -27707
    ctx->gpr[6] = ((u32)(s32)(-27707) << 16);

label_80A40E94:
    ctx->pc = 0x80A40E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A40E94: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40E98:
    ctx->pc = 0x80A40E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E98u)) return;
    // 80A40E98: lis     r3, -27707
    ctx->gpr[3] = ((u32)(s32)(-27707) << 16);

label_80A40E9C:
    ctx->pc = 0x80A40E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A40E9C: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EA0:
    ctx->pc = 0x80A40EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A40EA0: stw     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EA4:
    ctx->pc = 0x80A40EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EA4u)) return;
    // 80A40EA4: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A40EA8:
    ctx->pc = 0x80A40EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A40EA8: lfd     f1, 8616(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A40EA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8616);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EAC:
    ctx->pc = 0x80A40EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A40EAC: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EB0:
    ctx->pc = 0x80A40EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A40EB0: lfd     f2, 8592(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40EB0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8592);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EB4:
    ctx->pc = 0x80A40EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A40EB4: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40EB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EB8:
    ctx->pc = 0x80A40EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EB8u)) return;
    // 80A40EB8: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A40EB8u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A40EBC:
    ctx->pc = 0x80A40EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EBCu)) return;
    // 80A40EBC: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A40EBCu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80A40EC0:
    ctx->pc = 0x80A40EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EC0u)) return;
    // 80A40EC0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A40EC0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A40EC4:
    ctx->pc = 0x80A40EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EC4u)) return;
    // 80A40EC4: bl      0x80014034
    {
            ctx->lr = 0x80A40EC8u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80A40EC8:
    ctx->pc = 0x80A40EC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40EC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80A40EC8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A40ECC:
    ctx->pc = 0x80A40ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40ECCu)) return;
    // 80A40ECC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A40ED0:
    ctx->pc = 0x80A40ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40ED0u)) return;
    // 80A40ED0: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A40ED4:
    ctx->pc = 0x80A40ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A40ED4: stw     r0, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40ED8:
    ctx->pc = 0x80A40ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A40ED8: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EDC:
    ctx->pc = 0x80A40EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EDCu)) return;
    // 80A40EDC: lis     r3, -27707
    ctx->gpr[3] = ((u32)(s32)(-27707) << 16);

label_80A40EE0:
    ctx->pc = 0x80A40EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A40EE0: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EE4:
    ctx->pc = 0x80A40EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EE4u)) return;
    // 80A40EE4: lis     r6, -27707
    ctx->gpr[6] = ((u32)(s32)(-27707) << 16);

label_80A40EE8:
    ctx->pc = 0x80A40EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EE8u)) return;
    // 80A40EE8: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80A40EE8u)) return;
    ppc_frsp(ctx, 31, 1);

label_80A40EEC:
    ctx->pc = 0x80A40EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A40EEC: lfd     f2, 8616(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A40EECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8616);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EF0:
    ctx->pc = 0x80A40EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EF0u)) return;
    // 80A40EF0: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A40EF4:
    ctx->pc = 0x80A40EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A40EF4: lfd     f1, 8592(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A40EF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8592);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EF8:
    ctx->pc = 0x80A40EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A40EF8: stw     r0, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40EFC:
    ctx->pc = 0x80A40EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A40EFC: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40EFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40F00:
    ctx->pc = 0x80A40F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F00u)) return;
    // 80A40F00: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A40F00u)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_80A40F04:
    ctx->pc = 0x80A40F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F04u)) return;
    // 80A40F04: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A40F04u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80A40F08:
    ctx->pc = 0x80A40F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F08u)) return;
    // 80A40F08: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A40F08u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A40F0C:
    ctx->pc = 0x80A40F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F0Cu)) return;
    // 80A40F0C: bl      0x80013948
    {
            ctx->lr = 0x80A40F10u;
            ctx->pc = 0x80013948u;
            return;
    }

label_80A40F10:
    ctx->pc = 0x80A40F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A40F10: lis     r3, -27707
    ctx->gpr[3] = ((u32)(s32)(-27707) << 16);

label_80A40F14:
    ctx->pc = 0x80A40F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F14u)) return;
    // 80A40F14: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A40F14u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A40F18:
    ctx->pc = 0x80A40F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A40F18: lfs     f3, 8588(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A40F18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8588);
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
label_80A40F1C:
    ctx->pc = 0x80A40F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F1Cu)) return;
    // 80A40F1C: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80A40F1Cu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80A40F20:
    ctx->pc = 0x80A40F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F20u)) return;
    // 80A40F20: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A40F24:
    ctx->pc = 0x80A40F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F24u)) return;
    // 80A40F24: bl      0x8003A888
    {
            ctx->lr = 0x80A40F28u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80A40F28:
    ctx->pc = 0x80A40F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A40F28: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40F28u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
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
label_80A40F2C:
    ctx->pc = 0x80A40F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F2Cu)) return;
    // 80A40F2C: lis     r3, -27707
    ctx->gpr[3] = ((u32)(s32)(-27707) << 16);

label_80A40F30:
    ctx->pc = 0x80A40F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A40F30: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40F30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80A40F34:
    ctx->pc = 0x80A40F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F34u)) return;
    // 80A40F34: addi    r4, r3, 8588
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8588);

label_80A40F38:
    ctx->pc = 0x80A40F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A40F38: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40F38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40F3C:
    ctx->pc = 0x80A40F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F3Cu)) return;
    // 80A40F3C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A40F40:
    ctx->pc = 0x80A40F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F40u)) return;
    // 80A40F40: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A40F40u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A40F44:
    ctx->pc = 0x80A40F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A40F44: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A40F44u)) return;
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
label_80A40F48:
    ctx->pc = 0x80A40F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F48u)) return;
    // 80A40F48: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A40F48u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80A40F4C:
    ctx->pc = 0x80A40F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F4Cu)) return;
    // 80A40F4C: bl      0x8003A8BC
    {
            ctx->lr = 0x80A40F50u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A40F50:
    ctx->pc = 0x80A40F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A40F50: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A40F54:
    ctx->pc = 0x80A40F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F54u)) return;
    // 80A40F54: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80A40F58:
    ctx->pc = 0x80A40F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F58u)) return;
    // 80A40F58: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A40F5C:
    ctx->pc = 0x80A40F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F5Cu)) return;
    // 80A40F5C: bl      0x8003A434
    {
            ctx->lr = 0x80A40F60u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A40F60:
    ctx->pc = 0x80A40F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A40F60: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A40F64:
    ctx->pc = 0x80A40F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F64u)) return;
    // 80A40F64: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80A40F68:
    ctx->pc = 0x80A40F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F68u)) return;
    // 80A40F68: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A40F6C:
    ctx->pc = 0x80A40F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F6Cu)) return;
    // 80A40F6C: bl      0x8003768C
    {
            ctx->lr = 0x80A40F70u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A40F70:
    ctx->pc = 0x80A40F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A40F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80A40F70: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40F70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40F74:
    ctx->pc = 0x80A40F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F74u)) return;
    // 80A40F74: lis     r4, -27707
    ctx->gpr[4] = ((u32)(s32)(-27707) << 16);

label_80A40F78:
    ctx->pc = 0x80A40F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F78u)) return;
    // 80A40F78: lis     r3, -27707
    ctx->gpr[3] = ((u32)(s32)(-27707) << 16);

label_80A40F7C:
    ctx->pc = 0x80A40F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F7Cu)) return;
    // 80A40F7C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80A40F80:
    ctx->pc = 0x80A40F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A40F80: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40F80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40F84:
    ctx->pc = 0x80A40F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F84u)) return;
    // 80A40F84: addi    r5, r4, 8588
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(8588);

label_80A40F88:
    ctx->pc = 0x80A40F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F88u)) return;
    // 80A40F88: addi    r4, r3, 8600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8600);

label_80A40F8C:
    ctx->pc = 0x80A40F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80A40F8C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A40F8Cu)) return;
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
label_80A40F90:
    ctx->pc = 0x80A40F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A40F90: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40F90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_80A40F94:
    ctx->pc = 0x80A40F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F94u)) return;
    // 80A40F94: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80A40F98:
    ctx->pc = 0x80A40F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A40F98: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A40F98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40F9C:
    ctx->pc = 0x80A40F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40F9Cu)) return;
    // 80A40F9C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A40FA0:
    ctx->pc = 0x80A40FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A40FA0: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FA4:
    ctx->pc = 0x80A40FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A40FA4: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80A40FA8:
    ctx->pc = 0x80A40FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A40FA8: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FAC:
    ctx->pc = 0x80A40FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A40FAC: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80A40FB0:
    ctx->pc = 0x80A40FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A40FB0: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FB4:
    ctx->pc = 0x80A40FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A40FB4: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
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
label_80A40FB8:
    ctx->pc = 0x80A40FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A40FB8: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FBC:
    ctx->pc = 0x80A40FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A40FBC: stfs     f2, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FC0:
    ctx->pc = 0x80A40FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A40FC0: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
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
label_80A40FC4:
    ctx->pc = 0x80A40FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A40FC4: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FC8:
    ctx->pc = 0x80A40FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A40FC8: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FCC:
    ctx->pc = 0x80A40FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A40FCC: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
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
label_80A40FD0:
    ctx->pc = 0x80A40FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A40FD0: stfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FD4:
    ctx->pc = 0x80A40FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A40FD4: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
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
label_80A40FD8:
    ctx->pc = 0x80A40FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A40FD8: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FDC:
    ctx->pc = 0x80A40FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A40FDC: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FDCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80A40FE0:
    ctx->pc = 0x80A40FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A40FE0: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FE4:
    ctx->pc = 0x80A40FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A40FE4: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A40FE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80A40FE8:
    ctx->pc = 0x80A40FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A40FE8: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FEC:
    ctx->pc = 0x80A40FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A40FEC: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FF0:
    ctx->pc = 0x80A40FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A40FF0: stfs     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FF4:
    ctx->pc = 0x80A40FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A40FF4: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FF8:
    ctx->pc = 0x80A40FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A40FF8: stfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A40FFC:
    ctx->pc = 0x80A40FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A40FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A40FFC: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A40FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41000:
    ctx->pc = 0x80A41000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A41000: stfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A41000u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41004:
    ctx->pc = 0x80A41004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A41004: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A41004u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41008:
    ctx->pc = 0x80A41008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A41008: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A41008u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A4100C:
    ctx->pc = 0x80A4100Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A4100Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A4100C: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41010:
    ctx->pc = 0x80A41010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A41010: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41014:
    ctx->pc = 0x80A41014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A41014: stw     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41018:
    ctx->pc = 0x80A41018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A41018: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A4101C:
    ctx->pc = 0x80A4101Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A4101Cu)) return;
    // 80A4101C: bl      0x80050070
    {
            ctx->lr = 0x80A41020u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80A41020:
    ctx->pc = 0x80A41020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A41020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A41020: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A41020u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80A41020u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41024:
    ctx->pc = 0x80A41024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A41024: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41028:
    ctx->pc = 0x80A41028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A41028: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A41028u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A4102C:
    ctx->pc = 0x80A4102Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A4102Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A4102C: lwz     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41030:
    ctx->pc = 0x80A41030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A41030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A41030: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A41034:
    ctx->pc = 0x80A41034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41034u)) return;
    // 80A41034: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_80A41038:
    ctx->pc = 0x80A41038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A41038u)) return;
    // 80A41038: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A40DE0;
        }
    }

    ctx->pc = 0x80A4103Cu;
    return;
return_dispatch_80A40DE0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80A40E84u: goto label_80A40E84;
    case 0x80A40EC8u: goto label_80A40EC8;
    case 0x80A40F10u: goto label_80A40F10;
    case 0x80A40F28u: goto label_80A40F28;
    case 0x80A40F50u: goto label_80A40F50;
    case 0x80A40F60u: goto label_80A40F60;
    case 0x80A40F70u: goto label_80A40F70;
    case 0x80A41020u: goto label_80A41020;
    default: return;
    }
}

