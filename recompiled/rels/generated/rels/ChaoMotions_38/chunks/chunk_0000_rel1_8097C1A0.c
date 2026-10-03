// DolRecomp output
#include "../generated.h"

void func_8097C1A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_8097C1A0[22] = {
        &&label_8097C1A0,
        &&label_8097C1A4,
        &&label_8097C1A8,
        &&label_8097C1AC,
        &&label_8097C1B0,
        &&label_8097C1B4,
        &&label_8097C1B8,
        &&label_8097C1BC,
        &&label_8097C1C0,
        &&label_8097C1C4,
        &&label_8097C1C8,
        &&label_8097C1CC,
        &&label_8097C1D0,
        &&label_8097C1D4,
        &&label_8097C1D8,
        &&label_8097C1DC,
        &&label_8097C1E0,
        &&label_8097C1E4,
        &&label_8097C1E8,
        &&label_8097C1EC,
        &&label_8097C1F0,
        &&label_8097C1F4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x8097C1A0u && pc <= 0x8097C1F4u && ((pc - 0x8097C1A0u) & 3u) == 0u)
            goto *pc_table_8097C1A0[(pc - 0x8097C1A0u) >> 2];
    }
    return;
label_8097C1A0:
    ctx->pc = 0x8097C1A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8097C1A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8097C1A0: stwu     r1, -16(r1)
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
label_8097C1A4:
    ctx->pc = 0x8097C1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8097C1A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8097C1A8:
    ctx->pc = 0x8097C1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1A8u)) return;
    // 8097C1A8: lis     r3, -27822
    ctx->gpr[3] = ((u32)(s32)(-27822) << 16);

label_8097C1AC:
    ctx->pc = 0x8097C1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8097C1AC: stw     r0, 20(r1)
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
label_8097C1B0:
    ctx->pc = 0x8097C1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1B0u)) return;
    // 8097C1B0: addi    r3, r3, -19136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19136);

label_8097C1B4:
    ctx->pc = 0x8097C1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1B4u)) return;
    // 8097C1B4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8097C1B8:
    ctx->pc = 0x8097C1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1B8u)) return;
    // 8097C1B8: bl      0x8003D8B8
    {
            ctx->lr = 0x8097C1BCu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_8097C1BC:
    ctx->pc = 0x8097C1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8097C1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8097C1BC: lwz     r0, 20(r1)
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
label_8097C1C0:
    ctx->pc = 0x8097C1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8097C1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8097C1C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8097C1C4:
    ctx->pc = 0x8097C1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1C4u)) return;
    // 8097C1C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8097C1C8:
    ctx->pc = 0x8097C1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1C8u)) return;
    // 8097C1C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8097C1A0;
        }
    }

label_8097C1CC:
    ctx->pc = 0x8097C1CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8097C1CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8097C1CC: stwu     r1, -16(r1)
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
label_8097C1D0:
    ctx->pc = 0x8097C1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8097C1D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8097C1D4:
    ctx->pc = 0x8097C1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1D4u)) return;
    // 8097C1D4: lis     r3, -27822
    ctx->gpr[3] = ((u32)(s32)(-27822) << 16);

label_8097C1D8:
    ctx->pc = 0x8097C1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8097C1D8: stw     r0, 20(r1)
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
label_8097C1DC:
    ctx->pc = 0x8097C1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1DCu)) return;
    // 8097C1DC: addi    r3, r3, -19116
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19116);

label_8097C1E0:
    ctx->pc = 0x8097C1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1E0u)) return;
    // 8097C1E0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8097C1E4:
    ctx->pc = 0x8097C1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1E4u)) return;
    // 8097C1E4: bl      0x8003D8B8
    {
            ctx->lr = 0x8097C1E8u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_8097C1E8:
    ctx->pc = 0x8097C1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8097C1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8097C1E8: lwz     r0, 20(r1)
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
label_8097C1EC:
    ctx->pc = 0x8097C1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8097C1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8097C1EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8097C1F0:
    ctx->pc = 0x8097C1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1F0u)) return;
    // 8097C1F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8097C1F4:
    ctx->pc = 0x8097C1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8097C1F4u)) return;
    // 8097C1F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8097C1A0;
        }
    }

    ctx->pc = 0x8097C1F8u;
    return;
return_dispatch_8097C1A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8097C1BCu: goto label_8097C1BC;
    case 0x8097C1E8u: goto label_8097C1E8;
    default: return;
    }
}

