// DolRecomp output
#include "../generated.h"

void func_80D317E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D317E0[145] = {
        &&label_80D317E0,
        &&label_80D317E4,
        &&label_80D317E8,
        &&label_80D317EC,
        &&label_80D317F0,
        &&label_80D317F4,
        &&label_80D317F8,
        &&label_80D317FC,
        &&label_80D31800,
        &&label_80D31804,
        &&label_80D31808,
        &&label_80D3180C,
        &&label_80D31810,
        &&label_80D31814,
        &&label_80D31818,
        &&label_80D3181C,
        &&label_80D31820,
        &&label_80D31824,
        &&label_80D31828,
        &&label_80D3182C,
        &&label_80D31830,
        &&label_80D31834,
        &&label_80D31838,
        &&label_80D3183C,
        &&label_80D31840,
        &&label_80D31844,
        &&label_80D31848,
        &&label_80D3184C,
        &&label_80D31850,
        &&label_80D31854,
        &&label_80D31858,
        &&label_80D3185C,
        &&label_80D31860,
        &&label_80D31864,
        &&label_80D31868,
        &&label_80D3186C,
        &&label_80D31870,
        &&label_80D31874,
        &&label_80D31878,
        &&label_80D3187C,
        &&label_80D31880,
        &&label_80D31884,
        &&label_80D31888,
        &&label_80D3188C,
        &&label_80D31890,
        &&label_80D31894,
        &&label_80D31898,
        &&label_80D3189C,
        &&label_80D318A0,
        &&label_80D318A4,
        &&label_80D318A8,
        &&label_80D318AC,
        &&label_80D318B0,
        &&label_80D318B4,
        &&label_80D318B8,
        &&label_80D318BC,
        &&label_80D318C0,
        &&label_80D318C4,
        &&label_80D318C8,
        &&label_80D318CC,
        &&label_80D318D0,
        &&label_80D318D4,
        &&label_80D318D8,
        &&label_80D318DC,
        &&label_80D318E0,
        &&label_80D318E4,
        &&label_80D318E8,
        &&label_80D318EC,
        &&label_80D318F0,
        &&label_80D318F4,
        &&label_80D318F8,
        &&label_80D318FC,
        &&label_80D31900,
        &&label_80D31904,
        &&label_80D31908,
        &&label_80D3190C,
        &&label_80D31910,
        &&label_80D31914,
        &&label_80D31918,
        &&label_80D3191C,
        &&label_80D31920,
        &&label_80D31924,
        &&label_80D31928,
        &&label_80D3192C,
        &&label_80D31930,
        &&label_80D31934,
        &&label_80D31938,
        &&label_80D3193C,
        &&label_80D31940,
        &&label_80D31944,
        &&label_80D31948,
        &&label_80D3194C,
        &&label_80D31950,
        &&label_80D31954,
        &&label_80D31958,
        &&label_80D3195C,
        &&label_80D31960,
        &&label_80D31964,
        &&label_80D31968,
        &&label_80D3196C,
        &&label_80D31970,
        &&label_80D31974,
        &&label_80D31978,
        &&label_80D3197C,
        &&label_80D31980,
        &&label_80D31984,
        &&label_80D31988,
        &&label_80D3198C,
        &&label_80D31990,
        &&label_80D31994,
        &&label_80D31998,
        &&label_80D3199C,
        &&label_80D319A0,
        &&label_80D319A4,
        &&label_80D319A8,
        &&label_80D319AC,
        &&label_80D319B0,
        &&label_80D319B4,
        &&label_80D319B8,
        &&label_80D319BC,
        &&label_80D319C0,
        &&label_80D319C4,
        &&label_80D319C8,
        &&label_80D319CC,
        &&label_80D319D0,
        &&label_80D319D4,
        &&label_80D319D8,
        &&label_80D319DC,
        &&label_80D319E0,
        &&label_80D319E4,
        &&label_80D319E8,
        &&label_80D319EC,
        &&label_80D319F0,
        &&label_80D319F4,
        &&label_80D319F8,
        &&label_80D319FC,
        &&label_80D31A00,
        &&label_80D31A04,
        &&label_80D31A08,
        &&label_80D31A0C,
        &&label_80D31A10,
        &&label_80D31A14,
        &&label_80D31A18,
        &&label_80D31A1C,
        &&label_80D31A20
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D317E0u && pc <= 0x80D31A20u && ((pc - 0x80D317E0u) & 3u) == 0u)
            goto *pc_table_80D317E0[(pc - 0x80D317E0u) >> 2];
    }
    return;
label_80D317E0:
    ctx->pc = 0x80D317E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D317E0: stwu     r1, -16(r1)
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
label_80D317E4:
    ctx->pc = 0x80D317E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D317E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D317E8:
    ctx->pc = 0x80D317E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D317E8: stw     r0, 20(r1)
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
label_80D317EC:
    ctx->pc = 0x80D317ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317ECu)) return;
    // 80D317EC: cmpwi   r3, 2
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

label_80D317F0:
    ctx->pc = 0x80D317F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317F0u)) return;
    // 80D317F0: bc    12, 2, 0x80D31A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D31A0C;
        }
    }

label_80D317F4:
    ctx->pc = 0x80D317F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D317F4: bc    4, 0, 0x80D31808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31808;
        }
    }

label_80D317F8:
    ctx->pc = 0x80D317F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D317F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D317F8: cmpwi   r3, 0
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

label_80D317FC:
    ctx->pc = 0x80D317FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D317FCu)) return;
    // 80D317FC: bc    12, 2, 0x80D31A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D31A14;
        }
    }

label_80D31800:
    ctx->pc = 0x80D31800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31800: bc    4, 0, 0x80D31810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31810;
        }
    }

label_80D31804:
    ctx->pc = 0x80D31804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31804: b       0x80D31A14
    {
            goto label_80D31A14;
    }

label_80D31808:
    ctx->pc = 0x80D31808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31808: cmpwi   r3, 4
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

label_80D3180C:
    ctx->pc = 0x80D3180Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3180Cu)) return;
    // 80D3180C: b       0x80D31A14
    {
            goto label_80D31A14;
    }

label_80D31810:
    ctx->pc = 0x80D31810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31810: bl      0x8045DE7C
    {
            ctx->lr = 0x80D31814u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D31814:
    ctx->pc = 0x80D31814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31814: bl      0x80460A60
    {
            ctx->lr = 0x80D31818u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D31818:
    ctx->pc = 0x80D31818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31818: bl      0x80460A24
    {
            ctx->lr = 0x80D3181Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D3181C:
    ctx->pc = 0x80D3181Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3181Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3181C: li      r3, 34
    ctx->gpr[3] = (u32)(s32)(34);

label_80D31820:
    ctx->pc = 0x80D31820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31820u)) return;
    // 80D31820: bl      0x80406090
    {
            ctx->lr = 0x80D31824u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D31824:
    ctx->pc = 0x80D31824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31824: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31828:
    ctx->pc = 0x80D31828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31828u)) return;
    // 80D31828: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3182C:
    ctx->pc = 0x80D3182Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3182Cu)) return;
    // 80D3182C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31830:
    ctx->pc = 0x80D31830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31830u)) return;
    // 80D31830: addi    r5, r5, 20336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20336);

label_80D31834:
    ctx->pc = 0x80D31834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31834: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31834u)) return;
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
label_80D31838:
    ctx->pc = 0x80D31838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31838u)) return;
    // 80D31838: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3183C:
    ctx->pc = 0x80D3183Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3183Cu)) return;
    // 80D3183C: addi    r5, r5, 20340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20340);

label_80D31840:
    ctx->pc = 0x80D31840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31840: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31840u)) return;
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
label_80D31844:
    ctx->pc = 0x80D31844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31844u)) return;
    // 80D31844: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31848:
    ctx->pc = 0x80D31848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31848u)) return;
    // 80D31848: addi    r5, r5, 20344
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20344);

label_80D3184C:
    ctx->pc = 0x80D3184Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3184Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3184C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3184Cu)) return;
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
label_80D31850:
    ctx->pc = 0x80D31850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31850u)) return;
    // 80D31850: bl      0x8045C750
    {
            ctx->lr = 0x80D31854u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31854:
    ctx->pc = 0x80D31854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D31854: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31858:
    ctx->pc = 0x80D31858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31858u)) return;
    // 80D31858: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3185C:
    ctx->pc = 0x80D3185Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3185Cu)) return;
    // 80D3185C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D31860:
    ctx->pc = 0x80D31860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31860u)) return;
    // 80D31860: addi    r5, r7, -640
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-640);

label_80D31864:
    ctx->pc = 0x80D31864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31864u)) return;
    // 80D31864: addi    r6, r7, -30675
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-30675);

label_80D31868:
    ctx->pc = 0x80D31868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31868u)) return;
    // 80D31868: addi    r7, r7, -3072
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-3072);

label_80D3186C:
    ctx->pc = 0x80D3186Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3186Cu)) return;
    // 80D3186C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31870u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31870:
    ctx->pc = 0x80D31870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31870: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31874:
    ctx->pc = 0x80D31874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31874u)) return;
    // 80D31874: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80D31878:
    ctx->pc = 0x80D31878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31878u)) return;
    // 80D31878: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3187C:
    ctx->pc = 0x80D3187Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3187Cu)) return;
    // 80D3187C: addi    r5, r5, 20348
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20348);

label_80D31880:
    ctx->pc = 0x80D31880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31880: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31880u)) return;
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
label_80D31884:
    ctx->pc = 0x80D31884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31884u)) return;
    // 80D31884: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31888:
    ctx->pc = 0x80D31888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31888u)) return;
    // 80D31888: addi    r5, r5, 20352
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20352);

label_80D3188C:
    ctx->pc = 0x80D3188Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3188Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3188C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3188Cu)) return;
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
label_80D31890:
    ctx->pc = 0x80D31890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31890u)) return;
    // 80D31890: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31894:
    ctx->pc = 0x80D31894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31894u)) return;
    // 80D31894: addi    r5, r5, 20356
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20356);

label_80D31898:
    ctx->pc = 0x80D31898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31898: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31898u)) return;
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
label_80D3189C:
    ctx->pc = 0x80D3189Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3189Cu)) return;
    // 80D3189C: bl      0x8045C750
    {
            ctx->lr = 0x80D318A0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D318A0:
    ctx->pc = 0x80D318A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D318A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D318A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D318A4:
    ctx->pc = 0x80D318A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318A4u)) return;
    // 80D318A4: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80D318A8:
    ctx->pc = 0x80D318A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318A8u)) return;
    // 80D318A8: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D318AC:
    ctx->pc = 0x80D318ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318ACu)) return;
    // 80D318AC: addi    r5, r7, -640
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-640);

label_80D318B0:
    ctx->pc = 0x80D318B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318B0u)) return;
    // 80D318B0: addi    r6, r7, -30675
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-30675);

label_80D318B4:
    ctx->pc = 0x80D318B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318B4u)) return;
    // 80D318B4: addi    r7, r7, -1024
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1024);

label_80D318B8:
    ctx->pc = 0x80D318B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318B8u)) return;
    // 80D318B8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D318BCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D318BC:
    ctx->pc = 0x80D318BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D318BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D318BC: li      r3, 1516
    ctx->gpr[3] = (u32)(s32)(1516);

label_80D318C0:
    ctx->pc = 0x80D318C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318C0u)) return;
    // 80D318C0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D318C4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D318C4:
    ctx->pc = 0x80D318C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D318C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D318C4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D318C8:
    ctx->pc = 0x80D318C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318C8u)) return;
    // 80D318C8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D318CC:
    ctx->pc = 0x80D318CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318CCu)) return;
    // 80D318CC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D318D0:
    ctx->pc = 0x80D318D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D318D0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D318D4:
    ctx->pc = 0x80D318D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318D4u)) return;
    // 80D318D4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D318D8:
    ctx->pc = 0x80D318D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318D8u)) return;
    // 80D318D8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D318DC:
    ctx->pc = 0x80D318DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318DCu)) return;
    // 80D318DC: addi    r4, r4, 21004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21004);

label_80D318E0:
    ctx->pc = 0x80D318E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D318E0: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D318E4:
    ctx->pc = 0x80D318E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D318E4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D318E8:
    ctx->pc = 0x80D318E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318E8u)) return;
    // 80D318E8: bl      0x8045F608
    {
            ctx->lr = 0x80D318ECu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D318EC:
    ctx->pc = 0x80D318ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D318ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D318EC: bl      0x8045BFF4
    {
            ctx->lr = 0x80D318F0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D318F0:
    ctx->pc = 0x80D318F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D318F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D318F0: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D318F4:
    ctx->pc = 0x80D318F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318F4u)) return;
    // 80D318F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D318F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D318F8:
    ctx->pc = 0x80D318F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D318F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D318F8: li      r3, 1517
    ctx->gpr[3] = (u32)(s32)(1517);

label_80D318FC:
    ctx->pc = 0x80D318FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D318FCu)) return;
    // 80D318FC: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31900u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31900:
    ctx->pc = 0x80D31900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D31900: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31904:
    ctx->pc = 0x80D31904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31904u)) return;
    // 80D31904: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D31908:
    ctx->pc = 0x80D31908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31908: lwz     r0, 0(r3)
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
label_80D3190C:
    ctx->pc = 0x80D3190Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3190Cu)) return;
    // 80D3190C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31910:
    ctx->pc = 0x80D31910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31910u)) return;
    // 80D31910: lis     r3, -27330
    ctx->gpr[3] = ((u32)(s32)(-27330) << 16);

label_80D31914:
    ctx->pc = 0x80D31914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31914u)) return;
    // 80D31914: addi    r3, r3, 21004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21004);

label_80D31918:
    ctx->pc = 0x80D31918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31918: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3191C:
    ctx->pc = 0x80D3191Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3191Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3191C: lwz     r3, 4(r3)
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
label_80D31920:
    ctx->pc = 0x80D31920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31920u)) return;
    // 80D31920: bl      0x8045F6FC
    {
            ctx->lr = 0x80D31924u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D31924:
    ctx->pc = 0x80D31924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31924: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80D31928:
    ctx->pc = 0x80D31928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31928u)) return;
    // 80D31928: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3192Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3192C:
    ctx->pc = 0x80D3192Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3192Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D3192C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31930:
    ctx->pc = 0x80D31930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31930u)) return;
    // 80D31930: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31934:
    ctx->pc = 0x80D31934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31934u)) return;
    // 80D31934: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31938:
    ctx->pc = 0x80D31938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31938u)) return;
    // 80D31938: addi    r5, r5, 20360
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20360);

label_80D3193C:
    ctx->pc = 0x80D3193Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3193Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3193C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3193Cu)) return;
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
label_80D31940:
    ctx->pc = 0x80D31940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31940u)) return;
    // 80D31940: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31944:
    ctx->pc = 0x80D31944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31944u)) return;
    // 80D31944: addi    r5, r5, 20364
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20364);

label_80D31948:
    ctx->pc = 0x80D31948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31948: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31948u)) return;
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
label_80D3194C:
    ctx->pc = 0x80D3194Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3194Cu)) return;
    // 80D3194C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31950:
    ctx->pc = 0x80D31950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31950u)) return;
    // 80D31950: addi    r5, r5, 20368
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20368);

label_80D31954:
    ctx->pc = 0x80D31954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31954: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31954u)) return;
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
label_80D31958:
    ctx->pc = 0x80D31958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31958u)) return;
    // 80D31958: bl      0x8045C750
    {
            ctx->lr = 0x80D3195Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D3195C:
    ctx->pc = 0x80D3195Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3195Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3195C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31960:
    ctx->pc = 0x80D31960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31960u)) return;
    // 80D31960: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31964:
    ctx->pc = 0x80D31964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31964u)) return;
    // 80D31964: li      r5, 1152
    ctx->gpr[5] = (u32)(s32)(1152);

label_80D31968:
    ctx->pc = 0x80D31968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31968u)) return;
    // 80D31968: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D3196C:
    ctx->pc = 0x80D3196Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3196Cu)) return;
    // 80D3196C: addi    r6, r7, -32211
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-32211);

label_80D31970:
    ctx->pc = 0x80D31970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31970u)) return;
    // 80D31970: addi    r7, r7, -1015
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1015);

label_80D31974:
    ctx->pc = 0x80D31974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31974u)) return;
    // 80D31974: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31978u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31978:
    ctx->pc = 0x80D31978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31978: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3197C:
    ctx->pc = 0x80D3197Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3197Cu)) return;
    // 80D3197C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D31980:
    ctx->pc = 0x80D31980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31980u)) return;
    // 80D31980: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31984:
    ctx->pc = 0x80D31984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31984u)) return;
    // 80D31984: addi    r5, r5, 20372
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20372);

label_80D31988:
    ctx->pc = 0x80D31988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31988: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31988u)) return;
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
label_80D3198C:
    ctx->pc = 0x80D3198Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3198Cu)) return;
    // 80D3198C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31990:
    ctx->pc = 0x80D31990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31990u)) return;
    // 80D31990: addi    r5, r5, 20376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20376);

label_80D31994:
    ctx->pc = 0x80D31994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31994: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31994u)) return;
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
label_80D31998:
    ctx->pc = 0x80D31998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31998u)) return;
    // 80D31998: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3199C:
    ctx->pc = 0x80D3199Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3199Cu)) return;
    // 80D3199C: addi    r5, r5, 20380
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20380);

label_80D319A0:
    ctx->pc = 0x80D319A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D319A0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D319A0u)) return;
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
label_80D319A4:
    ctx->pc = 0x80D319A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319A4u)) return;
    // 80D319A4: bl      0x8045C750
    {
            ctx->lr = 0x80D319A8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D319A8:
    ctx->pc = 0x80D319A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D319A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D319A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D319AC:
    ctx->pc = 0x80D319ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319ACu)) return;
    // 80D319AC: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D319B0:
    ctx->pc = 0x80D319B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319B0u)) return;
    // 80D319B0: li      r5, 1152
    ctx->gpr[5] = (u32)(s32)(1152);

label_80D319B4:
    ctx->pc = 0x80D319B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319B4u)) return;
    // 80D319B4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D319B8:
    ctx->pc = 0x80D319B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319B8u)) return;
    // 80D319B8: addi    r6, r6, -32211
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32211);

label_80D319BC:
    ctx->pc = 0x80D319BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319BCu)) return;
    // 80D319BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D319C0:
    ctx->pc = 0x80D319C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319C0u)) return;
    // 80D319C0: bl      0x8045C7B4
    {
            ctx->lr = 0x80D319C4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D319C4:
    ctx->pc = 0x80D319C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D319C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D319C4: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80D319C8:
    ctx->pc = 0x80D319C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319C8u)) return;
    // 80D319C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D319CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D319CC:
    ctx->pc = 0x80D319CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D319CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D319CC: li      r3, 1518
    ctx->gpr[3] = (u32)(s32)(1518);

label_80D319D0:
    ctx->pc = 0x80D319D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319D0u)) return;
    // 80D319D0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D319D4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D319D4:
    ctx->pc = 0x80D319D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D319D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D319D4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D319D8:
    ctx->pc = 0x80D319D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319D8u)) return;
    // 80D319D8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D319DC:
    ctx->pc = 0x80D319DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319DCu)) return;
    // 80D319DC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D319E0:
    ctx->pc = 0x80D319E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D319E0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D319E4:
    ctx->pc = 0x80D319E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319E4u)) return;
    // 80D319E4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D319E8:
    ctx->pc = 0x80D319E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319E8u)) return;
    // 80D319E8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D319EC:
    ctx->pc = 0x80D319ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319ECu)) return;
    // 80D319EC: addi    r4, r4, 21004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21004);

label_80D319F0:
    ctx->pc = 0x80D319F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D319F0: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D319F4:
    ctx->pc = 0x80D319F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D319F4: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D319F8:
    ctx->pc = 0x80D319F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D319F8u)) return;
    // 80D319F8: bl      0x8045F608
    {
            ctx->lr = 0x80D319FCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D319FC:
    ctx->pc = 0x80D319FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D319FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D319FC: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80D31A00:
    ctx->pc = 0x80D31A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A00u)) return;
    // 80D31A00: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31A04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31A04:
    ctx->pc = 0x80D31A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A04: bl      0x8045F300
    {
            ctx->lr = 0x80D31A08u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D31A08:
    ctx->pc = 0x80D31A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A08: b       0x80D31A14
    {
            goto label_80D31A14;
    }

label_80D31A0C:
    ctx->pc = 0x80D31A0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A0C: bl      0x8045DE34
    {
            ctx->lr = 0x80D31A10u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D31A10:
    ctx->pc = 0x80D31A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A10: bl      0x80460A80
    {
            ctx->lr = 0x80D31A14u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D31A14:
    ctx->pc = 0x80D31A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31A14: lwz     r0, 20(r1)
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
label_80D31A18:
    ctx->pc = 0x80D31A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D31A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31A18: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D31A1C:
    ctx->pc = 0x80D31A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A1Cu)) return;
    // 80D31A1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D31A20:
    ctx->pc = 0x80D31A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A20u)) return;
    // 80D31A20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D317E0;
        }
    }

    ctx->pc = 0x80D31A24u;
    return;
return_dispatch_80D317E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D31814u: goto label_80D31814;
    case 0x80D31818u: goto label_80D31818;
    case 0x80D3181Cu: goto label_80D3181C;
    case 0x80D31824u: goto label_80D31824;
    case 0x80D31854u: goto label_80D31854;
    case 0x80D31870u: goto label_80D31870;
    case 0x80D318A0u: goto label_80D318A0;
    case 0x80D318BCu: goto label_80D318BC;
    case 0x80D318C4u: goto label_80D318C4;
    case 0x80D318ECu: goto label_80D318EC;
    case 0x80D318F0u: goto label_80D318F0;
    case 0x80D318F8u: goto label_80D318F8;
    case 0x80D31900u: goto label_80D31900;
    case 0x80D31924u: goto label_80D31924;
    case 0x80D3192Cu: goto label_80D3192C;
    case 0x80D3195Cu: goto label_80D3195C;
    case 0x80D31978u: goto label_80D31978;
    case 0x80D319A8u: goto label_80D319A8;
    case 0x80D319C4u: goto label_80D319C4;
    case 0x80D319CCu: goto label_80D319CC;
    case 0x80D319D4u: goto label_80D319D4;
    case 0x80D319FCu: goto label_80D319FC;
    case 0x80D31A04u: goto label_80D31A04;
    case 0x80D31A08u: goto label_80D31A08;
    case 0x80D31A10u: goto label_80D31A10;
    case 0x80D31A14u: goto label_80D31A14;
    default: return;
    }
}

