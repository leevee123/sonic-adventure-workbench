// DolRecomp output
#include "../generated.h"

void func_80D351A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D351A0[113] = {
        &&label_80D351A0,
        &&label_80D351A4,
        &&label_80D351A8,
        &&label_80D351AC,
        &&label_80D351B0,
        &&label_80D351B4,
        &&label_80D351B8,
        &&label_80D351BC,
        &&label_80D351C0,
        &&label_80D351C4,
        &&label_80D351C8,
        &&label_80D351CC,
        &&label_80D351D0,
        &&label_80D351D4,
        &&label_80D351D8,
        &&label_80D351DC,
        &&label_80D351E0,
        &&label_80D351E4,
        &&label_80D351E8,
        &&label_80D351EC,
        &&label_80D351F0,
        &&label_80D351F4,
        &&label_80D351F8,
        &&label_80D351FC,
        &&label_80D35200,
        &&label_80D35204,
        &&label_80D35208,
        &&label_80D3520C,
        &&label_80D35210,
        &&label_80D35214,
        &&label_80D35218,
        &&label_80D3521C,
        &&label_80D35220,
        &&label_80D35224,
        &&label_80D35228,
        &&label_80D3522C,
        &&label_80D35230,
        &&label_80D35234,
        &&label_80D35238,
        &&label_80D3523C,
        &&label_80D35240,
        &&label_80D35244,
        &&label_80D35248,
        &&label_80D3524C,
        &&label_80D35250,
        &&label_80D35254,
        &&label_80D35258,
        &&label_80D3525C,
        &&label_80D35260,
        &&label_80D35264,
        &&label_80D35268,
        &&label_80D3526C,
        &&label_80D35270,
        &&label_80D35274,
        &&label_80D35278,
        &&label_80D3527C,
        &&label_80D35280,
        &&label_80D35284,
        &&label_80D35288,
        &&label_80D3528C,
        &&label_80D35290,
        &&label_80D35294,
        &&label_80D35298,
        &&label_80D3529C,
        &&label_80D352A0,
        &&label_80D352A4,
        &&label_80D352A8,
        &&label_80D352AC,
        &&label_80D352B0,
        &&label_80D352B4,
        &&label_80D352B8,
        &&label_80D352BC,
        &&label_80D352C0,
        &&label_80D352C4,
        &&label_80D352C8,
        &&label_80D352CC,
        &&label_80D352D0,
        &&label_80D352D4,
        &&label_80D352D8,
        &&label_80D352DC,
        &&label_80D352E0,
        &&label_80D352E4,
        &&label_80D352E8,
        &&label_80D352EC,
        &&label_80D352F0,
        &&label_80D352F4,
        &&label_80D352F8,
        &&label_80D352FC,
        &&label_80D35300,
        &&label_80D35304,
        &&label_80D35308,
        &&label_80D3530C,
        &&label_80D35310,
        &&label_80D35314,
        &&label_80D35318,
        &&label_80D3531C,
        &&label_80D35320,
        &&label_80D35324,
        &&label_80D35328,
        &&label_80D3532C,
        &&label_80D35330,
        &&label_80D35334,
        &&label_80D35338,
        &&label_80D3533C,
        &&label_80D35340,
        &&label_80D35344,
        &&label_80D35348,
        &&label_80D3534C,
        &&label_80D35350,
        &&label_80D35354,
        &&label_80D35358,
        &&label_80D3535C,
        &&label_80D35360
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D351A0u && pc <= 0x80D35360u && ((pc - 0x80D351A0u) & 3u) == 0u)
            goto *pc_table_80D351A0[(pc - 0x80D351A0u) >> 2];
    }
    return;
label_80D351A0:
    ctx->pc = 0x80D351A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D351A0: stwu     r1, -16(r1)
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
label_80D351A4:
    ctx->pc = 0x80D351A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D351A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D351A8:
    ctx->pc = 0x80D351A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D351A8: stw     r0, 20(r1)
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
label_80D351AC:
    ctx->pc = 0x80D351ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351ACu)) return;
    // 80D351AC: cmpwi   r3, 2
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

label_80D351B0:
    ctx->pc = 0x80D351B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351B0u)) return;
    // 80D351B0: bc    12, 2, 0x80D3534C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3534C;
        }
    }

label_80D351B4:
    ctx->pc = 0x80D351B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D351B4: bc    4, 0, 0x80D351C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D351C8;
        }
    }

label_80D351B8:
    ctx->pc = 0x80D351B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D351B8: cmpwi   r3, 0
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

label_80D351BC:
    ctx->pc = 0x80D351BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351BCu)) return;
    // 80D351BC: bc    12, 2, 0x80D35354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D35354;
        }
    }

label_80D351C0:
    ctx->pc = 0x80D351C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D351C0: bc    4, 0, 0x80D351D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D351D0;
        }
    }

label_80D351C4:
    ctx->pc = 0x80D351C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D351C4: b       0x80D35354
    {
            goto label_80D35354;
    }

label_80D351C8:
    ctx->pc = 0x80D351C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D351C8: cmpwi   r3, 4
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

label_80D351CC:
    ctx->pc = 0x80D351CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351CCu)) return;
    // 80D351CC: b       0x80D35354
    {
            goto label_80D35354;
    }

label_80D351D0:
    ctx->pc = 0x80D351D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D351D0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D351D4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D351D4:
    ctx->pc = 0x80D351D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D351D4: bl      0x80460A60
    {
            ctx->lr = 0x80D351D8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D351D8:
    ctx->pc = 0x80D351D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D351D8: bl      0x80460A24
    {
            ctx->lr = 0x80D351DCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D351DC:
    ctx->pc = 0x80D351DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D351DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D351DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D351E0:
    ctx->pc = 0x80D351E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351E0u)) return;
    // 80D351E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D351E4:
    ctx->pc = 0x80D351E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351E4u)) return;
    // 80D351E4: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D351E8:
    ctx->pc = 0x80D351E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351E8u)) return;
    // 80D351E8: addi    r5, r5, -16720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16720);

label_80D351EC:
    ctx->pc = 0x80D351ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D351EC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D351ECu)) return;
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
label_80D351F0:
    ctx->pc = 0x80D351F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351F0u)) return;
    // 80D351F0: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D351F4:
    ctx->pc = 0x80D351F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351F4u)) return;
    // 80D351F4: addi    r5, r5, -16716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16716);

label_80D351F8:
    ctx->pc = 0x80D351F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D351F8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D351F8u)) return;
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
label_80D351FC:
    ctx->pc = 0x80D351FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D351FCu)) return;
    // 80D351FC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35200:
    ctx->pc = 0x80D35200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35200u)) return;
    // 80D35200: addi    r5, r5, -16712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16712);

label_80D35204:
    ctx->pc = 0x80D35204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35204: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35204u)) return;
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
label_80D35208:
    ctx->pc = 0x80D35208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35208u)) return;
    // 80D35208: bl      0x8045C750
    {
            ctx->lr = 0x80D3520Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D3520C:
    ctx->pc = 0x80D3520Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3520Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3520C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35210:
    ctx->pc = 0x80D35210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35210u)) return;
    // 80D35210: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35214:
    ctx->pc = 0x80D35214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35214u)) return;
    // 80D35214: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80D35218:
    ctx->pc = 0x80D35218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35218u)) return;
    // 80D35218: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D3521C:
    ctx->pc = 0x80D3521Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3521Cu)) return;
    // 80D3521C: addi    r6, r6, -6656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6656);

label_80D35220:
    ctx->pc = 0x80D35220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35220u)) return;
    // 80D35220: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D35224:
    ctx->pc = 0x80D35224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35224u)) return;
    // 80D35224: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35228u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35228:
    ctx->pc = 0x80D35228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35228: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3522C:
    ctx->pc = 0x80D3522Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3522Cu)) return;
    // 80D3522C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D35230:
    ctx->pc = 0x80D35230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35230u)) return;
    // 80D35230: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35234:
    ctx->pc = 0x80D35234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35234u)) return;
    // 80D35234: addi    r5, r5, -16708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16708);

label_80D35238:
    ctx->pc = 0x80D35238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35238: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35238u)) return;
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
label_80D3523C:
    ctx->pc = 0x80D3523Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3523Cu)) return;
    // 80D3523C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35240:
    ctx->pc = 0x80D35240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35240u)) return;
    // 80D35240: addi    r5, r5, -16716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16716);

label_80D35244:
    ctx->pc = 0x80D35244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35244: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35244u)) return;
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
label_80D35248:
    ctx->pc = 0x80D35248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35248u)) return;
    // 80D35248: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3524C:
    ctx->pc = 0x80D3524Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3524Cu)) return;
    // 80D3524C: addi    r5, r5, -16704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16704);

label_80D35250:
    ctx->pc = 0x80D35250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35250: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35250u)) return;
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
label_80D35254:
    ctx->pc = 0x80D35254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35254u)) return;
    // 80D35254: bl      0x8045C750
    {
            ctx->lr = 0x80D35258u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35258:
    ctx->pc = 0x80D35258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35258: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D3525C:
    ctx->pc = 0x80D3525Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3525Cu)) return;
    // 80D3525C: bl      0x80406090
    {
            ctx->lr = 0x80D35260u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D35260:
    ctx->pc = 0x80D35260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35260: li      r3, 1708
    ctx->gpr[3] = (u32)(s32)(1708);

label_80D35264:
    ctx->pc = 0x80D35264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35264u)) return;
    // 80D35264: bl      0x8045BFA0
    {
            ctx->lr = 0x80D35268u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D35268:
    ctx->pc = 0x80D35268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D35268: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D3526C:
    ctx->pc = 0x80D3526Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3526Cu)) return;
    // 80D3526C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D35270:
    ctx->pc = 0x80D35270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35270: lwz     r0, 0(r3)
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
label_80D35274:
    ctx->pc = 0x80D35274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35274u)) return;
    // 80D35274: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35278:
    ctx->pc = 0x80D35278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35278u)) return;
    // 80D35278: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D3527C:
    ctx->pc = 0x80D3527Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3527Cu)) return;
    // 80D3527C: addi    r3, r3, -16116
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16116);

label_80D35280:
    ctx->pc = 0x80D35280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35280: lwzx    r3, r3, r0
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
label_80D35284:
    ctx->pc = 0x80D35284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35284: lwz     r3, 0(r3)
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
label_80D35288:
    ctx->pc = 0x80D35288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35288u)) return;
    // 80D35288: bl      0x8045F6FC
    {
            ctx->lr = 0x80D3528Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D3528C:
    ctx->pc = 0x80D3528Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3528Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3528C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D35290:
    ctx->pc = 0x80D35290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35290u)) return;
    // 80D35290: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35294u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35294:
    ctx->pc = 0x80D35294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35294: bl      0x8045BFF4
    {
            ctx->lr = 0x80D35298u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D35298:
    ctx->pc = 0x80D35298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35298: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3529C:
    ctx->pc = 0x80D3529Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3529Cu)) return;
    // 80D3529C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D352A0:
    ctx->pc = 0x80D352A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352A0u)) return;
    // 80D352A0: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D352A4:
    ctx->pc = 0x80D352A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352A4u)) return;
    // 80D352A4: addi    r5, r5, -16700
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16700);

label_80D352A8:
    ctx->pc = 0x80D352A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D352A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D352A8u)) return;
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
label_80D352AC:
    ctx->pc = 0x80D352ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352ACu)) return;
    // 80D352AC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D352B0:
    ctx->pc = 0x80D352B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352B0u)) return;
    // 80D352B0: addi    r5, r5, -16696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16696);

label_80D352B4:
    ctx->pc = 0x80D352B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D352B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D352B4u)) return;
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
label_80D352B8:
    ctx->pc = 0x80D352B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352B8u)) return;
    // 80D352B8: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D352BC:
    ctx->pc = 0x80D352BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352BCu)) return;
    // 80D352BC: addi    r5, r5, -16692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16692);

label_80D352C0:
    ctx->pc = 0x80D352C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D352C0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D352C0u)) return;
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
label_80D352C4:
    ctx->pc = 0x80D352C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352C4u)) return;
    // 80D352C4: bl      0x8045C750
    {
            ctx->lr = 0x80D352C8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D352C8:
    ctx->pc = 0x80D352C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D352C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D352C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D352CC:
    ctx->pc = 0x80D352CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352CCu)) return;
    // 80D352CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D352D0:
    ctx->pc = 0x80D352D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352D0u)) return;
    // 80D352D0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D352D4:
    ctx->pc = 0x80D352D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352D4u)) return;
    // 80D352D4: addi    r5, r5, -2304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2304);

label_80D352D8:
    ctx->pc = 0x80D352D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352D8u)) return;
    // 80D352D8: li      r6, 6656
    ctx->gpr[6] = (u32)(s32)(6656);

label_80D352DC:
    ctx->pc = 0x80D352DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352DCu)) return;
    // 80D352DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D352E0:
    ctx->pc = 0x80D352E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352E0u)) return;
    // 80D352E0: bl      0x8045C7B4
    {
            ctx->lr = 0x80D352E4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D352E4:
    ctx->pc = 0x80D352E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D352E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D352E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D352E8:
    ctx->pc = 0x80D352E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352E8u)) return;
    // 80D352E8: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80D352EC:
    ctx->pc = 0x80D352ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352ECu)) return;
    // 80D352EC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D352F0:
    ctx->pc = 0x80D352F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352F0u)) return;
    // 80D352F0: addi    r5, r5, -16688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16688);

label_80D352F4:
    ctx->pc = 0x80D352F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D352F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D352F4u)) return;
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
label_80D352F8:
    ctx->pc = 0x80D352F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352F8u)) return;
    // 80D352F8: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D352FC:
    ctx->pc = 0x80D352FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D352FCu)) return;
    // 80D352FC: addi    r5, r5, -16696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16696);

label_80D35300:
    ctx->pc = 0x80D35300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35300: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35300u)) return;
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
label_80D35304:
    ctx->pc = 0x80D35304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35304u)) return;
    // 80D35304: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35308:
    ctx->pc = 0x80D35308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35308u)) return;
    // 80D35308: addi    r5, r5, -16684
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16684);

label_80D3530C:
    ctx->pc = 0x80D3530Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3530Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3530C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3530Cu)) return;
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
label_80D35310:
    ctx->pc = 0x80D35310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35310u)) return;
    // 80D35310: bl      0x8045C750
    {
            ctx->lr = 0x80D35314u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35314:
    ctx->pc = 0x80D35314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35314: li      r3, 1709
    ctx->gpr[3] = (u32)(s32)(1709);

label_80D35318:
    ctx->pc = 0x80D35318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35318u)) return;
    // 80D35318: bl      0x8045BFA0
    {
            ctx->lr = 0x80D3531Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D3531C:
    ctx->pc = 0x80D3531Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3531Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D3531C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D35320:
    ctx->pc = 0x80D35320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35320u)) return;
    // 80D35320: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D35324:
    ctx->pc = 0x80D35324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35324: lwz     r0, 0(r3)
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
label_80D35328:
    ctx->pc = 0x80D35328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35328u)) return;
    // 80D35328: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D3532C:
    ctx->pc = 0x80D3532Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3532Cu)) return;
    // 80D3532C: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35330:
    ctx->pc = 0x80D35330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35330u)) return;
    // 80D35330: addi    r3, r3, -16116
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16116);

label_80D35334:
    ctx->pc = 0x80D35334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35334: lwzx    r3, r3, r0
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
label_80D35338:
    ctx->pc = 0x80D35338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35338: lwz     r3, 4(r3)
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
label_80D3533C:
    ctx->pc = 0x80D3533Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3533Cu)) return;
    // 80D3533C: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35340u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35340:
    ctx->pc = 0x80D35340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35340: bl      0x8045BFF4
    {
            ctx->lr = 0x80D35344u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D35344:
    ctx->pc = 0x80D35344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35344: bl      0x8045F300
    {
            ctx->lr = 0x80D35348u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D35348:
    ctx->pc = 0x80D35348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35348: b       0x80D35354
    {
            goto label_80D35354;
    }

label_80D3534C:
    ctx->pc = 0x80D3534Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3534Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3534C: bl      0x8045DE34
    {
            ctx->lr = 0x80D35350u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D35350:
    ctx->pc = 0x80D35350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35350: bl      0x80460A80
    {
            ctx->lr = 0x80D35354u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D35354:
    ctx->pc = 0x80D35354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35354: lwz     r0, 20(r1)
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
label_80D35358:
    ctx->pc = 0x80D35358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D35358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35358: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3535C:
    ctx->pc = 0x80D3535Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3535Cu)) return;
    // 80D3535C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D35360:
    ctx->pc = 0x80D35360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35360u)) return;
    // 80D35360: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D351A0;
        }
    }

    ctx->pc = 0x80D35364u;
    return;
return_dispatch_80D351A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D351D4u: goto label_80D351D4;
    case 0x80D351D8u: goto label_80D351D8;
    case 0x80D351DCu: goto label_80D351DC;
    case 0x80D3520Cu: goto label_80D3520C;
    case 0x80D35228u: goto label_80D35228;
    case 0x80D35258u: goto label_80D35258;
    case 0x80D35260u: goto label_80D35260;
    case 0x80D35268u: goto label_80D35268;
    case 0x80D3528Cu: goto label_80D3528C;
    case 0x80D35294u: goto label_80D35294;
    case 0x80D35298u: goto label_80D35298;
    case 0x80D352C8u: goto label_80D352C8;
    case 0x80D352E4u: goto label_80D352E4;
    case 0x80D35314u: goto label_80D35314;
    case 0x80D3531Cu: goto label_80D3531C;
    case 0x80D35340u: goto label_80D35340;
    case 0x80D35344u: goto label_80D35344;
    case 0x80D35348u: goto label_80D35348;
    case 0x80D35350u: goto label_80D35350;
    case 0x80D35354u: goto label_80D35354;
    default: return;
    }
}

