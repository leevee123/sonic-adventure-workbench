// DolRecomp output
#include "../generated.h"

static void loop_80D3F7AC(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80D3F7AC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 63u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80D3F7ACu;
            return;
        }
        ctx->downcount -= 63;
    }
    ctx->pc = 0x80D3F7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80D3F7AC: lwz     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 80D3F7B0: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 80D3F7B4: lhzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F7B8u)) return;
    // 80D3F7B8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7BCu)) return;
    // 80D3F7BC: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7C0u)) return;
    // 80D3F7C0: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7C4u)) return;
    // 80D3F7C4: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    ctx->pc = 0x80D3F7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80D3F7C8: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80D3F7CC: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D3F7D0: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80D3F7D4: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D3F7D8: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80D3F7DC: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80D3F7E0: lwz     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80D3F7E4: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80D3F7E8: lhzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F7ECu)) return;
    // 80D3F7EC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7F0u)) return;
    // 80D3F7F0: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7F4u)) return;
    // 80D3F7F4: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7F8u)) return;
    // 80D3F7F8: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    ctx->pc = 0x80D3F7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80D3F7FC: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80D3F800: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80D3F804: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80D3F808: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80D3F80C: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D3F810: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D3F814: lwz     r9, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D3F818: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F81Cu)) return;
    // 80D3F81C: addi    r11, r4, 2
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(2);

    ctx->pc = 0x80D3F820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D3F820: lhzx    r0, r8, r11
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F824u)) return;
    // 80D3F824: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F828u)) return;
    // 80D3F828: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F82Cu)) return;
    // 80D3F82C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F830u)) return;
    // 80D3F830: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    ctx->pc = 0x80D3F834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D3F834: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D3F838: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D3F83C: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D3F840: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D3F844: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D3F848: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D3F84C: lwz     r9, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D3F850: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D3F854: lhzx    r0, r8, r11
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F858u)) return;
    // 80D3F858: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F85Cu)) return;
    // 80D3F85C: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F860u)) return;
    // 80D3F860: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F864u)) return;
    // 80D3F864: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    ctx->pc = 0x80D3F868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F868: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F86C: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F870: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F874: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F878: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80D3F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F87C: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F880u)) return;
    // 80D3F880: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F884u)) return;
    // 80D3F884: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    ctx->pc = 0x80D3F888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F888: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F88Cu)) return;
    // 80D3F88C: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F890u)) return;
    // 80D3F890: bc    12, 0, 0x80D3F7AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3F7ACu;
                return;
            }
            goto label_80D3F7AC;
        }
    }

    ctx->pc = 0x80D3F894u;
}

void func_80D3F0E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D3F0E0[682] = {
        &&label_80D3F0E0,
        &&label_80D3F0E4,
        &&label_80D3F0E8,
        &&label_80D3F0EC,
        &&label_80D3F0F0,
        &&label_80D3F0F4,
        &&label_80D3F0F8,
        &&label_80D3F0FC,
        &&label_80D3F100,
        &&label_80D3F104,
        &&label_80D3F108,
        &&label_80D3F10C,
        &&label_80D3F110,
        &&label_80D3F114,
        &&label_80D3F118,
        &&label_80D3F11C,
        &&label_80D3F120,
        &&label_80D3F124,
        &&label_80D3F128,
        &&label_80D3F12C,
        &&label_80D3F130,
        &&label_80D3F134,
        &&label_80D3F138,
        &&label_80D3F13C,
        &&label_80D3F140,
        &&label_80D3F144,
        &&label_80D3F148,
        &&label_80D3F14C,
        &&label_80D3F150,
        &&label_80D3F154,
        &&label_80D3F158,
        &&label_80D3F15C,
        &&label_80D3F160,
        &&label_80D3F164,
        &&label_80D3F168,
        &&label_80D3F16C,
        &&label_80D3F170,
        &&label_80D3F174,
        &&label_80D3F178,
        &&label_80D3F17C,
        &&label_80D3F180,
        &&label_80D3F184,
        &&label_80D3F188,
        &&label_80D3F18C,
        &&label_80D3F190,
        &&label_80D3F194,
        &&label_80D3F198,
        &&label_80D3F19C,
        &&label_80D3F1A0,
        &&label_80D3F1A4,
        &&label_80D3F1A8,
        &&label_80D3F1AC,
        &&label_80D3F1B0,
        &&label_80D3F1B4,
        &&label_80D3F1B8,
        &&label_80D3F1BC,
        &&label_80D3F1C0,
        &&label_80D3F1C4,
        &&label_80D3F1C8,
        &&label_80D3F1CC,
        &&label_80D3F1D0,
        &&label_80D3F1D4,
        &&label_80D3F1D8,
        &&label_80D3F1DC,
        &&label_80D3F1E0,
        &&label_80D3F1E4,
        &&label_80D3F1E8,
        &&label_80D3F1EC,
        &&label_80D3F1F0,
        &&label_80D3F1F4,
        &&label_80D3F1F8,
        &&label_80D3F1FC,
        &&label_80D3F200,
        &&label_80D3F204,
        &&label_80D3F208,
        &&label_80D3F20C,
        &&label_80D3F210,
        &&label_80D3F214,
        &&label_80D3F218,
        &&label_80D3F21C,
        &&label_80D3F220,
        &&label_80D3F224,
        &&label_80D3F228,
        &&label_80D3F22C,
        &&label_80D3F230,
        &&label_80D3F234,
        &&label_80D3F238,
        &&label_80D3F23C,
        &&label_80D3F240,
        &&label_80D3F244,
        &&label_80D3F248,
        &&label_80D3F24C,
        &&label_80D3F250,
        &&label_80D3F254,
        &&label_80D3F258,
        &&label_80D3F25C,
        &&label_80D3F260,
        &&label_80D3F264,
        &&label_80D3F268,
        &&label_80D3F26C,
        &&label_80D3F270,
        &&label_80D3F274,
        &&label_80D3F278,
        &&label_80D3F27C,
        &&label_80D3F280,
        &&label_80D3F284,
        &&label_80D3F288,
        &&label_80D3F28C,
        &&label_80D3F290,
        &&label_80D3F294,
        &&label_80D3F298,
        &&label_80D3F29C,
        &&label_80D3F2A0,
        &&label_80D3F2A4,
        &&label_80D3F2A8,
        &&label_80D3F2AC,
        &&label_80D3F2B0,
        &&label_80D3F2B4,
        &&label_80D3F2B8,
        &&label_80D3F2BC,
        &&label_80D3F2C0,
        &&label_80D3F2C4,
        &&label_80D3F2C8,
        &&label_80D3F2CC,
        &&label_80D3F2D0,
        &&label_80D3F2D4,
        &&label_80D3F2D8,
        &&label_80D3F2DC,
        &&label_80D3F2E0,
        &&label_80D3F2E4,
        &&label_80D3F2E8,
        &&label_80D3F2EC,
        &&label_80D3F2F0,
        &&label_80D3F2F4,
        &&label_80D3F2F8,
        &&label_80D3F2FC,
        &&label_80D3F300,
        &&label_80D3F304,
        &&label_80D3F308,
        &&label_80D3F30C,
        &&label_80D3F310,
        &&label_80D3F314,
        &&label_80D3F318,
        &&label_80D3F31C,
        &&label_80D3F320,
        &&label_80D3F324,
        &&label_80D3F328,
        &&label_80D3F32C,
        &&label_80D3F330,
        &&label_80D3F334,
        &&label_80D3F338,
        &&label_80D3F33C,
        &&label_80D3F340,
        &&label_80D3F344,
        &&label_80D3F348,
        &&label_80D3F34C,
        &&label_80D3F350,
        &&label_80D3F354,
        &&label_80D3F358,
        &&label_80D3F35C,
        &&label_80D3F360,
        &&label_80D3F364,
        &&label_80D3F368,
        &&label_80D3F36C,
        &&label_80D3F370,
        &&label_80D3F374,
        &&label_80D3F378,
        &&label_80D3F37C,
        &&label_80D3F380,
        &&label_80D3F384,
        &&label_80D3F388,
        &&label_80D3F38C,
        &&label_80D3F390,
        &&label_80D3F394,
        &&label_80D3F398,
        &&label_80D3F39C,
        &&label_80D3F3A0,
        &&label_80D3F3A4,
        &&label_80D3F3A8,
        &&label_80D3F3AC,
        &&label_80D3F3B0,
        &&label_80D3F3B4,
        &&label_80D3F3B8,
        &&label_80D3F3BC,
        &&label_80D3F3C0,
        &&label_80D3F3C4,
        &&label_80D3F3C8,
        &&label_80D3F3CC,
        &&label_80D3F3D0,
        &&label_80D3F3D4,
        &&label_80D3F3D8,
        &&label_80D3F3DC,
        &&label_80D3F3E0,
        &&label_80D3F3E4,
        &&label_80D3F3E8,
        &&label_80D3F3EC,
        &&label_80D3F3F0,
        &&label_80D3F3F4,
        &&label_80D3F3F8,
        &&label_80D3F3FC,
        &&label_80D3F400,
        &&label_80D3F404,
        &&label_80D3F408,
        &&label_80D3F40C,
        &&label_80D3F410,
        &&label_80D3F414,
        &&label_80D3F418,
        &&label_80D3F41C,
        &&label_80D3F420,
        &&label_80D3F424,
        &&label_80D3F428,
        &&label_80D3F42C,
        &&label_80D3F430,
        &&label_80D3F434,
        &&label_80D3F438,
        &&label_80D3F43C,
        &&label_80D3F440,
        &&label_80D3F444,
        &&label_80D3F448,
        &&label_80D3F44C,
        &&label_80D3F450,
        &&label_80D3F454,
        &&label_80D3F458,
        &&label_80D3F45C,
        &&label_80D3F460,
        &&label_80D3F464,
        &&label_80D3F468,
        &&label_80D3F46C,
        &&label_80D3F470,
        &&label_80D3F474,
        &&label_80D3F478,
        &&label_80D3F47C,
        &&label_80D3F480,
        &&label_80D3F484,
        &&label_80D3F488,
        &&label_80D3F48C,
        &&label_80D3F490,
        &&label_80D3F494,
        &&label_80D3F498,
        &&label_80D3F49C,
        &&label_80D3F4A0,
        &&label_80D3F4A4,
        &&label_80D3F4A8,
        &&label_80D3F4AC,
        &&label_80D3F4B0,
        &&label_80D3F4B4,
        &&label_80D3F4B8,
        &&label_80D3F4BC,
        &&label_80D3F4C0,
        &&label_80D3F4C4,
        &&label_80D3F4C8,
        &&label_80D3F4CC,
        &&label_80D3F4D0,
        &&label_80D3F4D4,
        &&label_80D3F4D8,
        &&label_80D3F4DC,
        &&label_80D3F4E0,
        &&label_80D3F4E4,
        &&label_80D3F4E8,
        &&label_80D3F4EC,
        &&label_80D3F4F0,
        &&label_80D3F4F4,
        &&label_80D3F4F8,
        &&label_80D3F4FC,
        &&label_80D3F500,
        &&label_80D3F504,
        &&label_80D3F508,
        &&label_80D3F50C,
        &&label_80D3F510,
        &&label_80D3F514,
        &&label_80D3F518,
        &&label_80D3F51C,
        &&label_80D3F520,
        &&label_80D3F524,
        &&label_80D3F528,
        &&label_80D3F52C,
        &&label_80D3F530,
        &&label_80D3F534,
        &&label_80D3F538,
        &&label_80D3F53C,
        &&label_80D3F540,
        &&label_80D3F544,
        &&label_80D3F548,
        &&label_80D3F54C,
        &&label_80D3F550,
        &&label_80D3F554,
        &&label_80D3F558,
        &&label_80D3F55C,
        &&label_80D3F560,
        &&label_80D3F564,
        &&label_80D3F568,
        &&label_80D3F56C,
        &&label_80D3F570,
        &&label_80D3F574,
        &&label_80D3F578,
        &&label_80D3F57C,
        &&label_80D3F580,
        &&label_80D3F584,
        &&label_80D3F588,
        &&label_80D3F58C,
        &&label_80D3F590,
        &&label_80D3F594,
        &&label_80D3F598,
        &&label_80D3F59C,
        &&label_80D3F5A0,
        &&label_80D3F5A4,
        &&label_80D3F5A8,
        &&label_80D3F5AC,
        &&label_80D3F5B0,
        &&label_80D3F5B4,
        &&label_80D3F5B8,
        &&label_80D3F5BC,
        &&label_80D3F5C0,
        &&label_80D3F5C4,
        &&label_80D3F5C8,
        &&label_80D3F5CC,
        &&label_80D3F5D0,
        &&label_80D3F5D4,
        &&label_80D3F5D8,
        &&label_80D3F5DC,
        &&label_80D3F5E0,
        &&label_80D3F5E4,
        &&label_80D3F5E8,
        &&label_80D3F5EC,
        &&label_80D3F5F0,
        &&label_80D3F5F4,
        &&label_80D3F5F8,
        &&label_80D3F5FC,
        &&label_80D3F600,
        &&label_80D3F604,
        &&label_80D3F608,
        &&label_80D3F60C,
        &&label_80D3F610,
        &&label_80D3F614,
        &&label_80D3F618,
        &&label_80D3F61C,
        &&label_80D3F620,
        &&label_80D3F624,
        &&label_80D3F628,
        &&label_80D3F62C,
        &&label_80D3F630,
        &&label_80D3F634,
        &&label_80D3F638,
        &&label_80D3F63C,
        &&label_80D3F640,
        &&label_80D3F644,
        &&label_80D3F648,
        &&label_80D3F64C,
        &&label_80D3F650,
        &&label_80D3F654,
        &&label_80D3F658,
        &&label_80D3F65C,
        &&label_80D3F660,
        &&label_80D3F664,
        &&label_80D3F668,
        &&label_80D3F66C,
        &&label_80D3F670,
        &&label_80D3F674,
        &&label_80D3F678,
        &&label_80D3F67C,
        &&label_80D3F680,
        &&label_80D3F684,
        &&label_80D3F688,
        &&label_80D3F68C,
        &&label_80D3F690,
        &&label_80D3F694,
        &&label_80D3F698,
        &&label_80D3F69C,
        &&label_80D3F6A0,
        &&label_80D3F6A4,
        &&label_80D3F6A8,
        &&label_80D3F6AC,
        &&label_80D3F6B0,
        &&label_80D3F6B4,
        &&label_80D3F6B8,
        &&label_80D3F6BC,
        &&label_80D3F6C0,
        &&label_80D3F6C4,
        &&label_80D3F6C8,
        &&label_80D3F6CC,
        &&label_80D3F6D0,
        &&label_80D3F6D4,
        &&label_80D3F6D8,
        &&label_80D3F6DC,
        &&label_80D3F6E0,
        &&label_80D3F6E4,
        &&label_80D3F6E8,
        &&label_80D3F6EC,
        &&label_80D3F6F0,
        &&label_80D3F6F4,
        &&label_80D3F6F8,
        &&label_80D3F6FC,
        &&label_80D3F700,
        &&label_80D3F704,
        &&label_80D3F708,
        &&label_80D3F70C,
        &&label_80D3F710,
        &&label_80D3F714,
        &&label_80D3F718,
        &&label_80D3F71C,
        &&label_80D3F720,
        &&label_80D3F724,
        &&label_80D3F728,
        &&label_80D3F72C,
        &&label_80D3F730,
        &&label_80D3F734,
        &&label_80D3F738,
        &&label_80D3F73C,
        &&label_80D3F740,
        &&label_80D3F744,
        &&label_80D3F748,
        &&label_80D3F74C,
        &&label_80D3F750,
        &&label_80D3F754,
        &&label_80D3F758,
        &&label_80D3F75C,
        &&label_80D3F760,
        &&label_80D3F764,
        &&label_80D3F768,
        &&label_80D3F76C,
        &&label_80D3F770,
        &&label_80D3F774,
        &&label_80D3F778,
        &&label_80D3F77C,
        &&label_80D3F780,
        &&label_80D3F784,
        &&label_80D3F788,
        &&label_80D3F78C,
        &&label_80D3F790,
        &&label_80D3F794,
        &&label_80D3F798,
        &&label_80D3F79C,
        &&label_80D3F7A0,
        &&label_80D3F7A4,
        &&label_80D3F7A8,
        &&label_80D3F7AC,
        &&label_80D3F7B0,
        &&label_80D3F7B4,
        &&label_80D3F7B8,
        &&label_80D3F7BC,
        &&label_80D3F7C0,
        &&label_80D3F7C4,
        &&label_80D3F7C8,
        &&label_80D3F7CC,
        &&label_80D3F7D0,
        &&label_80D3F7D4,
        &&label_80D3F7D8,
        &&label_80D3F7DC,
        &&label_80D3F7E0,
        &&label_80D3F7E4,
        &&label_80D3F7E8,
        &&label_80D3F7EC,
        &&label_80D3F7F0,
        &&label_80D3F7F4,
        &&label_80D3F7F8,
        &&label_80D3F7FC,
        &&label_80D3F800,
        &&label_80D3F804,
        &&label_80D3F808,
        &&label_80D3F80C,
        &&label_80D3F810,
        &&label_80D3F814,
        &&label_80D3F818,
        &&label_80D3F81C,
        &&label_80D3F820,
        &&label_80D3F824,
        &&label_80D3F828,
        &&label_80D3F82C,
        &&label_80D3F830,
        &&label_80D3F834,
        &&label_80D3F838,
        &&label_80D3F83C,
        &&label_80D3F840,
        &&label_80D3F844,
        &&label_80D3F848,
        &&label_80D3F84C,
        &&label_80D3F850,
        &&label_80D3F854,
        &&label_80D3F858,
        &&label_80D3F85C,
        &&label_80D3F860,
        &&label_80D3F864,
        &&label_80D3F868,
        &&label_80D3F86C,
        &&label_80D3F870,
        &&label_80D3F874,
        &&label_80D3F878,
        &&label_80D3F87C,
        &&label_80D3F880,
        &&label_80D3F884,
        &&label_80D3F888,
        &&label_80D3F88C,
        &&label_80D3F890,
        &&label_80D3F894,
        &&label_80D3F898,
        &&label_80D3F89C,
        &&label_80D3F8A0,
        &&label_80D3F8A4,
        &&label_80D3F8A8,
        &&label_80D3F8AC,
        &&label_80D3F8B0,
        &&label_80D3F8B4,
        &&label_80D3F8B8,
        &&label_80D3F8BC,
        &&label_80D3F8C0,
        &&label_80D3F8C4,
        &&label_80D3F8C8,
        &&label_80D3F8CC,
        &&label_80D3F8D0,
        &&label_80D3F8D4,
        &&label_80D3F8D8,
        &&label_80D3F8DC,
        &&label_80D3F8E0,
        &&label_80D3F8E4,
        &&label_80D3F8E8,
        &&label_80D3F8EC,
        &&label_80D3F8F0,
        &&label_80D3F8F4,
        &&label_80D3F8F8,
        &&label_80D3F8FC,
        &&label_80D3F900,
        &&label_80D3F904,
        &&label_80D3F908,
        &&label_80D3F90C,
        &&label_80D3F910,
        &&label_80D3F914,
        &&label_80D3F918,
        &&label_80D3F91C,
        &&label_80D3F920,
        &&label_80D3F924,
        &&label_80D3F928,
        &&label_80D3F92C,
        &&label_80D3F930,
        &&label_80D3F934,
        &&label_80D3F938,
        &&label_80D3F93C,
        &&label_80D3F940,
        &&label_80D3F944,
        &&label_80D3F948,
        &&label_80D3F94C,
        &&label_80D3F950,
        &&label_80D3F954,
        &&label_80D3F958,
        &&label_80D3F95C,
        &&label_80D3F960,
        &&label_80D3F964,
        &&label_80D3F968,
        &&label_80D3F96C,
        &&label_80D3F970,
        &&label_80D3F974,
        &&label_80D3F978,
        &&label_80D3F97C,
        &&label_80D3F980,
        &&label_80D3F984,
        &&label_80D3F988,
        &&label_80D3F98C,
        &&label_80D3F990,
        &&label_80D3F994,
        &&label_80D3F998,
        &&label_80D3F99C,
        &&label_80D3F9A0,
        &&label_80D3F9A4,
        &&label_80D3F9A8,
        &&label_80D3F9AC,
        &&label_80D3F9B0,
        &&label_80D3F9B4,
        &&label_80D3F9B8,
        &&label_80D3F9BC,
        &&label_80D3F9C0,
        &&label_80D3F9C4,
        &&label_80D3F9C8,
        &&label_80D3F9CC,
        &&label_80D3F9D0,
        &&label_80D3F9D4,
        &&label_80D3F9D8,
        &&label_80D3F9DC,
        &&label_80D3F9E0,
        &&label_80D3F9E4,
        &&label_80D3F9E8,
        &&label_80D3F9EC,
        &&label_80D3F9F0,
        &&label_80D3F9F4,
        &&label_80D3F9F8,
        &&label_80D3F9FC,
        &&label_80D3FA00,
        &&label_80D3FA04,
        &&label_80D3FA08,
        &&label_80D3FA0C,
        &&label_80D3FA10,
        &&label_80D3FA14,
        &&label_80D3FA18,
        &&label_80D3FA1C,
        &&label_80D3FA20,
        &&label_80D3FA24,
        &&label_80D3FA28,
        &&label_80D3FA2C,
        &&label_80D3FA30,
        &&label_80D3FA34,
        &&label_80D3FA38,
        &&label_80D3FA3C,
        &&label_80D3FA40,
        &&label_80D3FA44,
        &&label_80D3FA48,
        &&label_80D3FA4C,
        &&label_80D3FA50,
        &&label_80D3FA54,
        &&label_80D3FA58,
        &&label_80D3FA5C,
        &&label_80D3FA60,
        &&label_80D3FA64,
        &&label_80D3FA68,
        &&label_80D3FA6C,
        &&label_80D3FA70,
        &&label_80D3FA74,
        &&label_80D3FA78,
        &&label_80D3FA7C,
        &&label_80D3FA80,
        &&label_80D3FA84,
        &&label_80D3FA88,
        &&label_80D3FA8C,
        &&label_80D3FA90,
        &&label_80D3FA94,
        &&label_80D3FA98,
        &&label_80D3FA9C,
        &&label_80D3FAA0,
        &&label_80D3FAA4,
        &&label_80D3FAA8,
        &&label_80D3FAAC,
        &&label_80D3FAB0,
        &&label_80D3FAB4,
        &&label_80D3FAB8,
        &&label_80D3FABC,
        &&label_80D3FAC0,
        &&label_80D3FAC4,
        &&label_80D3FAC8,
        &&label_80D3FACC,
        &&label_80D3FAD0,
        &&label_80D3FAD4,
        &&label_80D3FAD8,
        &&label_80D3FADC,
        &&label_80D3FAE0,
        &&label_80D3FAE4,
        &&label_80D3FAE8,
        &&label_80D3FAEC,
        &&label_80D3FAF0,
        &&label_80D3FAF4,
        &&label_80D3FAF8,
        &&label_80D3FAFC,
        &&label_80D3FB00,
        &&label_80D3FB04,
        &&label_80D3FB08,
        &&label_80D3FB0C,
        &&label_80D3FB10,
        &&label_80D3FB14,
        &&label_80D3FB18,
        &&label_80D3FB1C,
        &&label_80D3FB20,
        &&label_80D3FB24,
        &&label_80D3FB28,
        &&label_80D3FB2C,
        &&label_80D3FB30,
        &&label_80D3FB34,
        &&label_80D3FB38,
        &&label_80D3FB3C,
        &&label_80D3FB40,
        &&label_80D3FB44,
        &&label_80D3FB48,
        &&label_80D3FB4C,
        &&label_80D3FB50,
        &&label_80D3FB54,
        &&label_80D3FB58,
        &&label_80D3FB5C,
        &&label_80D3FB60,
        &&label_80D3FB64,
        &&label_80D3FB68,
        &&label_80D3FB6C,
        &&label_80D3FB70,
        &&label_80D3FB74,
        &&label_80D3FB78,
        &&label_80D3FB7C,
        &&label_80D3FB80,
        &&label_80D3FB84
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D3F0E0u && pc <= 0x80D3FB84u && ((pc - 0x80D3F0E0u) & 3u) == 0u)
            goto *pc_table_80D3F0E0[(pc - 0x80D3F0E0u) >> 2];
    }
    return;
label_80D3F0E0:
    ctx->pc = 0x80D3F0E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F0E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F0E0: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F0E0u)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_80D3F0E4:
    ctx->pc = 0x80D3F0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F0E4u)) return;
    // 80D3F0E4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F0E4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F0E8:
    ctx->pc = 0x80D3F0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F0E8u)) return;
    // 80D3F0E8: bl      0x8004B35C
    {
            ctx->lr = 0x80D3F0ECu;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80D3F0EC:
    ctx->pc = 0x80D3F0ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F0ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3F0EC: lis     r3, -27322
    ctx->gpr[3] = ((u32)(s32)(-27322) << 16);

label_80D3F0F0:
    ctx->pc = 0x80D3F0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F0F0u)) return;
    // 80D3F0F0: addi    r3, r3, 3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3328);

label_80D3F0F4:
    ctx->pc = 0x80D3F0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F0F4: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D3F0F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80D3F0F8:
    ctx->pc = 0x80D3F0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F0F8u)) return;
    // 80D3F0F8: bl      0x805FD7A4
    {
            ctx->lr = 0x80D3F0FCu;
            ctx->pc = 0x805FD7A4u;
            return;
    }

label_80D3F0FC:
    ctx->pc = 0x80D3F0FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F0FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F0FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F100:
    ctx->pc = 0x80D3F100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F100u)) return;
    // 80D3F100: bl      0x8004B504
    {
            ctx->lr = 0x80D3F104u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F104:
    ctx->pc = 0x80D3F104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F104: b       0x80D3F1E4
    {
            goto label_80D3F1E4;
    }

label_80D3F108:
    ctx->pc = 0x80D3F108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D3F108: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F10C:
    ctx->pc = 0x80D3F10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F10Cu)) return;
    // 80D3F10C: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_80D3F110:
    ctx->pc = 0x80D3F110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F110u)) return;
    // 80D3F110: lis     r4, -27322
    ctx->gpr[4] = ((u32)(s32)(-27322) << 16);

label_80D3F114:
    ctx->pc = 0x80D3F114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F114u)) return;
    // 80D3F114: addi    r4, r4, 9716
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9716);

label_80D3F118:
    ctx->pc = 0x80D3F118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F118: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D3F118u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80D3F11C:
    ctx->pc = 0x80D3F11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F11Cu)) return;
    // 80D3F11C: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_80D3F120:
    ctx->pc = 0x80D3F120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F120u)) return;
    // 80D3F120: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D3F124:
    ctx->pc = 0x80D3F124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F124u)) return;
    // 80D3F124: bl      0x80D3F730
    {
            ctx->lr = 0x80D3F128u;
            goto label_80D3F730;
    }

label_80D3F128:
    ctx->pc = 0x80D3F128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F128: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F12C:
    ctx->pc = 0x80D3F12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F12Cu)) return;
    // 80D3F12C: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F130u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F130:
    ctx->pc = 0x80D3F130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D3F130: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F134:
    ctx->pc = 0x80D3F134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F134u)) return;
    // 80D3F134: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F138:
    ctx->pc = 0x80D3F138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F138u)) return;
    // 80D3F138: addi    r4, r4, 8756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8756);

label_80D3F13C:
    ctx->pc = 0x80D3F13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F13C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F13Cu)) return;
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
label_80D3F140:
    ctx->pc = 0x80D3F140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F140u)) return;
    // 80D3F140: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F144:
    ctx->pc = 0x80D3F144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F144u)) return;
    // 80D3F144: addi    r4, r4, 8840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8840);

label_80D3F148:
    ctx->pc = 0x80D3F148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F148: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F148u)) return;
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
label_80D3F14C:
    ctx->pc = 0x80D3F14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F14C: lfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D3F14Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
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
label_80D3F150:
    ctx->pc = 0x80D3F150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F150u)) return;
    // 80D3F150: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F150u)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_80D3F154:
    ctx->pc = 0x80D3F154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F154u)) return;
    // 80D3F154: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F154u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F158:
    ctx->pc = 0x80D3F158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F158u)) return;
    // 80D3F158: bl      0x8004B35C
    {
            ctx->lr = 0x80D3F15Cu;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80D3F15C:
    ctx->pc = 0x80D3F15Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F15Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3F15C: lis     r3, -27322
    ctx->gpr[3] = ((u32)(s32)(-27322) << 16);

label_80D3F160:
    ctx->pc = 0x80D3F160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F160u)) return;
    // 80D3F160: addi    r3, r3, 9716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9716);

label_80D3F164:
    ctx->pc = 0x80D3F164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F164: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D3F164u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80D3F168:
    ctx->pc = 0x80D3F168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F168u)) return;
    // 80D3F168: bl      0x805FD7A4
    {
            ctx->lr = 0x80D3F16Cu;
            ctx->pc = 0x805FD7A4u;
            return;
    }

label_80D3F16C:
    ctx->pc = 0x80D3F16Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F16Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F16C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F170:
    ctx->pc = 0x80D3F170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F170u)) return;
    // 80D3F170: bl      0x8004B504
    {
            ctx->lr = 0x80D3F174u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F174:
    ctx->pc = 0x80D3F174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F174: b       0x80D3F1E4
    {
            goto label_80D3F1E4;
    }

label_80D3F178:
    ctx->pc = 0x80D3F178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D3F178: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F17C:
    ctx->pc = 0x80D3F17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F17Cu)) return;
    // 80D3F17C: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_80D3F180:
    ctx->pc = 0x80D3F180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F180u)) return;
    // 80D3F180: lis     r4, -27322
    ctx->gpr[4] = ((u32)(s32)(-27322) << 16);

label_80D3F184:
    ctx->pc = 0x80D3F184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F184u)) return;
    // 80D3F184: addi    r4, r4, 16168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16168);

label_80D3F188:
    ctx->pc = 0x80D3F188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F188: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D3F188u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80D3F18C:
    ctx->pc = 0x80D3F18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F18Cu)) return;
    // 80D3F18C: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_80D3F190:
    ctx->pc = 0x80D3F190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F190u)) return;
    // 80D3F190: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D3F194:
    ctx->pc = 0x80D3F194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F194u)) return;
    // 80D3F194: bl      0x80D3F730
    {
            ctx->lr = 0x80D3F198u;
            goto label_80D3F730;
    }

label_80D3F198:
    ctx->pc = 0x80D3F198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F198: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F19C:
    ctx->pc = 0x80D3F19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F19Cu)) return;
    // 80D3F19C: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F1A0u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F1A0:
    ctx->pc = 0x80D3F1A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F1A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D3F1A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F1A4:
    ctx->pc = 0x80D3F1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1A4u)) return;
    // 80D3F1A4: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F1A8:
    ctx->pc = 0x80D3F1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1A8u)) return;
    // 80D3F1A8: addi    r4, r4, 8756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8756);

label_80D3F1AC:
    ctx->pc = 0x80D3F1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F1AC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F1ACu)) return;
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
label_80D3F1B0:
    ctx->pc = 0x80D3F1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1B0u)) return;
    // 80D3F1B0: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F1B4:
    ctx->pc = 0x80D3F1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1B4u)) return;
    // 80D3F1B4: addi    r4, r4, 8840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8840);

label_80D3F1B8:
    ctx->pc = 0x80D3F1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F1B8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F1B8u)) return;
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
label_80D3F1BC:
    ctx->pc = 0x80D3F1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F1BC: lfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D3F1BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
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
label_80D3F1C0:
    ctx->pc = 0x80D3F1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1C0u)) return;
    // 80D3F1C0: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F1C0u)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_80D3F1C4:
    ctx->pc = 0x80D3F1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1C4u)) return;
    // 80D3F1C4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F1C4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F1C8:
    ctx->pc = 0x80D3F1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1C8u)) return;
    // 80D3F1C8: bl      0x8004B35C
    {
            ctx->lr = 0x80D3F1CCu;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80D3F1CC:
    ctx->pc = 0x80D3F1CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F1CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3F1CC: lis     r3, -27322
    ctx->gpr[3] = ((u32)(s32)(-27322) << 16);

label_80D3F1D0:
    ctx->pc = 0x80D3F1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1D0u)) return;
    // 80D3F1D0: addi    r3, r3, 16168
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16168);

label_80D3F1D4:
    ctx->pc = 0x80D3F1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F1D4: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D3F1D4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80D3F1D8:
    ctx->pc = 0x80D3F1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1D8u)) return;
    // 80D3F1D8: bl      0x805FD7A4
    {
            ctx->lr = 0x80D3F1DCu;
            ctx->pc = 0x805FD7A4u;
            return;
    }

label_80D3F1DC:
    ctx->pc = 0x80D3F1DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F1DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F1DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F1E0:
    ctx->pc = 0x80D3F1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1E0u)) return;
    // 80D3F1E0: bl      0x8004B504
    {
            ctx->lr = 0x80D3F1E4u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F1E4:
    ctx->pc = 0x80D3F1E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F1E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3F1E4: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F1E8:
    ctx->pc = 0x80D3F1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1E8u)) return;
    // 80D3F1E8: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F1EC:
    ctx->pc = 0x80D3F1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F1EC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F1ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F1F0:
    ctx->pc = 0x80D3F1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1F0u)) return;
    // 80D3F1F0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F1F0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D3F1F4:
    ctx->pc = 0x80D3F1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1F4u)) return;
    // 80D3F1F4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F1F4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F1F8:
    ctx->pc = 0x80D3F1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1F8u)) return;
    // 80D3F1F8: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F1F8u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80D3F1FC:
    ctx->pc = 0x80D3F1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F1FCu)) return;
    // 80D3F1FC: bl      0x80450D90
    {
            ctx->lr = 0x80D3F200u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F200:
    ctx->pc = 0x80D3F200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F200: bl      0x8048CEF0
    {
            ctx->lr = 0x80D3F204u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80D3F204:
    ctx->pc = 0x80D3F204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F204: b       0x80D3F6A8
    {
            goto label_80D3F6A8;
    }

label_80D3F208:
    ctx->pc = 0x80D3F208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3F208: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D3F20C:
    ctx->pc = 0x80D3F20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F20Cu)) return;
    // 80D3F20C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80D3F210:
    ctx->pc = 0x80D3F210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F210: lwz     r0, 0(r3)
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
label_80D3F214:
    ctx->pc = 0x80D3F214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F214u)) return;
    // 80D3F214: cmpwi   r0, 0
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

label_80D3F218:
    ctx->pc = 0x80D3F218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F218u)) return;
    // 80D3F218: bc    4, 2, 0x80D3F6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3F6A8;
        }
    }

label_80D3F21C:
    ctx->pc = 0x80D3F21Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F21Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F21C: bl      0x8048CF1C
    {
            ctx->lr = 0x80D3F220u;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80D3F220:
    ctx->pc = 0x80D3F220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F220: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F224:
    ctx->pc = 0x80D3F224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F224u)) return;
    // 80D3F224: lis     r4, 24
    ctx->gpr[4] = ((u32)(s32)(24) << 16);

label_80D3F228:
    ctx->pc = 0x80D3F228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F228u)) return;
    // 80D3F228: bl      0x8048CEC4
    {
            ctx->lr = 0x80D3F22Cu;
            ctx->pc = 0x8048CEC4u;
            return;
    }

label_80D3F22C:
    ctx->pc = 0x80D3F22Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F22Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D3F22C: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F230:
    ctx->pc = 0x80D3F230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F230u)) return;
    // 80D3F230: addi    r3, r3, 8836
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8836);

label_80D3F234:
    ctx->pc = 0x80D3F234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F234: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F234u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F238:
    ctx->pc = 0x80D3F238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F238u)) return;
    // 80D3F238: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F23C:
    ctx->pc = 0x80D3F23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F23Cu)) return;
    // 80D3F23C: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F240:
    ctx->pc = 0x80D3F240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F240: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F240u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F244:
    ctx->pc = 0x80D3F244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F244u)) return;
    // 80D3F244: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F244u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D3F248:
    ctx->pc = 0x80D3F248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F248u)) return;
    // 80D3F248: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F248u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80D3F24C:
    ctx->pc = 0x80D3F24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F24Cu)) return;
    // 80D3F24C: bl      0x80450D90
    {
            ctx->lr = 0x80D3F250u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F250:
    ctx->pc = 0x80D3F250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F250: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F254:
    ctx->pc = 0x80D3F254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F254u)) return;
    // 80D3F254: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D3F258:
    ctx->pc = 0x80D3F258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F258u)) return;
    // 80D3F258: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F25Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F25C:
    ctx->pc = 0x80D3F25Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F25Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F25C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F260:
    ctx->pc = 0x80D3F260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F260u)) return;
    // 80D3F260: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D3F264:
    ctx->pc = 0x80D3F264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F264u)) return;
    // 80D3F264: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F268u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F268:
    ctx->pc = 0x80D3F268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F268: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F26C:
    ctx->pc = 0x80D3F26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F26Cu)) return;
    // 80D3F26C: addi    r3, r3, -28056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28056);

label_80D3F270:
    ctx->pc = 0x80D3F270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F270u)) return;
    // 80D3F270: bl      0x8060F594
    {
            ctx->lr = 0x80D3F274u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D3F274:
    ctx->pc = 0x80D3F274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F274: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F278:
    ctx->pc = 0x80D3F278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F278u)) return;
    // 80D3F278: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F27Cu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F27C:
    ctx->pc = 0x80D3F27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D3F27C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F280:
    ctx->pc = 0x80D3F280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F280u)) return;
    // 80D3F280: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F284:
    ctx->pc = 0x80D3F284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F284u)) return;
    // 80D3F284: addi    r4, r4, 8756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8756);

label_80D3F288:
    ctx->pc = 0x80D3F288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F288: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F288u)) return;
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
label_80D3F28C:
    ctx->pc = 0x80D3F28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F28Cu)) return;
    // 80D3F28C: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F290:
    ctx->pc = 0x80D3F290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F290u)) return;
    // 80D3F290: addi    r4, r4, 8840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8840);

label_80D3F294:
    ctx->pc = 0x80D3F294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F294: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F294u)) return;
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
label_80D3F298:
    ctx->pc = 0x80D3F298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F298: lfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D3F298u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
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
label_80D3F29C:
    ctx->pc = 0x80D3F29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F29Cu)) return;
    // 80D3F29C: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F29Cu)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_80D3F2A0:
    ctx->pc = 0x80D3F2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2A0u)) return;
    // 80D3F2A0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F2A0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F2A4:
    ctx->pc = 0x80D3F2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2A4u)) return;
    // 80D3F2A4: bl      0x8004B35C
    {
            ctx->lr = 0x80D3F2A8u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80D3F2A8:
    ctx->pc = 0x80D3F2A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3F2A8: lis     r3, -27322
    ctx->gpr[3] = ((u32)(s32)(-27322) << 16);

label_80D3F2AC:
    ctx->pc = 0x80D3F2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2ACu)) return;
    // 80D3F2AC: addi    r3, r3, -23436
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23436);

label_80D3F2B0:
    ctx->pc = 0x80D3F2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F2B0: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D3F2B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80D3F2B4:
    ctx->pc = 0x80D3F2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2B4u)) return;
    // 80D3F2B4: bl      0x805FD7A4
    {
            ctx->lr = 0x80D3F2B8u;
            ctx->pc = 0x805FD7A4u;
            return;
    }

label_80D3F2B8:
    ctx->pc = 0x80D3F2B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F2B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F2BC:
    ctx->pc = 0x80D3F2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2BCu)) return;
    // 80D3F2BC: bl      0x8004B504
    {
            ctx->lr = 0x80D3F2C0u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F2C0:
    ctx->pc = 0x80D3F2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3F2C0: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F2C4:
    ctx->pc = 0x80D3F2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2C4u)) return;
    // 80D3F2C4: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F2C8:
    ctx->pc = 0x80D3F2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F2C8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F2C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F2CC:
    ctx->pc = 0x80D3F2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2CCu)) return;
    // 80D3F2CC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F2CCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D3F2D0:
    ctx->pc = 0x80D3F2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2D0u)) return;
    // 80D3F2D0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F2D0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F2D4:
    ctx->pc = 0x80D3F2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2D4u)) return;
    // 80D3F2D4: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F2D4u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80D3F2D8:
    ctx->pc = 0x80D3F2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2D8u)) return;
    // 80D3F2D8: bl      0x80450D90
    {
            ctx->lr = 0x80D3F2DCu;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F2DC:
    ctx->pc = 0x80D3F2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F2DC: bl      0x8048CEF0
    {
            ctx->lr = 0x80D3F2E0u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80D3F2E0:
    ctx->pc = 0x80D3F2E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F2E0: lis     r3, -27324
    ctx->gpr[3] = ((u32)(s32)(-27324) << 16);

label_80D3F2E4:
    ctx->pc = 0x80D3F2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2E4u)) return;
    // 80D3F2E4: addi    r3, r3, 13388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13388);

label_80D3F2E8:
    ctx->pc = 0x80D3F2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2E8u)) return;
    // 80D3F2E8: bl      0x8060F594
    {
            ctx->lr = 0x80D3F2ECu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D3F2EC:
    ctx->pc = 0x80D3F2ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F2EC: bl      0x8048CF1C
    {
            ctx->lr = 0x80D3F2F0u;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80D3F2F0:
    ctx->pc = 0x80D3F2F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F2F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F2F4:
    ctx->pc = 0x80D3F2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2F4u)) return;
    // 80D3F2F4: lis     r4, 24
    ctx->gpr[4] = ((u32)(s32)(24) << 16);

label_80D3F2F8:
    ctx->pc = 0x80D3F2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F2F8u)) return;
    // 80D3F2F8: bl      0x8048CEC4
    {
            ctx->lr = 0x80D3F2FCu;
            ctx->pc = 0x8048CEC4u;
            return;
    }

label_80D3F2FC:
    ctx->pc = 0x80D3F2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D3F2FC: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F300:
    ctx->pc = 0x80D3F300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F300u)) return;
    // 80D3F300: addi    r3, r3, 8856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8856);

label_80D3F304:
    ctx->pc = 0x80D3F304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3F304: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F304u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F308:
    ctx->pc = 0x80D3F308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F308: lfs     f0, 112(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D3F308u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
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
label_80D3F30C:
    ctx->pc = 0x80D3F30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F30Cu)) return;
    // 80D3F30C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F30Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80D3F310:
    ctx->pc = 0x80D3F310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F310u)) return;
    // 80D3F310: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F314:
    ctx->pc = 0x80D3F314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F314u)) return;
    // 80D3F314: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F318:
    ctx->pc = 0x80D3F318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F318: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F318u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F31C:
    ctx->pc = 0x80D3F31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F31Cu)) return;
    // 80D3F31C: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F31Cu)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D3F320:
    ctx->pc = 0x80D3F320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F320u)) return;
    // 80D3F320: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F320u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80D3F324:
    ctx->pc = 0x80D3F324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F324u)) return;
    // 80D3F324: bl      0x80450D90
    {
            ctx->lr = 0x80D3F328u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F328:
    ctx->pc = 0x80D3F328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F328: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F32C:
    ctx->pc = 0x80D3F32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F32Cu)) return;
    // 80D3F32C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D3F330:
    ctx->pc = 0x80D3F330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F330u)) return;
    // 80D3F330: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F334u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F334:
    ctx->pc = 0x80D3F334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F334: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F338:
    ctx->pc = 0x80D3F338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F338u)) return;
    // 80D3F338: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D3F33C:
    ctx->pc = 0x80D3F33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F33Cu)) return;
    // 80D3F33C: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F340u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F340:
    ctx->pc = 0x80D3F340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F340: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F344:
    ctx->pc = 0x80D3F344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F344u)) return;
    // 80D3F344: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F348u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F348:
    ctx->pc = 0x80D3F348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F348: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F34C:
    ctx->pc = 0x80D3F34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F34Cu)) return;
    // 80D3F34C: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_80D3F350:
    ctx->pc = 0x80D3F350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F350u)) return;
    // 80D3F350: bl      0x8004A8F8
    {
            ctx->lr = 0x80D3F354u;
            ctx->pc = 0x8004A8F8u;
            return;
    }

label_80D3F354:
    ctx->pc = 0x80D3F354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F354: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F358:
    ctx->pc = 0x80D3F358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F358u)) return;
    // 80D3F358: addi    r4, r31, 76
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(76);

label_80D3F35C:
    ctx->pc = 0x80D3F35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F35Cu)) return;
    // 80D3F35C: bl      0x8004A8F8
    {
            ctx->lr = 0x80D3F360u;
            ctx->pc = 0x8004A8F8u;
            return;
    }

label_80D3F360:
    ctx->pc = 0x80D3F360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F360: lis     r3, -27324
    ctx->gpr[3] = ((u32)(s32)(-27324) << 16);

label_80D3F364:
    ctx->pc = 0x80D3F364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F364u)) return;
    // 80D3F364: addi    r3, r3, 31380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31380);

label_80D3F368:
    ctx->pc = 0x80D3F368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F368u)) return;
    // 80D3F368: bl      0x805FD858
    {
            ctx->lr = 0x80D3F36Cu;
            ctx->pc = 0x805FD858u;
            return;
    }

label_80D3F36C:
    ctx->pc = 0x80D3F36Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F36Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F36C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F370:
    ctx->pc = 0x80D3F370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F370u)) return;
    // 80D3F370: bl      0x8004B504
    {
            ctx->lr = 0x80D3F374u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F374:
    ctx->pc = 0x80D3F374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3F374: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F378:
    ctx->pc = 0x80D3F378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F378u)) return;
    // 80D3F378: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F37C:
    ctx->pc = 0x80D3F37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F37C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F37Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F380:
    ctx->pc = 0x80D3F380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F380u)) return;
    // 80D3F380: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F380u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D3F384:
    ctx->pc = 0x80D3F384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F384u)) return;
    // 80D3F384: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F384u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F388:
    ctx->pc = 0x80D3F388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F388u)) return;
    // 80D3F388: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F388u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80D3F38C:
    ctx->pc = 0x80D3F38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F38Cu)) return;
    // 80D3F38C: bl      0x80450D90
    {
            ctx->lr = 0x80D3F390u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F390:
    ctx->pc = 0x80D3F390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F390: bl      0x8048CEF0
    {
            ctx->lr = 0x80D3F394u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80D3F394:
    ctx->pc = 0x80D3F394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F394: b       0x80D3F6A8
    {
            goto label_80D3F6A8;
    }

label_80D3F398:
    ctx->pc = 0x80D3F398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3F398: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D3F39C:
    ctx->pc = 0x80D3F39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F39Cu)) return;
    // 80D3F39C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80D3F3A0:
    ctx->pc = 0x80D3F3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F3A0: lwz     r0, 0(r3)
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
label_80D3F3A4:
    ctx->pc = 0x80D3F3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3A4u)) return;
    // 80D3F3A4: cmpwi   r0, 0
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

label_80D3F3A8:
    ctx->pc = 0x80D3F3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3A8u)) return;
    // 80D3F3A8: bc    4, 2, 0x80D3F6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3F6A8;
        }
    }

label_80D3F3AC:
    ctx->pc = 0x80D3F3ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F3ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F3AC: bl      0x8048CF1C
    {
            ctx->lr = 0x80D3F3B0u;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80D3F3B0:
    ctx->pc = 0x80D3F3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F3B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F3B4:
    ctx->pc = 0x80D3F3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3B4u)) return;
    // 80D3F3B4: lis     r4, 24
    ctx->gpr[4] = ((u32)(s32)(24) << 16);

label_80D3F3B8:
    ctx->pc = 0x80D3F3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3B8u)) return;
    // 80D3F3B8: bl      0x8048CEC4
    {
            ctx->lr = 0x80D3F3BCu;
            ctx->pc = 0x8048CEC4u;
            return;
    }

label_80D3F3BC:
    ctx->pc = 0x80D3F3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D3F3BC: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F3C0:
    ctx->pc = 0x80D3F3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3C0u)) return;
    // 80D3F3C0: addi    r3, r3, 8836
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8836);

label_80D3F3C4:
    ctx->pc = 0x80D3F3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F3C4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F3C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F3C8:
    ctx->pc = 0x80D3F3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3C8u)) return;
    // 80D3F3C8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F3CC:
    ctx->pc = 0x80D3F3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3CCu)) return;
    // 80D3F3CC: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F3D0:
    ctx->pc = 0x80D3F3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F3D0: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F3D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F3D4:
    ctx->pc = 0x80D3F3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3D4u)) return;
    // 80D3F3D4: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F3D4u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D3F3D8:
    ctx->pc = 0x80D3F3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3D8u)) return;
    // 80D3F3D8: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F3D8u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80D3F3DC:
    ctx->pc = 0x80D3F3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3DCu)) return;
    // 80D3F3DC: bl      0x80450D90
    {
            ctx->lr = 0x80D3F3E0u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F3E0:
    ctx->pc = 0x80D3F3E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F3E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F3E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F3E4:
    ctx->pc = 0x80D3F3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3E4u)) return;
    // 80D3F3E4: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D3F3E8:
    ctx->pc = 0x80D3F3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3E8u)) return;
    // 80D3F3E8: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F3ECu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F3EC:
    ctx->pc = 0x80D3F3ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F3ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F3EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F3F0:
    ctx->pc = 0x80D3F3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3F0u)) return;
    // 80D3F3F0: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D3F3F4:
    ctx->pc = 0x80D3F3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3F4u)) return;
    // 80D3F3F4: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F3F8u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F3F8:
    ctx->pc = 0x80D3F3F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F3F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F3F8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F3FC:
    ctx->pc = 0x80D3F3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F3FCu)) return;
    // 80D3F3FC: addi    r3, r3, -28056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28056);

label_80D3F400:
    ctx->pc = 0x80D3F400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F400u)) return;
    // 80D3F400: bl      0x8060F594
    {
            ctx->lr = 0x80D3F404u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D3F404:
    ctx->pc = 0x80D3F404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F404: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F408:
    ctx->pc = 0x80D3F408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F408u)) return;
    // 80D3F408: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F40Cu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F40C:
    ctx->pc = 0x80D3F40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D3F40C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F410:
    ctx->pc = 0x80D3F410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F410u)) return;
    // 80D3F410: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F414:
    ctx->pc = 0x80D3F414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F414u)) return;
    // 80D3F414: addi    r4, r4, 8756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8756);

label_80D3F418:
    ctx->pc = 0x80D3F418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F418: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F418u)) return;
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
label_80D3F41C:
    ctx->pc = 0x80D3F41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F41Cu)) return;
    // 80D3F41C: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D3F420:
    ctx->pc = 0x80D3F420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F420u)) return;
    // 80D3F420: addi    r4, r4, 8840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8840);

label_80D3F424:
    ctx->pc = 0x80D3F424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F424: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3F424u)) return;
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
label_80D3F428:
    ctx->pc = 0x80D3F428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F428: lfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D3F428u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
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
label_80D3F42C:
    ctx->pc = 0x80D3F42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F42Cu)) return;
    // 80D3F42C: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F42Cu)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_80D3F430:
    ctx->pc = 0x80D3F430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F430u)) return;
    // 80D3F430: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F430u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F434:
    ctx->pc = 0x80D3F434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F434u)) return;
    // 80D3F434: bl      0x8004B35C
    {
            ctx->lr = 0x80D3F438u;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80D3F438:
    ctx->pc = 0x80D3F438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3F438: lis     r3, -27322
    ctx->gpr[3] = ((u32)(s32)(-27322) << 16);

label_80D3F43C:
    ctx->pc = 0x80D3F43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F43Cu)) return;
    // 80D3F43C: addi    r3, r3, -23436
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23436);

label_80D3F440:
    ctx->pc = 0x80D3F440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F440: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D3F440u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80D3F444:
    ctx->pc = 0x80D3F444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F444u)) return;
    // 80D3F444: bl      0x805FD7A4
    {
            ctx->lr = 0x80D3F448u;
            ctx->pc = 0x805FD7A4u;
            return;
    }

label_80D3F448:
    ctx->pc = 0x80D3F448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F448: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F44C:
    ctx->pc = 0x80D3F44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F44Cu)) return;
    // 80D3F44C: bl      0x8004B504
    {
            ctx->lr = 0x80D3F450u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F450:
    ctx->pc = 0x80D3F450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3F450: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F454:
    ctx->pc = 0x80D3F454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F454u)) return;
    // 80D3F454: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F458:
    ctx->pc = 0x80D3F458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F458: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F458u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F45C:
    ctx->pc = 0x80D3F45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F45Cu)) return;
    // 80D3F45C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F45Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D3F460:
    ctx->pc = 0x80D3F460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F460u)) return;
    // 80D3F460: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F460u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F464:
    ctx->pc = 0x80D3F464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F464u)) return;
    // 80D3F464: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F464u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80D3F468:
    ctx->pc = 0x80D3F468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F468u)) return;
    // 80D3F468: bl      0x80450D90
    {
            ctx->lr = 0x80D3F46Cu;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F46C:
    ctx->pc = 0x80D3F46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F46C: bl      0x8048CEF0
    {
            ctx->lr = 0x80D3F470u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80D3F470:
    ctx->pc = 0x80D3F470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F470: lis     r3, -27324
    ctx->gpr[3] = ((u32)(s32)(-27324) << 16);

label_80D3F474:
    ctx->pc = 0x80D3F474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F474u)) return;
    // 80D3F474: addi    r3, r3, 13388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13388);

label_80D3F478:
    ctx->pc = 0x80D3F478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F478u)) return;
    // 80D3F478: bl      0x8060F594
    {
            ctx->lr = 0x80D3F47Cu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D3F47C:
    ctx->pc = 0x80D3F47Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F47Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F47C: bl      0x8048CF1C
    {
            ctx->lr = 0x80D3F480u;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80D3F480:
    ctx->pc = 0x80D3F480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F480: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F484:
    ctx->pc = 0x80D3F484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F484u)) return;
    // 80D3F484: lis     r4, 24
    ctx->gpr[4] = ((u32)(s32)(24) << 16);

label_80D3F488:
    ctx->pc = 0x80D3F488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F488u)) return;
    // 80D3F488: bl      0x8048CEC4
    {
            ctx->lr = 0x80D3F48Cu;
            ctx->pc = 0x8048CEC4u;
            return;
    }

label_80D3F48C:
    ctx->pc = 0x80D3F48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D3F48C: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F490:
    ctx->pc = 0x80D3F490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F490u)) return;
    // 80D3F490: addi    r3, r3, 8856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8856);

label_80D3F494:
    ctx->pc = 0x80D3F494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3F494: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F494u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F498:
    ctx->pc = 0x80D3F498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F498: lfs     f0, 112(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D3F498u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
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
label_80D3F49C:
    ctx->pc = 0x80D3F49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F49Cu)) return;
    // 80D3F49C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F49Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80D3F4A0:
    ctx->pc = 0x80D3F4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4A0u)) return;
    // 80D3F4A0: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F4A4:
    ctx->pc = 0x80D3F4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4A4u)) return;
    // 80D3F4A4: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F4A8:
    ctx->pc = 0x80D3F4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F4A8: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F4A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F4AC:
    ctx->pc = 0x80D3F4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4ACu)) return;
    // 80D3F4AC: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F4ACu)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D3F4B0:
    ctx->pc = 0x80D3F4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4B0u)) return;
    // 80D3F4B0: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F4B0u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80D3F4B4:
    ctx->pc = 0x80D3F4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4B4u)) return;
    // 80D3F4B4: bl      0x80450D90
    {
            ctx->lr = 0x80D3F4B8u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F4B8:
    ctx->pc = 0x80D3F4B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F4B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F4B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F4BC:
    ctx->pc = 0x80D3F4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4BCu)) return;
    // 80D3F4BC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D3F4C0:
    ctx->pc = 0x80D3F4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4C0u)) return;
    // 80D3F4C0: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F4C4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F4C4:
    ctx->pc = 0x80D3F4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F4C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F4C8:
    ctx->pc = 0x80D3F4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4C8u)) return;
    // 80D3F4C8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D3F4CC:
    ctx->pc = 0x80D3F4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4CCu)) return;
    // 80D3F4CC: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F4D0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F4D0:
    ctx->pc = 0x80D3F4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F4D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F4D4:
    ctx->pc = 0x80D3F4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4D4u)) return;
    // 80D3F4D4: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F4D8u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F4D8:
    ctx->pc = 0x80D3F4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F4D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F4DC:
    ctx->pc = 0x80D3F4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4DCu)) return;
    // 80D3F4DC: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_80D3F4E0:
    ctx->pc = 0x80D3F4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4E0u)) return;
    // 80D3F4E0: bl      0x8004A8F8
    {
            ctx->lr = 0x80D3F4E4u;
            ctx->pc = 0x8004A8F8u;
            return;
    }

label_80D3F4E4:
    ctx->pc = 0x80D3F4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F4E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F4E8:
    ctx->pc = 0x80D3F4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4E8u)) return;
    // 80D3F4E8: addi    r4, r31, 76
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(76);

label_80D3F4EC:
    ctx->pc = 0x80D3F4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4ECu)) return;
    // 80D3F4EC: bl      0x8004A8F8
    {
            ctx->lr = 0x80D3F4F0u;
            ctx->pc = 0x8004A8F8u;
            return;
    }

label_80D3F4F0:
    ctx->pc = 0x80D3F4F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F4F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F4F0: lis     r3, -27324
    ctx->gpr[3] = ((u32)(s32)(-27324) << 16);

label_80D3F4F4:
    ctx->pc = 0x80D3F4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4F4u)) return;
    // 80D3F4F4: addi    r3, r3, 31380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31380);

label_80D3F4F8:
    ctx->pc = 0x80D3F4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F4F8u)) return;
    // 80D3F4F8: bl      0x805FD858
    {
            ctx->lr = 0x80D3F4FCu;
            ctx->pc = 0x805FD858u;
            return;
    }

label_80D3F4FC:
    ctx->pc = 0x80D3F4FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F4FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F4FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F500:
    ctx->pc = 0x80D3F500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F500u)) return;
    // 80D3F500: bl      0x8004B504
    {
            ctx->lr = 0x80D3F504u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F504:
    ctx->pc = 0x80D3F504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3F504: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F508:
    ctx->pc = 0x80D3F508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F508u)) return;
    // 80D3F508: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F50C:
    ctx->pc = 0x80D3F50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F50C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F50Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F510:
    ctx->pc = 0x80D3F510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F510u)) return;
    // 80D3F510: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F510u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D3F514:
    ctx->pc = 0x80D3F514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F514u)) return;
    // 80D3F514: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F514u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F518:
    ctx->pc = 0x80D3F518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F518u)) return;
    // 80D3F518: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F518u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80D3F51C:
    ctx->pc = 0x80D3F51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F51Cu)) return;
    // 80D3F51C: bl      0x80450D90
    {
            ctx->lr = 0x80D3F520u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F520:
    ctx->pc = 0x80D3F520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F520: bl      0x8048CEF0
    {
            ctx->lr = 0x80D3F524u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80D3F524:
    ctx->pc = 0x80D3F524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F524: b       0x80D3F6A8
    {
            goto label_80D3F6A8;
    }

label_80D3F528:
    ctx->pc = 0x80D3F528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3F528: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D3F52C:
    ctx->pc = 0x80D3F52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F52Cu)) return;
    // 80D3F52C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80D3F530:
    ctx->pc = 0x80D3F530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F530: lwz     r0, 0(r3)
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
label_80D3F534:
    ctx->pc = 0x80D3F534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F534u)) return;
    // 80D3F534: cmpwi   r0, 0
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

label_80D3F538:
    ctx->pc = 0x80D3F538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F538u)) return;
    // 80D3F538: bc    4, 2, 0x80D3F6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3F6A8;
        }
    }

label_80D3F53C:
    ctx->pc = 0x80D3F53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F53C: lis     r3, -27324
    ctx->gpr[3] = ((u32)(s32)(-27324) << 16);

label_80D3F540:
    ctx->pc = 0x80D3F540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F540u)) return;
    // 80D3F540: addi    r3, r3, 13388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13388);

label_80D3F544:
    ctx->pc = 0x80D3F544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F544u)) return;
    // 80D3F544: bl      0x8060F594
    {
            ctx->lr = 0x80D3F548u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D3F548:
    ctx->pc = 0x80D3F548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F548: bl      0x8048CF1C
    {
            ctx->lr = 0x80D3F54Cu;
            ctx->pc = 0x8048CF1Cu;
            return;
    }

label_80D3F54C:
    ctx->pc = 0x80D3F54Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F54Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F54C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F550:
    ctx->pc = 0x80D3F550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F550u)) return;
    // 80D3F550: lis     r4, 24
    ctx->gpr[4] = ((u32)(s32)(24) << 16);

label_80D3F554:
    ctx->pc = 0x80D3F554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F554u)) return;
    // 80D3F554: bl      0x8048CEC4
    {
            ctx->lr = 0x80D3F558u;
            ctx->pc = 0x8048CEC4u;
            return;
    }

label_80D3F558:
    ctx->pc = 0x80D3F558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D3F558: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F55C:
    ctx->pc = 0x80D3F55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F55Cu)) return;
    // 80D3F55C: addi    r3, r3, 8848
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8848);

label_80D3F560:
    ctx->pc = 0x80D3F560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F560: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F560u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F564:
    ctx->pc = 0x80D3F564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F564u)) return;
    // 80D3F564: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F568:
    ctx->pc = 0x80D3F568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F568u)) return;
    // 80D3F568: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F56C:
    ctx->pc = 0x80D3F56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F56C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F56Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F570:
    ctx->pc = 0x80D3F570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F570u)) return;
    // 80D3F570: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F570u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D3F574:
    ctx->pc = 0x80D3F574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F574u)) return;
    // 80D3F574: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80D3F574u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80D3F578:
    ctx->pc = 0x80D3F578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F578u)) return;
    // 80D3F578: bl      0x80450D90
    {
            ctx->lr = 0x80D3F57Cu;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F57C:
    ctx->pc = 0x80D3F57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F57C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F580:
    ctx->pc = 0x80D3F580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F580u)) return;
    // 80D3F580: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D3F584:
    ctx->pc = 0x80D3F584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F584u)) return;
    // 80D3F584: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F588u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F588:
    ctx->pc = 0x80D3F588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F588: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F58C:
    ctx->pc = 0x80D3F58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F58Cu)) return;
    // 80D3F58C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D3F590:
    ctx->pc = 0x80D3F590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F590u)) return;
    // 80D3F590: bl      0x8060F4F8
    {
            ctx->lr = 0x80D3F594u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D3F594:
    ctx->pc = 0x80D3F594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F594: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F598:
    ctx->pc = 0x80D3F598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F598u)) return;
    // 80D3F598: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F59Cu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F59C:
    ctx->pc = 0x80D3F59Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F59Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F59C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F5A0:
    ctx->pc = 0x80D3F5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5A0u)) return;
    // 80D3F5A0: addi    r4, r31, 76
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(76);

label_80D3F5A4:
    ctx->pc = 0x80D3F5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5A4u)) return;
    // 80D3F5A4: bl      0x8004A8F8
    {
            ctx->lr = 0x80D3F5A8u;
            ctx->pc = 0x8004A8F8u;
            return;
    }

label_80D3F5A8:
    ctx->pc = 0x80D3F5A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F5A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D3F5A8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F5AC:
    ctx->pc = 0x80D3F5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5ACu)) return;
    // 80D3F5AC: addi    r3, r3, 8824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8824);

label_80D3F5B0:
    ctx->pc = 0x80D3F5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D3F5B0: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F5B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F5B4:
    ctx->pc = 0x80D3F5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D3F5B4: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F5B8:
    ctx->pc = 0x80D3F5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5B8u)) return;
    // 80D3F5B8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F5BC:
    ctx->pc = 0x80D3F5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5BCu)) return;
    // 80D3F5BC: addi    r3, r3, 8792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8792);

label_80D3F5C0:
    ctx->pc = 0x80D3F5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3F5C0: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F5C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F5C4:
    ctx->pc = 0x80D3F5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5C4u)) return;
    // 80D3F5C4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80D3F5C8:
    ctx->pc = 0x80D3F5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F5C8: stw     r0, 20(r1)
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
label_80D3F5CC:
    ctx->pc = 0x80D3F5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5CCu)) return;
    // 80D3F5CC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80D3F5D0:
    ctx->pc = 0x80D3F5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F5D0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F5D4:
    ctx->pc = 0x80D3F5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F5D4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D3F5D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F5D8:
    ctx->pc = 0x80D3F5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5D8u)) return;
    // 80D3F5D8: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F5D8u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80D3F5DC:
    ctx->pc = 0x80D3F5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5DCu)) return;
    // 80D3F5DC: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F5DCu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80D3F5E0:
    ctx->pc = 0x80D3F5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5E0u)) return;
    // 80D3F5E0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F5E0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80D3F5E4:
    ctx->pc = 0x80D3F5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5E4u)) return;
    // 80D3F5E4: bl      0x80D3D214
    {
            ctx->lr = 0x80D3F5E8u;
            ctx->pc = 0x80D3D214u;
            return;
    }

label_80D3F5E8:
    ctx->pc = 0x80D3F5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80D3F5E8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F5EC:
    ctx->pc = 0x80D3F5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5ECu)) return;
    // 80D3F5EC: addi    r3, r3, 8852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8852);

label_80D3F5F0:
    ctx->pc = 0x80D3F5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D3F5F0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F5F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F5F4:
    ctx->pc = 0x80D3F5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5F4u)) return;
    // 80D3F5F4: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F5F4u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80D3F5F8:
    ctx->pc = 0x80D3F5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5F8u)) return;
    // 80D3F5F8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F5FC:
    ctx->pc = 0x80D3F5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F5FCu)) return;
    // 80D3F5FC: addi    r3, r3, 8752
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8752);

label_80D3F600:
    ctx->pc = 0x80D3F600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D3F600: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F600u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F604:
    ctx->pc = 0x80D3F604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F604u)) return;
    // 80D3F604: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F604u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80D3F608:
    ctx->pc = 0x80D3F608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F608u)) return;
    // 80D3F608: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F60C:
    ctx->pc = 0x80D3F60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F60Cu)) return;
    // 80D3F60C: addi    r3, r3, 8824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8824);

label_80D3F610:
    ctx->pc = 0x80D3F610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D3F610: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F610u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F614:
    ctx->pc = 0x80D3F614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D3F614: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F618:
    ctx->pc = 0x80D3F618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F618u)) return;
    // 80D3F618: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F61C:
    ctx->pc = 0x80D3F61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F61Cu)) return;
    // 80D3F61C: addi    r3, r3, 8792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8792);

label_80D3F620:
    ctx->pc = 0x80D3F620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3F620: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F620u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F624:
    ctx->pc = 0x80D3F624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F624u)) return;
    // 80D3F624: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80D3F628:
    ctx->pc = 0x80D3F628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F628: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F62C:
    ctx->pc = 0x80D3F62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F62Cu)) return;
    // 80D3F62C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80D3F630:
    ctx->pc = 0x80D3F630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F630: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F634:
    ctx->pc = 0x80D3F634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F634: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D3F634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F638:
    ctx->pc = 0x80D3F638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F638u)) return;
    // 80D3F638: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F638u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80D3F63C:
    ctx->pc = 0x80D3F63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F63Cu)) return;
    // 80D3F63C: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F63Cu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80D3F640:
    ctx->pc = 0x80D3F640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F640u)) return;
    // 80D3F640: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F640u)) return;
    ppc_frsp(ctx, 1, 1);

label_80D3F644:
    ctx->pc = 0x80D3F644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F644u)) return;
    // 80D3F644: bl      0x80D3D1F0
    {
            ctx->lr = 0x80D3F648u;
            ctx->pc = 0x80D3D1F0u;
            return;
    }

label_80D3F648:
    ctx->pc = 0x80D3F648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D3F648: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F64C:
    ctx->pc = 0x80D3F64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F64Cu)) return;
    // 80D3F64C: addi    r3, r3, 8852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8852);

label_80D3F650:
    ctx->pc = 0x80D3F650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3F650: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F650u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F654:
    ctx->pc = 0x80D3F654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F654u)) return;
    // 80D3F654: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F654u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80D3F658:
    ctx->pc = 0x80D3F658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F658u)) return;
    // 80D3F658: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F65C:
    ctx->pc = 0x80D3F65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F65Cu)) return;
    // 80D3F65C: addi    r3, r3, 8752
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8752);

label_80D3F660:
    ctx->pc = 0x80D3F660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F660: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F660u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F664:
    ctx->pc = 0x80D3F664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F664u)) return;
    // 80D3F664: fadds   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D3F664u)) return;
    ppc_fadds(ctx, 1, 2, 0);

label_80D3F668:
    ctx->pc = 0x80D3F668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F668u)) return;
    // 80D3F668: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F66C:
    ctx->pc = 0x80D3F66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F66Cu)) return;
    // 80D3F66C: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D3F66Cu)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D3F670:
    ctx->pc = 0x80D3F670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F670u)) return;
    // 80D3F670: bl      0x8004A8A8
    {
            ctx->lr = 0x80D3F674u;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_80D3F674:
    ctx->pc = 0x80D3F674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F674: lis     r3, -27324
    ctx->gpr[3] = ((u32)(s32)(-27324) << 16);

label_80D3F678:
    ctx->pc = 0x80D3F678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F678u)) return;
    // 80D3F678: addi    r3, r3, 31380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31380);

label_80D3F67C:
    ctx->pc = 0x80D3F67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F67Cu)) return;
    // 80D3F67C: bl      0x805FD858
    {
            ctx->lr = 0x80D3F680u;
            ctx->pc = 0x805FD858u;
            return;
    }

label_80D3F680:
    ctx->pc = 0x80D3F680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F680: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F684:
    ctx->pc = 0x80D3F684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F684u)) return;
    // 80D3F684: bl      0x8004B504
    {
            ctx->lr = 0x80D3F688u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F688:
    ctx->pc = 0x80D3F688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3F688: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D3F68C:
    ctx->pc = 0x80D3F68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F68Cu)) return;
    // 80D3F68C: addi    r3, r3, 8756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8756);

label_80D3F690:
    ctx->pc = 0x80D3F690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F690: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3F690u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D3F694:
    ctx->pc = 0x80D3F694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F694u)) return;
    // 80D3F694: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F694u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D3F698:
    ctx->pc = 0x80D3F698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F698u)) return;
    // 80D3F698: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F698u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D3F69C:
    ctx->pc = 0x80D3F69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F69Cu)) return;
    // 80D3F69C: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3F69Cu)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80D3F6A0:
    ctx->pc = 0x80D3F6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6A0u)) return;
    // 80D3F6A0: bl      0x80450D90
    {
            ctx->lr = 0x80D3F6A4u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D3F6A4:
    ctx->pc = 0x80D3F6A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F6A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F6A4: bl      0x8048CEF0
    {
            ctx->lr = 0x80D3F6A8u;
            ctx->pc = 0x8048CEF0u;
            return;
    }

label_80D3F6A8:
    ctx->pc = 0x80D3F6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F6A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3F6AC:
    ctx->pc = 0x80D3F6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6ACu)) return;
    // 80D3F6AC: bl      0x8004B504
    {
            ctx->lr = 0x80D3F6B0u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3F6B0:
    ctx->pc = 0x80D3F6B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F6B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F6B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F6B4:
    ctx->pc = 0x80D3F6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6B4u)) return;
    // 80D3F6B4: bl      0x80612BEC
    {
            ctx->lr = 0x80D3F6B8u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80D3F6B8:
    ctx->pc = 0x80D3F6B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F6B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3F6B8: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D3F6B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D3F6B8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6BC:
    ctx->pc = 0x80D3F6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F6BC: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D3F6BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6C0:
    ctx->pc = 0x80D3F6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F6C0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6C4:
    ctx->pc = 0x80D3F6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F6C4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6C8:
    ctx->pc = 0x80D3F6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F6C8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6CC:
    ctx->pc = 0x80D3F6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D3F6CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F6CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6D0:
    ctx->pc = 0x80D3F6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6D0u)) return;
    // 80D3F6D0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80D3F6D4:
    ctx->pc = 0x80D3F6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6D4u)) return;
    // 80D3F6D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D3F0E0;
        }
    }

label_80D3F6D8:
    ctx->pc = 0x80D3F6D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F6D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D3F6D8: stwu     r1, -16(r1)
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
label_80D3F6DC:
    ctx->pc = 0x80D3F6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D3F6DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6E0:
    ctx->pc = 0x80D3F6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3F6E0: stw     r0, 20(r1)
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
label_80D3F6E4:
    ctx->pc = 0x80D3F6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3F6E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6E8:
    ctx->pc = 0x80D3F6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3F6E8: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F6EC:
    ctx->pc = 0x80D3F6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6ECu)) return;
    // 80D3F6EC: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F6F0:
    ctx->pc = 0x80D3F6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6F0u)) return;
    // 80D3F6F0: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_80D3F6F4:
    ctx->pc = 0x80D3F6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6F4u)) return;
    // 80D3F6F4: lis     r4, -27322
    ctx->gpr[4] = ((u32)(s32)(-27322) << 16);

label_80D3F6F8:
    ctx->pc = 0x80D3F6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6F8u)) return;
    // 80D3F6F8: addi    r4, r4, -23436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23436);

label_80D3F6FC:
    ctx->pc = 0x80D3F6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F6FC: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D3F6FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80D3F700:
    ctx->pc = 0x80D3F700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F700u)) return;
    // 80D3F700: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_80D3F704:
    ctx->pc = 0x80D3F704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F704u)) return;
    // 80D3F704: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80D3F708:
    ctx->pc = 0x80D3F708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F708u)) return;
    // 80D3F708: bl      0x80D3F730
    {
            ctx->lr = 0x80D3F70Cu;
            goto label_80D3F730;
    }

label_80D3F70C:
    ctx->pc = 0x80D3F70Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F70Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F70C: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F710:
    ctx->pc = 0x80D3F710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F710u)) return;
    // 80D3F710: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F714:
    ctx->pc = 0x80D3F714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F714u)) return;
    // 80D3F714: bc    12, 2, 0x80D3F71C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3F71C;
        }
    }

label_80D3F718:
    ctx->pc = 0x80D3F718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F718: bl      0x8050ED40
    {
            ctx->lr = 0x80D3F71Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D3F71C:
    ctx->pc = 0x80D3F71Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F71Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F71C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F720:
    ctx->pc = 0x80D3F720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F720: lwz     r0, 20(r1)
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
label_80D3F724:
    ctx->pc = 0x80D3F724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D3F724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F724: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F728:
    ctx->pc = 0x80D3F728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F728u)) return;
    // 80D3F728: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D3F72C:
    ctx->pc = 0x80D3F72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F72Cu)) return;
    // 80D3F72C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D3F0E0;
        }
    }

label_80D3F730:
    ctx->pc = 0x80D3F730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F730: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F734:
    ctx->pc = 0x80D3F734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F734: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F738:
    ctx->pc = 0x80D3F738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F738: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F73C:
    ctx->pc = 0x80D3F73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F73Cu)) return;
    // 80D3F73C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80D3F740:
    ctx->pc = 0x80D3F740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F740u)) return;
    // 80D3F740: bl      0x80006DBC
    {
            ctx->lr = 0x80D3F744u;
            ctx->pc = 0x80006DBCu;
            return;
    }

label_80D3F744:
    ctx->pc = 0x80D3F744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3F744: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3F748:
    ctx->pc = 0x80D3F748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F748u)) return;
    // 80D3F748: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D3F74C:
    ctx->pc = 0x80D3F74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F74Cu)) return;
    // 80D3F74C: or   r31, r21, r21
    {
        ctx->gpr[31] = ctx->gpr[21] | ctx->gpr[21];
    }

label_80D3F750:
    ctx->pc = 0x80D3F750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F750u)) return;
    // 80D3F750: cmpwi   r6, 1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F754:
    ctx->pc = 0x80D3F754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F754u)) return;
    // 80D3F754: bc    12, 2, 0x80D3F8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3F8D0;
        }
    }

label_80D3F758:
    ctx->pc = 0x80D3F758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F758: bc    4, 0, 0x80D3F768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3F768;
        }
    }

label_80D3F75C:
    ctx->pc = 0x80D3F75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F75C: cmpwi   r6, 0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F760:
    ctx->pc = 0x80D3F760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F760u)) return;
    // 80D3F760: bc    4, 0, 0x80D3F770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3F770;
        }
    }

label_80D3F764:
    ctx->pc = 0x80D3F764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F764: b       0x80D3FB64
    {
            goto label_80D3FB64;
    }

label_80D3F768:
    ctx->pc = 0x80D3F768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F768: cmpwi   r6, 3
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F76C:
    ctx->pc = 0x80D3F76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F76Cu)) return;
    // 80D3F76C: b       0x80D3FB64
    {
            goto label_80D3FB64;
    }

label_80D3F770:
    ctx->pc = 0x80D3F770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F770: cmplwi  r21, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[21]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F774:
    ctx->pc = 0x80D3F774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F774u)) return;
    // 80D3F774: bc    4, 2, 0x80D3F8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3F8C0;
        }
    }

label_80D3F778:
    ctx->pc = 0x80D3F778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F778: b       0x80D3FB70
    {
            goto label_80D3FB70;
    }

label_80D3F77C:
    ctx->pc = 0x80D3F77Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F77Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F77C: b       0x80D3F8C0
    {
            goto label_80D3F8C0;
    }

label_80D3F780:
    ctx->pc = 0x80D3F780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F780: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F784:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F784u)) return;
    // 80D3F784: mulli   r3, r0, 48
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)48);

label_80D3F788:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F788u)) return;
    // 80D3F788: bl      0x8050EF60
    {
            ctx->lr = 0x80D3F78Cu;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80D3F78C:
    ctx->pc = 0x80D3F78Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F78Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F78C: stw     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F790:
    ctx->pc = 0x80D3F790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F790: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F794:
    ctx->pc = 0x80D3F794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F794: lwz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F798:
    ctx->pc = 0x80D3F798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F798: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F79C:
    ctx->pc = 0x80D3F79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F79Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F79C: lwz     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7A0u)) return;
    // 80D3F7A0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D3F7A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7A4u)) return;
    // 80D3F7A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3F7A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7A8u)) return;
    // 80D3F7A8: b       0x80D3F888
    {
            goto label_80D3F888;
    }

label_80D3F7AC:
    loop_80D3F7AC(ctx);
    if (ctx->pc == 0x80D3F894u) goto label_80D3F894;
    return;
label_80D3F7B0:
    ctx->pc = 0x80D3F7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 80D3F7B0: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7B4:
    ctx->pc = 0x80D3F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 80D3F7B4: lhzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F7B8u)) return;
    // 80D3F7B8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80D3F7BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7BCu)) return;
    // 80D3F7BC: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3F7C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7C0u)) return;
    // 80D3F7C0: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80D3F7C4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7C4u)) return;
    // 80D3F7C4: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80D3F7C8:
    ctx->pc = 0x80D3F7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80D3F7C8: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7CC:
    ctx->pc = 0x80D3F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80D3F7CC: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7D0:
    ctx->pc = 0x80D3F7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D3F7D0: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7D4:
    ctx->pc = 0x80D3F7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80D3F7D4: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7D8:
    ctx->pc = 0x80D3F7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D3F7D8: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7DC:
    ctx->pc = 0x80D3F7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80D3F7DC: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7E0:
    ctx->pc = 0x80D3F7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80D3F7E0: lwz     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7E4:
    ctx->pc = 0x80D3F7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80D3F7E4: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7E8:
    ctx->pc = 0x80D3F7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80D3F7E8: lhzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F7EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F7ECu)) return;
    // 80D3F7EC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80D3F7F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7F0u)) return;
    // 80D3F7F0: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3F7F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7F4u)) return;
    // 80D3F7F4: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80D3F7F8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7F8u)) return;
    // 80D3F7F8: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80D3F7FC:
    ctx->pc = 0x80D3F7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80D3F7FC: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F800:
    ctx->pc = 0x80D3F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80D3F800: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F804:
    ctx->pc = 0x80D3F804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80D3F804: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F808:
    ctx->pc = 0x80D3F808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80D3F808: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F80C:
    ctx->pc = 0x80D3F80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80D3F80C: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F810:
    ctx->pc = 0x80D3F810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D3F810: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F814:
    ctx->pc = 0x80D3F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D3F814: lwz     r9, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F818:
    ctx->pc = 0x80D3F818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D3F818: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F81C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F81Cu)) return;
    // 80D3F81C: addi    r11, r4, 2
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(2);

label_80D3F820:
    ctx->pc = 0x80D3F820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D3F820: lhzx    r0, r8, r11
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F824:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F824u)) return;
    // 80D3F824: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80D3F828:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F828u)) return;
    // 80D3F828: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3F82C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F82Cu)) return;
    // 80D3F82C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80D3F830:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F830u)) return;
    // 80D3F830: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80D3F834:
    ctx->pc = 0x80D3F834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D3F834: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F838:
    ctx->pc = 0x80D3F838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D3F838: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F83C:
    ctx->pc = 0x80D3F83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D3F83C: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F840:
    ctx->pc = 0x80D3F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D3F840: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F844:
    ctx->pc = 0x80D3F844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D3F844: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F848:
    ctx->pc = 0x80D3F848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D3F848: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F84C:
    ctx->pc = 0x80D3F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D3F84C: lwz     r9, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F850:
    ctx->pc = 0x80D3F850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D3F850: lwz     r8, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F854:
    ctx->pc = 0x80D3F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D3F854: lhzx    r0, r8, r11
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F858:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F858u)) return;
    // 80D3F858: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80D3F85C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F85Cu)) return;
    // 80D3F85C: or   r10, r3, r3
    {
        ctx->gpr[10] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3F860:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F860u)) return;
    // 80D3F860: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80D3F864:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F864u)) return;
    // 80D3F864: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80D3F868:
    ctx->pc = 0x80D3F868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F868: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F86C:
    ctx->pc = 0x80D3F86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F86C: lwz     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F870:
    ctx->pc = 0x80D3F870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F870: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F874:
    ctx->pc = 0x80D3F874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3F874: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F878:
    ctx->pc = 0x80D3F878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F878: lwz     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F87C:
    ctx->pc = 0x80D3F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F87C: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F880:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F880u)) return;
    // 80D3F880: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_80D3F884:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F884u)) return;
    // 80D3F884: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80D3F888:
    ctx->pc = 0x80D3F888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F888: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F88C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F88Cu)) return;
    // 80D3F88C: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F890:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F890u)) return;
    // 80D3F890: bc    12, 0, 0x80D3F7AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3F7ACu;
                return;
            }
            goto label_80D3F7AC;
        }
    }

label_80D3F894:
    ctx->pc = 0x80D3F894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F894: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F898:
    ctx->pc = 0x80D3F898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F898: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F89C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F89Cu)) return;
    // 80D3F89C: bl      0x8048D760
    {
            ctx->lr = 0x80D3F8A0u;
            ctx->pc = 0x8048D760u;
            return;
    }

label_80D3F8A0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3F8A0: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80D3F8A4:
    ctx->pc = 0x80D3F8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F8A4: stb     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F8A8:
    ctx->pc = 0x80D3F8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F8A8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F8AC:
    ctx->pc = 0x80D3F8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F8AC: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F8B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8B0u)) return;
    // 80D3F8B0: bl      0x8048D760
    {
            ctx->lr = 0x80D3F8B4u;
            ctx->pc = 0x8048D760u;
            return;
    }

label_80D3F8B4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F8B4: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80D3F8B8:
    ctx->pc = 0x80D3F8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3F8B8: stb     r0, 15(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F8BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8BCu)) return;
    // 80D3F8BC: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80D3F8C0:
    ctx->pc = 0x80D3F8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F8C0: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F8C4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8C4u)) return;
    // 80D3F8C4: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F8C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8C8u)) return;
    // 80D3F8C8: bc    4, 2, 0x80D3F780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3F780u;
                return;
            }
            goto label_80D3F780;
        }
    }

label_80D3F8CC:
    ctx->pc = 0x80D3F8CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F8CC: b       0x80D3FB70
    {
            goto label_80D3FB70;
    }

label_80D3F8D0:
    ctx->pc = 0x80D3F8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3F8D0: lis     r3, -32758
    ctx->gpr[3] = ((u32)(s32)(-32758) << 16);

label_80D3F8D4:
    ctx->pc = 0x80D3F8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8D4u)) return;
    // 80D3F8D4: addi    r3, r3, 29972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29972);

label_80D3F8D8:
    ctx->pc = 0x80D3F8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8D8u)) return;
    // 80D3F8D8: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D3F8DC:
    ctx->pc = 0x80D3F8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8DCu)) return;
    // 80D3F8DC: addi    r6, r6, -27056
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27056);

label_80D3F8E0:
    ctx->pc = 0x80D3F8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8E0u)) return;
    // 80D3F8E0: bl      0x8048F87C
    {
            ctx->lr = 0x80D3F8E4u;
            ctx->pc = 0x8048F87Cu;
            return;
    }

label_80D3F8E4:
    ctx->pc = 0x80D3F8E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F8E4: cmplwi  r21, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[21]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F8E8:
    ctx->pc = 0x80D3F8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8E8u)) return;
    // 80D3F8E8: bc    4, 2, 0x80D3FB44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3FB44;
        }
    }

label_80D3F8EC:
    ctx->pc = 0x80D3F8ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F8EC: b       0x80D3FB70
    {
            goto label_80D3FB70;
    }

label_80D3F8F0:
    ctx->pc = 0x80D3F8F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F8F0: b       0x80D3FB44
    {
            goto label_80D3FB44;
    }

label_80D3F8F4:
    ctx->pc = 0x80D3F8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3F8F4: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F8F8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8F8u)) return;
    // 80D3F8F8: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F8FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F8FCu)) return;
    // 80D3F8FC: bc    12, 2, 0x80D3F908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3F908;
        }
    }

label_80D3F900:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F900: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80D3F904:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F904u)) return;
    // 80D3F904: b       0x80D3FB44
    {
            goto label_80D3FB44;
    }

label_80D3F908:
    ctx->pc = 0x80D3F908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F908: lbz     r3, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F90C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F90Cu)) return;
    // 80D3F90C: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D3F910:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F910u)) return;
    // 80D3F910: addi    r4, r4, -26864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26864);

label_80D3F914:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F914u)) return;
    // 80D3F914: bl      0x8048F81C
    {
            ctx->lr = 0x80D3F918u;
            ctx->pc = 0x8048F81Cu;
            return;
    }

label_80D3F918:
    ctx->pc = 0x80D3F918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F918: lbz     r3, 15(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F91C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F91Cu)) return;
    // 80D3F91C: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D3F920:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F920u)) return;
    // 80D3F920: addi    r4, r4, -26912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26912);

label_80D3F924:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F924u)) return;
    // 80D3F924: bl      0x8048F81C
    {
            ctx->lr = 0x80D3F928u;
            ctx->pc = 0x8048F81Cu;
            return;
    }

label_80D3F928:
    ctx->pc = 0x80D3F928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D3F928: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F92C:
    ctx->pc = 0x80D3F92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F92Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D3F92C: lwz     r3, 4(r3)
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
label_80D3F930:
    ctx->pc = 0x80D3F930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3F930: lwz     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F934:
    ctx->pc = 0x80D3F934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3F934: lwz     r29, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F938:
    ctx->pc = 0x80D3F938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3F938: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F93C:
    ctx->pc = 0x80D3F93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3F93C: lwz     r3, 4(r3)
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
label_80D3F940:
    ctx->pc = 0x80D3F940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3F940: lwz     r30, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F944:
    ctx->pc = 0x80D3F944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3F944: lwz     r28, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F948:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F948u)) return;
    // 80D3F948: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F94C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F94Cu)) return;
    // 80D3F94C: addi    r3, r3, -26960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26960);

label_80D3F950:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F950u)) return;
    // 80D3F950: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D3F954:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F954u)) return;
    // 80D3F954: addi    r4, r4, -26864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26864);

label_80D3F958:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F958u)) return;
    // 80D3F958: bl      0x8004B05C
    {
            ctx->lr = 0x80D3F95Cu;
            ctx->pc = 0x8004B05Cu;
            return;
    }

label_80D3F95C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F95Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3F95C: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F960:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F960u)) return;
    // 80D3F960: addi    r3, r3, -27008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27008);

label_80D3F964:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F964u)) return;
    // 80D3F964: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D3F968:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F968u)) return;
    // 80D3F968: addi    r4, r4, -26912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26912);

label_80D3F96C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F96Cu)) return;
    // 80D3F96C: bl      0x8004B05C
    {
            ctx->lr = 0x80D3F970u;
            ctx->pc = 0x8004B05Cu;
            return;
    }

label_80D3F970:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F970: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F974:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F974u)) return;
    // 80D3F974: addi    r3, r3, -26960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26960);

label_80D3F978:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F978u)) return;
    // 80D3F978: bl      0x8004A734
    {
            ctx->lr = 0x80D3F97Cu;
            ctx->pc = 0x8004A734u;
            return;
    }

label_80D3F97C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F97Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F97C: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F980:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F980u)) return;
    // 80D3F980: addi    r3, r3, -27008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27008);

label_80D3F984:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F984u)) return;
    // 80D3F984: bl      0x8004A734
    {
            ctx->lr = 0x80D3F988u;
            ctx->pc = 0x8004A734u;
            return;
    }

label_80D3F988:
    ctx->pc = 0x80D3F988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3F988: lbz     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F98C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F98Cu)) return;
    // 80D3F98C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80D3F990:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F990u)) return;
    // 80D3F990: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3F994:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F994u)) return;
    // 80D3F994: bc    12, 2, 0x80D3FA74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3FA74;
        }
    }

label_80D3F998:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F998: bc    4, 0, 0x80D3FB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3FB40;
        }
    }

label_80D3F99C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F99Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3F99C: cmpwi   r0, 1
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

label_80D3F9A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9A0u)) return;
    // 80D3F9A0: bc    4, 0, 0x80D3F9A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3F9A8;
        }
    }

label_80D3F9A4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F9A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3F9A4: b       0x80D3FB40
    {
            goto label_80D3FB40;
    }

label_80D3F9A8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3F9A8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3F9AC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9ACu)) return;
    // 80D3F9AC: addi    r3, r3, -27008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27008);

label_80D3F9B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9B0u)) return;
    // 80D3F9B0: bl      0x8004B49C
    {
            ctx->lr = 0x80D3F9B4u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3F9B4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3F9B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3F9B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9B8u)) return;
    // 80D3F9B8: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D3F9BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9BCu)) return;
    // 80D3F9BC: addi    r4, r4, -26864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26864);

label_80D3F9C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9C0u)) return;
    // 80D3F9C0: bl      0x8004B460
    {
            ctx->lr = 0x80D3F9C4u;
            ctx->pc = 0x8004B460u;
            return;
    }

label_80D3F9C4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F9C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3F9C4: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_80D3F9C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9C8u)) return;
    // 80D3F9C8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80D3F9CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9CCu)) return;
    // 80D3F9CC: or   r24, r25, r25
    {
        ctx->gpr[24] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80D3F9D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9D0u)) return;
    // 80D3F9D0: b       0x80D3FA5C
    {
            goto label_80D3FA5C;
    }

label_80D3F9D4:
    ctx->pc = 0x80D3F9D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3F9D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D3F9D4: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F9D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9D8u)) return;
    // 80D3F9D8: add   r3, r0, r25
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80D3F9DC:
    ctx->pc = 0x80D3F9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D3F9DC: lhz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F9E0:
    ctx->pc = 0x80D3F9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D3F9E0: lhz     r6, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F9E4:
    ctx->pc = 0x80D3F9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D3F9E4: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F9E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3F9E8u)) return;
    // 80D3F9E8: mulli   r23, r4, 12
    ctx->gpr[23] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_80D3F9EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9ECu)) return;
    // 80D3F9EC: add   r4, r27, r23
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D3F9F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9F0u)) return;
    // 80D3F9F0: add   r5, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3F9F4:
    ctx->pc = 0x80D3F9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D3F9F4: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F9F8:
    ctx->pc = 0x80D3F9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3F9F8: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3F9FC:
    ctx->pc = 0x80D3F9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3F9FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3F9FC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA00:
    ctx->pc = 0x80D3FA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3FA00: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA04:
    ctx->pc = 0x80D3FA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3FA04: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA08:
    ctx->pc = 0x80D3FA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3FA08: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA0Cu)) return;
    // 80D3FA0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3FA10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3FA10u)) return;
    // 80D3FA10: mulli   r21, r6, 12
    ctx->gpr[21] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)12);

label_80D3FA14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA14u)) return;
    // 80D3FA14: add   r5, r30, r21
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3FA18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA18u)) return;
    // 80D3FA18: bl      0x8004A5F4
    {
            ctx->lr = 0x80D3FA1Cu;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80D3FA1C:
    ctx->pc = 0x80D3FA1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D3FA1C: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA20u)) return;
    // 80D3FA20: addi    r0, r24, 12
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(12);

label_80D3FA24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA24u)) return;
    // 80D3FA24: add   r4, r29, r23
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D3FA28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA28u)) return;
    // 80D3FA28: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3FA2C:
    ctx->pc = 0x80D3FA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3FA2C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA30:
    ctx->pc = 0x80D3FA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3FA30: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA34:
    ctx->pc = 0x80D3FA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3FA34: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA38:
    ctx->pc = 0x80D3FA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3FA38: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA3C:
    ctx->pc = 0x80D3FA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3FA3C: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA40:
    ctx->pc = 0x80D3FA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3FA40: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA44:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA44u)) return;
    // 80D3FA44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3FA48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA48u)) return;
    // 80D3FA48: add   r5, r28, r21
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3FA4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA4Cu)) return;
    // 80D3FA4C: bl      0x8004ABF4
    {
            ctx->lr = 0x80D3FA50u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D3FA50:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3FA50: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_80D3FA54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA54u)) return;
    // 80D3FA54: addi    r24, r24, 48
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(48);

label_80D3FA58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA58u)) return;
    // 80D3FA58: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_80D3FA5C:
    ctx->pc = 0x80D3FA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3FA5C: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FA60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA60u)) return;
    // 80D3FA60: cmpw    r22, r0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3FA64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA64u)) return;
    // 80D3FA64: bc    12, 0, 0x80D3F9D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3F9D4u;
                return;
            }
            goto label_80D3F9D4;
        }
    }

label_80D3FA68:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3FA68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3FA6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA6Cu)) return;
    // 80D3FA6C: bl      0x8004B504
    {
            ctx->lr = 0x80D3FA70u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3FA70:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3FA70: b       0x80D3FB40
    {
            goto label_80D3FB40;
    }

label_80D3FA74:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3FA74: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D3FA78:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA78u)) return;
    // 80D3FA78: addi    r3, r3, -26960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26960);

label_80D3FA7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA7Cu)) return;
    // 80D3FA7C: bl      0x8004B49C
    {
            ctx->lr = 0x80D3FA80u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80D3FA80:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3FA80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3FA84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA84u)) return;
    // 80D3FA84: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D3FA88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA88u)) return;
    // 80D3FA88: addi    r4, r4, -26912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26912);

label_80D3FA8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA8Cu)) return;
    // 80D3FA8C: bl      0x8004B460
    {
            ctx->lr = 0x80D3FA90u;
            ctx->pc = 0x8004B460u;
            return;
    }

label_80D3FA90:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D3FA90: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_80D3FA94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA94u)) return;
    // 80D3FA94: or   r24, r22, r22
    {
        ctx->gpr[24] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80D3FA98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA98u)) return;
    // 80D3FA98: or   r25, r22, r22
    {
        ctx->gpr[25] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80D3FA9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FA9Cu)) return;
    // 80D3FA9C: b       0x80D3FB2C
    {
            goto label_80D3FB2C;
    }

label_80D3FAA0:
    ctx->pc = 0x80D3FAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D3FAA0: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAA4u)) return;
    // 80D3FAA4: add   r4, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D3FAA8:
    ctx->pc = 0x80D3FAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D3FAA8: lhz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAAC:
    ctx->pc = 0x80D3FAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D3FAAC: lwz     r5, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAB0u)) return;
    // 80D3FAB0: addi    r3, r25, 24
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(24);

label_80D3FAB4:
    ctx->pc = 0x80D3FAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D3FAB4: lhz     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3FAB8u)) return;
    // 80D3FAB8: mulli   r23, r0, 12
    ctx->gpr[23] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80D3FABC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FABCu)) return;
    // 80D3FABC: add   r4, r30, r23
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D3FAC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAC0u)) return;
    // 80D3FAC0: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3FAC4:
    ctx->pc = 0x80D3FAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D3FAC4: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAC8:
    ctx->pc = 0x80D3FAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3FAC8: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FACC:
    ctx->pc = 0x80D3FACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3FACC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAD0:
    ctx->pc = 0x80D3FAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3FAD0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAD4:
    ctx->pc = 0x80D3FAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3FAD4: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAD8:
    ctx->pc = 0x80D3FAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3FAD8: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FADC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FADCu)) return;
    // 80D3FADC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3FAE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D3FAE0u)) return;
    // 80D3FAE0: mulli   r21, r6, 12
    ctx->gpr[21] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)12);

label_80D3FAE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAE4u)) return;
    // 80D3FAE4: add   r5, r27, r21
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3FAE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAE8u)) return;
    // 80D3FAE8: bl      0x8004A5F4
    {
            ctx->lr = 0x80D3FAECu;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80D3FAEC:
    ctx->pc = 0x80D3FAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D3FAEC: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FAF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAF0u)) return;
    // 80D3FAF0: addi    r0, r25, 36
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(36);

label_80D3FAF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAF4u)) return;
    // 80D3FAF4: add   r4, r28, r23
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D3FAF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAF8u)) return;
    // 80D3FAF8: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3FAFC:
    ctx->pc = 0x80D3FAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FAFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3FAFC: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB00:
    ctx->pc = 0x80D3FB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3FB00: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB04:
    ctx->pc = 0x80D3FB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3FB04: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB08:
    ctx->pc = 0x80D3FB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3FB08: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB0C:
    ctx->pc = 0x80D3FB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3FB0C: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB10:
    ctx->pc = 0x80D3FB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3FB10: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB14u)) return;
    // 80D3FB14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3FB18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB18u)) return;
    // 80D3FB18: add   r5, r29, r21
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80D3FB1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB1Cu)) return;
    // 80D3FB1C: bl      0x8004ABF4
    {
            ctx->lr = 0x80D3FB20u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80D3FB20:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3FB20: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_80D3FB24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB24u)) return;
    // 80D3FB24: addi    r25, r25, 48
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(48);

label_80D3FB28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB28u)) return;
    // 80D3FB28: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_80D3FB2C:
    ctx->pc = 0x80D3FB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3FB2C: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB30u)) return;
    // 80D3FB30: cmpw    r22, r0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3FB34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB34u)) return;
    // 80D3FB34: bc    12, 0, 0x80D3FAA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3FAA0u;
                return;
            }
            goto label_80D3FAA0;
        }
    }

label_80D3FB38:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3FB38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3FB3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB3Cu)) return;
    // 80D3FB3C: bl      0x8004B504
    {
            ctx->lr = 0x80D3FB40u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80D3FB40:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3FB40: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80D3FB44:
    ctx->pc = 0x80D3FB44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3FB44: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB48u)) return;
    // 80D3FB48: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3FB4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB4Cu)) return;
    // 80D3FB4C: bc    4, 2, 0x80D3F8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3F8F4u;
                return;
            }
            goto label_80D3F8F4;
        }
    }

label_80D3FB50:
    ctx->pc = 0x80D3FB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3FB50: b       0x80D3FB70
    {
            goto label_80D3FB70;
    }

label_80D3FB54:
    ctx->pc = 0x80D3FB54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3FB54: b       0x80D3FB64
    {
            goto label_80D3FB64;
    }

label_80D3FB58:
    ctx->pc = 0x80D3FB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3FB58: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB5Cu)) return;
    // 80D3FB5C: bl      0x8050ED40
    {
            ctx->lr = 0x80D3FB60u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D3FB60:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3FB60: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80D3FB64:
    ctx->pc = 0x80D3FB64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3FB64: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB68u)) return;
    // 80D3FB68: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3FB6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB6Cu)) return;
    // 80D3FB6C: bc    4, 2, 0x80D3FB58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3FB58u;
                return;
            }
            goto label_80D3FB58;
        }
    }

label_80D3FB70:
    ctx->pc = 0x80D3FB70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3FB70: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80D3FB74:
    ctx->pc = 0x80D3FB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB74u)) return;
    // 80D3FB74: bl      0x80006E08
    {
            ctx->lr = 0x80D3FB78u;
            ctx->pc = 0x80006E08u;
            return;
    }

label_80D3FB78:
    ctx->pc = 0x80D3FB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3FB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3FB78: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB7C:
    ctx->pc = 0x80D3FB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D3FB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3FB7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3FB80:
    ctx->pc = 0x80D3FB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB80u)) return;
    // 80D3FB80: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80D3FB84:
    ctx->pc = 0x80D3FB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3FB84u)) return;
    // 80D3FB84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D3F0E0;
        }
    }

    ctx->pc = 0x80D3FB88u;
    return;
return_dispatch_80D3F0E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D3F0ECu: goto label_80D3F0EC;
    case 0x80D3F0FCu: goto label_80D3F0FC;
    case 0x80D3F104u: goto label_80D3F104;
    case 0x80D3F128u: goto label_80D3F128;
    case 0x80D3F130u: goto label_80D3F130;
    case 0x80D3F15Cu: goto label_80D3F15C;
    case 0x80D3F16Cu: goto label_80D3F16C;
    case 0x80D3F174u: goto label_80D3F174;
    case 0x80D3F198u: goto label_80D3F198;
    case 0x80D3F1A0u: goto label_80D3F1A0;
    case 0x80D3F1CCu: goto label_80D3F1CC;
    case 0x80D3F1DCu: goto label_80D3F1DC;
    case 0x80D3F1E4u: goto label_80D3F1E4;
    case 0x80D3F200u: goto label_80D3F200;
    case 0x80D3F204u: goto label_80D3F204;
    case 0x80D3F220u: goto label_80D3F220;
    case 0x80D3F22Cu: goto label_80D3F22C;
    case 0x80D3F250u: goto label_80D3F250;
    case 0x80D3F25Cu: goto label_80D3F25C;
    case 0x80D3F268u: goto label_80D3F268;
    case 0x80D3F274u: goto label_80D3F274;
    case 0x80D3F27Cu: goto label_80D3F27C;
    case 0x80D3F2A8u: goto label_80D3F2A8;
    case 0x80D3F2B8u: goto label_80D3F2B8;
    case 0x80D3F2C0u: goto label_80D3F2C0;
    case 0x80D3F2DCu: goto label_80D3F2DC;
    case 0x80D3F2E0u: goto label_80D3F2E0;
    case 0x80D3F2ECu: goto label_80D3F2EC;
    case 0x80D3F2F0u: goto label_80D3F2F0;
    case 0x80D3F2FCu: goto label_80D3F2FC;
    case 0x80D3F328u: goto label_80D3F328;
    case 0x80D3F334u: goto label_80D3F334;
    case 0x80D3F340u: goto label_80D3F340;
    case 0x80D3F348u: goto label_80D3F348;
    case 0x80D3F354u: goto label_80D3F354;
    case 0x80D3F360u: goto label_80D3F360;
    case 0x80D3F36Cu: goto label_80D3F36C;
    case 0x80D3F374u: goto label_80D3F374;
    case 0x80D3F390u: goto label_80D3F390;
    case 0x80D3F394u: goto label_80D3F394;
    case 0x80D3F3B0u: goto label_80D3F3B0;
    case 0x80D3F3BCu: goto label_80D3F3BC;
    case 0x80D3F3E0u: goto label_80D3F3E0;
    case 0x80D3F3ECu: goto label_80D3F3EC;
    case 0x80D3F3F8u: goto label_80D3F3F8;
    case 0x80D3F404u: goto label_80D3F404;
    case 0x80D3F40Cu: goto label_80D3F40C;
    case 0x80D3F438u: goto label_80D3F438;
    case 0x80D3F448u: goto label_80D3F448;
    case 0x80D3F450u: goto label_80D3F450;
    case 0x80D3F46Cu: goto label_80D3F46C;
    case 0x80D3F470u: goto label_80D3F470;
    case 0x80D3F47Cu: goto label_80D3F47C;
    case 0x80D3F480u: goto label_80D3F480;
    case 0x80D3F48Cu: goto label_80D3F48C;
    case 0x80D3F4B8u: goto label_80D3F4B8;
    case 0x80D3F4C4u: goto label_80D3F4C4;
    case 0x80D3F4D0u: goto label_80D3F4D0;
    case 0x80D3F4D8u: goto label_80D3F4D8;
    case 0x80D3F4E4u: goto label_80D3F4E4;
    case 0x80D3F4F0u: goto label_80D3F4F0;
    case 0x80D3F4FCu: goto label_80D3F4FC;
    case 0x80D3F504u: goto label_80D3F504;
    case 0x80D3F520u: goto label_80D3F520;
    case 0x80D3F524u: goto label_80D3F524;
    case 0x80D3F548u: goto label_80D3F548;
    case 0x80D3F54Cu: goto label_80D3F54C;
    case 0x80D3F558u: goto label_80D3F558;
    case 0x80D3F57Cu: goto label_80D3F57C;
    case 0x80D3F588u: goto label_80D3F588;
    case 0x80D3F594u: goto label_80D3F594;
    case 0x80D3F59Cu: goto label_80D3F59C;
    case 0x80D3F5A8u: goto label_80D3F5A8;
    case 0x80D3F5E8u: goto label_80D3F5E8;
    case 0x80D3F648u: goto label_80D3F648;
    case 0x80D3F674u: goto label_80D3F674;
    case 0x80D3F680u: goto label_80D3F680;
    case 0x80D3F688u: goto label_80D3F688;
    case 0x80D3F6A4u: goto label_80D3F6A4;
    case 0x80D3F6A8u: goto label_80D3F6A8;
    case 0x80D3F6B0u: goto label_80D3F6B0;
    case 0x80D3F6B8u: goto label_80D3F6B8;
    case 0x80D3F70Cu: goto label_80D3F70C;
    case 0x80D3F71Cu: goto label_80D3F71C;
    case 0x80D3F744u: goto label_80D3F744;
    case 0x80D3F78Cu: goto label_80D3F78C;
    case 0x80D3F8A0u: goto label_80D3F8A0;
    case 0x80D3F8B4u: goto label_80D3F8B4;
    case 0x80D3F8E4u: goto label_80D3F8E4;
    case 0x80D3F918u: goto label_80D3F918;
    case 0x80D3F928u: goto label_80D3F928;
    case 0x80D3F95Cu: goto label_80D3F95C;
    case 0x80D3F970u: goto label_80D3F970;
    case 0x80D3F97Cu: goto label_80D3F97C;
    case 0x80D3F988u: goto label_80D3F988;
    case 0x80D3F9B4u: goto label_80D3F9B4;
    case 0x80D3F9C4u: goto label_80D3F9C4;
    case 0x80D3FA1Cu: goto label_80D3FA1C;
    case 0x80D3FA50u: goto label_80D3FA50;
    case 0x80D3FA70u: goto label_80D3FA70;
    case 0x80D3FA80u: goto label_80D3FA80;
    case 0x80D3FA90u: goto label_80D3FA90;
    case 0x80D3FAECu: goto label_80D3FAEC;
    case 0x80D3FB20u: goto label_80D3FB20;
    case 0x80D3FB40u: goto label_80D3FB40;
    case 0x80D3FB60u: goto label_80D3FB60;
    case 0x80D3FB78u: goto label_80D3FB78;
    default: return;
    }
}

