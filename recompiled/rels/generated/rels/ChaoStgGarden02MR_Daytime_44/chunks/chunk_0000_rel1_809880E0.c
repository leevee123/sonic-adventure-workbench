// DolRecomp output
#include "../generated.h"

void func_809880E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_809880E0[34] = {
        &&label_809880E0,
        &&label_809880E4,
        &&label_809880E8,
        &&label_809880EC,
        &&label_809880F0,
        &&label_809880F4,
        &&label_809880F8,
        &&label_809880FC,
        &&label_80988100,
        &&label_80988104,
        &&label_80988108,
        &&label_8098810C,
        &&label_80988110,
        &&label_80988114,
        &&label_80988118,
        &&label_8098811C,
        &&label_80988120,
        &&label_80988124,
        &&label_80988128,
        &&label_8098812C,
        &&label_80988130,
        &&label_80988134,
        &&label_80988138,
        &&label_8098813C,
        &&label_80988140,
        &&label_80988144,
        &&label_80988148,
        &&label_8098814C,
        &&label_80988150,
        &&label_80988154,
        &&label_80988158,
        &&label_8098815C,
        &&label_80988160,
        &&label_80988164
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x809880E0u && pc <= 0x80988164u && ((pc - 0x809880E0u) & 3u) == 0u)
            goto *pc_table_809880E0[(pc - 0x809880E0u) >> 2];
    }
    return;
label_809880E0:
    ctx->pc = 0x809880E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809880E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809880E0: stwu     r1, -16(r1)
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
label_809880E4:
    ctx->pc = 0x809880E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809880E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809880E8:
    ctx->pc = 0x809880E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809880E8: stw     r0, 20(r1)
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
label_809880EC:
    ctx->pc = 0x809880ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880ECu)) return;
    // 809880EC: lis     r3, -27775
    ctx->gpr[3] = ((u32)(s32)(-27775) << 16);

label_809880F0:
    ctx->pc = 0x809880F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880F0u)) return;
    // 809880F0: addi    r3, r3, -6840
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6840);

label_809880F4:
    ctx->pc = 0x809880F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880F4u)) return;
    // 809880F4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_809880F8:
    ctx->pc = 0x809880F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880F8u)) return;
    // 809880F8: bl      0x8003D8B8
    {
            ctx->lr = 0x809880FCu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_809880FC:
    ctx->pc = 0x809880FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809880FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 809880FC: lis     r3, -27776
    ctx->gpr[3] = ((u32)(s32)(-27776) << 16);

label_80988100:
    ctx->pc = 0x80988100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988100u)) return;
    // 80988100: addi    r3, r3, 28420
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28420);

label_80988104:
    ctx->pc = 0x80988104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988104u)) return;
    // 80988104: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_80988108:
    ctx->pc = 0x80988108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988108u)) return;
    // 80988108: bl      0x80988070
    {
            ctx->lr = 0x8098810Cu;
            ctx->pc = 0x80988070u;
            return;
    }

label_8098810C:
    ctx->pc = 0x8098810Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098810Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8098810C: lis     r3, -27776
    ctx->gpr[3] = ((u32)(s32)(-27776) << 16);

label_80988110:
    ctx->pc = 0x80988110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988110u)) return;
    // 80988110: addi    r3, r3, 29056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29056);

label_80988114:
    ctx->pc = 0x80988114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988114u)) return;
    // 80988114: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_80988118:
    ctx->pc = 0x80988118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988118u)) return;
    // 80988118: bl      0x80988070
    {
            ctx->lr = 0x8098811Cu;
            ctx->pc = 0x80988070u;
            return;
    }

label_8098811C:
    ctx->pc = 0x8098811Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098811Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8098811C: lis     r3, -27776
    ctx->gpr[3] = ((u32)(s32)(-27776) << 16);

label_80988120:
    ctx->pc = 0x80988120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988120u)) return;
    // 80988120: addi    r3, r3, 29692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29692);

label_80988124:
    ctx->pc = 0x80988124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988124u)) return;
    // 80988124: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_80988128:
    ctx->pc = 0x80988128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988128u)) return;
    // 80988128: bl      0x80988070
    {
            ctx->lr = 0x8098812Cu;
            ctx->pc = 0x80988070u;
            return;
    }

label_8098812C:
    ctx->pc = 0x8098812Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098812Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8098812C: lwz     r0, 20(r1)
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
label_80988130:
    ctx->pc = 0x80988130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80988130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80988130: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988134:
    ctx->pc = 0x80988134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988134u)) return;
    // 80988134: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80988138:
    ctx->pc = 0x80988138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988138u)) return;
    // 80988138: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809880E0;
        }
    }

label_8098813C:
    ctx->pc = 0x8098813Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098813Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8098813C: stwu     r1, -16(r1)
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
label_80988140:
    ctx->pc = 0x80988140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80988140: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988144:
    ctx->pc = 0x80988144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80988144: stw     r0, 20(r1)
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
label_80988148:
    ctx->pc = 0x80988148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988148u)) return;
    // 80988148: lis     r3, -27775
    ctx->gpr[3] = ((u32)(s32)(-27775) << 16);

label_8098814C:
    ctx->pc = 0x8098814Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098814Cu)) return;
    // 8098814C: addi    r3, r3, -6804
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6804);

label_80988150:
    ctx->pc = 0x80988150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988150u)) return;
    // 80988150: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80988154:
    ctx->pc = 0x80988154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988154u)) return;
    // 80988154: bl      0x8003D8B8
    {
            ctx->lr = 0x80988158u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80988158:
    ctx->pc = 0x80988158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80988158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80988158: lwz     r0, 20(r1)
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
label_8098815C:
    ctx->pc = 0x8098815Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8098815Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098815C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988160:
    ctx->pc = 0x80988160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988160u)) return;
    // 80988160: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80988164:
    ctx->pc = 0x80988164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988164u)) return;
    // 80988164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809880E0;
        }
    }

    ctx->pc = 0x80988168u;
    return;
return_dispatch_809880E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x809880FCu: goto label_809880FC;
    case 0x8098810Cu: goto label_8098810C;
    case 0x8098811Cu: goto label_8098811C;
    case 0x8098812Cu: goto label_8098812C;
    case 0x80988158u: goto label_80988158;
    default: return;
    }
}

