// DolRecomp output
#include "../generated.h"

void func_80D37040(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D37040[38] = {
        &&label_80D37040,
        &&label_80D37044,
        &&label_80D37048,
        &&label_80D3704C,
        &&label_80D37050,
        &&label_80D37054,
        &&label_80D37058,
        &&label_80D3705C,
        &&label_80D37060,
        &&label_80D37064,
        &&label_80D37068,
        &&label_80D3706C,
        &&label_80D37070,
        &&label_80D37074,
        &&label_80D37078,
        &&label_80D3707C,
        &&label_80D37080,
        &&label_80D37084,
        &&label_80D37088,
        &&label_80D3708C,
        &&label_80D37090,
        &&label_80D37094,
        &&label_80D37098,
        &&label_80D3709C,
        &&label_80D370A0,
        &&label_80D370A4,
        &&label_80D370A8,
        &&label_80D370AC,
        &&label_80D370B0,
        &&label_80D370B4,
        &&label_80D370B8,
        &&label_80D370BC,
        &&label_80D370C0,
        &&label_80D370C4,
        &&label_80D370C8,
        &&label_80D370CC,
        &&label_80D370D0,
        &&label_80D370D4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D37040u && pc <= 0x80D370D4u && ((pc - 0x80D37040u) & 3u) == 0u)
            goto *pc_table_80D37040[(pc - 0x80D37040u) >> 2];
    }
    return;
label_80D37040:
    ctx->pc = 0x80D37040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D37040: stwu     r1, -16(r1)
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
label_80D37044:
    ctx->pc = 0x80D37044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D37044: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D37048:
    ctx->pc = 0x80D37048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D37048: stw     r0, 20(r1)
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
label_80D3704C:
    ctx->pc = 0x80D3704Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3704Cu)) return;
    // 80D3704C: cmpwi   r3, 2
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

label_80D37050:
    ctx->pc = 0x80D37050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37050u)) return;
    // 80D37050: bc    12, 2, 0x80D370C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D370C0;
        }
    }

label_80D37054:
    ctx->pc = 0x80D37054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D37054: bc    4, 0, 0x80D37068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D37068;
        }
    }

label_80D37058:
    ctx->pc = 0x80D37058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D37058: cmpwi   r3, 0
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

label_80D3705C:
    ctx->pc = 0x80D3705Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3705Cu)) return;
    // 80D3705C: bc    12, 2, 0x80D370C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D370C8;
        }
    }

label_80D37060:
    ctx->pc = 0x80D37060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D37060: bc    4, 0, 0x80D37070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D37070;
        }
    }

label_80D37064:
    ctx->pc = 0x80D37064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D37064: b       0x80D370C8
    {
            goto label_80D370C8;
    }

label_80D37068:
    ctx->pc = 0x80D37068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D37068: cmpwi   r3, 4
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

label_80D3706C:
    ctx->pc = 0x80D3706Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3706Cu)) return;
    // 80D3706C: b       0x80D370C8
    {
            goto label_80D370C8;
    }

label_80D37070:
    ctx->pc = 0x80D37070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D37070: bl      0x8045DE7C
    {
            ctx->lr = 0x80D37074u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D37074:
    ctx->pc = 0x80D37074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D37074: bl      0x80460A60
    {
            ctx->lr = 0x80D37078u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D37078:
    ctx->pc = 0x80D37078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D37078: bl      0x80460A24
    {
            ctx->lr = 0x80D3707Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D3707C:
    ctx->pc = 0x80D3707Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3707Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3707C: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D37080:
    ctx->pc = 0x80D37080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37080u)) return;
    // 80D37080: bl      0x80406090
    {
            ctx->lr = 0x80D37084u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D37084:
    ctx->pc = 0x80D37084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D37084: li      r3, 1703
    ctx->gpr[3] = (u32)(s32)(1703);

label_80D37088:
    ctx->pc = 0x80D37088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37088u)) return;
    // 80D37088: bl      0x8045BFA0
    {
            ctx->lr = 0x80D3708Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D3708C:
    ctx->pc = 0x80D3708Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3708Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3708C: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80D37090:
    ctx->pc = 0x80D37090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37090u)) return;
    // 80D37090: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D37094:
    ctx->pc = 0x80D37094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37094u)) return;
    // 80D37094: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D37098:
    ctx->pc = 0x80D37098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D37098: lwz     r0, 0(r4)
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
label_80D3709C:
    ctx->pc = 0x80D3709Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3709Cu)) return;
    // 80D3709C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D370A0:
    ctx->pc = 0x80D370A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D370A0u)) return;
    // 80D370A0: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D370A4:
    ctx->pc = 0x80D370A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D370A4u)) return;
    // 80D370A4: addi    r4, r4, 8024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8024);

label_80D370A8:
    ctx->pc = 0x80D370A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D370A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D370A8: lwzx    r4, r4, r0
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
label_80D370AC:
    ctx->pc = 0x80D370ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D370ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D370AC: lwz     r4, 0(r4)
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
label_80D370B0:
    ctx->pc = 0x80D370B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D370B0u)) return;
    // 80D370B0: bl      0x8045F608
    {
            ctx->lr = 0x80D370B4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D370B4:
    ctx->pc = 0x80D370B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D370B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D370B4: bl      0x8045BFF4
    {
            ctx->lr = 0x80D370B8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D370B8:
    ctx->pc = 0x80D370B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D370B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D370B8: bl      0x8045F300
    {
            ctx->lr = 0x80D370BCu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D370BC:
    ctx->pc = 0x80D370BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D370BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D370BC: b       0x80D370C8
    {
            goto label_80D370C8;
    }

label_80D370C0:
    ctx->pc = 0x80D370C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D370C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D370C0: bl      0x8045DE34
    {
            ctx->lr = 0x80D370C4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D370C4:
    ctx->pc = 0x80D370C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D370C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D370C4: bl      0x80460A80
    {
            ctx->lr = 0x80D370C8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D370C8:
    ctx->pc = 0x80D370C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D370C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D370C8: lwz     r0, 20(r1)
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
label_80D370CC:
    ctx->pc = 0x80D370CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D370CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D370CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D370D0:
    ctx->pc = 0x80D370D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D370D0u)) return;
    // 80D370D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D370D4:
    ctx->pc = 0x80D370D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D370D4u)) return;
    // 80D370D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D37040;
        }
    }

    ctx->pc = 0x80D370D8u;
    return;
return_dispatch_80D37040:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D37074u: goto label_80D37074;
    case 0x80D37078u: goto label_80D37078;
    case 0x80D3707Cu: goto label_80D3707C;
    case 0x80D37084u: goto label_80D37084;
    case 0x80D3708Cu: goto label_80D3708C;
    case 0x80D370B4u: goto label_80D370B4;
    case 0x80D370B8u: goto label_80D370B8;
    case 0x80D370BCu: goto label_80D370BC;
    case 0x80D370C4u: goto label_80D370C4;
    case 0x80D370C8u: goto label_80D370C8;
    default: return;
    }
}

