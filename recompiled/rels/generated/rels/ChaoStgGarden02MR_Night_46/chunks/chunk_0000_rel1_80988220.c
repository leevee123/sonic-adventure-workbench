// DolRecomp output
#include "../generated.h"

void func_80988220(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80988220[34] = {
        &&label_80988220,
        &&label_80988224,
        &&label_80988228,
        &&label_8098822C,
        &&label_80988230,
        &&label_80988234,
        &&label_80988238,
        &&label_8098823C,
        &&label_80988240,
        &&label_80988244,
        &&label_80988248,
        &&label_8098824C,
        &&label_80988250,
        &&label_80988254,
        &&label_80988258,
        &&label_8098825C,
        &&label_80988260,
        &&label_80988264,
        &&label_80988268,
        &&label_8098826C,
        &&label_80988270,
        &&label_80988274,
        &&label_80988278,
        &&label_8098827C,
        &&label_80988280,
        &&label_80988284,
        &&label_80988288,
        &&label_8098828C,
        &&label_80988290,
        &&label_80988294,
        &&label_80988298,
        &&label_8098829C,
        &&label_809882A0,
        &&label_809882A4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80988220u && pc <= 0x809882A4u && ((pc - 0x80988220u) & 3u) == 0u)
            goto *pc_table_80988220[(pc - 0x80988220u) >> 2];
    }
    return;
label_80988220:
    ctx->pc = 0x80988220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80988220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80988220: stwu     r1, -16(r1)
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
label_80988224:
    ctx->pc = 0x80988224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80988224: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988228:
    ctx->pc = 0x80988228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80988228: stw     r0, 20(r1)
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
label_8098822C:
    ctx->pc = 0x8098822Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098822Cu)) return;
    // 8098822C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80988230:
    ctx->pc = 0x80988230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988230u)) return;
    // 80988230: addi    r3, r3, -19680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19680);

label_80988234:
    ctx->pc = 0x80988234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988234u)) return;
    // 80988234: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80988238:
    ctx->pc = 0x80988238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988238u)) return;
    // 80988238: bl      0x8003D8B8
    {
            ctx->lr = 0x8098823Cu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_8098823C:
    ctx->pc = 0x8098823Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098823Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8098823C: lis     r3, -27770
    ctx->gpr[3] = ((u32)(s32)(-27770) << 16);

label_80988240:
    ctx->pc = 0x80988240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988240u)) return;
    // 80988240: addi    r3, r3, 14744
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14744);

label_80988244:
    ctx->pc = 0x80988244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988244u)) return;
    // 80988244: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_80988248:
    ctx->pc = 0x80988248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988248u)) return;
    // 80988248: bl      0x80988070
    {
            ctx->lr = 0x8098824Cu;
            ctx->pc = 0x80988070u;
            return;
    }

label_8098824C:
    ctx->pc = 0x8098824Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098824Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8098824C: lis     r3, -27770
    ctx->gpr[3] = ((u32)(s32)(-27770) << 16);

label_80988250:
    ctx->pc = 0x80988250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988250u)) return;
    // 80988250: addi    r3, r3, 15380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15380);

label_80988254:
    ctx->pc = 0x80988254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988254u)) return;
    // 80988254: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_80988258:
    ctx->pc = 0x80988258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988258u)) return;
    // 80988258: bl      0x80988070
    {
            ctx->lr = 0x8098825Cu;
            ctx->pc = 0x80988070u;
            return;
    }

label_8098825C:
    ctx->pc = 0x8098825Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098825Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8098825C: lis     r3, -27770
    ctx->gpr[3] = ((u32)(s32)(-27770) << 16);

label_80988260:
    ctx->pc = 0x80988260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988260u)) return;
    // 80988260: addi    r3, r3, 16016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16016);

label_80988264:
    ctx->pc = 0x80988264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988264u)) return;
    // 80988264: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_80988268:
    ctx->pc = 0x80988268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988268u)) return;
    // 80988268: bl      0x80988070
    {
            ctx->lr = 0x8098826Cu;
            ctx->pc = 0x80988070u;
            return;
    }

label_8098826C:
    ctx->pc = 0x8098826Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098826Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8098826C: lwz     r0, 20(r1)
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
label_80988270:
    ctx->pc = 0x80988270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80988270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80988270: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988274:
    ctx->pc = 0x80988274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988274u)) return;
    // 80988274: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80988278:
    ctx->pc = 0x80988278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988278u)) return;
    // 80988278: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80988220;
        }
    }

label_8098827C:
    ctx->pc = 0x8098827Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098827Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8098827C: stwu     r1, -16(r1)
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
label_80988280:
    ctx->pc = 0x80988280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80988280: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988284:
    ctx->pc = 0x80988284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80988284: stw     r0, 20(r1)
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
label_80988288:
    ctx->pc = 0x80988288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988288u)) return;
    // 80988288: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8098828C:
    ctx->pc = 0x8098828Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098828Cu)) return;
    // 8098828C: addi    r3, r3, -19644
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19644);

label_80988290:
    ctx->pc = 0x80988290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988290u)) return;
    // 80988290: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80988294:
    ctx->pc = 0x80988294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988294u)) return;
    // 80988294: bl      0x8003D8B8
    {
            ctx->lr = 0x80988298u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80988298:
    ctx->pc = 0x80988298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80988298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80988298: lwz     r0, 20(r1)
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
label_8098829C:
    ctx->pc = 0x8098829Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8098829Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098829C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809882A0:
    ctx->pc = 0x809882A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809882A0u)) return;
    // 809882A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809882A4:
    ctx->pc = 0x809882A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809882A4u)) return;
    // 809882A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80988220;
        }
    }

    ctx->pc = 0x809882A8u;
    return;
return_dispatch_80988220:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8098823Cu: goto label_8098823C;
    case 0x8098824Cu: goto label_8098824C;
    case 0x8098825Cu: goto label_8098825C;
    case 0x8098826Cu: goto label_8098826C;
    case 0x80988298u: goto label_80988298;
    default: return;
    }
}

