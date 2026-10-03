// DolRecomp output
#include "../generated.h"

void func_80988180(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80988180[34] = {
        &&label_80988180,
        &&label_80988184,
        &&label_80988188,
        &&label_8098818C,
        &&label_80988190,
        &&label_80988194,
        &&label_80988198,
        &&label_8098819C,
        &&label_809881A0,
        &&label_809881A4,
        &&label_809881A8,
        &&label_809881AC,
        &&label_809881B0,
        &&label_809881B4,
        &&label_809881B8,
        &&label_809881BC,
        &&label_809881C0,
        &&label_809881C4,
        &&label_809881C8,
        &&label_809881CC,
        &&label_809881D0,
        &&label_809881D4,
        &&label_809881D8,
        &&label_809881DC,
        &&label_809881E0,
        &&label_809881E4,
        &&label_809881E8,
        &&label_809881EC,
        &&label_809881F0,
        &&label_809881F4,
        &&label_809881F8,
        &&label_809881FC,
        &&label_80988200,
        &&label_80988204
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80988180u && pc <= 0x80988204u && ((pc - 0x80988180u) & 3u) == 0u)
            goto *pc_table_80988180[(pc - 0x80988180u) >> 2];
    }
    return;
label_80988180:
    ctx->pc = 0x80988180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80988180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80988180: stwu     r1, -16(r1)
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
label_80988184:
    ctx->pc = 0x80988184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80988184: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988188:
    ctx->pc = 0x80988188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80988188: stw     r0, 20(r1)
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
label_8098818C:
    ctx->pc = 0x8098818Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098818Cu)) return;
    // 8098818C: lis     r3, -27772
    ctx->gpr[3] = ((u32)(s32)(-27772) << 16);

label_80988190:
    ctx->pc = 0x80988190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988190u)) return;
    // 80988190: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80988194:
    ctx->pc = 0x80988194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988194u)) return;
    // 80988194: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80988198:
    ctx->pc = 0x80988198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988198u)) return;
    // 80988198: bl      0x8003D8B8
    {
            ctx->lr = 0x8098819Cu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_8098819C:
    ctx->pc = 0x8098819Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098819Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8098819C: lis     r3, -27773
    ctx->gpr[3] = ((u32)(s32)(-27773) << 16);

label_809881A0:
    ctx->pc = 0x809881A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881A0u)) return;
    // 809881A0: addi    r3, r3, 21568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21568);

label_809881A4:
    ctx->pc = 0x809881A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881A4u)) return;
    // 809881A4: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_809881A8:
    ctx->pc = 0x809881A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881A8u)) return;
    // 809881A8: bl      0x80988070
    {
            ctx->lr = 0x809881ACu;
            ctx->pc = 0x80988070u;
            return;
    }

label_809881AC:
    ctx->pc = 0x809881ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809881ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 809881AC: lis     r3, -27773
    ctx->gpr[3] = ((u32)(s32)(-27773) << 16);

label_809881B0:
    ctx->pc = 0x809881B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881B0u)) return;
    // 809881B0: addi    r3, r3, 22204
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22204);

label_809881B4:
    ctx->pc = 0x809881B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881B4u)) return;
    // 809881B4: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_809881B8:
    ctx->pc = 0x809881B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881B8u)) return;
    // 809881B8: bl      0x80988070
    {
            ctx->lr = 0x809881BCu;
            ctx->pc = 0x80988070u;
            return;
    }

label_809881BC:
    ctx->pc = 0x809881BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809881BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 809881BC: lis     r3, -27773
    ctx->gpr[3] = ((u32)(s32)(-27773) << 16);

label_809881C0:
    ctx->pc = 0x809881C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881C0u)) return;
    // 809881C0: addi    r3, r3, 22840
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22840);

label_809881C4:
    ctx->pc = 0x809881C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881C4u)) return;
    // 809881C4: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_809881C8:
    ctx->pc = 0x809881C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881C8u)) return;
    // 809881C8: bl      0x80988070
    {
            ctx->lr = 0x809881CCu;
            ctx->pc = 0x80988070u;
            return;
    }

label_809881CC:
    ctx->pc = 0x809881CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809881CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809881CC: lwz     r0, 20(r1)
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
label_809881D0:
    ctx->pc = 0x809881D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809881D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809881D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809881D4:
    ctx->pc = 0x809881D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881D4u)) return;
    // 809881D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809881D8:
    ctx->pc = 0x809881D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881D8u)) return;
    // 809881D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80988180;
        }
    }

label_809881DC:
    ctx->pc = 0x809881DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809881DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809881DC: stwu     r1, -16(r1)
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
label_809881E0:
    ctx->pc = 0x809881E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809881E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809881E4:
    ctx->pc = 0x809881E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809881E4: stw     r0, 20(r1)
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
label_809881E8:
    ctx->pc = 0x809881E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881E8u)) return;
    // 809881E8: lis     r3, -27772
    ctx->gpr[3] = ((u32)(s32)(-27772) << 16);

label_809881EC:
    ctx->pc = 0x809881ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881ECu)) return;
    // 809881EC: addi    r3, r3, -13652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13652);

label_809881F0:
    ctx->pc = 0x809881F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881F0u)) return;
    // 809881F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_809881F4:
    ctx->pc = 0x809881F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809881F4u)) return;
    // 809881F4: bl      0x8003D8B8
    {
            ctx->lr = 0x809881F8u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_809881F8:
    ctx->pc = 0x809881F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809881F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809881F8: lwz     r0, 20(r1)
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
label_809881FC:
    ctx->pc = 0x809881FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809881FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809881FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988200:
    ctx->pc = 0x80988200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988200u)) return;
    // 80988200: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80988204:
    ctx->pc = 0x80988204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988204u)) return;
    // 80988204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80988180;
        }
    }

    ctx->pc = 0x80988208u;
    return;
return_dispatch_80988180:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8098819Cu: goto label_8098819C;
    case 0x809881ACu: goto label_809881AC;
    case 0x809881BCu: goto label_809881BC;
    case 0x809881CCu: goto label_809881CC;
    case 0x809881F8u: goto label_809881F8;
    default: return;
    }
}

