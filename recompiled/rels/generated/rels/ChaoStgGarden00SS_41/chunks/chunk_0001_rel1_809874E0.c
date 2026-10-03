// DolRecomp output
#include "../generated.h"

void func_809874E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_809874E0[97] = {
        &&label_809874E0,
        &&label_809874E4,
        &&label_809874E8,
        &&label_809874EC,
        &&label_809874F0,
        &&label_809874F4,
        &&label_809874F8,
        &&label_809874FC,
        &&label_80987500,
        &&label_80987504,
        &&label_80987508,
        &&label_8098750C,
        &&label_80987510,
        &&label_80987514,
        &&label_80987518,
        &&label_8098751C,
        &&label_80987520,
        &&label_80987524,
        &&label_80987528,
        &&label_8098752C,
        &&label_80987530,
        &&label_80987534,
        &&label_80987538,
        &&label_8098753C,
        &&label_80987540,
        &&label_80987544,
        &&label_80987548,
        &&label_8098754C,
        &&label_80987550,
        &&label_80987554,
        &&label_80987558,
        &&label_8098755C,
        &&label_80987560,
        &&label_80987564,
        &&label_80987568,
        &&label_8098756C,
        &&label_80987570,
        &&label_80987574,
        &&label_80987578,
        &&label_8098757C,
        &&label_80987580,
        &&label_80987584,
        &&label_80987588,
        &&label_8098758C,
        &&label_80987590,
        &&label_80987594,
        &&label_80987598,
        &&label_8098759C,
        &&label_809875A0,
        &&label_809875A4,
        &&label_809875A8,
        &&label_809875AC,
        &&label_809875B0,
        &&label_809875B4,
        &&label_809875B8,
        &&label_809875BC,
        &&label_809875C0,
        &&label_809875C4,
        &&label_809875C8,
        &&label_809875CC,
        &&label_809875D0,
        &&label_809875D4,
        &&label_809875D8,
        &&label_809875DC,
        &&label_809875E0,
        &&label_809875E4,
        &&label_809875E8,
        &&label_809875EC,
        &&label_809875F0,
        &&label_809875F4,
        &&label_809875F8,
        &&label_809875FC,
        &&label_80987600,
        &&label_80987604,
        &&label_80987608,
        &&label_8098760C,
        &&label_80987610,
        &&label_80987614,
        &&label_80987618,
        &&label_8098761C,
        &&label_80987620,
        &&label_80987624,
        &&label_80987628,
        &&label_8098762C,
        &&label_80987630,
        &&label_80987634,
        &&label_80987638,
        &&label_8098763C,
        &&label_80987640,
        &&label_80987644,
        &&label_80987648,
        &&label_8098764C,
        &&label_80987650,
        &&label_80987654,
        &&label_80987658,
        &&label_8098765C,
        &&label_80987660
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x809874E0u && pc <= 0x80987660u && ((pc - 0x809874E0u) & 3u) == 0u)
            goto *pc_table_809874E0[(pc - 0x809874E0u) >> 2];
    }
    return;
label_809874E0:
    ctx->pc = 0x809874E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809874E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809874E0: bl      0x80935F94
    {
            ctx->lr = 0x809874E4u;
            ctx->pc = 0x80935F94u;
            return;
    }

label_809874E4:
    ctx->pc = 0x809874E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809874E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809874E4: lwz     r3, 4(r31)
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
label_809874E8:
    ctx->pc = 0x809874E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809874E8u)) return;
    // 809874E8: lis     r4, -27785
    ctx->gpr[4] = ((u32)(s32)(-27785) << 16);

label_809874EC:
    ctx->pc = 0x809874ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809874ECu)) return;
    // 809874EC: addi    r4, r4, -15684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15684);

label_809874F0:
    ctx->pc = 0x809874F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809874F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809874F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x809874F0u)) return;
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
label_809874F4:
    ctx->pc = 0x809874F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809874F4u)) return;
    // 809874F4: lis     r4, -27785
    ctx->gpr[4] = ((u32)(s32)(-27785) << 16);

label_809874F8:
    ctx->pc = 0x809874F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809874F8u)) return;
    // 809874F8: addi    r4, r4, -15680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15680);

label_809874FC:
    ctx->pc = 0x809874FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809874FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809874FC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x809874FCu)) return;
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
label_80987500:
    ctx->pc = 0x80987500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987500u)) return;
    // 80987500: bl      0x80935F88
    {
            ctx->lr = 0x80987504u;
            ctx->pc = 0x80935F88u;
            return;
    }

label_80987504:
    ctx->pc = 0x80987504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987504: lwz     r3, 4(r31)
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
label_80987508:
    ctx->pc = 0x80987508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987508u)) return;
    // 80987508: bl      0x80935F44
    {
            ctx->lr = 0x8098750Cu;
            ctx->pc = 0x80935F44u;
            return;
    }

label_8098750C:
    ctx->pc = 0x8098750Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098750Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098750C: lwz     r3, 4(r31)
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
label_80987510:
    ctx->pc = 0x80987510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987510u)) return;
    // 80987510: lis     r4, -64
    ctx->gpr[4] = ((u32)(s32)(-64) << 16);

label_80987514:
    ctx->pc = 0x80987514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987514u)) return;
    // 80987514: bl      0x80935F80
    {
            ctx->lr = 0x80987518u;
            ctx->pc = 0x80935F80u;
            return;
    }

label_80987518:
    ctx->pc = 0x80987518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987518: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8098751C:
    ctx->pc = 0x8098751Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098751Cu)) return;
    // 8098751C: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80987520:
    ctx->pc = 0x80987520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987520u)) return;
    // 80987520: bl      0x80987654
    {
            ctx->lr = 0x80987524u;
            goto label_80987654;
    }

label_80987524:
    ctx->pc = 0x80987524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80987524: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80987528:
    ctx->pc = 0x80987528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987528: lwz     r3, 4(r31)
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
label_8098752C:
    ctx->pc = 0x8098752Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098752Cu)) return;
    // 8098752C: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_80987530:
    ctx->pc = 0x80987530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987530u)) return;
    // 80987530: addi    r5, r5, -5392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5392);

label_80987534:
    ctx->pc = 0x80987534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987534: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987538:
    ctx->pc = 0x80987538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987538u)) return;
    // 80987538: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8098753C:
    ctx->pc = 0x8098753Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098753Cu)) return;
    // 8098753C: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80987540:
    ctx->pc = 0x80987540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987540u)) return;
    // 80987540: bl      0x80935DA0
    {
            ctx->lr = 0x80987544u;
            ctx->pc = 0x80935DA0u;
            return;
    }

label_80987544:
    ctx->pc = 0x80987544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987544: lwz     r3, 4(r31)
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
label_80987548:
    ctx->pc = 0x80987548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987548u)) return;
    // 80987548: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8098754C:
    ctx->pc = 0x8098754Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098754Cu)) return;
    // 8098754C: li      r5, 1026
    ctx->gpr[5] = (u32)(s32)(1026);

label_80987550:
    ctx->pc = 0x80987550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987550u)) return;
    // 80987550: bl      0x80935EC4
    {
            ctx->lr = 0x80987554u;
            ctx->pc = 0x80935EC4u;
            return;
    }

label_80987554:
    ctx->pc = 0x80987554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987554: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80987558:
    ctx->pc = 0x80987558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987558u)) return;
    // 80987558: li      r4, 91
    ctx->gpr[4] = (u32)(s32)(91);

label_8098755C:
    ctx->pc = 0x8098755Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098755Cu)) return;
    // 8098755C: bl      0x80987654
    {
            ctx->lr = 0x80987560u;
            goto label_80987654;
    }

label_80987560:
    ctx->pc = 0x80987560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80987560: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80987564:
    ctx->pc = 0x80987564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987564: lwz     r3, 4(r31)
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
label_80987568:
    ctx->pc = 0x80987568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987568u)) return;
    // 80987568: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_8098756C:
    ctx->pc = 0x8098756Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098756Cu)) return;
    // 8098756C: addi    r5, r5, -5392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5392);

label_80987570:
    ctx->pc = 0x80987570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987570: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987574:
    ctx->pc = 0x80987574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987574u)) return;
    // 80987574: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80987578:
    ctx->pc = 0x80987578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987578u)) return;
    // 80987578: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8098757C:
    ctx->pc = 0x8098757Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098757Cu)) return;
    // 8098757C: bl      0x80935DA0
    {
            ctx->lr = 0x80987580u;
            ctx->pc = 0x80935DA0u;
            return;
    }

label_80987580:
    ctx->pc = 0x80987580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987580: lwz     r3, 4(r31)
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
label_80987584:
    ctx->pc = 0x80987584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987584u)) return;
    // 80987584: li      r4, 1030
    ctx->gpr[4] = (u32)(s32)(1030);

label_80987588:
    ctx->pc = 0x80987588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987588u)) return;
    // 80987588: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8098758C:
    ctx->pc = 0x8098758Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098758Cu)) return;
    // 8098758C: bl      0x80935E64
    {
            ctx->lr = 0x80987590u;
            ctx->pc = 0x80935E64u;
            return;
    }

label_80987590:
    ctx->pc = 0x80987590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987590: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80987594:
    ctx->pc = 0x80987594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987594u)) return;
    // 80987594: bl      0x80973A50
    {
            ctx->lr = 0x80987598u;
            ctx->pc = 0x80973A50u;
            return;
    }

label_80987598:
    ctx->pc = 0x80987598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987598: b       0x809875E0
    {
            goto label_809875E0;
    }

label_8098759C:
    ctx->pc = 0x8098759Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098759Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8098759C: lwz     r3, 4(r31)
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
label_809875A0:
    ctx->pc = 0x809875A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875A0u)) return;
    // 809875A0: bl      0x809357AC
    {
            ctx->lr = 0x809875A4u;
            ctx->pc = 0x809357ACu;
            return;
    }

label_809875A4:
    ctx->pc = 0x809875A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809875A4: lwz     r3, 4(r31)
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
label_809875A8:
    ctx->pc = 0x809875A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875A8u)) return;
    // 809875A8: bl      0x80935F64
    {
            ctx->lr = 0x809875ACu;
            ctx->pc = 0x80935F64u;
            return;
    }

label_809875AC:
    ctx->pc = 0x809875ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809875AC: cmpwi   r3, 0
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

label_809875B0:
    ctx->pc = 0x809875B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875B0u)) return;
    // 809875B0: bc    4, 2, 0x809875D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809875D8;
        }
    }

label_809875B4:
    ctx->pc = 0x809875B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809875B4: lwz     r3, 4(r31)
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
label_809875B8:
    ctx->pc = 0x809875B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875B8u)) return;
    // 809875B8: bl      0x80935FA4
    {
            ctx->lr = 0x809875BCu;
            ctx->pc = 0x80935FA4u;
            return;
    }

label_809875BC:
    ctx->pc = 0x809875BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809875BC: lwz     r3, 4(r31)
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
label_809875C0:
    ctx->pc = 0x809875C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875C0u)) return;
    // 809875C0: bl      0x8050ED40
    {
            ctx->lr = 0x809875C4u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_809875C4:
    ctx->pc = 0x809875C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809875C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809875C8:
    ctx->pc = 0x809875C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809875C8: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809875CC:
    ctx->pc = 0x809875CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809875CC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809875D0:
    ctx->pc = 0x809875D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875D0u)) return;
    // 809875D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_809875D4:
    ctx->pc = 0x809875D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875D4u)) return;
    // 809875D4: bl      0x8047A18C
    {
            ctx->lr = 0x809875D8u;
            ctx->pc = 0x8047A18Cu;
            return;
    }

label_809875D8:
    ctx->pc = 0x809875D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809875D8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_809875DC:
    ctx->pc = 0x809875DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875DCu)) return;
    // 809875DC: bl      0x80973A74
    {
            ctx->lr = 0x809875E0u;
            ctx->pc = 0x80973A74u;
            return;
    }

label_809875E0:
    ctx->pc = 0x809875E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809875E0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_809875E4:
    ctx->pc = 0x809875E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875E4u)) return;
    // 809875E4: bl      0x80987228
    {
            ctx->lr = 0x809875E8u;
            ctx->pc = 0x80987228u;
            return;
    }

label_809875E8:
    ctx->pc = 0x809875E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809875E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 809875E8: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x809875E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x809875E8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809875EC:
    ctx->pc = 0x809875ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 809875EC: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x809875ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809875F0:
    ctx->pc = 0x809875F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 809875F0: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x809875F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x809875F0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809875F4:
    ctx->pc = 0x809875F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 809875F4: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x809875F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809875F8:
    ctx->pc = 0x809875F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 809875F8: psq_l   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x809875F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x809875F8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809875FC:
    ctx->pc = 0x809875FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809875FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809875FC: lfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x809875FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987600:
    ctx->pc = 0x80987600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80987600: lwz     r31, 28(r1)
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
label_80987604:
    ctx->pc = 0x80987604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987604: lwz     r30, 24(r1)
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
label_80987608:
    ctx->pc = 0x80987608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987608: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8098760C:
    ctx->pc = 0x8098760Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098760Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8098760C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987610:
    ctx->pc = 0x80987610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987610: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987614:
    ctx->pc = 0x80987614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987614u)) return;
    // 80987614: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80987618:
    ctx->pc = 0x80987618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987618u)) return;
    // 80987618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809874E0;
        }
    }

label_8098761C:
    ctx->pc = 0x8098761Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098761Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8098761C: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8098761Cu)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_80987620:
    ctx->pc = 0x80987620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987620u)) return;
    // 80987620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809874E0;
        }
    }

label_80987624:
    ctx->pc = 0x80987624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80987624: stwu     r1, -16(r1)
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
label_80987628:
    ctx->pc = 0x80987628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987628: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8098762C:
    ctx->pc = 0x8098762Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098762Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8098762C: stw     r0, 20(r1)
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
label_80987630:
    ctx->pc = 0x80987630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987630u)) return;
    // 80987630: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80987634:
    ctx->pc = 0x80987634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987634u)) return;
    // 80987634: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80987638:
    ctx->pc = 0x80987638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987638u)) return;
    // 80987638: lis     r5, -32616
    ctx->gpr[5] = ((u32)(s32)(-32616) << 16);

label_8098763C:
    ctx->pc = 0x8098763Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098763Cu)) return;
    // 8098763C: addi    r5, r5, 29396
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29396);

label_80987640:
    ctx->pc = 0x80987640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987640u)) return;
    // 80987640: bl      0x8050FD60
    {
            ctx->lr = 0x80987644u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80987644:
    ctx->pc = 0x80987644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987644: lwz     r0, 20(r1)
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
label_80987648:
    ctx->pc = 0x80987648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987648: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8098764C:
    ctx->pc = 0x8098764Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098764Cu)) return;
    // 8098764C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987650:
    ctx->pc = 0x80987650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987650u)) return;
    // 80987650: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809874E0;
        }
    }

label_80987654:
    ctx->pc = 0x80987654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987654: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80987658:
    ctx->pc = 0x80987658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987658: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8098765C:
    ctx->pc = 0x8098765Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098765Cu)) return;
    // 8098765C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80987660:
    ctx->pc = 0x80987660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987660u)) return;
    // 80987660: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809874E0;
        }
    }

    ctx->pc = 0x80987664u;
    return;
return_dispatch_809874E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x809874E4u: goto label_809874E4;
    case 0x80987504u: goto label_80987504;
    case 0x8098750Cu: goto label_8098750C;
    case 0x80987518u: goto label_80987518;
    case 0x80987524u: goto label_80987524;
    case 0x80987544u: goto label_80987544;
    case 0x80987554u: goto label_80987554;
    case 0x80987560u: goto label_80987560;
    case 0x80987580u: goto label_80987580;
    case 0x80987590u: goto label_80987590;
    case 0x80987598u: goto label_80987598;
    case 0x809875A4u: goto label_809875A4;
    case 0x809875ACu: goto label_809875AC;
    case 0x809875BCu: goto label_809875BC;
    case 0x809875C4u: goto label_809875C4;
    case 0x809875D8u: goto label_809875D8;
    case 0x809875E0u: goto label_809875E0;
    case 0x809875E8u: goto label_809875E8;
    case 0x80987644u: goto label_80987644;
    default: return;
    }
}

