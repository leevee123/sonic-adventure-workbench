// DolRecomp output
#include "../generated.h"

void func_80C50540(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C50540[238] = {
        &&label_80C50540,
        &&label_80C50544,
        &&label_80C50548,
        &&label_80C5054C,
        &&label_80C50550,
        &&label_80C50554,
        &&label_80C50558,
        &&label_80C5055C,
        &&label_80C50560,
        &&label_80C50564,
        &&label_80C50568,
        &&label_80C5056C,
        &&label_80C50570,
        &&label_80C50574,
        &&label_80C50578,
        &&label_80C5057C,
        &&label_80C50580,
        &&label_80C50584,
        &&label_80C50588,
        &&label_80C5058C,
        &&label_80C50590,
        &&label_80C50594,
        &&label_80C50598,
        &&label_80C5059C,
        &&label_80C505A0,
        &&label_80C505A4,
        &&label_80C505A8,
        &&label_80C505AC,
        &&label_80C505B0,
        &&label_80C505B4,
        &&label_80C505B8,
        &&label_80C505BC,
        &&label_80C505C0,
        &&label_80C505C4,
        &&label_80C505C8,
        &&label_80C505CC,
        &&label_80C505D0,
        &&label_80C505D4,
        &&label_80C505D8,
        &&label_80C505DC,
        &&label_80C505E0,
        &&label_80C505E4,
        &&label_80C505E8,
        &&label_80C505EC,
        &&label_80C505F0,
        &&label_80C505F4,
        &&label_80C505F8,
        &&label_80C505FC,
        &&label_80C50600,
        &&label_80C50604,
        &&label_80C50608,
        &&label_80C5060C,
        &&label_80C50610,
        &&label_80C50614,
        &&label_80C50618,
        &&label_80C5061C,
        &&label_80C50620,
        &&label_80C50624,
        &&label_80C50628,
        &&label_80C5062C,
        &&label_80C50630,
        &&label_80C50634,
        &&label_80C50638,
        &&label_80C5063C,
        &&label_80C50640,
        &&label_80C50644,
        &&label_80C50648,
        &&label_80C5064C,
        &&label_80C50650,
        &&label_80C50654,
        &&label_80C50658,
        &&label_80C5065C,
        &&label_80C50660,
        &&label_80C50664,
        &&label_80C50668,
        &&label_80C5066C,
        &&label_80C50670,
        &&label_80C50674,
        &&label_80C50678,
        &&label_80C5067C,
        &&label_80C50680,
        &&label_80C50684,
        &&label_80C50688,
        &&label_80C5068C,
        &&label_80C50690,
        &&label_80C50694,
        &&label_80C50698,
        &&label_80C5069C,
        &&label_80C506A0,
        &&label_80C506A4,
        &&label_80C506A8,
        &&label_80C506AC,
        &&label_80C506B0,
        &&label_80C506B4,
        &&label_80C506B8,
        &&label_80C506BC,
        &&label_80C506C0,
        &&label_80C506C4,
        &&label_80C506C8,
        &&label_80C506CC,
        &&label_80C506D0,
        &&label_80C506D4,
        &&label_80C506D8,
        &&label_80C506DC,
        &&label_80C506E0,
        &&label_80C506E4,
        &&label_80C506E8,
        &&label_80C506EC,
        &&label_80C506F0,
        &&label_80C506F4,
        &&label_80C506F8,
        &&label_80C506FC,
        &&label_80C50700,
        &&label_80C50704,
        &&label_80C50708,
        &&label_80C5070C,
        &&label_80C50710,
        &&label_80C50714,
        &&label_80C50718,
        &&label_80C5071C,
        &&label_80C50720,
        &&label_80C50724,
        &&label_80C50728,
        &&label_80C5072C,
        &&label_80C50730,
        &&label_80C50734,
        &&label_80C50738,
        &&label_80C5073C,
        &&label_80C50740,
        &&label_80C50744,
        &&label_80C50748,
        &&label_80C5074C,
        &&label_80C50750,
        &&label_80C50754,
        &&label_80C50758,
        &&label_80C5075C,
        &&label_80C50760,
        &&label_80C50764,
        &&label_80C50768,
        &&label_80C5076C,
        &&label_80C50770,
        &&label_80C50774,
        &&label_80C50778,
        &&label_80C5077C,
        &&label_80C50780,
        &&label_80C50784,
        &&label_80C50788,
        &&label_80C5078C,
        &&label_80C50790,
        &&label_80C50794,
        &&label_80C50798,
        &&label_80C5079C,
        &&label_80C507A0,
        &&label_80C507A4,
        &&label_80C507A8,
        &&label_80C507AC,
        &&label_80C507B0,
        &&label_80C507B4,
        &&label_80C507B8,
        &&label_80C507BC,
        &&label_80C507C0,
        &&label_80C507C4,
        &&label_80C507C8,
        &&label_80C507CC,
        &&label_80C507D0,
        &&label_80C507D4,
        &&label_80C507D8,
        &&label_80C507DC,
        &&label_80C507E0,
        &&label_80C507E4,
        &&label_80C507E8,
        &&label_80C507EC,
        &&label_80C507F0,
        &&label_80C507F4,
        &&label_80C507F8,
        &&label_80C507FC,
        &&label_80C50800,
        &&label_80C50804,
        &&label_80C50808,
        &&label_80C5080C,
        &&label_80C50810,
        &&label_80C50814,
        &&label_80C50818,
        &&label_80C5081C,
        &&label_80C50820,
        &&label_80C50824,
        &&label_80C50828,
        &&label_80C5082C,
        &&label_80C50830,
        &&label_80C50834,
        &&label_80C50838,
        &&label_80C5083C,
        &&label_80C50840,
        &&label_80C50844,
        &&label_80C50848,
        &&label_80C5084C,
        &&label_80C50850,
        &&label_80C50854,
        &&label_80C50858,
        &&label_80C5085C,
        &&label_80C50860,
        &&label_80C50864,
        &&label_80C50868,
        &&label_80C5086C,
        &&label_80C50870,
        &&label_80C50874,
        &&label_80C50878,
        &&label_80C5087C,
        &&label_80C50880,
        &&label_80C50884,
        &&label_80C50888,
        &&label_80C5088C,
        &&label_80C50890,
        &&label_80C50894,
        &&label_80C50898,
        &&label_80C5089C,
        &&label_80C508A0,
        &&label_80C508A4,
        &&label_80C508A8,
        &&label_80C508AC,
        &&label_80C508B0,
        &&label_80C508B4,
        &&label_80C508B8,
        &&label_80C508BC,
        &&label_80C508C0,
        &&label_80C508C4,
        &&label_80C508C8,
        &&label_80C508CC,
        &&label_80C508D0,
        &&label_80C508D4,
        &&label_80C508D8,
        &&label_80C508DC,
        &&label_80C508E0,
        &&label_80C508E4,
        &&label_80C508E8,
        &&label_80C508EC,
        &&label_80C508F0,
        &&label_80C508F4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C50540u && pc <= 0x80C508F4u && ((pc - 0x80C50540u) & 3u) == 0u)
            goto *pc_table_80C50540[(pc - 0x80C50540u) >> 2];
    }
    return;
label_80C50540:
    ctx->pc = 0x80C50540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50540: stwu     r1, -16(r1)
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
label_80C50544:
    ctx->pc = 0x80C50544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C50544: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50548:
    ctx->pc = 0x80C50548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50548: stw     r0, 20(r1)
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
label_80C5054C:
    ctx->pc = 0x80C5054Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5054Cu)) return;
    // 80C5054C: cmpwi   r3, 2
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

label_80C50550:
    ctx->pc = 0x80C50550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50550u)) return;
    // 80C50550: bc    12, 2, 0x80C50890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50890;
        }
    }

label_80C50554:
    ctx->pc = 0x80C50554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50554: bc    4, 0, 0x80C50568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C50568;
        }
    }

label_80C50558:
    ctx->pc = 0x80C50558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50558: cmpwi   r3, 0
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

label_80C5055C:
    ctx->pc = 0x80C5055Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5055Cu)) return;
    // 80C5055C: bc    12, 2, 0x80C508E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C508E8;
        }
    }

label_80C50560:
    ctx->pc = 0x80C50560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50560: bc    4, 0, 0x80C50570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C50570;
        }
    }

label_80C50564:
    ctx->pc = 0x80C50564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50564: b       0x80C508E8
    {
            goto label_80C508E8;
    }

label_80C50568:
    ctx->pc = 0x80C50568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50568: cmpwi   r3, 4
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

label_80C5056C:
    ctx->pc = 0x80C5056Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5056Cu)) return;
    // 80C5056C: b       0x80C508E8
    {
            goto label_80C508E8;
    }

label_80C50570:
    ctx->pc = 0x80C50570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50570: bl      0x8045DE7C
    {
            ctx->lr = 0x80C50574u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C50574:
    ctx->pc = 0x80C50574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50574: bl      0x80460A60
    {
            ctx->lr = 0x80C50578u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C50578:
    ctx->pc = 0x80C50578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50578: bl      0x80460A24
    {
            ctx->lr = 0x80C5057Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C5057C:
    ctx->pc = 0x80C5057Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5057Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5057C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C50580:
    ctx->pc = 0x80C50580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50580u)) return;
    // 80C50580: bl      0x8045F7C8
    {
            ctx->lr = 0x80C50584u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C50584:
    ctx->pc = 0x80C50584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50584: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50588:
    ctx->pc = 0x80C50588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50588u)) return;
    // 80C50588: bl      0x8045EC10
    {
            ctx->lr = 0x80C5058Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C5058C:
    ctx->pc = 0x80C5058Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5058Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5058C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50590:
    ctx->pc = 0x80C50590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50590u)) return;
    // 80C50590: bl      0x8045F220
    {
            ctx->lr = 0x80C50594u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C50594:
    ctx->pc = 0x80C50594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C50594: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C50598:
    ctx->pc = 0x80C50598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50598u)) return;
    // 80C50598: addi    r4, r4, -240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-240);

label_80C5059C:
    ctx->pc = 0x80C5059Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5059Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5059C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5059Cu)) return;
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
label_80C505A0:
    ctx->pc = 0x80C505A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505A0u)) return;
    // 80C505A0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C505A4:
    ctx->pc = 0x80C505A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505A4u)) return;
    // 80C505A4: addi    r4, r4, -236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-236);

label_80C505A8:
    ctx->pc = 0x80C505A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C505A8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C505A8u)) return;
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
label_80C505AC:
    ctx->pc = 0x80C505ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505ACu)) return;
    // 80C505AC: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C505B0:
    ctx->pc = 0x80C505B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505B0u)) return;
    // 80C505B0: addi    r4, r4, -232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-232);

label_80C505B4:
    ctx->pc = 0x80C505B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C505B4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C505B4u)) return;
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
label_80C505B8:
    ctx->pc = 0x80C505B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505B8u)) return;
    // 80C505B8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C505BCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C505BC:
    ctx->pc = 0x80C505BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C505BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C505BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C505C0:
    ctx->pc = 0x80C505C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505C0u)) return;
    // 80C505C0: bl      0x8045F220
    {
            ctx->lr = 0x80C505C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C505C4:
    ctx->pc = 0x80C505C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C505C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C505C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C505C8:
    ctx->pc = 0x80C505C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505C8u)) return;
    // 80C505C8: li      r5, 26388
    ctx->gpr[5] = (u32)(s32)(26388);

label_80C505CC:
    ctx->pc = 0x80C505CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505CCu)) return;
    // 80C505CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C505D0:
    ctx->pc = 0x80C505D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505D0u)) return;
    // 80C505D0: bl      0x8045EEA8
    {
            ctx->lr = 0x80C505D4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C505D4:
    ctx->pc = 0x80C505D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C505D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C505D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C505D8:
    ctx->pc = 0x80C505D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505D8u)) return;
    // 80C505D8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C505DCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C505DC:
    ctx->pc = 0x80C505DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C505DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C505DC: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80C505E0:
    ctx->pc = 0x80C505E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505E0u)) return;
    // 80C505E0: bl      0x80406090
    {
            ctx->lr = 0x80C505E4u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C505E4:
    ctx->pc = 0x80C505E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C505E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C505E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C505E8:
    ctx->pc = 0x80C505E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505E8u)) return;
    // 80C505E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C505EC:
    ctx->pc = 0x80C505ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505ECu)) return;
    // 80C505EC: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C505F0:
    ctx->pc = 0x80C505F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505F0u)) return;
    // 80C505F0: addi    r5, r5, -228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-228);

label_80C505F4:
    ctx->pc = 0x80C505F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C505F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C505F4u)) return;
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
label_80C505F8:
    ctx->pc = 0x80C505F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505F8u)) return;
    // 80C505F8: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C505FC:
    ctx->pc = 0x80C505FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C505FCu)) return;
    // 80C505FC: addi    r5, r5, -224
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-224);

label_80C50600:
    ctx->pc = 0x80C50600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50600: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C50600u)) return;
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
label_80C50604:
    ctx->pc = 0x80C50604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50604u)) return;
    // 80C50604: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C50608:
    ctx->pc = 0x80C50608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50608u)) return;
    // 80C50608: addi    r5, r5, -220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-220);

label_80C5060C:
    ctx->pc = 0x80C5060Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5060Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5060C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5060Cu)) return;
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
label_80C50610:
    ctx->pc = 0x80C50610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50610u)) return;
    // 80C50610: bl      0x8045C750
    {
            ctx->lr = 0x80C50614u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C50614:
    ctx->pc = 0x80C50614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50614: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50618:
    ctx->pc = 0x80C50618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50618u)) return;
    // 80C50618: bl      0x8045F220
    {
            ctx->lr = 0x80C5061Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5061C:
    ctx->pc = 0x80C5061Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5061Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5061C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C50620:
    ctx->pc = 0x80C50620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50620u)) return;
    // 80C50620: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C50624:
    ctx->pc = 0x80C50624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50624u)) return;
    // 80C50624: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C50628:
    ctx->pc = 0x80C50628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50628u)) return;
    // 80C50628: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C5062C:
    ctx->pc = 0x80C5062Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5062Cu)) return;
    // 80C5062C: addi    r6, r6, -216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-216);

label_80C50630:
    ctx->pc = 0x80C50630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50630: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C50630u)) return;
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
label_80C50634:
    ctx->pc = 0x80C50634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50634u)) return;
    // 80C50634: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C50638:
    ctx->pc = 0x80C50638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50638u)) return;
    // 80C50638: addi    r6, r6, -212
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-212);

label_80C5063C:
    ctx->pc = 0x80C5063Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5063Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5063C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5063Cu)) return;
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
label_80C50640:
    ctx->pc = 0x80C50640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50640u)) return;
    // 80C50640: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80C50640u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80C50644:
    ctx->pc = 0x80C50644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50644u)) return;
    // 80C50644: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C50648:
    ctx->pc = 0x80C50648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50648u)) return;
    // 80C50648: bl      0x8045C3C0
    {
            ctx->lr = 0x80C5064Cu;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80C5064C:
    ctx->pc = 0x80C5064Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5064Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5064C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50650:
    ctx->pc = 0x80C50650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50650u)) return;
    // 80C50650: bl      0x8045F220
    {
            ctx->lr = 0x80C50654u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C50654:
    ctx->pc = 0x80C50654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50654: bl      0x8045EB8C
    {
            ctx->lr = 0x80C50658u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C50658:
    ctx->pc = 0x80C50658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50658: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5065C:
    ctx->pc = 0x80C5065Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5065Cu)) return;
    // 80C5065C: bl      0x8045F220
    {
            ctx->lr = 0x80C50660u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C50660:
    ctx->pc = 0x80C50660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C50660: lis     r4, -28570
    ctx->gpr[4] = ((u32)(s32)(-28570) << 16);

label_80C50664:
    ctx->pc = 0x80C50664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50664u)) return;
    // 80C50664: addi    r4, r4, -18088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18088);

label_80C50668:
    ctx->pc = 0x80C50668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50668u)) return;
    // 80C50668: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C5066C:
    ctx->pc = 0x80C5066Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5066Cu)) return;
    // 80C5066C: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C50670:
    ctx->pc = 0x80C50670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50670u)) return;
    // 80C50670: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C50674:
    ctx->pc = 0x80C50674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50674u)) return;
    // 80C50674: addi    r6, r6, -208
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-208);

label_80C50678:
    ctx->pc = 0x80C50678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C50678: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C50678u)) return;
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
label_80C5067C:
    ctx->pc = 0x80C5067Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5067Cu)) return;
    // 80C5067C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C50680:
    ctx->pc = 0x80C50680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50680u)) return;
    // 80C50680: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C50684:
    ctx->pc = 0x80C50684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50684u)) return;
    // 80C50684: bl      0x8045EBE4
    {
            ctx->lr = 0x80C50688u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C50688:
    ctx->pc = 0x80C50688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50688: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5068C:
    ctx->pc = 0x80C5068Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5068Cu)) return;
    // 80C5068C: bl      0x8045F220
    {
            ctx->lr = 0x80C50690u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C50690:
    ctx->pc = 0x80C50690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C50690: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C50694:
    ctx->pc = 0x80C50694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50694u)) return;
    // 80C50694: addi    r4, r4, -204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-204);

label_80C50698:
    ctx->pc = 0x80C50698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C50698: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C50698u)) return;
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
label_80C5069C:
    ctx->pc = 0x80C5069Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5069Cu)) return;
    // 80C5069C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C506A0:
    ctx->pc = 0x80C506A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506A0u)) return;
    // 80C506A0: addi    r4, r4, -200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-200);

label_80C506A4:
    ctx->pc = 0x80C506A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C506A4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C506A4u)) return;
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
label_80C506A8:
    ctx->pc = 0x80C506A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506A8u)) return;
    // 80C506A8: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C506AC:
    ctx->pc = 0x80C506ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506ACu)) return;
    // 80C506AC: addi    r4, r4, -196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-196);

label_80C506B0:
    ctx->pc = 0x80C506B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C506B0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C506B0u)) return;
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
label_80C506B4:
    ctx->pc = 0x80C506B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506B4u)) return;
    // 80C506B4: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C506B8:
    ctx->pc = 0x80C506B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506B8u)) return;
    // 80C506B8: addi    r4, r4, -208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-208);

label_80C506BC:
    ctx->pc = 0x80C506BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C506BC: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C506BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C506C0:
    ctx->pc = 0x80C506C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506C0u)) return;
    // 80C506C0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C506C4:
    ctx->pc = 0x80C506C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506C4u)) return;
    // 80C506C4: addi    r4, r4, -192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-192);

label_80C506C8:
    ctx->pc = 0x80C506C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C506C8: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C506C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C506CC:
    ctx->pc = 0x80C506CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506CCu)) return;
    // 80C506CC: bl      0x8045E570
    {
            ctx->lr = 0x80C506D0u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C506D0:
    ctx->pc = 0x80C506D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C506D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C506D0: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80C506D4:
    ctx->pc = 0x80C506D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506D4u)) return;
    // 80C506D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C506D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C506D8:
    ctx->pc = 0x80C506D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C506D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C506D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C506DC:
    ctx->pc = 0x80C506DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506DCu)) return;
    // 80C506DC: bl      0x8045F220
    {
            ctx->lr = 0x80C506E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C506E0:
    ctx->pc = 0x80C506E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C506E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C506E0: bl      0x8045EB8C
    {
            ctx->lr = 0x80C506E4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C506E4:
    ctx->pc = 0x80C506E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C506E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C506E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C506E8:
    ctx->pc = 0x80C506E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506E8u)) return;
    // 80C506E8: bl      0x8045F220
    {
            ctx->lr = 0x80C506ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C506EC:
    ctx->pc = 0x80C506ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C506ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C506EC: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C506F0:
    ctx->pc = 0x80C506F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506F0u)) return;
    // 80C506F0: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C506F4:
    ctx->pc = 0x80C506F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506F4u)) return;
    // 80C506F4: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C506F8:
    ctx->pc = 0x80C506F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506F8u)) return;
    // 80C506F8: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C506FC:
    ctx->pc = 0x80C506FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C506FCu)) return;
    // 80C506FC: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C50700:
    ctx->pc = 0x80C50700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50700u)) return;
    // 80C50700: addi    r6, r6, -188
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-188);

label_80C50704:
    ctx->pc = 0x80C50704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C50704: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C50704u)) return;
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
label_80C50708:
    ctx->pc = 0x80C50708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50708u)) return;
    // 80C50708: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5070C:
    ctx->pc = 0x80C5070Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5070Cu)) return;
    // 80C5070C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C50710:
    ctx->pc = 0x80C50710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50710u)) return;
    // 80C50710: bl      0x8045EBE4
    {
            ctx->lr = 0x80C50714u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C50714:
    ctx->pc = 0x80C50714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50714: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C50718:
    ctx->pc = 0x80C50718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50718u)) return;
    // 80C50718: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5071Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5071C:
    ctx->pc = 0x80C5071Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5071Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5071C: bl      0x8045C4A4
    {
            ctx->lr = 0x80C50720u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80C50720:
    ctx->pc = 0x80C50720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C50720: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50724:
    ctx->pc = 0x80C50724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50724u)) return;
    // 80C50724: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C50728:
    ctx->pc = 0x80C50728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50728u)) return;
    // 80C50728: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C5072C:
    ctx->pc = 0x80C5072Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5072Cu)) return;
    // 80C5072C: addi    r5, r5, -184
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-184);

label_80C50730:
    ctx->pc = 0x80C50730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C50730: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C50730u)) return;
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
label_80C50734:
    ctx->pc = 0x80C50734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50734u)) return;
    // 80C50734: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C50738:
    ctx->pc = 0x80C50738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50738u)) return;
    // 80C50738: addi    r5, r5, -180
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-180);

label_80C5073C:
    ctx->pc = 0x80C5073Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5073Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5073C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5073Cu)) return;
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
label_80C50740:
    ctx->pc = 0x80C50740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50740u)) return;
    // 80C50740: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C50744:
    ctx->pc = 0x80C50744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50744u)) return;
    // 80C50744: addi    r5, r5, -176
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-176);

label_80C50748:
    ctx->pc = 0x80C50748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C50748: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C50748u)) return;
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
label_80C5074C:
    ctx->pc = 0x80C5074Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5074Cu)) return;
    // 80C5074C: bl      0x8045C750
    {
            ctx->lr = 0x80C50750u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C50750:
    ctx->pc = 0x80C50750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C50750: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50754:
    ctx->pc = 0x80C50754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50754u)) return;
    // 80C50754: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C50758:
    ctx->pc = 0x80C50758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50758u)) return;
    // 80C50758: li      r5, 2083
    ctx->gpr[5] = (u32)(s32)(2083);

label_80C5075C:
    ctx->pc = 0x80C5075Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5075Cu)) return;
    // 80C5075C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C50760:
    ctx->pc = 0x80C50760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50760u)) return;
    // 80C50760: addi    r6, r6, -27041
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27041);

label_80C50764:
    ctx->pc = 0x80C50764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50764u)) return;
    // 80C50764: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C50768:
    ctx->pc = 0x80C50768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50768u)) return;
    // 80C50768: bl      0x8045C7B4
    {
            ctx->lr = 0x80C5076Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C5076C:
    ctx->pc = 0x80C5076Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5076Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5076C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50770:
    ctx->pc = 0x80C50770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50770u)) return;
    // 80C50770: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80C50774:
    ctx->pc = 0x80C50774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50774u)) return;
    // 80C50774: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C50778:
    ctx->pc = 0x80C50778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50778u)) return;
    // 80C50778: addi    r5, r5, -172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-172);

label_80C5077C:
    ctx->pc = 0x80C5077Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5077Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5077C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5077Cu)) return;
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
label_80C50780:
    ctx->pc = 0x80C50780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50780u)) return;
    // 80C50780: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C50784:
    ctx->pc = 0x80C50784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50784u)) return;
    // 80C50784: addi    r5, r5, -168
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-168);

label_80C50788:
    ctx->pc = 0x80C50788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50788: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C50788u)) return;
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
label_80C5078C:
    ctx->pc = 0x80C5078Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5078Cu)) return;
    // 80C5078C: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C50790:
    ctx->pc = 0x80C50790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50790u)) return;
    // 80C50790: addi    r5, r5, -164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-164);

label_80C50794:
    ctx->pc = 0x80C50794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C50794: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C50794u)) return;
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
label_80C50798:
    ctx->pc = 0x80C50798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50798u)) return;
    // 80C50798: bl      0x8045C750
    {
            ctx->lr = 0x80C5079Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C5079C:
    ctx->pc = 0x80C5079Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5079Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C5079C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C507A0:
    ctx->pc = 0x80C507A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507A0u)) return;
    // 80C507A0: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80C507A4:
    ctx->pc = 0x80C507A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507A4u)) return;
    // 80C507A4: li      r5, 803
    ctx->gpr[5] = (u32)(s32)(803);

label_80C507A8:
    ctx->pc = 0x80C507A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507A8u)) return;
    // 80C507A8: li      r6, 29535
    ctx->gpr[6] = (u32)(s32)(29535);

label_80C507AC:
    ctx->pc = 0x80C507ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507ACu)) return;
    // 80C507AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C507B0:
    ctx->pc = 0x80C507B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507B0u)) return;
    // 80C507B0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C507B4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C507B4:
    ctx->pc = 0x80C507B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C507B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C507B4: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80C507B8:
    ctx->pc = 0x80C507B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507B8u)) return;
    // 80C507B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C507BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C507BC:
    ctx->pc = 0x80C507BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C507BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C507BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C507C0:
    ctx->pc = 0x80C507C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507C0u)) return;
    // 80C507C0: bl      0x8045F220
    {
            ctx->lr = 0x80C507C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C507C4:
    ctx->pc = 0x80C507C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C507C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C507C4: bl      0x8045C034
    {
            ctx->lr = 0x80C507C8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C507C8:
    ctx->pc = 0x80C507C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C507C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C507C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C507CC:
    ctx->pc = 0x80C507CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507CCu)) return;
    // 80C507CC: bl      0x8045F220
    {
            ctx->lr = 0x80C507D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C507D0:
    ctx->pc = 0x80C507D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C507D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C507D0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C507D4:
    ctx->pc = 0x80C507D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507D4u)) return;
    // 80C507D4: addi    r4, r4, 408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(408);

label_80C507D8:
    ctx->pc = 0x80C507D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507D8u)) return;
    // 80C507D8: bl      0x8045C060
    {
            ctx->lr = 0x80C507DCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C507DC:
    ctx->pc = 0x80C507DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C507DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C507DC: li      r3, 1126
    ctx->gpr[3] = (u32)(s32)(1126);

label_80C507E0:
    ctx->pc = 0x80C507E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507E0u)) return;
    // 80C507E0: bl      0x8045BFA0
    {
            ctx->lr = 0x80C507E4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C507E4:
    ctx->pc = 0x80C507E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C507E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C507E4: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80C507E8:
    ctx->pc = 0x80C507E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507E8u)) return;
    // 80C507E8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C507EC:
    ctx->pc = 0x80C507ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507ECu)) return;
    // 80C507EC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C507F0:
    ctx->pc = 0x80C507F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C507F0: lwz     r0, 0(r4)
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
label_80C507F4:
    ctx->pc = 0x80C507F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507F4u)) return;
    // 80C507F4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C507F8:
    ctx->pc = 0x80C507F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507F8u)) return;
    // 80C507F8: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C507FC:
    ctx->pc = 0x80C507FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C507FCu)) return;
    // 80C507FC: addi    r4, r4, 380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(380);

label_80C50800:
    ctx->pc = 0x80C50800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50800: lwzx    r4, r4, r0
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
label_80C50804:
    ctx->pc = 0x80C50804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C50804: lwz     r4, 0(r4)
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
label_80C50808:
    ctx->pc = 0x80C50808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50808u)) return;
    // 80C50808: bl      0x8045F608
    {
            ctx->lr = 0x80C5080Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C5080C:
    ctx->pc = 0x80C5080Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5080Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5080C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50810:
    ctx->pc = 0x80C50810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50810u)) return;
    // 80C50810: bl      0x8045F220
    {
            ctx->lr = 0x80C50814u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C50814:
    ctx->pc = 0x80C50814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50814: bl      0x8045C034
    {
            ctx->lr = 0x80C50818u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C50818:
    ctx->pc = 0x80C50818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50818: bl      0x8045F32C
    {
            ctx->lr = 0x80C5081Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C5081C:
    ctx->pc = 0x80C5081Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5081Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5081C: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80C50820:
    ctx->pc = 0x80C50820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50820u)) return;
    // 80C50820: bl      0x8045F7C8
    {
            ctx->lr = 0x80C50824u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C50824:
    ctx->pc = 0x80C50824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50824: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50828:
    ctx->pc = 0x80C50828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50828u)) return;
    // 80C50828: bl      0x8045F220
    {
            ctx->lr = 0x80C5082Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5082C:
    ctx->pc = 0x80C5082Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5082Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5082C: bl      0x8045C034
    {
            ctx->lr = 0x80C50830u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C50830:
    ctx->pc = 0x80C50830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50834:
    ctx->pc = 0x80C50834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50834u)) return;
    // 80C50834: bl      0x8045F220
    {
            ctx->lr = 0x80C50838u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C50838:
    ctx->pc = 0x80C50838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C50838: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C5083C:
    ctx->pc = 0x80C5083Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5083Cu)) return;
    // 80C5083C: addi    r4, r4, 408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(408);

label_80C50840:
    ctx->pc = 0x80C50840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50840u)) return;
    // 80C50840: bl      0x8045C060
    {
            ctx->lr = 0x80C50844u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C50844:
    ctx->pc = 0x80C50844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50844: li      r3, 1127
    ctx->gpr[3] = (u32)(s32)(1127);

label_80C50848:
    ctx->pc = 0x80C50848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50848u)) return;
    // 80C50848: bl      0x8045BFA0
    {
            ctx->lr = 0x80C5084Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C5084C:
    ctx->pc = 0x80C5084Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5084Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C5084C: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C50850:
    ctx->pc = 0x80C50850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50850u)) return;
    // 80C50850: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C50854:
    ctx->pc = 0x80C50854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50854u)) return;
    // 80C50854: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C50858:
    ctx->pc = 0x80C50858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50858: lwz     r0, 0(r4)
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
label_80C5085C:
    ctx->pc = 0x80C5085Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5085Cu)) return;
    // 80C5085C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C50860:
    ctx->pc = 0x80C50860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50860u)) return;
    // 80C50860: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C50864:
    ctx->pc = 0x80C50864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50864u)) return;
    // 80C50864: addi    r4, r4, 380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(380);

label_80C50868:
    ctx->pc = 0x80C50868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50868: lwzx    r4, r4, r0
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
label_80C5086C:
    ctx->pc = 0x80C5086Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5086Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5086C: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50870:
    ctx->pc = 0x80C50870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50870u)) return;
    // 80C50870: bl      0x8045F608
    {
            ctx->lr = 0x80C50874u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C50874:
    ctx->pc = 0x80C50874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50874: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50878:
    ctx->pc = 0x80C50878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50878u)) return;
    // 80C50878: bl      0x8045F220
    {
            ctx->lr = 0x80C5087Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5087C:
    ctx->pc = 0x80C5087Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5087Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5087C: bl      0x8045C034
    {
            ctx->lr = 0x80C50880u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C50880:
    ctx->pc = 0x80C50880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50880: bl      0x8045F32C
    {
            ctx->lr = 0x80C50884u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C50884:
    ctx->pc = 0x80C50884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50884: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C50888:
    ctx->pc = 0x80C50888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50888u)) return;
    // 80C50888: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5088Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5088C:
    ctx->pc = 0x80C5088Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5088Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5088C: b       0x80C508E8
    {
            goto label_80C508E8;
    }

label_80C50890:
    ctx->pc = 0x80C50890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50890: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C50894:
    ctx->pc = 0x80C50894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50894u)) return;
    // 80C50894: bl      0x8045EC10
    {
            ctx->lr = 0x80C50898u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C50898:
    ctx->pc = 0x80C50898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50898: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5089C:
    ctx->pc = 0x80C5089Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5089Cu)) return;
    // 80C5089C: bl      0x8045F220
    {
            ctx->lr = 0x80C508A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C508A0:
    ctx->pc = 0x80C508A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C508A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C508A0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C508A4:
    ctx->pc = 0x80C508A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508A4u)) return;
    // 80C508A4: addi    r4, r4, -160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-160);

label_80C508A8:
    ctx->pc = 0x80C508A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C508A8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C508A8u)) return;
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
label_80C508AC:
    ctx->pc = 0x80C508ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508ACu)) return;
    // 80C508AC: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C508B0:
    ctx->pc = 0x80C508B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508B0u)) return;
    // 80C508B0: addi    r4, r4, -236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-236);

label_80C508B4:
    ctx->pc = 0x80C508B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C508B4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C508B4u)) return;
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
label_80C508B8:
    ctx->pc = 0x80C508B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508B8u)) return;
    // 80C508B8: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C508BC:
    ctx->pc = 0x80C508BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508BCu)) return;
    // 80C508BC: addi    r4, r4, -156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-156);

label_80C508C0:
    ctx->pc = 0x80C508C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C508C0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C508C0u)) return;
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
label_80C508C4:
    ctx->pc = 0x80C508C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508C4u)) return;
    // 80C508C4: bl      0x8045EF2C
    {
            ctx->lr = 0x80C508C8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C508C8:
    ctx->pc = 0x80C508C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C508C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C508C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C508CC:
    ctx->pc = 0x80C508CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508CCu)) return;
    // 80C508CC: bl      0x8045F220
    {
            ctx->lr = 0x80C508D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C508D0:
    ctx->pc = 0x80C508D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C508D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C508D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C508D4:
    ctx->pc = 0x80C508D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508D4u)) return;
    // 80C508D4: li      r5, 26064
    ctx->gpr[5] = (u32)(s32)(26064);

label_80C508D8:
    ctx->pc = 0x80C508D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508D8u)) return;
    // 80C508D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C508DC:
    ctx->pc = 0x80C508DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508DCu)) return;
    // 80C508DC: bl      0x8045EEA8
    {
            ctx->lr = 0x80C508E0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C508E0:
    ctx->pc = 0x80C508E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C508E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C508E0: bl      0x8045DE34
    {
            ctx->lr = 0x80C508E4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C508E4:
    ctx->pc = 0x80C508E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C508E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C508E4: bl      0x80460A80
    {
            ctx->lr = 0x80C508E8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C508E8:
    ctx->pc = 0x80C508E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C508E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C508E8: lwz     r0, 20(r1)
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
label_80C508EC:
    ctx->pc = 0x80C508ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C508ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C508EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C508F0:
    ctx->pc = 0x80C508F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508F0u)) return;
    // 80C508F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C508F4:
    ctx->pc = 0x80C508F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C508F4u)) return;
    // 80C508F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C50540;
        }
    }

    ctx->pc = 0x80C508F8u;
    return;
return_dispatch_80C50540:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C50574u: goto label_80C50574;
    case 0x80C50578u: goto label_80C50578;
    case 0x80C5057Cu: goto label_80C5057C;
    case 0x80C50584u: goto label_80C50584;
    case 0x80C5058Cu: goto label_80C5058C;
    case 0x80C50594u: goto label_80C50594;
    case 0x80C505BCu: goto label_80C505BC;
    case 0x80C505C4u: goto label_80C505C4;
    case 0x80C505D4u: goto label_80C505D4;
    case 0x80C505DCu: goto label_80C505DC;
    case 0x80C505E4u: goto label_80C505E4;
    case 0x80C50614u: goto label_80C50614;
    case 0x80C5061Cu: goto label_80C5061C;
    case 0x80C5064Cu: goto label_80C5064C;
    case 0x80C50654u: goto label_80C50654;
    case 0x80C50658u: goto label_80C50658;
    case 0x80C50660u: goto label_80C50660;
    case 0x80C50688u: goto label_80C50688;
    case 0x80C50690u: goto label_80C50690;
    case 0x80C506D0u: goto label_80C506D0;
    case 0x80C506D8u: goto label_80C506D8;
    case 0x80C506E0u: goto label_80C506E0;
    case 0x80C506E4u: goto label_80C506E4;
    case 0x80C506ECu: goto label_80C506EC;
    case 0x80C50714u: goto label_80C50714;
    case 0x80C5071Cu: goto label_80C5071C;
    case 0x80C50720u: goto label_80C50720;
    case 0x80C50750u: goto label_80C50750;
    case 0x80C5076Cu: goto label_80C5076C;
    case 0x80C5079Cu: goto label_80C5079C;
    case 0x80C507B4u: goto label_80C507B4;
    case 0x80C507BCu: goto label_80C507BC;
    case 0x80C507C4u: goto label_80C507C4;
    case 0x80C507C8u: goto label_80C507C8;
    case 0x80C507D0u: goto label_80C507D0;
    case 0x80C507DCu: goto label_80C507DC;
    case 0x80C507E4u: goto label_80C507E4;
    case 0x80C5080Cu: goto label_80C5080C;
    case 0x80C50814u: goto label_80C50814;
    case 0x80C50818u: goto label_80C50818;
    case 0x80C5081Cu: goto label_80C5081C;
    case 0x80C50824u: goto label_80C50824;
    case 0x80C5082Cu: goto label_80C5082C;
    case 0x80C50830u: goto label_80C50830;
    case 0x80C50838u: goto label_80C50838;
    case 0x80C50844u: goto label_80C50844;
    case 0x80C5084Cu: goto label_80C5084C;
    case 0x80C50874u: goto label_80C50874;
    case 0x80C5087Cu: goto label_80C5087C;
    case 0x80C50880u: goto label_80C50880;
    case 0x80C50884u: goto label_80C50884;
    case 0x80C5088Cu: goto label_80C5088C;
    case 0x80C50898u: goto label_80C50898;
    case 0x80C508A0u: goto label_80C508A0;
    case 0x80C508C8u: goto label_80C508C8;
    case 0x80C508D0u: goto label_80C508D0;
    case 0x80C508E0u: goto label_80C508E0;
    case 0x80C508E4u: goto label_80C508E4;
    case 0x80C508E8u: goto label_80C508E8;
    default: return;
    }
}

