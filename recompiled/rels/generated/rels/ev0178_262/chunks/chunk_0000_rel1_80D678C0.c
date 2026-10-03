// DolRecomp output
#include "../generated.h"

void func_80D678C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D678C0[95] = {
        &&label_80D678C0,
        &&label_80D678C4,
        &&label_80D678C8,
        &&label_80D678CC,
        &&label_80D678D0,
        &&label_80D678D4,
        &&label_80D678D8,
        &&label_80D678DC,
        &&label_80D678E0,
        &&label_80D678E4,
        &&label_80D678E8,
        &&label_80D678EC,
        &&label_80D678F0,
        &&label_80D678F4,
        &&label_80D678F8,
        &&label_80D678FC,
        &&label_80D67900,
        &&label_80D67904,
        &&label_80D67908,
        &&label_80D6790C,
        &&label_80D67910,
        &&label_80D67914,
        &&label_80D67918,
        &&label_80D6791C,
        &&label_80D67920,
        &&label_80D67924,
        &&label_80D67928,
        &&label_80D6792C,
        &&label_80D67930,
        &&label_80D67934,
        &&label_80D67938,
        &&label_80D6793C,
        &&label_80D67940,
        &&label_80D67944,
        &&label_80D67948,
        &&label_80D6794C,
        &&label_80D67950,
        &&label_80D67954,
        &&label_80D67958,
        &&label_80D6795C,
        &&label_80D67960,
        &&label_80D67964,
        &&label_80D67968,
        &&label_80D6796C,
        &&label_80D67970,
        &&label_80D67974,
        &&label_80D67978,
        &&label_80D6797C,
        &&label_80D67980,
        &&label_80D67984,
        &&label_80D67988,
        &&label_80D6798C,
        &&label_80D67990,
        &&label_80D67994,
        &&label_80D67998,
        &&label_80D6799C,
        &&label_80D679A0,
        &&label_80D679A4,
        &&label_80D679A8,
        &&label_80D679AC,
        &&label_80D679B0,
        &&label_80D679B4,
        &&label_80D679B8,
        &&label_80D679BC,
        &&label_80D679C0,
        &&label_80D679C4,
        &&label_80D679C8,
        &&label_80D679CC,
        &&label_80D679D0,
        &&label_80D679D4,
        &&label_80D679D8,
        &&label_80D679DC,
        &&label_80D679E0,
        &&label_80D679E4,
        &&label_80D679E8,
        &&label_80D679EC,
        &&label_80D679F0,
        &&label_80D679F4,
        &&label_80D679F8,
        &&label_80D679FC,
        &&label_80D67A00,
        &&label_80D67A04,
        &&label_80D67A08,
        &&label_80D67A0C,
        &&label_80D67A10,
        &&label_80D67A14,
        &&label_80D67A18,
        &&label_80D67A1C,
        &&label_80D67A20,
        &&label_80D67A24,
        &&label_80D67A28,
        &&label_80D67A2C,
        &&label_80D67A30,
        &&label_80D67A34,
        &&label_80D67A38
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D678C0u && pc <= 0x80D67A38u && ((pc - 0x80D678C0u) & 3u) == 0u)
            goto *pc_table_80D678C0[(pc - 0x80D678C0u) >> 2];
    }
    return;
label_80D678C0:
    ctx->pc = 0x80D678C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D678C0: stwu     r1, -16(r1)
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
label_80D678C4:
    ctx->pc = 0x80D678C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D678C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D678C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D678C8:
    ctx->pc = 0x80D678C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D678C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D678C8: stw     r0, 20(r1)
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
label_80D678CC:
    ctx->pc = 0x80D678CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D678CCu)) return;
    // 80D678CC: cmpwi   r3, 2
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

label_80D678D0:
    ctx->pc = 0x80D678D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D678D0u)) return;
    // 80D678D0: bc    12, 2, 0x80D6798C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6798C;
        }
    }

label_80D678D4:
    ctx->pc = 0x80D678D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D678D4: bc    4, 0, 0x80D678E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D678E8;
        }
    }

label_80D678D8:
    ctx->pc = 0x80D678D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D678D8: cmpwi   r3, 0
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

label_80D678DC:
    ctx->pc = 0x80D678DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D678DCu)) return;
    // 80D678DC: bc    12, 2, 0x80D67A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D67A2C;
        }
    }

label_80D678E0:
    ctx->pc = 0x80D678E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D678E0: bc    4, 0, 0x80D678F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D678F0;
        }
    }

label_80D678E4:
    ctx->pc = 0x80D678E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D678E4: b       0x80D67A2C
    {
            goto label_80D67A2C;
    }

label_80D678E8:
    ctx->pc = 0x80D678E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D678E8: cmpwi   r3, 4
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

label_80D678EC:
    ctx->pc = 0x80D678ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D678ECu)) return;
    // 80D678EC: b       0x80D67A2C
    {
            goto label_80D67A2C;
    }

label_80D678F0:
    ctx->pc = 0x80D678F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D678F0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D678F4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D678F4:
    ctx->pc = 0x80D678F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D678F4: bl      0x80460A60
    {
            ctx->lr = 0x80D678F8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D678F8:
    ctx->pc = 0x80D678F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D678F8: bl      0x80460A24
    {
            ctx->lr = 0x80D678FCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D678FC:
    ctx->pc = 0x80D678FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D678FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D678FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67900:
    ctx->pc = 0x80D67900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67900u)) return;
    // 80D67900: bl      0x8045F220
    {
            ctx->lr = 0x80D67904u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D67904:
    ctx->pc = 0x80D67904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D67904: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67908:
    ctx->pc = 0x80D67908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67908u)) return;
    // 80D67908: addi    r4, r4, 6704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6704);

label_80D6790C:
    ctx->pc = 0x80D6790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6790Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6790C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6790Cu)) return;
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
label_80D67910:
    ctx->pc = 0x80D67910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67910u)) return;
    // 80D67910: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67914:
    ctx->pc = 0x80D67914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67914u)) return;
    // 80D67914: addi    r4, r4, 6708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6708);

label_80D67918:
    ctx->pc = 0x80D67918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67918: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67918u)) return;
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
label_80D6791C:
    ctx->pc = 0x80D6791Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6791Cu)) return;
    // 80D6791C: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67920:
    ctx->pc = 0x80D67920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67920u)) return;
    // 80D67920: addi    r4, r4, 6712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6712);

label_80D67924:
    ctx->pc = 0x80D67924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67924: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67924u)) return;
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
label_80D67928:
    ctx->pc = 0x80D67928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67928u)) return;
    // 80D67928: bl      0x8045EF2C
    {
            ctx->lr = 0x80D6792Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D6792C:
    ctx->pc = 0x80D6792Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6792Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6792C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67930:
    ctx->pc = 0x80D67930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67930u)) return;
    // 80D67930: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67934:
    ctx->pc = 0x80D67934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67934u)) return;
    // 80D67934: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D67938:
    ctx->pc = 0x80D67938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67938u)) return;
    // 80D67938: addi    r5, r6, -7424
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-7424);

label_80D6793C:
    ctx->pc = 0x80D6793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6793Cu)) return;
    // 80D6793C: addi    r6, r6, -23296
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23296);

label_80D67940:
    ctx->pc = 0x80D67940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67940u)) return;
    // 80D67940: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D67944:
    ctx->pc = 0x80D67944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67944u)) return;
    // 80D67944: bl      0x8045C7B4
    {
            ctx->lr = 0x80D67948u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D67948:
    ctx->pc = 0x80D67948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D67948: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6794C:
    ctx->pc = 0x80D6794Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6794Cu)) return;
    // 80D6794C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67950:
    ctx->pc = 0x80D67950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67950u)) return;
    // 80D67950: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67954:
    ctx->pc = 0x80D67954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67954u)) return;
    // 80D67954: addi    r5, r5, 6716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6716);

label_80D67958:
    ctx->pc = 0x80D67958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D67958: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67958u)) return;
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
label_80D6795C:
    ctx->pc = 0x80D6795Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6795Cu)) return;
    // 80D6795C: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D67960:
    ctx->pc = 0x80D67960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67960u)) return;
    // 80D67960: addi    r5, r5, 6720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6720);

label_80D67964:
    ctx->pc = 0x80D67964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67964: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67964u)) return;
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
label_80D67968:
    ctx->pc = 0x80D67968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67968u)) return;
    // 80D67968: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D6796C:
    ctx->pc = 0x80D6796Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6796Cu)) return;
    // 80D6796C: addi    r5, r5, 6724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6724);

label_80D67970:
    ctx->pc = 0x80D67970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67970: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D67970u)) return;
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
label_80D67974:
    ctx->pc = 0x80D67974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67974u)) return;
    // 80D67974: bl      0x8045C750
    {
            ctx->lr = 0x80D67978u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D67978:
    ctx->pc = 0x80D67978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67978: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80D6797C:
    ctx->pc = 0x80D6797Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6797Cu)) return;
    // 80D6797C: bl      0x80406090
    {
            ctx->lr = 0x80D67980u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D67980:
    ctx->pc = 0x80D67980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67980: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_80D67984:
    ctx->pc = 0x80D67984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67984u)) return;
    // 80D67984: bl      0x8045F7C8
    {
            ctx->lr = 0x80D67988u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D67988:
    ctx->pc = 0x80D67988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D67988: b       0x80D67A2C
    {
            goto label_80D67A2C;
    }

label_80D6798C:
    ctx->pc = 0x80D6798Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6798Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6798C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D67990:
    ctx->pc = 0x80D67990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67990u)) return;
    // 80D67990: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67994:
    ctx->pc = 0x80D67994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67994u)) return;
    // 80D67994: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D67998:
    ctx->pc = 0x80D67998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67998u)) return;
    // 80D67998: addi    r5, r6, -3584
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-3584);

label_80D6799C:
    ctx->pc = 0x80D6799Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6799Cu)) return;
    // 80D6799C: addi    r6, r6, -22016
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22016);

label_80D679A0:
    ctx->pc = 0x80D679A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679A0u)) return;
    // 80D679A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D679A4:
    ctx->pc = 0x80D679A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679A4u)) return;
    // 80D679A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80D679A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D679A8:
    ctx->pc = 0x80D679A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D679A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D679A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D679AC:
    ctx->pc = 0x80D679ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679ACu)) return;
    // 80D679AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D679B0:
    ctx->pc = 0x80D679B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679B0u)) return;
    // 80D679B0: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D679B4:
    ctx->pc = 0x80D679B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679B4u)) return;
    // 80D679B4: addi    r5, r5, 6728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6728);

label_80D679B8:
    ctx->pc = 0x80D679B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D679B8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D679B8u)) return;
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
label_80D679BC:
    ctx->pc = 0x80D679BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679BCu)) return;
    // 80D679BC: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D679C0:
    ctx->pc = 0x80D679C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679C0u)) return;
    // 80D679C0: addi    r5, r5, 6732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6732);

label_80D679C4:
    ctx->pc = 0x80D679C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D679C4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D679C4u)) return;
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
label_80D679C8:
    ctx->pc = 0x80D679C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679C8u)) return;
    // 80D679C8: lis     r5, -27313
    ctx->gpr[5] = ((u32)(s32)(-27313) << 16);

label_80D679CC:
    ctx->pc = 0x80D679CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679CCu)) return;
    // 80D679CC: addi    r5, r5, 6736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6736);

label_80D679D0:
    ctx->pc = 0x80D679D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D679D0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D679D0u)) return;
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
label_80D679D4:
    ctx->pc = 0x80D679D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679D4u)) return;
    // 80D679D4: bl      0x8045C750
    {
            ctx->lr = 0x80D679D8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D679D8:
    ctx->pc = 0x80D679D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D679D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D679D8: bl      0x8045DE34
    {
            ctx->lr = 0x80D679DCu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D679DC:
    ctx->pc = 0x80D679DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D679DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D679DC: bl      0x80460A80
    {
            ctx->lr = 0x80D679E0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D679E0:
    ctx->pc = 0x80D679E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D679E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D679E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D679E4:
    ctx->pc = 0x80D679E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679E4u)) return;
    // 80D679E4: bl      0x8045F220
    {
            ctx->lr = 0x80D679E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D679E8:
    ctx->pc = 0x80D679E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D679E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D679E8: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D679EC:
    ctx->pc = 0x80D679ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679ECu)) return;
    // 80D679EC: addi    r4, r4, 6740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6740);

label_80D679F0:
    ctx->pc = 0x80D679F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D679F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D679F0u)) return;
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
label_80D679F4:
    ctx->pc = 0x80D679F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679F4u)) return;
    // 80D679F4: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D679F8:
    ctx->pc = 0x80D679F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679F8u)) return;
    // 80D679F8: addi    r4, r4, 6708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6708);

label_80D679FC:
    ctx->pc = 0x80D679FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D679FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D679FC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D679FCu)) return;
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
label_80D67A00:
    ctx->pc = 0x80D67A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A00u)) return;
    // 80D67A00: lis     r4, -27313
    ctx->gpr[4] = ((u32)(s32)(-27313) << 16);

label_80D67A04:
    ctx->pc = 0x80D67A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A04u)) return;
    // 80D67A04: addi    r4, r4, 6744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6744);

label_80D67A08:
    ctx->pc = 0x80D67A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D67A08: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D67A08u)) return;
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
label_80D67A0C:
    ctx->pc = 0x80D67A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A0Cu)) return;
    // 80D67A0C: bl      0x8045EF2C
    {
            ctx->lr = 0x80D67A10u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D67A10:
    ctx->pc = 0x80D67A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D67A10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D67A14:
    ctx->pc = 0x80D67A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A14u)) return;
    // 80D67A14: bl      0x8045F220
    {
            ctx->lr = 0x80D67A18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D67A18:
    ctx->pc = 0x80D67A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D67A18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D67A1C:
    ctx->pc = 0x80D67A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A1Cu)) return;
    // 80D67A1C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D67A20:
    ctx->pc = 0x80D67A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A20u)) return;
    // 80D67A20: addi    r5, r5, -16384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16384);

label_80D67A24:
    ctx->pc = 0x80D67A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A24u)) return;
    // 80D67A24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D67A28:
    ctx->pc = 0x80D67A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A28u)) return;
    // 80D67A28: bl      0x8045EEA8
    {
            ctx->lr = 0x80D67A2Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D67A2C:
    ctx->pc = 0x80D67A2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D67A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D67A2C: lwz     r0, 20(r1)
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
label_80D67A30:
    ctx->pc = 0x80D67A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D67A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D67A30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D67A34:
    ctx->pc = 0x80D67A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A34u)) return;
    // 80D67A34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D67A38:
    ctx->pc = 0x80D67A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D67A38u)) return;
    // 80D67A38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D678C0;
        }
    }

    ctx->pc = 0x80D67A3Cu;
    return;
return_dispatch_80D678C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D678F4u: goto label_80D678F4;
    case 0x80D678F8u: goto label_80D678F8;
    case 0x80D678FCu: goto label_80D678FC;
    case 0x80D67904u: goto label_80D67904;
    case 0x80D6792Cu: goto label_80D6792C;
    case 0x80D67948u: goto label_80D67948;
    case 0x80D67978u: goto label_80D67978;
    case 0x80D67980u: goto label_80D67980;
    case 0x80D67988u: goto label_80D67988;
    case 0x80D679A8u: goto label_80D679A8;
    case 0x80D679D8u: goto label_80D679D8;
    case 0x80D679DCu: goto label_80D679DC;
    case 0x80D679E0u: goto label_80D679E0;
    case 0x80D679E8u: goto label_80D679E8;
    case 0x80D67A10u: goto label_80D67A10;
    case 0x80D67A18u: goto label_80D67A18;
    case 0x80D67A2Cu: goto label_80D67A2C;
    default: return;
    }
}

