// DolRecomp output
#include "../generated.h"

void func_80D336A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D336A0[145] = {
        &&label_80D336A0,
        &&label_80D336A4,
        &&label_80D336A8,
        &&label_80D336AC,
        &&label_80D336B0,
        &&label_80D336B4,
        &&label_80D336B8,
        &&label_80D336BC,
        &&label_80D336C0,
        &&label_80D336C4,
        &&label_80D336C8,
        &&label_80D336CC,
        &&label_80D336D0,
        &&label_80D336D4,
        &&label_80D336D8,
        &&label_80D336DC,
        &&label_80D336E0,
        &&label_80D336E4,
        &&label_80D336E8,
        &&label_80D336EC,
        &&label_80D336F0,
        &&label_80D336F4,
        &&label_80D336F8,
        &&label_80D336FC,
        &&label_80D33700,
        &&label_80D33704,
        &&label_80D33708,
        &&label_80D3370C,
        &&label_80D33710,
        &&label_80D33714,
        &&label_80D33718,
        &&label_80D3371C,
        &&label_80D33720,
        &&label_80D33724,
        &&label_80D33728,
        &&label_80D3372C,
        &&label_80D33730,
        &&label_80D33734,
        &&label_80D33738,
        &&label_80D3373C,
        &&label_80D33740,
        &&label_80D33744,
        &&label_80D33748,
        &&label_80D3374C,
        &&label_80D33750,
        &&label_80D33754,
        &&label_80D33758,
        &&label_80D3375C,
        &&label_80D33760,
        &&label_80D33764,
        &&label_80D33768,
        &&label_80D3376C,
        &&label_80D33770,
        &&label_80D33774,
        &&label_80D33778,
        &&label_80D3377C,
        &&label_80D33780,
        &&label_80D33784,
        &&label_80D33788,
        &&label_80D3378C,
        &&label_80D33790,
        &&label_80D33794,
        &&label_80D33798,
        &&label_80D3379C,
        &&label_80D337A0,
        &&label_80D337A4,
        &&label_80D337A8,
        &&label_80D337AC,
        &&label_80D337B0,
        &&label_80D337B4,
        &&label_80D337B8,
        &&label_80D337BC,
        &&label_80D337C0,
        &&label_80D337C4,
        &&label_80D337C8,
        &&label_80D337CC,
        &&label_80D337D0,
        &&label_80D337D4,
        &&label_80D337D8,
        &&label_80D337DC,
        &&label_80D337E0,
        &&label_80D337E4,
        &&label_80D337E8,
        &&label_80D337EC,
        &&label_80D337F0,
        &&label_80D337F4,
        &&label_80D337F8,
        &&label_80D337FC,
        &&label_80D33800,
        &&label_80D33804,
        &&label_80D33808,
        &&label_80D3380C,
        &&label_80D33810,
        &&label_80D33814,
        &&label_80D33818,
        &&label_80D3381C,
        &&label_80D33820,
        &&label_80D33824,
        &&label_80D33828,
        &&label_80D3382C,
        &&label_80D33830,
        &&label_80D33834,
        &&label_80D33838,
        &&label_80D3383C,
        &&label_80D33840,
        &&label_80D33844,
        &&label_80D33848,
        &&label_80D3384C,
        &&label_80D33850,
        &&label_80D33854,
        &&label_80D33858,
        &&label_80D3385C,
        &&label_80D33860,
        &&label_80D33864,
        &&label_80D33868,
        &&label_80D3386C,
        &&label_80D33870,
        &&label_80D33874,
        &&label_80D33878,
        &&label_80D3387C,
        &&label_80D33880,
        &&label_80D33884,
        &&label_80D33888,
        &&label_80D3388C,
        &&label_80D33890,
        &&label_80D33894,
        &&label_80D33898,
        &&label_80D3389C,
        &&label_80D338A0,
        &&label_80D338A4,
        &&label_80D338A8,
        &&label_80D338AC,
        &&label_80D338B0,
        &&label_80D338B4,
        &&label_80D338B8,
        &&label_80D338BC,
        &&label_80D338C0,
        &&label_80D338C4,
        &&label_80D338C8,
        &&label_80D338CC,
        &&label_80D338D0,
        &&label_80D338D4,
        &&label_80D338D8,
        &&label_80D338DC,
        &&label_80D338E0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D336A0u && pc <= 0x80D338E0u && ((pc - 0x80D336A0u) & 3u) == 0u)
            goto *pc_table_80D336A0[(pc - 0x80D336A0u) >> 2];
    }
    return;
label_80D336A0:
    ctx->pc = 0x80D336A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D336A0: stwu     r1, -16(r1)
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
label_80D336A4:
    ctx->pc = 0x80D336A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D336A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D336A8:
    ctx->pc = 0x80D336A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D336A8: stw     r0, 20(r1)
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
label_80D336AC:
    ctx->pc = 0x80D336ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336ACu)) return;
    // 80D336AC: cmpwi   r3, 2
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

label_80D336B0:
    ctx->pc = 0x80D336B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336B0u)) return;
    // 80D336B0: bc    12, 2, 0x80D338CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D338CC;
        }
    }

label_80D336B4:
    ctx->pc = 0x80D336B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D336B4: bc    4, 0, 0x80D336C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D336C8;
        }
    }

label_80D336B8:
    ctx->pc = 0x80D336B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D336B8: cmpwi   r3, 0
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

label_80D336BC:
    ctx->pc = 0x80D336BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336BCu)) return;
    // 80D336BC: bc    12, 2, 0x80D338D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D338D4;
        }
    }

label_80D336C0:
    ctx->pc = 0x80D336C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D336C0: bc    4, 0, 0x80D336D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D336D0;
        }
    }

label_80D336C4:
    ctx->pc = 0x80D336C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D336C4: b       0x80D338D4
    {
            goto label_80D338D4;
    }

label_80D336C8:
    ctx->pc = 0x80D336C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D336C8: cmpwi   r3, 4
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

label_80D336CC:
    ctx->pc = 0x80D336CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336CCu)) return;
    // 80D336CC: b       0x80D338D4
    {
            goto label_80D338D4;
    }

label_80D336D0:
    ctx->pc = 0x80D336D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D336D0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D336D4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D336D4:
    ctx->pc = 0x80D336D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D336D4: bl      0x80460A60
    {
            ctx->lr = 0x80D336D8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D336D8:
    ctx->pc = 0x80D336D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D336D8: bl      0x80460A24
    {
            ctx->lr = 0x80D336DCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D336DC:
    ctx->pc = 0x80D336DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D336DC: li      r3, 34
    ctx->gpr[3] = (u32)(s32)(34);

label_80D336E0:
    ctx->pc = 0x80D336E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336E0u)) return;
    // 80D336E0: bl      0x80406090
    {
            ctx->lr = 0x80D336E4u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D336E4:
    ctx->pc = 0x80D336E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D336E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D336E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D336E8:
    ctx->pc = 0x80D336E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336E8u)) return;
    // 80D336E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D336EC:
    ctx->pc = 0x80D336ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336ECu)) return;
    // 80D336EC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D336F0:
    ctx->pc = 0x80D336F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336F0u)) return;
    // 80D336F0: addi    r5, r5, 12944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12944);

label_80D336F4:
    ctx->pc = 0x80D336F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D336F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D336F4u)) return;
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
label_80D336F8:
    ctx->pc = 0x80D336F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336F8u)) return;
    // 80D336F8: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D336FC:
    ctx->pc = 0x80D336FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D336FCu)) return;
    // 80D336FC: addi    r5, r5, 12948
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12948);

label_80D33700:
    ctx->pc = 0x80D33700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33700: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33700u)) return;
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
label_80D33704:
    ctx->pc = 0x80D33704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33704u)) return;
    // 80D33704: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33708:
    ctx->pc = 0x80D33708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33708u)) return;
    // 80D33708: addi    r5, r5, 12952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12952);

label_80D3370C:
    ctx->pc = 0x80D3370Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3370Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3370C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3370Cu)) return;
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
label_80D33710:
    ctx->pc = 0x80D33710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33710u)) return;
    // 80D33710: bl      0x8045C750
    {
            ctx->lr = 0x80D33714u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33714:
    ctx->pc = 0x80D33714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33714: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33718:
    ctx->pc = 0x80D33718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33718u)) return;
    // 80D33718: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3371C:
    ctx->pc = 0x80D3371Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3371Cu)) return;
    // 80D3371C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D33720:
    ctx->pc = 0x80D33720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33720u)) return;
    // 80D33720: addi    r5, r7, -640
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-640);

label_80D33724:
    ctx->pc = 0x80D33724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33724u)) return;
    // 80D33724: addi    r6, r7, -30675
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-30675);

label_80D33728:
    ctx->pc = 0x80D33728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33728u)) return;
    // 80D33728: addi    r7, r7, -3072
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-3072);

label_80D3372C:
    ctx->pc = 0x80D3372Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3372Cu)) return;
    // 80D3372C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33730u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33730:
    ctx->pc = 0x80D33730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33730: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33734:
    ctx->pc = 0x80D33734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33734u)) return;
    // 80D33734: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80D33738:
    ctx->pc = 0x80D33738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33738u)) return;
    // 80D33738: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3373C:
    ctx->pc = 0x80D3373Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3373Cu)) return;
    // 80D3373C: addi    r5, r5, 12956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12956);

label_80D33740:
    ctx->pc = 0x80D33740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33740: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33740u)) return;
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
label_80D33744:
    ctx->pc = 0x80D33744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33744u)) return;
    // 80D33744: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33748:
    ctx->pc = 0x80D33748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33748u)) return;
    // 80D33748: addi    r5, r5, 12960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12960);

label_80D3374C:
    ctx->pc = 0x80D3374Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3374Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3374C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3374Cu)) return;
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
label_80D33750:
    ctx->pc = 0x80D33750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33750u)) return;
    // 80D33750: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33754:
    ctx->pc = 0x80D33754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33754u)) return;
    // 80D33754: addi    r5, r5, 12964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12964);

label_80D33758:
    ctx->pc = 0x80D33758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33758: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33758u)) return;
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
label_80D3375C:
    ctx->pc = 0x80D3375Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3375Cu)) return;
    // 80D3375C: bl      0x8045C750
    {
            ctx->lr = 0x80D33760u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33760:
    ctx->pc = 0x80D33760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33764:
    ctx->pc = 0x80D33764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33764u)) return;
    // 80D33764: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80D33768:
    ctx->pc = 0x80D33768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33768u)) return;
    // 80D33768: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D3376C:
    ctx->pc = 0x80D3376Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3376Cu)) return;
    // 80D3376C: addi    r5, r7, -640
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-640);

label_80D33770:
    ctx->pc = 0x80D33770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33770u)) return;
    // 80D33770: addi    r6, r7, -30675
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-30675);

label_80D33774:
    ctx->pc = 0x80D33774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33774u)) return;
    // 80D33774: addi    r7, r7, -1024
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1024);

label_80D33778:
    ctx->pc = 0x80D33778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33778u)) return;
    // 80D33778: bl      0x8045C7B4
    {
            ctx->lr = 0x80D3377Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D3377C:
    ctx->pc = 0x80D3377Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3377Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3377C: li      r3, 1536
    ctx->gpr[3] = (u32)(s32)(1536);

label_80D33780:
    ctx->pc = 0x80D33780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33780u)) return;
    // 80D33780: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33784u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33784:
    ctx->pc = 0x80D33784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33784: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33788:
    ctx->pc = 0x80D33788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33788u)) return;
    // 80D33788: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D3378C:
    ctx->pc = 0x80D3378Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3378Cu)) return;
    // 80D3378C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33790:
    ctx->pc = 0x80D33790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33790: lwz     r0, 0(r4)
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
label_80D33794:
    ctx->pc = 0x80D33794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33794u)) return;
    // 80D33794: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33798:
    ctx->pc = 0x80D33798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33798u)) return;
    // 80D33798: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D3379C:
    ctx->pc = 0x80D3379Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3379Cu)) return;
    // 80D3379C: addi    r4, r4, 13708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13708);

label_80D337A0:
    ctx->pc = 0x80D337A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D337A0: lwzx    r4, r4, r0
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
label_80D337A4:
    ctx->pc = 0x80D337A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D337A4: lwz     r4, 0(r4)
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
label_80D337A8:
    ctx->pc = 0x80D337A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337A8u)) return;
    // 80D337A8: bl      0x8045F608
    {
            ctx->lr = 0x80D337ACu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D337AC:
    ctx->pc = 0x80D337ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D337ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D337AC: bl      0x8045BFF4
    {
            ctx->lr = 0x80D337B0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D337B0:
    ctx->pc = 0x80D337B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D337B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D337B0: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D337B4:
    ctx->pc = 0x80D337B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337B4u)) return;
    // 80D337B4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D337B8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D337B8:
    ctx->pc = 0x80D337B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D337B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D337B8: li      r3, 1537
    ctx->gpr[3] = (u32)(s32)(1537);

label_80D337BC:
    ctx->pc = 0x80D337BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337BCu)) return;
    // 80D337BC: bl      0x8045BFA0
    {
            ctx->lr = 0x80D337C0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D337C0:
    ctx->pc = 0x80D337C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D337C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D337C0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D337C4:
    ctx->pc = 0x80D337C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337C4u)) return;
    // 80D337C4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D337C8:
    ctx->pc = 0x80D337C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D337C8: lwz     r0, 0(r3)
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
label_80D337CC:
    ctx->pc = 0x80D337CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337CCu)) return;
    // 80D337CC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D337D0:
    ctx->pc = 0x80D337D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337D0u)) return;
    // 80D337D0: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D337D4:
    ctx->pc = 0x80D337D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337D4u)) return;
    // 80D337D4: addi    r3, r3, 13708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13708);

label_80D337D8:
    ctx->pc = 0x80D337D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D337D8: lwzx    r3, r3, r0
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
label_80D337DC:
    ctx->pc = 0x80D337DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D337DC: lwz     r3, 4(r3)
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
label_80D337E0:
    ctx->pc = 0x80D337E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337E0u)) return;
    // 80D337E0: bl      0x8045F6FC
    {
            ctx->lr = 0x80D337E4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D337E4:
    ctx->pc = 0x80D337E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D337E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D337E4: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80D337E8:
    ctx->pc = 0x80D337E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337E8u)) return;
    // 80D337E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D337ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D337EC:
    ctx->pc = 0x80D337ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D337ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D337EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D337F0:
    ctx->pc = 0x80D337F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337F0u)) return;
    // 80D337F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D337F4:
    ctx->pc = 0x80D337F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337F4u)) return;
    // 80D337F4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D337F8:
    ctx->pc = 0x80D337F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337F8u)) return;
    // 80D337F8: addi    r5, r5, 12968
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12968);

label_80D337FC:
    ctx->pc = 0x80D337FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D337FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D337FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D337FCu)) return;
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
label_80D33800:
    ctx->pc = 0x80D33800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33800u)) return;
    // 80D33800: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33804:
    ctx->pc = 0x80D33804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33804u)) return;
    // 80D33804: addi    r5, r5, 12972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12972);

label_80D33808:
    ctx->pc = 0x80D33808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33808: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33808u)) return;
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
label_80D3380C:
    ctx->pc = 0x80D3380Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3380Cu)) return;
    // 80D3380C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33810:
    ctx->pc = 0x80D33810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33810u)) return;
    // 80D33810: addi    r5, r5, 12976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12976);

label_80D33814:
    ctx->pc = 0x80D33814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33814: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33814u)) return;
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
label_80D33818:
    ctx->pc = 0x80D33818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33818u)) return;
    // 80D33818: bl      0x8045C750
    {
            ctx->lr = 0x80D3381Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D3381C:
    ctx->pc = 0x80D3381Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3381Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D3381C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33820:
    ctx->pc = 0x80D33820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33820u)) return;
    // 80D33820: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33824:
    ctx->pc = 0x80D33824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33824u)) return;
    // 80D33824: li      r5, 1152
    ctx->gpr[5] = (u32)(s32)(1152);

label_80D33828:
    ctx->pc = 0x80D33828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33828u)) return;
    // 80D33828: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D3382C:
    ctx->pc = 0x80D3382Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3382Cu)) return;
    // 80D3382C: addi    r6, r7, -32211
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-32211);

label_80D33830:
    ctx->pc = 0x80D33830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33830u)) return;
    // 80D33830: addi    r7, r7, -1015
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1015);

label_80D33834:
    ctx->pc = 0x80D33834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33834u)) return;
    // 80D33834: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33838u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33838:
    ctx->pc = 0x80D33838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33838: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3383C:
    ctx->pc = 0x80D3383Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3383Cu)) return;
    // 80D3383C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D33840:
    ctx->pc = 0x80D33840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33840u)) return;
    // 80D33840: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33844:
    ctx->pc = 0x80D33844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33844u)) return;
    // 80D33844: addi    r5, r5, 12980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12980);

label_80D33848:
    ctx->pc = 0x80D33848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33848: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33848u)) return;
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
label_80D3384C:
    ctx->pc = 0x80D3384Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3384Cu)) return;
    // 80D3384C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33850:
    ctx->pc = 0x80D33850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33850u)) return;
    // 80D33850: addi    r5, r5, 12984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12984);

label_80D33854:
    ctx->pc = 0x80D33854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33854: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33854u)) return;
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
label_80D33858:
    ctx->pc = 0x80D33858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33858u)) return;
    // 80D33858: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3385C:
    ctx->pc = 0x80D3385Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3385Cu)) return;
    // 80D3385C: addi    r5, r5, 12988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12988);

label_80D33860:
    ctx->pc = 0x80D33860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33860: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33860u)) return;
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
label_80D33864:
    ctx->pc = 0x80D33864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33864u)) return;
    // 80D33864: bl      0x8045C750
    {
            ctx->lr = 0x80D33868u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33868:
    ctx->pc = 0x80D33868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33868: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3386C:
    ctx->pc = 0x80D3386Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3386Cu)) return;
    // 80D3386C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D33870:
    ctx->pc = 0x80D33870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33870u)) return;
    // 80D33870: li      r5, 1152
    ctx->gpr[5] = (u32)(s32)(1152);

label_80D33874:
    ctx->pc = 0x80D33874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33874u)) return;
    // 80D33874: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D33878:
    ctx->pc = 0x80D33878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33878u)) return;
    // 80D33878: addi    r6, r6, -32211
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32211);

label_80D3387C:
    ctx->pc = 0x80D3387Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3387Cu)) return;
    // 80D3387C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D33880:
    ctx->pc = 0x80D33880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33880u)) return;
    // 80D33880: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33884u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33884:
    ctx->pc = 0x80D33884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33884: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80D33888:
    ctx->pc = 0x80D33888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33888u)) return;
    // 80D33888: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3388Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3388C:
    ctx->pc = 0x80D3388Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3388Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3388C: li      r3, 1538
    ctx->gpr[3] = (u32)(s32)(1538);

label_80D33890:
    ctx->pc = 0x80D33890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33890u)) return;
    // 80D33890: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33894u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33894:
    ctx->pc = 0x80D33894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33894: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33898:
    ctx->pc = 0x80D33898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33898u)) return;
    // 80D33898: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D3389C:
    ctx->pc = 0x80D3389Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3389Cu)) return;
    // 80D3389C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D338A0:
    ctx->pc = 0x80D338A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D338A0: lwz     r0, 0(r4)
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
label_80D338A4:
    ctx->pc = 0x80D338A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338A4u)) return;
    // 80D338A4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D338A8:
    ctx->pc = 0x80D338A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338A8u)) return;
    // 80D338A8: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D338AC:
    ctx->pc = 0x80D338ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338ACu)) return;
    // 80D338AC: addi    r4, r4, 13708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13708);

label_80D338B0:
    ctx->pc = 0x80D338B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D338B0: lwzx    r4, r4, r0
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
label_80D338B4:
    ctx->pc = 0x80D338B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D338B4: lwz     r4, 8(r4)
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
label_80D338B8:
    ctx->pc = 0x80D338B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338B8u)) return;
    // 80D338B8: bl      0x8045F608
    {
            ctx->lr = 0x80D338BCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D338BC:
    ctx->pc = 0x80D338BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D338BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D338BC: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80D338C0:
    ctx->pc = 0x80D338C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338C0u)) return;
    // 80D338C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D338C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D338C4:
    ctx->pc = 0x80D338C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D338C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D338C4: bl      0x8045F300
    {
            ctx->lr = 0x80D338C8u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D338C8:
    ctx->pc = 0x80D338C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D338C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D338C8: b       0x80D338D4
    {
            goto label_80D338D4;
    }

label_80D338CC:
    ctx->pc = 0x80D338CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D338CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D338CC: bl      0x8045DE34
    {
            ctx->lr = 0x80D338D0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D338D0:
    ctx->pc = 0x80D338D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D338D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D338D0: bl      0x80460A80
    {
            ctx->lr = 0x80D338D4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D338D4:
    ctx->pc = 0x80D338D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D338D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D338D4: lwz     r0, 20(r1)
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
label_80D338D8:
    ctx->pc = 0x80D338D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D338D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D338D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D338DC:
    ctx->pc = 0x80D338DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338DCu)) return;
    // 80D338DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D338E0:
    ctx->pc = 0x80D338E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D338E0u)) return;
    // 80D338E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D336A0;
        }
    }

    ctx->pc = 0x80D338E4u;
    return;
return_dispatch_80D336A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D336D4u: goto label_80D336D4;
    case 0x80D336D8u: goto label_80D336D8;
    case 0x80D336DCu: goto label_80D336DC;
    case 0x80D336E4u: goto label_80D336E4;
    case 0x80D33714u: goto label_80D33714;
    case 0x80D33730u: goto label_80D33730;
    case 0x80D33760u: goto label_80D33760;
    case 0x80D3377Cu: goto label_80D3377C;
    case 0x80D33784u: goto label_80D33784;
    case 0x80D337ACu: goto label_80D337AC;
    case 0x80D337B0u: goto label_80D337B0;
    case 0x80D337B8u: goto label_80D337B8;
    case 0x80D337C0u: goto label_80D337C0;
    case 0x80D337E4u: goto label_80D337E4;
    case 0x80D337ECu: goto label_80D337EC;
    case 0x80D3381Cu: goto label_80D3381C;
    case 0x80D33838u: goto label_80D33838;
    case 0x80D33868u: goto label_80D33868;
    case 0x80D33884u: goto label_80D33884;
    case 0x80D3388Cu: goto label_80D3388C;
    case 0x80D33894u: goto label_80D33894;
    case 0x80D338BCu: goto label_80D338BC;
    case 0x80D338C4u: goto label_80D338C4;
    case 0x80D338C8u: goto label_80D338C8;
    case 0x80D338D0u: goto label_80D338D0;
    case 0x80D338D4u: goto label_80D338D4;
    default: return;
    }
}

