// DolRecomp output
#include "../generated.h"

void func_80AEA760(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80AEA760[76] = {
        &&label_80AEA760,
        &&label_80AEA764,
        &&label_80AEA768,
        &&label_80AEA76C,
        &&label_80AEA770,
        &&label_80AEA774,
        &&label_80AEA778,
        &&label_80AEA77C,
        &&label_80AEA780,
        &&label_80AEA784,
        &&label_80AEA788,
        &&label_80AEA78C,
        &&label_80AEA790,
        &&label_80AEA794,
        &&label_80AEA798,
        &&label_80AEA79C,
        &&label_80AEA7A0,
        &&label_80AEA7A4,
        &&label_80AEA7A8,
        &&label_80AEA7AC,
        &&label_80AEA7B0,
        &&label_80AEA7B4,
        &&label_80AEA7B8,
        &&label_80AEA7BC,
        &&label_80AEA7C0,
        &&label_80AEA7C4,
        &&label_80AEA7C8,
        &&label_80AEA7CC,
        &&label_80AEA7D0,
        &&label_80AEA7D4,
        &&label_80AEA7D8,
        &&label_80AEA7DC,
        &&label_80AEA7E0,
        &&label_80AEA7E4,
        &&label_80AEA7E8,
        &&label_80AEA7EC,
        &&label_80AEA7F0,
        &&label_80AEA7F4,
        &&label_80AEA7F8,
        &&label_80AEA7FC,
        &&label_80AEA800,
        &&label_80AEA804,
        &&label_80AEA808,
        &&label_80AEA80C,
        &&label_80AEA810,
        &&label_80AEA814,
        &&label_80AEA818,
        &&label_80AEA81C,
        &&label_80AEA820,
        &&label_80AEA824,
        &&label_80AEA828,
        &&label_80AEA82C,
        &&label_80AEA830,
        &&label_80AEA834,
        &&label_80AEA838,
        &&label_80AEA83C,
        &&label_80AEA840,
        &&label_80AEA844,
        &&label_80AEA848,
        &&label_80AEA84C,
        &&label_80AEA850,
        &&label_80AEA854,
        &&label_80AEA858,
        &&label_80AEA85C,
        &&label_80AEA860,
        &&label_80AEA864,
        &&label_80AEA868,
        &&label_80AEA86C,
        &&label_80AEA870,
        &&label_80AEA874,
        &&label_80AEA878,
        &&label_80AEA87C,
        &&label_80AEA880,
        &&label_80AEA884,
        &&label_80AEA888,
        &&label_80AEA88C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80AEA760u && pc <= 0x80AEA88Cu && ((pc - 0x80AEA760u) & 3u) == 0u)
            goto *pc_table_80AEA760[(pc - 0x80AEA760u) >> 2];
    }
    return;
label_80AEA760:
    ctx->pc = 0x80AEA760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA760: lwz     r0, 20(r1)
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
label_80AEA764:
    ctx->pc = 0x80AEA764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AEA764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEA764: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA768:
    ctx->pc = 0x80AEA768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA768u)) return;
    // 80AEA768: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AEA76C:
    ctx->pc = 0x80AEA76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA76Cu)) return;
    // 80AEA76C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AEA760;
        }
    }

label_80AEA770:
    ctx->pc = 0x80AEA770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AEA770: stwu     r1, -16(r1)
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
label_80AEA774:
    ctx->pc = 0x80AEA774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEA774: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA778:
    ctx->pc = 0x80AEA778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AEA778: stw     r0, 20(r1)
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
label_80AEA77C:
    ctx->pc = 0x80AEA77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AEA77C: stw     r31, 12(r1)
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
label_80AEA780:
    ctx->pc = 0x80AEA780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA780u)) return;
    // 80AEA780: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AEA784:
    ctx->pc = 0x80AEA784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA784u)) return;
    // 80AEA784: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80AEA788:
    ctx->pc = 0x80AEA788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA788u)) return;
    // 80AEA788: lis     r5, -32593
    ctx->gpr[5] = ((u32)(s32)(-32593) << 16);

label_80AEA78C:
    ctx->pc = 0x80AEA78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA78Cu)) return;
    // 80AEA78C: addi    r5, r5, -22792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22792);

label_80AEA790:
    ctx->pc = 0x80AEA790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA790u)) return;
    // 80AEA790: bl      0x8050FD60
    {
            ctx->lr = 0x80AEA794u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AEA794:
    ctx->pc = 0x80AEA794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEA794: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AEA798:
    ctx->pc = 0x80AEA798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEA798: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA79C:
    ctx->pc = 0x80AEA79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA79Cu)) return;
    // 80AEA79C: bl      0x80462174
    {
            ctx->lr = 0x80AEA7A0u;
            ctx->pc = 0x80462174u;
            return;
    }

label_80AEA7A0:
    ctx->pc = 0x80AEA7A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA7A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AEA7A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AEA7A4:
    ctx->pc = 0x80AEA7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7A4u)) return;
    // 80AEA7A4: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEA7A8:
    ctx->pc = 0x80AEA7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7A8u)) return;
    // 80AEA7A8: addi    r4, r4, 14144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14144);

label_80AEA7AC:
    ctx->pc = 0x80AEA7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7ACu)) return;
    // 80AEA7AC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AEA7B0:
    ctx->pc = 0x80AEA7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7B0u)) return;
    // 80AEA7B0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80AEA7B4:
    ctx->pc = 0x80AEA7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7B4u)) return;
    // 80AEA7B4: bl      0x8041E63C
    {
            ctx->lr = 0x80AEA7B8u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80AEA7B8:
    ctx->pc = 0x80AEA7B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA7B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AEA7B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AEA7BC:
    ctx->pc = 0x80AEA7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AEA7BC: lwz     r31, 12(r1)
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
label_80AEA7C0:
    ctx->pc = 0x80AEA7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA7C0: lwz     r0, 20(r1)
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
label_80AEA7C4:
    ctx->pc = 0x80AEA7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AEA7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEA7C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA7C8:
    ctx->pc = 0x80AEA7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7C8u)) return;
    // 80AEA7C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AEA7CC:
    ctx->pc = 0x80AEA7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7CCu)) return;
    // 80AEA7CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AEA760;
        }
    }

label_80AEA7D0:
    ctx->pc = 0x80AEA7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AEA7D0: stwu     r1, -16(r1)
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
label_80AEA7D4:
    ctx->pc = 0x80AEA7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEA7D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA7D8:
    ctx->pc = 0x80AEA7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AEA7D8: stw     r0, 20(r1)
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
label_80AEA7DC:
    ctx->pc = 0x80AEA7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AEA7DC: stw     r31, 12(r1)
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
label_80AEA7E0:
    ctx->pc = 0x80AEA7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7E0u)) return;
    // 80AEA7E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AEA7E4:
    ctx->pc = 0x80AEA7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7E4u)) return;
    // 80AEA7E4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80AEA7E8:
    ctx->pc = 0x80AEA7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7E8u)) return;
    // 80AEA7E8: lis     r5, -32593
    ctx->gpr[5] = ((u32)(s32)(-32593) << 16);

label_80AEA7EC:
    ctx->pc = 0x80AEA7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7ECu)) return;
    // 80AEA7EC: addi    r5, r5, -22752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22752);

label_80AEA7F0:
    ctx->pc = 0x80AEA7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7F0u)) return;
    // 80AEA7F0: bl      0x8050FD60
    {
            ctx->lr = 0x80AEA7F4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AEA7F4:
    ctx->pc = 0x80AEA7F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA7F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEA7F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AEA7F8:
    ctx->pc = 0x80AEA7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEA7F8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA7FC:
    ctx->pc = 0x80AEA7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA7FCu)) return;
    // 80AEA7FC: bl      0x80462174
    {
            ctx->lr = 0x80AEA800u;
            ctx->pc = 0x80462174u;
            return;
    }

label_80AEA800:
    ctx->pc = 0x80AEA800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AEA800: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AEA804:
    ctx->pc = 0x80AEA804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA804u)) return;
    // 80AEA804: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEA808:
    ctx->pc = 0x80AEA808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA808u)) return;
    // 80AEA808: addi    r4, r4, 14144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14144);

label_80AEA80C:
    ctx->pc = 0x80AEA80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA80Cu)) return;
    // 80AEA80C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AEA810:
    ctx->pc = 0x80AEA810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA810u)) return;
    // 80AEA810: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80AEA814:
    ctx->pc = 0x80AEA814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA814u)) return;
    // 80AEA814: bl      0x8041E63C
    {
            ctx->lr = 0x80AEA818u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80AEA818:
    ctx->pc = 0x80AEA818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AEA818: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AEA81C:
    ctx->pc = 0x80AEA81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AEA81C: lwz     r31, 12(r1)
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
label_80AEA820:
    ctx->pc = 0x80AEA820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA820: lwz     r0, 20(r1)
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
label_80AEA824:
    ctx->pc = 0x80AEA824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AEA824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEA824: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA828:
    ctx->pc = 0x80AEA828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA828u)) return;
    // 80AEA828: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AEA82C:
    ctx->pc = 0x80AEA82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA82Cu)) return;
    // 80AEA82C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AEA760;
        }
    }

label_80AEA830:
    ctx->pc = 0x80AEA830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AEA830: stwu     r1, -16(r1)
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
label_80AEA834:
    ctx->pc = 0x80AEA834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEA834: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA838:
    ctx->pc = 0x80AEA838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AEA838: stw     r0, 20(r1)
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
label_80AEA83C:
    ctx->pc = 0x80AEA83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AEA83C: stw     r31, 12(r1)
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
label_80AEA840:
    ctx->pc = 0x80AEA840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA840u)) return;
    // 80AEA840: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AEA844:
    ctx->pc = 0x80AEA844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA844u)) return;
    // 80AEA844: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80AEA848:
    ctx->pc = 0x80AEA848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA848u)) return;
    // 80AEA848: lis     r5, -32593
    ctx->gpr[5] = ((u32)(s32)(-32593) << 16);

label_80AEA84C:
    ctx->pc = 0x80AEA84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA84Cu)) return;
    // 80AEA84C: addi    r5, r5, -22712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22712);

label_80AEA850:
    ctx->pc = 0x80AEA850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA850u)) return;
    // 80AEA850: bl      0x8050FD60
    {
            ctx->lr = 0x80AEA854u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AEA854:
    ctx->pc = 0x80AEA854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEA854: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AEA858:
    ctx->pc = 0x80AEA858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEA858: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA85C:
    ctx->pc = 0x80AEA85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA85Cu)) return;
    // 80AEA85C: bl      0x80462174
    {
            ctx->lr = 0x80AEA860u;
            ctx->pc = 0x80462174u;
            return;
    }

label_80AEA860:
    ctx->pc = 0x80AEA860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AEA860: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AEA864:
    ctx->pc = 0x80AEA864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA864u)) return;
    // 80AEA864: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEA868:
    ctx->pc = 0x80AEA868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA868u)) return;
    // 80AEA868: addi    r4, r4, 14144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14144);

label_80AEA86C:
    ctx->pc = 0x80AEA86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA86Cu)) return;
    // 80AEA86C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AEA870:
    ctx->pc = 0x80AEA870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA870u)) return;
    // 80AEA870: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80AEA874:
    ctx->pc = 0x80AEA874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA874u)) return;
    // 80AEA874: bl      0x8041E63C
    {
            ctx->lr = 0x80AEA878u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80AEA878:
    ctx->pc = 0x80AEA878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AEA878: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AEA87C:
    ctx->pc = 0x80AEA87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AEA87C: lwz     r31, 12(r1)
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
label_80AEA880:
    ctx->pc = 0x80AEA880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA880: lwz     r0, 20(r1)
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
label_80AEA884:
    ctx->pc = 0x80AEA884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AEA884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEA884: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA888:
    ctx->pc = 0x80AEA888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA888u)) return;
    // 80AEA888: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AEA88C:
    ctx->pc = 0x80AEA88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA88Cu)) return;
    // 80AEA88C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AEA760;
        }
    }

    ctx->pc = 0x80AEA890u;
    return;
return_dispatch_80AEA760:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80AEA794u: goto label_80AEA794;
    case 0x80AEA7A0u: goto label_80AEA7A0;
    case 0x80AEA7B8u: goto label_80AEA7B8;
    case 0x80AEA7F4u: goto label_80AEA7F4;
    case 0x80AEA800u: goto label_80AEA800;
    case 0x80AEA818u: goto label_80AEA818;
    case 0x80AEA854u: goto label_80AEA854;
    case 0x80AEA860u: goto label_80AEA860;
    case 0x80AEA878u: goto label_80AEA878;
    default: return;
    }
}

