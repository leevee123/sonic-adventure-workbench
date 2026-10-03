// DolRecomp output
#include "../generated.h"

void func_809FC5C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_809FC5C0[109] = {
        &&label_809FC5C0,
        &&label_809FC5C4,
        &&label_809FC5C8,
        &&label_809FC5CC,
        &&label_809FC5D0,
        &&label_809FC5D4,
        &&label_809FC5D8,
        &&label_809FC5DC,
        &&label_809FC5E0,
        &&label_809FC5E4,
        &&label_809FC5E8,
        &&label_809FC5EC,
        &&label_809FC5F0,
        &&label_809FC5F4,
        &&label_809FC5F8,
        &&label_809FC5FC,
        &&label_809FC600,
        &&label_809FC604,
        &&label_809FC608,
        &&label_809FC60C,
        &&label_809FC610,
        &&label_809FC614,
        &&label_809FC618,
        &&label_809FC61C,
        &&label_809FC620,
        &&label_809FC624,
        &&label_809FC628,
        &&label_809FC62C,
        &&label_809FC630,
        &&label_809FC634,
        &&label_809FC638,
        &&label_809FC63C,
        &&label_809FC640,
        &&label_809FC644,
        &&label_809FC648,
        &&label_809FC64C,
        &&label_809FC650,
        &&label_809FC654,
        &&label_809FC658,
        &&label_809FC65C,
        &&label_809FC660,
        &&label_809FC664,
        &&label_809FC668,
        &&label_809FC66C,
        &&label_809FC670,
        &&label_809FC674,
        &&label_809FC678,
        &&label_809FC67C,
        &&label_809FC680,
        &&label_809FC684,
        &&label_809FC688,
        &&label_809FC68C,
        &&label_809FC690,
        &&label_809FC694,
        &&label_809FC698,
        &&label_809FC69C,
        &&label_809FC6A0,
        &&label_809FC6A4,
        &&label_809FC6A8,
        &&label_809FC6AC,
        &&label_809FC6B0,
        &&label_809FC6B4,
        &&label_809FC6B8,
        &&label_809FC6BC,
        &&label_809FC6C0,
        &&label_809FC6C4,
        &&label_809FC6C8,
        &&label_809FC6CC,
        &&label_809FC6D0,
        &&label_809FC6D4,
        &&label_809FC6D8,
        &&label_809FC6DC,
        &&label_809FC6E0,
        &&label_809FC6E4,
        &&label_809FC6E8,
        &&label_809FC6EC,
        &&label_809FC6F0,
        &&label_809FC6F4,
        &&label_809FC6F8,
        &&label_809FC6FC,
        &&label_809FC700,
        &&label_809FC704,
        &&label_809FC708,
        &&label_809FC70C,
        &&label_809FC710,
        &&label_809FC714,
        &&label_809FC718,
        &&label_809FC71C,
        &&label_809FC720,
        &&label_809FC724,
        &&label_809FC728,
        &&label_809FC72C,
        &&label_809FC730,
        &&label_809FC734,
        &&label_809FC738,
        &&label_809FC73C,
        &&label_809FC740,
        &&label_809FC744,
        &&label_809FC748,
        &&label_809FC74C,
        &&label_809FC750,
        &&label_809FC754,
        &&label_809FC758,
        &&label_809FC75C,
        &&label_809FC760,
        &&label_809FC764,
        &&label_809FC768,
        &&label_809FC76C,
        &&label_809FC770
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x809FC5C0u && pc <= 0x809FC770u && ((pc - 0x809FC5C0u) & 3u) == 0u)
            goto *pc_table_809FC5C0[(pc - 0x809FC5C0u) >> 2];
    }
    return;
label_809FC5C0:
    ctx->pc = 0x809FC5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809FC5C0: bc    12, 0, 0x809FC594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x809FC594u;
            return;
        }
    }

label_809FC5C4:
    ctx->pc = 0x809FC5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 809FC5C4: rlwinm r0, r29, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00000003u;
    }

label_809FC5C8:
    ctx->pc = 0x809FC5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5C8u)) return;
    // 809FC5C8: cmplwi  r0, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809FC5CC:
    ctx->pc = 0x809FC5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5CCu)) return;
    // 809FC5CC: bc    4, 2, 0x809FC60C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809FC60C;
        }
    }

label_809FC5D0:
    ctx->pc = 0x809FC5D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC5D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC5D0: lwz     r3, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC5D4:
    ctx->pc = 0x809FC5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5D4u)) return;
    // 809FC5D4: cmplwi  r3, 0x0000
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

label_809FC5D8:
    ctx->pc = 0x809FC5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5D8u)) return;
    // 809FC5D8: bc    12, 2, 0x809FC654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC654;
        }
    }

label_809FC5DC:
    ctx->pc = 0x809FC5DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC5DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC5DC: lwz     r4, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC5E0:
    ctx->pc = 0x809FC5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5E0u)) return;
    // 809FC5E0: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809FC5E4:
    ctx->pc = 0x809FC5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5E4u)) return;
    // 809FC5E4: bc    12, 2, 0x809FC654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC654;
        }
    }

label_809FC5E8:
    ctx->pc = 0x809FC5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809FC5E8: lwz     r7, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC5EC:
    ctx->pc = 0x809FC5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809FC5EC: lwz     r6, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC5F0:
    ctx->pc = 0x809FC5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809FC5F0: lwz     r3, 44(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC5F4:
    ctx->pc = 0x809FC5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809FC5F4: lwz     r4, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC5F8:
    ctx->pc = 0x809FC5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809FC5F8: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC5FC:
    ctx->pc = 0x809FC5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC5FC: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC600:
    ctx->pc = 0x809FC600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809FC600: lwz     r7, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC604:
    ctx->pc = 0x809FC604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC604u)) return;
    // 809FC604: bl      0x809E096C
    {
            ctx->lr = 0x809FC608u;
            ctx->pc = 0x809E096Cu;
            return;
    }

label_809FC608:
    ctx->pc = 0x809FC608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809FC608: b       0x809FC654
    {
            goto label_809FC654;
    }

label_809FC60C:
    ctx->pc = 0x809FC60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 809FC60C: or   r30, r27, r27
    {
        ctx->gpr[30] = ctx->gpr[27] | ctx->gpr[27];
    }

label_809FC610:
    ctx->pc = 0x809FC610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC610u)) return;
    // 809FC610: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_809FC614:
    ctx->pc = 0x809FC614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC614u)) return;
    // 809FC614: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_809FC618:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 809FC618: slw   r0, r31, r28
    {
        u32 sh = ctx->gpr[28] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[31] << sh);
    }

label_809FC61C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC61Cu)) return;
    // 809FC61C: and.   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_809FC620:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC620u)) return;
    // 809FC620: bc    12, 2, 0x809FC644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC644;
        }
    }

label_809FC624:
    ctx->pc = 0x809FC624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC624: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC628:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC628u)) return;
    // 809FC628: cmplwi  r3, 0x0000
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

label_809FC62C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC62Cu)) return;
    // 809FC62C: bc    12, 2, 0x809FC644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC644;
        }
    }

label_809FC630:
    ctx->pc = 0x809FC630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809FC630: lwz     r5, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC634:
    ctx->pc = 0x809FC634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809FC634: lwz     r3, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC638:
    ctx->pc = 0x809FC638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC638: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC63C:
    ctx->pc = 0x809FC63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809FC63C: lwz     r5, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC640:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC640u)) return;
    // 809FC640: bl      0x809E0A38
    {
            ctx->lr = 0x809FC644u;
            ctx->pc = 0x809E0A38u;
            return;
    }

label_809FC644:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 809FC644: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_809FC648:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC648u)) return;
    // 809FC648: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_809FC64C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC64Cu)) return;
    // 809FC64C: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809FC650:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC650u)) return;
    // 809FC650: bc    12, 0, 0x809FC618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x809FC618u;
                return;
            }
            goto label_809FC618;
        }
    }

label_809FC654:
    ctx->pc = 0x809FC654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809FC654: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC658:
    ctx->pc = 0x809FC658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809FC658: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC65C:
    ctx->pc = 0x809FC65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809FC65Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC65C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC660:
    ctx->pc = 0x809FC660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC660u)) return;
    // 809FC660: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_809FC664:
    ctx->pc = 0x809FC664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC664u)) return;
    // 809FC664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809FC5C0;
        }
    }

label_809FC668:
    ctx->pc = 0x809FC668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 809FC668: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC66C:
    ctx->pc = 0x809FC66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 809FC66C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC670:
    ctx->pc = 0x809FC670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 809FC670: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC674:
    ctx->pc = 0x809FC674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x809FC674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809FC674: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC678:
    ctx->pc = 0x809FC678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC678u)) return;
    // 809FC678: or.   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_809FC67C:
    ctx->pc = 0x809FC67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC67Cu)) return;
    // 809FC67C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_809FC680:
    ctx->pc = 0x809FC680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC680u)) return;
    // 809FC680: bc    12, 2, 0x809FC70C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC70C;
        }
    }

label_809FC684:
    ctx->pc = 0x809FC684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 809FC684: lis     r3, -27754
    ctx->gpr[3] = ((u32)(s32)(-27754) << 16);

label_809FC688:
    ctx->pc = 0x809FC688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC688u)) return;
    // 809FC688: or   r30, r27, r27
    {
        ctx->gpr[30] = ctx->gpr[27] | ctx->gpr[27];
    }

label_809FC68C:
    ctx->pc = 0x809FC68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC68Cu)) return;
    // 809FC68C: addi    r0, r3, -30380
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30380);

label_809FC690:
    ctx->pc = 0x809FC690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC690u)) return;
    // 809FC690: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_809FC694:
    ctx->pc = 0x809FC694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809FC694: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC698:
    ctx->pc = 0x809FC698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC698u)) return;
    // 809FC698: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_809FC69C:
    ctx->pc = 0x809FC69Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC69Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC69C: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC6A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6A0u)) return;
    // 809FC6A0: cmplwi  r3, 0x0000
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

label_809FC6A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6A4u)) return;
    // 809FC6A4: bc    12, 2, 0x809FC6C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC6C4;
        }
    }

label_809FC6A8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809FC6A8: bc    12, 2, 0x809FC6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC6C0;
        }
    }

label_809FC6AC:
    ctx->pc = 0x809FC6ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809FC6AC: lwz     r12, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC6B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6B0u)) return;
    // 809FC6B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_809FC6B4:
    ctx->pc = 0x809FC6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809FC6B4: lwz     r12, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC6B8:
    ctx->pc = 0x809FC6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809FC6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809FC6B8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC6BC:
    ctx->pc = 0x809FC6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6BCu)) return;
    // 809FC6BC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x809FC6C0u;
            ctx->pc = target;
            return;
        }
    }

label_809FC6C0:
    ctx->pc = 0x809FC6C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 809FC6C0: stw     r31, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC6C4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 809FC6C4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_809FC6C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6C8u)) return;
    // 809FC6C8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_809FC6CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6CCu)) return;
    // 809FC6CC: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809FC6D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6D0u)) return;
    // 809FC6D0: bc    12, 0, 0x809FC69C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x809FC69Cu;
                return;
            }
            goto label_809FC69C;
        }
    }

label_809FC6D4:
    ctx->pc = 0x809FC6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC6D4: lwz     r3, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC6D8:
    ctx->pc = 0x809FC6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6D8u)) return;
    // 809FC6D8: cmplwi  r3, 0x0000
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

label_809FC6DC:
    ctx->pc = 0x809FC6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6DCu)) return;
    // 809FC6DC: bc    12, 2, 0x809FC6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809FC6F0;
        }
    }

label_809FC6E0:
    ctx->pc = 0x809FC6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809FC6E0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_809FC6E4:
    ctx->pc = 0x809FC6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6E4u)) return;
    // 809FC6E4: bl      0x809FB4B4
    {
            ctx->lr = 0x809FC6E8u;
            ctx->pc = 0x809FB4B4u;
            return;
    }

label_809FC6E8:
    ctx->pc = 0x809FC6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809FC6E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809FC6EC:
    ctx->pc = 0x809FC6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 809FC6EC: stw     r0, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC6F0:
    ctx->pc = 0x809FC6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 809FC6F0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_809FC6F4:
    ctx->pc = 0x809FC6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6F4u)) return;
    // 809FC6F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_809FC6F8:
    ctx->pc = 0x809FC6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC6F8u)) return;
    // 809FC6F8: bl      0x809EA974
    {
            ctx->lr = 0x809FC6FCu;
            ctx->pc = 0x809EA974u;
            return;
    }

label_809FC6FC:
    ctx->pc = 0x809FC6FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC6FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809FC6FC: extsh. r0, r28
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_809FC700:
    ctx->pc = 0x809FC700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC700u)) return;
    // 809FC700: bc    4, 1, 0x809FC70C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809FC70C;
        }
    }

label_809FC704:
    ctx->pc = 0x809FC704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809FC704: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_809FC708:
    ctx->pc = 0x809FC708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC708u)) return;
    // 809FC708: bl      0x809E9964
    {
            ctx->lr = 0x809FC70Cu;
            ctx->pc = 0x809E9964u;
            return;
    }

label_809FC70C:
    ctx->pc = 0x809FC70Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC70Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 809FC70C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_809FC710:
    ctx->pc = 0x809FC710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x809FC710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809FC710: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC714:
    ctx->pc = 0x809FC714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809FC714: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC718:
    ctx->pc = 0x809FC718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809FC718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC718: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC71C:
    ctx->pc = 0x809FC71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC71Cu)) return;
    // 809FC71C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_809FC720:
    ctx->pc = 0x809FC720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC720u)) return;
    // 809FC720: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809FC5C0;
        }
    }

label_809FC724:
    ctx->pc = 0x809FC724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809FC724: stwu     r1, -16(r1)
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
label_809FC728:
    ctx->pc = 0x809FC728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809FC728: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC72C:
    ctx->pc = 0x809FC72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809FC72C: stw     r0, 20(r1)
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
label_809FC730:
    ctx->pc = 0x809FC730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC730: stw     r31, 12(r1)
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
label_809FC734:
    ctx->pc = 0x809FC734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC734u)) return;
    // 809FC734: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_809FC738:
    ctx->pc = 0x809FC738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC738u)) return;
    // 809FC738: bl      0x809EAAC4
    {
            ctx->lr = 0x809FC73Cu;
            ctx->pc = 0x809EAAC4u;
            return;
    }

label_809FC73C:
    ctx->pc = 0x809FC73Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809FC73Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 809FC73C: lis     r3, -27754
    ctx->gpr[3] = ((u32)(s32)(-27754) << 16);

label_809FC740:
    ctx->pc = 0x809FC740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC740u)) return;
    // 809FC740: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809FC744:
    ctx->pc = 0x809FC744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC744u)) return;
    // 809FC744: addi    r4, r3, -30380
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30380);

label_809FC748:
    ctx->pc = 0x809FC748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC748u)) return;
    // 809FC748: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_809FC74C:
    ctx->pc = 0x809FC74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 809FC74C: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC750:
    ctx->pc = 0x809FC750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 809FC750: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC754:
    ctx->pc = 0x809FC754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809FC754: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC758:
    ctx->pc = 0x809FC758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809FC758: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC75C:
    ctx->pc = 0x809FC75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809FC75C: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC760:
    ctx->pc = 0x809FC760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809FC760: lwz     r31, 12(r1)
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
label_809FC764:
    ctx->pc = 0x809FC764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809FC764: lwz     r0, 20(r1)
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
label_809FC768:
    ctx->pc = 0x809FC768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809FC768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809FC768: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809FC76C:
    ctx->pc = 0x809FC76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC76Cu)) return;
    // 809FC76C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809FC770:
    ctx->pc = 0x809FC770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809FC770u)) return;
    // 809FC770: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809FC5C0;
        }
    }

    ctx->pc = 0x809FC774u;
    return;
return_dispatch_809FC5C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x809FC608u: goto label_809FC608;
    case 0x809FC644u: goto label_809FC644;
    case 0x809FC6C0u: goto label_809FC6C0;
    case 0x809FC6E8u: goto label_809FC6E8;
    case 0x809FC6FCu: goto label_809FC6FC;
    case 0x809FC70Cu: goto label_809FC70C;
    case 0x809FC73Cu: goto label_809FC73C;
    default: return;
    }
}

