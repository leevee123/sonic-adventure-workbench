// DolRecomp output
#include "../generated.h"

void func_80D35540(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D35540[214] = {
        &&label_80D35540,
        &&label_80D35544,
        &&label_80D35548,
        &&label_80D3554C,
        &&label_80D35550,
        &&label_80D35554,
        &&label_80D35558,
        &&label_80D3555C,
        &&label_80D35560,
        &&label_80D35564,
        &&label_80D35568,
        &&label_80D3556C,
        &&label_80D35570,
        &&label_80D35574,
        &&label_80D35578,
        &&label_80D3557C,
        &&label_80D35580,
        &&label_80D35584,
        &&label_80D35588,
        &&label_80D3558C,
        &&label_80D35590,
        &&label_80D35594,
        &&label_80D35598,
        &&label_80D3559C,
        &&label_80D355A0,
        &&label_80D355A4,
        &&label_80D355A8,
        &&label_80D355AC,
        &&label_80D355B0,
        &&label_80D355B4,
        &&label_80D355B8,
        &&label_80D355BC,
        &&label_80D355C0,
        &&label_80D355C4,
        &&label_80D355C8,
        &&label_80D355CC,
        &&label_80D355D0,
        &&label_80D355D4,
        &&label_80D355D8,
        &&label_80D355DC,
        &&label_80D355E0,
        &&label_80D355E4,
        &&label_80D355E8,
        &&label_80D355EC,
        &&label_80D355F0,
        &&label_80D355F4,
        &&label_80D355F8,
        &&label_80D355FC,
        &&label_80D35600,
        &&label_80D35604,
        &&label_80D35608,
        &&label_80D3560C,
        &&label_80D35610,
        &&label_80D35614,
        &&label_80D35618,
        &&label_80D3561C,
        &&label_80D35620,
        &&label_80D35624,
        &&label_80D35628,
        &&label_80D3562C,
        &&label_80D35630,
        &&label_80D35634,
        &&label_80D35638,
        &&label_80D3563C,
        &&label_80D35640,
        &&label_80D35644,
        &&label_80D35648,
        &&label_80D3564C,
        &&label_80D35650,
        &&label_80D35654,
        &&label_80D35658,
        &&label_80D3565C,
        &&label_80D35660,
        &&label_80D35664,
        &&label_80D35668,
        &&label_80D3566C,
        &&label_80D35670,
        &&label_80D35674,
        &&label_80D35678,
        &&label_80D3567C,
        &&label_80D35680,
        &&label_80D35684,
        &&label_80D35688,
        &&label_80D3568C,
        &&label_80D35690,
        &&label_80D35694,
        &&label_80D35698,
        &&label_80D3569C,
        &&label_80D356A0,
        &&label_80D356A4,
        &&label_80D356A8,
        &&label_80D356AC,
        &&label_80D356B0,
        &&label_80D356B4,
        &&label_80D356B8,
        &&label_80D356BC,
        &&label_80D356C0,
        &&label_80D356C4,
        &&label_80D356C8,
        &&label_80D356CC,
        &&label_80D356D0,
        &&label_80D356D4,
        &&label_80D356D8,
        &&label_80D356DC,
        &&label_80D356E0,
        &&label_80D356E4,
        &&label_80D356E8,
        &&label_80D356EC,
        &&label_80D356F0,
        &&label_80D356F4,
        &&label_80D356F8,
        &&label_80D356FC,
        &&label_80D35700,
        &&label_80D35704,
        &&label_80D35708,
        &&label_80D3570C,
        &&label_80D35710,
        &&label_80D35714,
        &&label_80D35718,
        &&label_80D3571C,
        &&label_80D35720,
        &&label_80D35724,
        &&label_80D35728,
        &&label_80D3572C,
        &&label_80D35730,
        &&label_80D35734,
        &&label_80D35738,
        &&label_80D3573C,
        &&label_80D35740,
        &&label_80D35744,
        &&label_80D35748,
        &&label_80D3574C,
        &&label_80D35750,
        &&label_80D35754,
        &&label_80D35758,
        &&label_80D3575C,
        &&label_80D35760,
        &&label_80D35764,
        &&label_80D35768,
        &&label_80D3576C,
        &&label_80D35770,
        &&label_80D35774,
        &&label_80D35778,
        &&label_80D3577C,
        &&label_80D35780,
        &&label_80D35784,
        &&label_80D35788,
        &&label_80D3578C,
        &&label_80D35790,
        &&label_80D35794,
        &&label_80D35798,
        &&label_80D3579C,
        &&label_80D357A0,
        &&label_80D357A4,
        &&label_80D357A8,
        &&label_80D357AC,
        &&label_80D357B0,
        &&label_80D357B4,
        &&label_80D357B8,
        &&label_80D357BC,
        &&label_80D357C0,
        &&label_80D357C4,
        &&label_80D357C8,
        &&label_80D357CC,
        &&label_80D357D0,
        &&label_80D357D4,
        &&label_80D357D8,
        &&label_80D357DC,
        &&label_80D357E0,
        &&label_80D357E4,
        &&label_80D357E8,
        &&label_80D357EC,
        &&label_80D357F0,
        &&label_80D357F4,
        &&label_80D357F8,
        &&label_80D357FC,
        &&label_80D35800,
        &&label_80D35804,
        &&label_80D35808,
        &&label_80D3580C,
        &&label_80D35810,
        &&label_80D35814,
        &&label_80D35818,
        &&label_80D3581C,
        &&label_80D35820,
        &&label_80D35824,
        &&label_80D35828,
        &&label_80D3582C,
        &&label_80D35830,
        &&label_80D35834,
        &&label_80D35838,
        &&label_80D3583C,
        &&label_80D35840,
        &&label_80D35844,
        &&label_80D35848,
        &&label_80D3584C,
        &&label_80D35850,
        &&label_80D35854,
        &&label_80D35858,
        &&label_80D3585C,
        &&label_80D35860,
        &&label_80D35864,
        &&label_80D35868,
        &&label_80D3586C,
        &&label_80D35870,
        &&label_80D35874,
        &&label_80D35878,
        &&label_80D3587C,
        &&label_80D35880,
        &&label_80D35884,
        &&label_80D35888,
        &&label_80D3588C,
        &&label_80D35890,
        &&label_80D35894
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D35540u && pc <= 0x80D35894u && ((pc - 0x80D35540u) & 3u) == 0u)
            goto *pc_table_80D35540[(pc - 0x80D35540u) >> 2];
    }
    return;
label_80D35540:
    ctx->pc = 0x80D35540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D35540: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35544:
    ctx->pc = 0x80D35544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35544: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35548:
    ctx->pc = 0x80D35548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35548: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3554C:
    ctx->pc = 0x80D3554Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3554Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3554C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D3554Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35550:
    ctx->pc = 0x80D35550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35550: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D35550u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D35550u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35554:
    ctx->pc = 0x80D35554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35554: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D35554u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35558:
    ctx->pc = 0x80D35558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35558: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D35558u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D35558u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3555C:
    ctx->pc = 0x80D3555Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3555Cu)) return;
    // 80D3555C: cmpwi   r3, 2
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

label_80D35560:
    ctx->pc = 0x80D35560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35560u)) return;
    // 80D35560: bc    12, 2, 0x80D357D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D357D0;
        }
    }

label_80D35564:
    ctx->pc = 0x80D35564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35564: bc    4, 0, 0x80D35578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D35578;
        }
    }

label_80D35568:
    ctx->pc = 0x80D35568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35568: cmpwi   r3, 0
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

label_80D3556C:
    ctx->pc = 0x80D3556Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3556Cu)) return;
    // 80D3556C: bc    12, 2, 0x80D35878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D35878;
        }
    }

label_80D35570:
    ctx->pc = 0x80D35570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35570: bc    4, 0, 0x80D35580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D35580;
        }
    }

label_80D35574:
    ctx->pc = 0x80D35574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35574: b       0x80D35878
    {
            goto label_80D35878;
    }

label_80D35578:
    ctx->pc = 0x80D35578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35578: cmpwi   r3, 4
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

label_80D3557C:
    ctx->pc = 0x80D3557Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3557Cu)) return;
    // 80D3557C: b       0x80D35878
    {
            goto label_80D35878;
    }

label_80D35580:
    ctx->pc = 0x80D35580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35580: bl      0x8045DE7C
    {
            ctx->lr = 0x80D35584u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D35584:
    ctx->pc = 0x80D35584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35584: bl      0x80460A60
    {
            ctx->lr = 0x80D35588u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D35588:
    ctx->pc = 0x80D35588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35588: bl      0x80460A24
    {
            ctx->lr = 0x80D3558Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D3558C:
    ctx->pc = 0x80D3558Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3558Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3558C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_80D35590:
    ctx->pc = 0x80D35590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35590u)) return;
    // 80D35590: bl      0x80406090
    {
            ctx->lr = 0x80D35594u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D35594:
    ctx->pc = 0x80D35594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35594: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35598:
    ctx->pc = 0x80D35598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35598u)) return;
    // 80D35598: bl      0x8045F220
    {
            ctx->lr = 0x80D3559Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3559C:
    ctx->pc = 0x80D3559Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3559Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D3559C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D355A0:
    ctx->pc = 0x80D355A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355A0u)) return;
    // 80D355A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D355A4:
    ctx->pc = 0x80D355A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355A4u)) return;
    // 80D355A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D355A8:
    ctx->pc = 0x80D355A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355A8u)) return;
    // 80D355A8: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D355AC:
    ctx->pc = 0x80D355ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355ACu)) return;
    // 80D355AC: addi    r6, r6, -14736
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14736);

label_80D355B0:
    ctx->pc = 0x80D355B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D355B0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D355B0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D355B4:
    ctx->pc = 0x80D355B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355B4u)) return;
    // 80D355B4: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D355B8:
    ctx->pc = 0x80D355B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355B8u)) return;
    // 80D355B8: addi    r6, r6, -14732
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14732);

label_80D355BC:
    ctx->pc = 0x80D355BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D355BC: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D355BCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D355C0:
    ctx->pc = 0x80D355C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355C0u)) return;
    // 80D355C0: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D355C4:
    ctx->pc = 0x80D355C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355C4u)) return;
    // 80D355C4: addi    r6, r6, -14728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14728);

label_80D355C8:
    ctx->pc = 0x80D355C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D355C8: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D355C8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D355CC:
    ctx->pc = 0x80D355CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355CCu)) return;
    // 80D355CC: bl      0x8045C4B8
    {
            ctx->lr = 0x80D355D0u;
            ctx->pc = 0x8045C4B8u;
            return;
    }

label_80D355D0:
    ctx->pc = 0x80D355D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D355D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D355D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D355D4:
    ctx->pc = 0x80D355D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355D4u)) return;
    // 80D355D4: bl      0x8045F220
    {
            ctx->lr = 0x80D355D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D355D8:
    ctx->pc = 0x80D355D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D355D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D355D8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D355DC:
    ctx->pc = 0x80D355DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355DCu)) return;
    // 80D355DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D355E0:
    ctx->pc = 0x80D355E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355E0u)) return;
    // 80D355E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D355E4:
    ctx->pc = 0x80D355E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355E4u)) return;
    // 80D355E4: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D355E8:
    ctx->pc = 0x80D355E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355E8u)) return;
    // 80D355E8: addi    r6, r6, -14724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14724);

label_80D355EC:
    ctx->pc = 0x80D355ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D355EC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D355ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D355F0:
    ctx->pc = 0x80D355F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355F0u)) return;
    // 80D355F0: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D355F4:
    ctx->pc = 0x80D355F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355F4u)) return;
    // 80D355F4: addi    r6, r6, -14728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14728);

label_80D355F8:
    ctx->pc = 0x80D355F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D355F8: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D355F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D355FC:
    ctx->pc = 0x80D355FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D355FCu)) return;
    // 80D355FC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D355FCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D35600:
    ctx->pc = 0x80D35600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35600u)) return;
    // 80D35600: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D35604:
    ctx->pc = 0x80D35604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35604u)) return;
    // 80D35604: bl      0x8045C3C0
    {
            ctx->lr = 0x80D35608u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D35608:
    ctx->pc = 0x80D35608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35608: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3560C:
    ctx->pc = 0x80D3560Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3560Cu)) return;
    // 80D3560C: bl      0x8045F220
    {
            ctx->lr = 0x80D35610u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35610:
    ctx->pc = 0x80D35610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D35610: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D35614:
    ctx->pc = 0x80D35614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35614u)) return;
    // 80D35614: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35618:
    ctx->pc = 0x80D35618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35618u)) return;
    // 80D35618: li      r4, 960
    ctx->gpr[4] = (u32)(s32)(960);

label_80D3561C:
    ctx->pc = 0x80D3561Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3561Cu)) return;
    // 80D3561C: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35620:
    ctx->pc = 0x80D35620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35620u)) return;
    // 80D35620: addi    r6, r6, -14720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14720);

label_80D35624:
    ctx->pc = 0x80D35624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35624: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35624u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D35628:
    ctx->pc = 0x80D35628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35628u)) return;
    // 80D35628: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D3562C:
    ctx->pc = 0x80D3562Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3562Cu)) return;
    // 80D3562C: addi    r6, r6, -14732
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14732);

label_80D35630:
    ctx->pc = 0x80D35630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35630: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35630u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D35634:
    ctx->pc = 0x80D35634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35634u)) return;
    // 80D35634: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35638:
    ctx->pc = 0x80D35638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35638u)) return;
    // 80D35638: addi    r6, r6, -14728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14728);

label_80D3563C:
    ctx->pc = 0x80D3563Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3563Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3563C: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D3563Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D35640:
    ctx->pc = 0x80D35640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35640u)) return;
    // 80D35640: bl      0x8045C4B8
    {
            ctx->lr = 0x80D35644u;
            ctx->pc = 0x8045C4B8u;
            return;
    }

label_80D35644:
    ctx->pc = 0x80D35644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35644: li      r3, 1307
    ctx->gpr[3] = (u32)(s32)(1307);

label_80D35648:
    ctx->pc = 0x80D35648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35648u)) return;
    // 80D35648: bl      0x8045BFA0
    {
            ctx->lr = 0x80D3564Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D3564C:
    ctx->pc = 0x80D3564Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3564Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D3564C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D35650:
    ctx->pc = 0x80D35650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35650u)) return;
    // 80D35650: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D35654:
    ctx->pc = 0x80D35654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35654: lwz     r0, 0(r3)
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
label_80D35658:
    ctx->pc = 0x80D35658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35658u)) return;
    // 80D35658: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D3565C:
    ctx->pc = 0x80D3565Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3565Cu)) return;
    // 80D3565C: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35660:
    ctx->pc = 0x80D35660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35660u)) return;
    // 80D35660: addi    r3, r3, -13832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13832);

label_80D35664:
    ctx->pc = 0x80D35664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35664: lwzx    r3, r3, r0
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
label_80D35668:
    ctx->pc = 0x80D35668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35668: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3566C:
    ctx->pc = 0x80D3566Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3566Cu)) return;
    // 80D3566C: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35670u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35670:
    ctx->pc = 0x80D35670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35670: bl      0x8045BFF4
    {
            ctx->lr = 0x80D35674u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D35674:
    ctx->pc = 0x80D35674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D35674: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D35678:
    ctx->pc = 0x80D35678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35678u)) return;
    // 80D35678: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D3567C:
    ctx->pc = 0x80D3567Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3567Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3567C: lwz     r0, 0(r3)
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
label_80D35680:
    ctx->pc = 0x80D35680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35680u)) return;
    // 80D35680: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35684:
    ctx->pc = 0x80D35684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35684u)) return;
    // 80D35684: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35688:
    ctx->pc = 0x80D35688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35688u)) return;
    // 80D35688: addi    r3, r3, -13832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13832);

label_80D3568C:
    ctx->pc = 0x80D3568Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3568Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3568C: lwzx    r3, r3, r0
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
label_80D35690:
    ctx->pc = 0x80D35690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35690: lwz     r3, 4(r3)
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
label_80D35694:
    ctx->pc = 0x80D35694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35694u)) return;
    // 80D35694: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35698u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35698:
    ctx->pc = 0x80D35698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35698: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80D3569C:
    ctx->pc = 0x80D3569Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3569Cu)) return;
    // 80D3569C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D356A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D356A0:
    ctx->pc = 0x80D356A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D356A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D356A0: li      r3, 1308
    ctx->gpr[3] = (u32)(s32)(1308);

label_80D356A4:
    ctx->pc = 0x80D356A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356A4u)) return;
    // 80D356A4: bl      0x8045BFA0
    {
            ctx->lr = 0x80D356A8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D356A8:
    ctx->pc = 0x80D356A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D356A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D356A8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D356AC:
    ctx->pc = 0x80D356ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356ACu)) return;
    // 80D356AC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D356B0:
    ctx->pc = 0x80D356B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D356B0: lwz     r0, 0(r3)
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
label_80D356B4:
    ctx->pc = 0x80D356B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356B4u)) return;
    // 80D356B4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D356B8:
    ctx->pc = 0x80D356B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356B8u)) return;
    // 80D356B8: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D356BC:
    ctx->pc = 0x80D356BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356BCu)) return;
    // 80D356BC: addi    r3, r3, -13832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13832);

label_80D356C0:
    ctx->pc = 0x80D356C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D356C0: lwzx    r3, r3, r0
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
label_80D356C4:
    ctx->pc = 0x80D356C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D356C4: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D356C8:
    ctx->pc = 0x80D356C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356C8u)) return;
    // 80D356C8: bl      0x8045F6FC
    {
            ctx->lr = 0x80D356CCu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D356CC:
    ctx->pc = 0x80D356CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D356CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D356CC: li      r3, 1309
    ctx->gpr[3] = (u32)(s32)(1309);

label_80D356D0:
    ctx->pc = 0x80D356D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356D0u)) return;
    // 80D356D0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D356D4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D356D4:
    ctx->pc = 0x80D356D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D356D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D356D4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D356D8:
    ctx->pc = 0x80D356D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356D8u)) return;
    // 80D356D8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D356DC:
    ctx->pc = 0x80D356DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D356DC: lwz     r0, 0(r3)
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
label_80D356E0:
    ctx->pc = 0x80D356E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356E0u)) return;
    // 80D356E0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D356E4:
    ctx->pc = 0x80D356E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356E4u)) return;
    // 80D356E4: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D356E8:
    ctx->pc = 0x80D356E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356E8u)) return;
    // 80D356E8: addi    r3, r3, -13832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13832);

label_80D356EC:
    ctx->pc = 0x80D356ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D356EC: lwzx    r3, r3, r0
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
label_80D356F0:
    ctx->pc = 0x80D356F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D356F0: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D356F4:
    ctx->pc = 0x80D356F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356F4u)) return;
    // 80D356F4: bl      0x8045F6FC
    {
            ctx->lr = 0x80D356F8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D356F8:
    ctx->pc = 0x80D356F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D356F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D356F8: li      r3, 1310
    ctx->gpr[3] = (u32)(s32)(1310);

label_80D356FC:
    ctx->pc = 0x80D356FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D356FCu)) return;
    // 80D356FC: bl      0x8045BFA0
    {
            ctx->lr = 0x80D35700u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D35700:
    ctx->pc = 0x80D35700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D35700: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D35704:
    ctx->pc = 0x80D35704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35704u)) return;
    // 80D35704: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D35708:
    ctx->pc = 0x80D35708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35708: lwz     r0, 0(r3)
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
label_80D3570C:
    ctx->pc = 0x80D3570Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3570Cu)) return;
    // 80D3570C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35710:
    ctx->pc = 0x80D35710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35710u)) return;
    // 80D35710: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35714:
    ctx->pc = 0x80D35714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35714u)) return;
    // 80D35714: addi    r3, r3, -13832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13832);

label_80D35718:
    ctx->pc = 0x80D35718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35718: lwzx    r3, r3, r0
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
label_80D3571C:
    ctx->pc = 0x80D3571Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3571Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3571C: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35720:
    ctx->pc = 0x80D35720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35720u)) return;
    // 80D35720: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35724u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35724:
    ctx->pc = 0x80D35724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35724: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35728:
    ctx->pc = 0x80D35728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35728u)) return;
    // 80D35728: bl      0x8045F220
    {
            ctx->lr = 0x80D3572Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3572C:
    ctx->pc = 0x80D3572Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3572Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3572C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35730:
    ctx->pc = 0x80D35730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35730: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D35730u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80D35734:
    ctx->pc = 0x80D35734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35734u)) return;
    // 80D35734: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35738:
    ctx->pc = 0x80D35738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35738u)) return;
    // 80D35738: addi    r3, r3, -14712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14712);

label_80D3573C:
    ctx->pc = 0x80D3573Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3573Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3573C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3573Cu)) return;
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
label_80D35740:
    ctx->pc = 0x80D35740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35740u)) return;
    // 80D35740: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D35740u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80D35744:
    ctx->pc = 0x80D35744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35744u)) return;
    // 80D35744: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35748:
    ctx->pc = 0x80D35748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35748u)) return;
    // 80D35748: bl      0x8045F220
    {
            ctx->lr = 0x80D3574Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3574C:
    ctx->pc = 0x80D3574Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3574Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3574C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35750:
    ctx->pc = 0x80D35750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35750: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D35750u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80D35754:
    ctx->pc = 0x80D35754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35754u)) return;
    // 80D35754: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35758:
    ctx->pc = 0x80D35758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35758u)) return;
    // 80D35758: addi    r3, r3, -14716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14716);

label_80D3575C:
    ctx->pc = 0x80D3575Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3575Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3575C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3575Cu)) return;
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
label_80D35760:
    ctx->pc = 0x80D35760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35760u)) return;
    // 80D35760: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D35760u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80D35764:
    ctx->pc = 0x80D35764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35764u)) return;
    // 80D35764: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35768:
    ctx->pc = 0x80D35768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35768u)) return;
    // 80D35768: bl      0x8045F220
    {
            ctx->lr = 0x80D3576Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3576C:
    ctx->pc = 0x80D3576Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3576Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3576C: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35770:
    ctx->pc = 0x80D35770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35770u)) return;
    // 80D35770: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35774:
    ctx->pc = 0x80D35774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35774u)) return;
    // 80D35774: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80D35778:
    ctx->pc = 0x80D35778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35778: lfs     f1, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35778u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
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
label_80D3577C:
    ctx->pc = 0x80D3577Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3577Cu)) return;
    // 80D3577C: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80D3577Cu)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80D35780:
    ctx->pc = 0x80D35780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35780u)) return;
    // 80D35780: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D35780u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D35784:
    ctx->pc = 0x80D35784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35784u)) return;
    // 80D35784: bl      0x8045C750
    {
            ctx->lr = 0x80D35788u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35788:
    ctx->pc = 0x80D35788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D35788: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3578C:
    ctx->pc = 0x80D3578Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3578Cu)) return;
    // 80D3578C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D35790:
    ctx->pc = 0x80D35790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35790u)) return;
    // 80D35790: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35794:
    ctx->pc = 0x80D35794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35794u)) return;
    // 80D35794: addi    r5, r5, -14724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14724);

label_80D35798:
    ctx->pc = 0x80D35798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D35798: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35798u)) return;
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
label_80D3579C:
    ctx->pc = 0x80D3579Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3579Cu)) return;
    // 80D3579C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D357A0:
    ctx->pc = 0x80D357A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357A0u)) return;
    // 80D357A0: addi    r5, r5, -14708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14708);

label_80D357A4:
    ctx->pc = 0x80D357A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D357A4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D357A4u)) return;
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
label_80D357A8:
    ctx->pc = 0x80D357A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357A8u)) return;
    // 80D357A8: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D357AC:
    ctx->pc = 0x80D357ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357ACu)) return;
    // 80D357AC: addi    r5, r5, -14704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14704);

label_80D357B0:
    ctx->pc = 0x80D357B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D357B0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D357B0u)) return;
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
label_80D357B4:
    ctx->pc = 0x80D357B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357B4u)) return;
    // 80D357B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D357B8:
    ctx->pc = 0x80D357B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357B8u)) return;
    // 80D357B8: bl      0x8045C434
    {
            ctx->lr = 0x80D357BCu;
            ctx->pc = 0x8045C434u;
            return;
    }

label_80D357BC:
    ctx->pc = 0x80D357BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D357BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D357BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D357C0:
    ctx->pc = 0x80D357C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357C0u)) return;
    // 80D357C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D357C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D357C4:
    ctx->pc = 0x80D357C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D357C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D357C4: bl      0x8045BFF4
    {
            ctx->lr = 0x80D357C8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D357C8:
    ctx->pc = 0x80D357C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D357C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D357C8: bl      0x8045F32C
    {
            ctx->lr = 0x80D357CCu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D357CC:
    ctx->pc = 0x80D357CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D357CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D357CC: b       0x80D35878
    {
            goto label_80D35878;
    }

label_80D357D0:
    ctx->pc = 0x80D357D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D357D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D357D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D357D4:
    ctx->pc = 0x80D357D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357D4u)) return;
    // 80D357D4: bl      0x8045F220
    {
            ctx->lr = 0x80D357D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D357D8:
    ctx->pc = 0x80D357D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D357D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D357D8: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D357DC:
    ctx->pc = 0x80D357DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D357DC: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D357DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80D357E0:
    ctx->pc = 0x80D357E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357E0u)) return;
    // 80D357E0: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D357E4:
    ctx->pc = 0x80D357E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357E4u)) return;
    // 80D357E4: addi    r3, r3, -14712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14712);

label_80D357E8:
    ctx->pc = 0x80D357E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D357E8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D357E8u)) return;
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
label_80D357EC:
    ctx->pc = 0x80D357ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357ECu)) return;
    // 80D357EC: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D357ECu)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80D357F0:
    ctx->pc = 0x80D357F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357F0u)) return;
    // 80D357F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D357F4:
    ctx->pc = 0x80D357F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357F4u)) return;
    // 80D357F4: bl      0x8045F220
    {
            ctx->lr = 0x80D357F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D357F8:
    ctx->pc = 0x80D357F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D357F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D357F8: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D357FC:
    ctx->pc = 0x80D357FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D357FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D357FC: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D357FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80D35800:
    ctx->pc = 0x80D35800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35800u)) return;
    // 80D35800: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35804:
    ctx->pc = 0x80D35804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35804u)) return;
    // 80D35804: addi    r3, r3, -14716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14716);

label_80D35808:
    ctx->pc = 0x80D35808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35808: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D35808u)) return;
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
label_80D3580C:
    ctx->pc = 0x80D3580Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3580Cu)) return;
    // 80D3580C: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3580Cu)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80D35810:
    ctx->pc = 0x80D35810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35810u)) return;
    // 80D35810: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35814:
    ctx->pc = 0x80D35814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35814u)) return;
    // 80D35814: bl      0x8045F220
    {
            ctx->lr = 0x80D35818u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35818:
    ctx->pc = 0x80D35818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35818: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3581C:
    ctx->pc = 0x80D3581Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3581Cu)) return;
    // 80D3581C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35820:
    ctx->pc = 0x80D35820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35820u)) return;
    // 80D35820: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D35824:
    ctx->pc = 0x80D35824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35824: lfs     f1, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35824u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
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
label_80D35828:
    ctx->pc = 0x80D35828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35828u)) return;
    // 80D35828: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80D35828u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80D3582C:
    ctx->pc = 0x80D3582Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3582Cu)) return;
    // 80D3582C: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80D3582Cu)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80D35830:
    ctx->pc = 0x80D35830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35830u)) return;
    // 80D35830: bl      0x8045C750
    {
            ctx->lr = 0x80D35834u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35834:
    ctx->pc = 0x80D35834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D35834: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35838:
    ctx->pc = 0x80D35838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35838u)) return;
    // 80D35838: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D3583C:
    ctx->pc = 0x80D3583Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3583Cu)) return;
    // 80D3583C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35840:
    ctx->pc = 0x80D35840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35840u)) return;
    // 80D35840: addi    r5, r5, -14724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14724);

label_80D35844:
    ctx->pc = 0x80D35844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D35844: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35844u)) return;
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
label_80D35848:
    ctx->pc = 0x80D35848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35848u)) return;
    // 80D35848: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3584C:
    ctx->pc = 0x80D3584Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3584Cu)) return;
    // 80D3584C: addi    r5, r5, -14708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14708);

label_80D35850:
    ctx->pc = 0x80D35850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D35850: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35850u)) return;
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
label_80D35854:
    ctx->pc = 0x80D35854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35854u)) return;
    // 80D35854: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35858:
    ctx->pc = 0x80D35858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35858u)) return;
    // 80D35858: addi    r5, r5, -14704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14704);

label_80D3585C:
    ctx->pc = 0x80D3585Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3585Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3585C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3585Cu)) return;
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
label_80D35860:
    ctx->pc = 0x80D35860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35860u)) return;
    // 80D35860: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D35864:
    ctx->pc = 0x80D35864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35864u)) return;
    // 80D35864: bl      0x8045C434
    {
            ctx->lr = 0x80D35868u;
            ctx->pc = 0x8045C434u;
            return;
    }

label_80D35868:
    ctx->pc = 0x80D35868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35868: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3586C:
    ctx->pc = 0x80D3586Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3586Cu)) return;
    // 80D3586C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35870u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35870:
    ctx->pc = 0x80D35870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35870: bl      0x8045DE34
    {
            ctx->lr = 0x80D35874u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D35874:
    ctx->pc = 0x80D35874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35874: bl      0x80460A80
    {
            ctx->lr = 0x80D35878u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D35878:
    ctx->pc = 0x80D35878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D35878: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D35878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D35878u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3587C:
    ctx->pc = 0x80D3587Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3587Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3587C: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D3587Cu)) return;
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
label_80D35880:
    ctx->pc = 0x80D35880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35880: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D35880u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D35880u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35884:
    ctx->pc = 0x80D35884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D35884: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D35884u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35888:
    ctx->pc = 0x80D35888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35888: lwz     r0, 52(r1)
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
label_80D3588C:
    ctx->pc = 0x80D3588Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D3588Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3588C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35890:
    ctx->pc = 0x80D35890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35890u)) return;
    // 80D35890: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80D35894:
    ctx->pc = 0x80D35894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35894u)) return;
    // 80D35894: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D35540;
        }
    }

    ctx->pc = 0x80D35898u;
    return;
return_dispatch_80D35540:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D35584u: goto label_80D35584;
    case 0x80D35588u: goto label_80D35588;
    case 0x80D3558Cu: goto label_80D3558C;
    case 0x80D35594u: goto label_80D35594;
    case 0x80D3559Cu: goto label_80D3559C;
    case 0x80D355D0u: goto label_80D355D0;
    case 0x80D355D8u: goto label_80D355D8;
    case 0x80D35608u: goto label_80D35608;
    case 0x80D35610u: goto label_80D35610;
    case 0x80D35644u: goto label_80D35644;
    case 0x80D3564Cu: goto label_80D3564C;
    case 0x80D35670u: goto label_80D35670;
    case 0x80D35674u: goto label_80D35674;
    case 0x80D35698u: goto label_80D35698;
    case 0x80D356A0u: goto label_80D356A0;
    case 0x80D356A8u: goto label_80D356A8;
    case 0x80D356CCu: goto label_80D356CC;
    case 0x80D356D4u: goto label_80D356D4;
    case 0x80D356F8u: goto label_80D356F8;
    case 0x80D35700u: goto label_80D35700;
    case 0x80D35724u: goto label_80D35724;
    case 0x80D3572Cu: goto label_80D3572C;
    case 0x80D3574Cu: goto label_80D3574C;
    case 0x80D3576Cu: goto label_80D3576C;
    case 0x80D35788u: goto label_80D35788;
    case 0x80D357BCu: goto label_80D357BC;
    case 0x80D357C4u: goto label_80D357C4;
    case 0x80D357C8u: goto label_80D357C8;
    case 0x80D357CCu: goto label_80D357CC;
    case 0x80D357D8u: goto label_80D357D8;
    case 0x80D357F8u: goto label_80D357F8;
    case 0x80D35818u: goto label_80D35818;
    case 0x80D35834u: goto label_80D35834;
    case 0x80D35868u: goto label_80D35868;
    case 0x80D35870u: goto label_80D35870;
    case 0x80D35874u: goto label_80D35874;
    case 0x80D35878u: goto label_80D35878;
    default: return;
    }
}

