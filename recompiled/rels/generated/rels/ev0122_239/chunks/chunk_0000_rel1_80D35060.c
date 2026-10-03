// DolRecomp output
#include "../generated.h"

void func_80D35060(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D35060[80] = {
        &&label_80D35060,
        &&label_80D35064,
        &&label_80D35068,
        &&label_80D3506C,
        &&label_80D35070,
        &&label_80D35074,
        &&label_80D35078,
        &&label_80D3507C,
        &&label_80D35080,
        &&label_80D35084,
        &&label_80D35088,
        &&label_80D3508C,
        &&label_80D35090,
        &&label_80D35094,
        &&label_80D35098,
        &&label_80D3509C,
        &&label_80D350A0,
        &&label_80D350A4,
        &&label_80D350A8,
        &&label_80D350AC,
        &&label_80D350B0,
        &&label_80D350B4,
        &&label_80D350B8,
        &&label_80D350BC,
        &&label_80D350C0,
        &&label_80D350C4,
        &&label_80D350C8,
        &&label_80D350CC,
        &&label_80D350D0,
        &&label_80D350D4,
        &&label_80D350D8,
        &&label_80D350DC,
        &&label_80D350E0,
        &&label_80D350E4,
        &&label_80D350E8,
        &&label_80D350EC,
        &&label_80D350F0,
        &&label_80D350F4,
        &&label_80D350F8,
        &&label_80D350FC,
        &&label_80D35100,
        &&label_80D35104,
        &&label_80D35108,
        &&label_80D3510C,
        &&label_80D35110,
        &&label_80D35114,
        &&label_80D35118,
        &&label_80D3511C,
        &&label_80D35120,
        &&label_80D35124,
        &&label_80D35128,
        &&label_80D3512C,
        &&label_80D35130,
        &&label_80D35134,
        &&label_80D35138,
        &&label_80D3513C,
        &&label_80D35140,
        &&label_80D35144,
        &&label_80D35148,
        &&label_80D3514C,
        &&label_80D35150,
        &&label_80D35154,
        &&label_80D35158,
        &&label_80D3515C,
        &&label_80D35160,
        &&label_80D35164,
        &&label_80D35168,
        &&label_80D3516C,
        &&label_80D35170,
        &&label_80D35174,
        &&label_80D35178,
        &&label_80D3517C,
        &&label_80D35180,
        &&label_80D35184,
        &&label_80D35188,
        &&label_80D3518C,
        &&label_80D35190,
        &&label_80D35194,
        &&label_80D35198,
        &&label_80D3519C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D35060u && pc <= 0x80D3519Cu && ((pc - 0x80D35060u) & 3u) == 0u)
            goto *pc_table_80D35060[(pc - 0x80D35060u) >> 2];
    }
    return;
label_80D35060:
    ctx->pc = 0x80D35060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35060: stwu     r1, -16(r1)
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
label_80D35064:
    ctx->pc = 0x80D35064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35064: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35068:
    ctx->pc = 0x80D35068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35068: stw     r0, 20(r1)
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
label_80D3506C:
    ctx->pc = 0x80D3506Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3506Cu)) return;
    // 80D3506C: cmpwi   r3, 2
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

label_80D35070:
    ctx->pc = 0x80D35070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35070u)) return;
    // 80D35070: bc    12, 2, 0x80D35180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D35180;
        }
    }

label_80D35074:
    ctx->pc = 0x80D35074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35074: bc    4, 0, 0x80D35088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D35088;
        }
    }

label_80D35078:
    ctx->pc = 0x80D35078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35078: cmpwi   r3, 0
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

label_80D3507C:
    ctx->pc = 0x80D3507Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3507Cu)) return;
    // 80D3507C: bc    12, 2, 0x80D35190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D35190;
        }
    }

label_80D35080:
    ctx->pc = 0x80D35080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35080: bc    4, 0, 0x80D35090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D35090;
        }
    }

label_80D35084:
    ctx->pc = 0x80D35084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35084: b       0x80D35190
    {
            goto label_80D35190;
    }

label_80D35088:
    ctx->pc = 0x80D35088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35088: cmpwi   r3, 4
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

label_80D3508C:
    ctx->pc = 0x80D3508Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3508Cu)) return;
    // 80D3508C: b       0x80D35190
    {
            goto label_80D35190;
    }

label_80D35090:
    ctx->pc = 0x80D35090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35090: bl      0x8045DE7C
    {
            ctx->lr = 0x80D35094u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D35094:
    ctx->pc = 0x80D35094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35094: bl      0x80460A60
    {
            ctx->lr = 0x80D35098u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D35098:
    ctx->pc = 0x80D35098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35098: bl      0x80460A24
    {
            ctx->lr = 0x80D3509Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D3509C:
    ctx->pc = 0x80D3509Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3509Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3509C: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D350A0:
    ctx->pc = 0x80D350A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350A0u)) return;
    // 80D350A0: bl      0x80406090
    {
            ctx->lr = 0x80D350A4u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D350A4:
    ctx->pc = 0x80D350A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D350A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D350A4: li      r3, 1130
    ctx->gpr[3] = (u32)(s32)(1130);

label_80D350A8:
    ctx->pc = 0x80D350A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350A8u)) return;
    // 80D350A8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D350ACu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D350AC:
    ctx->pc = 0x80D350ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D350ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D350AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D350B0:
    ctx->pc = 0x80D350B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350B0u)) return;
    // 80D350B0: bl      0x8045F220
    {
            ctx->lr = 0x80D350B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D350B4:
    ctx->pc = 0x80D350B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D350B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D350B4: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D350B8:
    ctx->pc = 0x80D350B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350B8u)) return;
    // 80D350B8: addi    r4, r4, -16764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16764);

label_80D350BC:
    ctx->pc = 0x80D350BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350BCu)) return;
    // 80D350BC: bl      0x8045C060
    {
            ctx->lr = 0x80D350C0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D350C0:
    ctx->pc = 0x80D350C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D350C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D350C0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D350C4:
    ctx->pc = 0x80D350C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350C4u)) return;
    // 80D350C4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D350C8:
    ctx->pc = 0x80D350C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350C8u)) return;
    // 80D350C8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D350CC:
    ctx->pc = 0x80D350CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D350CC: lwz     r0, 0(r4)
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
label_80D350D0:
    ctx->pc = 0x80D350D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350D0u)) return;
    // 80D350D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D350D4:
    ctx->pc = 0x80D350D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350D4u)) return;
    // 80D350D4: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D350D8:
    ctx->pc = 0x80D350D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350D8u)) return;
    // 80D350D8: addi    r4, r4, -16792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16792);

label_80D350DC:
    ctx->pc = 0x80D350DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D350DC: lwzx    r4, r4, r0
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
label_80D350E0:
    ctx->pc = 0x80D350E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D350E0: lwz     r4, 0(r4)
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
label_80D350E4:
    ctx->pc = 0x80D350E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350E4u)) return;
    // 80D350E4: bl      0x8045F608
    {
            ctx->lr = 0x80D350E8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D350E8:
    ctx->pc = 0x80D350E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D350E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D350E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D350EC:
    ctx->pc = 0x80D350ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350ECu)) return;
    // 80D350EC: bl      0x8045F220
    {
            ctx->lr = 0x80D350F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D350F0:
    ctx->pc = 0x80D350F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D350F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D350F0: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D350F4:
    ctx->pc = 0x80D350F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350F4u)) return;
    // 80D350F4: addi    r4, r4, -17168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17168);

label_80D350F8:
    ctx->pc = 0x80D350F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D350F8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D350F8u)) return;
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
label_80D350FC:
    ctx->pc = 0x80D350FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D350FCu)) return;
    // 80D350FC: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35100:
    ctx->pc = 0x80D35100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35100u)) return;
    // 80D35100: addi    r4, r4, -17164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17164);

label_80D35104:
    ctx->pc = 0x80D35104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35104: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35104u)) return;
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
label_80D35108:
    ctx->pc = 0x80D35108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35108u)) return;
    // 80D35108: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3510C:
    ctx->pc = 0x80D3510Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3510Cu)) return;
    // 80D3510C: addi    r4, r4, -17160
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17160);

label_80D35110:
    ctx->pc = 0x80D35110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35110: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35110u)) return;
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
label_80D35114:
    ctx->pc = 0x80D35114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35114u)) return;
    // 80D35114: bl      0x8045E70C
    {
            ctx->lr = 0x80D35118u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D35118:
    ctx->pc = 0x80D35118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35118: li      r3, 1131
    ctx->gpr[3] = (u32)(s32)(1131);

label_80D3511C:
    ctx->pc = 0x80D3511Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3511Cu)) return;
    // 80D3511C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D35120u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D35120:
    ctx->pc = 0x80D35120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35120: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35124:
    ctx->pc = 0x80D35124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35124u)) return;
    // 80D35124: bl      0x8045F220
    {
            ctx->lr = 0x80D35128u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35128:
    ctx->pc = 0x80D35128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D35128: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3512C:
    ctx->pc = 0x80D3512Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3512Cu)) return;
    // 80D3512C: addi    r4, r4, -16760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16760);

label_80D35130:
    ctx->pc = 0x80D35130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35130u)) return;
    // 80D35130: bl      0x8045C060
    {
            ctx->lr = 0x80D35134u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D35134:
    ctx->pc = 0x80D35134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35134: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80D35138:
    ctx->pc = 0x80D35138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35138u)) return;
    // 80D35138: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D3513C:
    ctx->pc = 0x80D3513Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3513Cu)) return;
    // 80D3513C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D35140:
    ctx->pc = 0x80D35140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35140: lwz     r0, 0(r4)
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
label_80D35144:
    ctx->pc = 0x80D35144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35144u)) return;
    // 80D35144: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35148:
    ctx->pc = 0x80D35148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35148u)) return;
    // 80D35148: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3514C:
    ctx->pc = 0x80D3514Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3514Cu)) return;
    // 80D3514C: addi    r4, r4, -16792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16792);

label_80D35150:
    ctx->pc = 0x80D35150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35150: lwzx    r4, r4, r0
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
label_80D35154:
    ctx->pc = 0x80D35154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35154: lwz     r4, 4(r4)
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
label_80D35158:
    ctx->pc = 0x80D35158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35158u)) return;
    // 80D35158: bl      0x8045F608
    {
            ctx->lr = 0x80D3515Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D3515C:
    ctx->pc = 0x80D3515Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3515Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3515C: bl      0x8045F300
    {
            ctx->lr = 0x80D35160u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D35160:
    ctx->pc = 0x80D35160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35160: bl      0x8045BFF4
    {
            ctx->lr = 0x80D35164u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D35164:
    ctx->pc = 0x80D35164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35164: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35168:
    ctx->pc = 0x80D35168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35168u)) return;
    // 80D35168: bl      0x8045F220
    {
            ctx->lr = 0x80D3516Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3516C:
    ctx->pc = 0x80D3516Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3516Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3516C: bl      0x8045C034
    {
            ctx->lr = 0x80D35170u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D35170:
    ctx->pc = 0x80D35170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35170: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35174:
    ctx->pc = 0x80D35174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35174u)) return;
    // 80D35174: bl      0x8045F220
    {
            ctx->lr = 0x80D35178u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35178:
    ctx->pc = 0x80D35178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35178: bl      0x8045E760
    {
            ctx->lr = 0x80D3517Cu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D3517C:
    ctx->pc = 0x80D3517Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3517Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3517C: b       0x80D35190
    {
            goto label_80D35190;
    }

label_80D35180:
    ctx->pc = 0x80D35180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35180: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35184:
    ctx->pc = 0x80D35184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35184u)) return;
    // 80D35184: bl      0x8045EC10
    {
            ctx->lr = 0x80D35188u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D35188:
    ctx->pc = 0x80D35188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35188: bl      0x8045DE34
    {
            ctx->lr = 0x80D3518Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D3518C:
    ctx->pc = 0x80D3518Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3518Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3518C: bl      0x80460A80
    {
            ctx->lr = 0x80D35190u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D35190:
    ctx->pc = 0x80D35190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35190: lwz     r0, 20(r1)
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
label_80D35194:
    ctx->pc = 0x80D35194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D35194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35194: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D35198:
    ctx->pc = 0x80D35198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35198u)) return;
    // 80D35198: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D3519C:
    ctx->pc = 0x80D3519Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3519Cu)) return;
    // 80D3519C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D35060;
        }
    }

    ctx->pc = 0x80D351A0u;
    return;
return_dispatch_80D35060:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D35094u: goto label_80D35094;
    case 0x80D35098u: goto label_80D35098;
    case 0x80D3509Cu: goto label_80D3509C;
    case 0x80D350A4u: goto label_80D350A4;
    case 0x80D350ACu: goto label_80D350AC;
    case 0x80D350B4u: goto label_80D350B4;
    case 0x80D350C0u: goto label_80D350C0;
    case 0x80D350E8u: goto label_80D350E8;
    case 0x80D350F0u: goto label_80D350F0;
    case 0x80D35118u: goto label_80D35118;
    case 0x80D35120u: goto label_80D35120;
    case 0x80D35128u: goto label_80D35128;
    case 0x80D35134u: goto label_80D35134;
    case 0x80D3515Cu: goto label_80D3515C;
    case 0x80D35160u: goto label_80D35160;
    case 0x80D35164u: goto label_80D35164;
    case 0x80D3516Cu: goto label_80D3516C;
    case 0x80D35170u: goto label_80D35170;
    case 0x80D35178u: goto label_80D35178;
    case 0x80D3517Cu: goto label_80D3517C;
    case 0x80D35188u: goto label_80D35188;
    case 0x80D3518Cu: goto label_80D3518C;
    case 0x80D35190u: goto label_80D35190;
    default: return;
    }
}

