// DolRecomp output
#include "../generated.h"

void func_80D341C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D341C0[58] = {
        &&label_80D341C0,
        &&label_80D341C4,
        &&label_80D341C8,
        &&label_80D341CC,
        &&label_80D341D0,
        &&label_80D341D4,
        &&label_80D341D8,
        &&label_80D341DC,
        &&label_80D341E0,
        &&label_80D341E4,
        &&label_80D341E8,
        &&label_80D341EC,
        &&label_80D341F0,
        &&label_80D341F4,
        &&label_80D341F8,
        &&label_80D341FC,
        &&label_80D34200,
        &&label_80D34204,
        &&label_80D34208,
        &&label_80D3420C,
        &&label_80D34210,
        &&label_80D34214,
        &&label_80D34218,
        &&label_80D3421C,
        &&label_80D34220,
        &&label_80D34224,
        &&label_80D34228,
        &&label_80D3422C,
        &&label_80D34230,
        &&label_80D34234,
        &&label_80D34238,
        &&label_80D3423C,
        &&label_80D34240,
        &&label_80D34244,
        &&label_80D34248,
        &&label_80D3424C,
        &&label_80D34250,
        &&label_80D34254,
        &&label_80D34258,
        &&label_80D3425C,
        &&label_80D34260,
        &&label_80D34264,
        &&label_80D34268,
        &&label_80D3426C,
        &&label_80D34270,
        &&label_80D34274,
        &&label_80D34278,
        &&label_80D3427C,
        &&label_80D34280,
        &&label_80D34284,
        &&label_80D34288,
        &&label_80D3428C,
        &&label_80D34290,
        &&label_80D34294,
        &&label_80D34298,
        &&label_80D3429C,
        &&label_80D342A0,
        &&label_80D342A4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D341C0u && pc <= 0x80D342A4u && ((pc - 0x80D341C0u) & 3u) == 0u)
            goto *pc_table_80D341C0[(pc - 0x80D341C0u) >> 2];
    }
    return;
label_80D341C0:
    ctx->pc = 0x80D341C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D341C0: stwu     r1, -16(r1)
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
label_80D341C4:
    ctx->pc = 0x80D341C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D341C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D341C8:
    ctx->pc = 0x80D341C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D341C8: stw     r0, 20(r1)
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
label_80D341CC:
    ctx->pc = 0x80D341CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341CCu)) return;
    // 80D341CC: cmpwi   r3, 2
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

label_80D341D0:
    ctx->pc = 0x80D341D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341D0u)) return;
    // 80D341D0: bc    12, 2, 0x80D34290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D34290;
        }
    }

label_80D341D4:
    ctx->pc = 0x80D341D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341D4: bc    4, 0, 0x80D341E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D341E8;
        }
    }

label_80D341D8:
    ctx->pc = 0x80D341D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D341D8: cmpwi   r3, 0
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

label_80D341DC:
    ctx->pc = 0x80D341DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341DCu)) return;
    // 80D341DC: bc    12, 2, 0x80D34298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D34298;
        }
    }

label_80D341E0:
    ctx->pc = 0x80D341E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341E0: bc    4, 0, 0x80D341F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D341F0;
        }
    }

label_80D341E4:
    ctx->pc = 0x80D341E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341E4: b       0x80D34298
    {
            goto label_80D34298;
    }

label_80D341E8:
    ctx->pc = 0x80D341E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D341E8: cmpwi   r3, 4
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

label_80D341EC:
    ctx->pc = 0x80D341ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341ECu)) return;
    // 80D341EC: b       0x80D34298
    {
            goto label_80D34298;
    }

label_80D341F0:
    ctx->pc = 0x80D341F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341F0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D341F4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D341F4:
    ctx->pc = 0x80D341F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341F4: bl      0x80460A60
    {
            ctx->lr = 0x80D341F8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D341F8:
    ctx->pc = 0x80D341F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341F8: bl      0x80460A24
    {
            ctx->lr = 0x80D341FCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D341FC:
    ctx->pc = 0x80D341FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D341FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34200:
    ctx->pc = 0x80D34200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34200u)) return;
    // 80D34200: bl      0x8045EC10
    {
            ctx->lr = 0x80D34204u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D34204:
    ctx->pc = 0x80D34204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34204: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34208:
    ctx->pc = 0x80D34208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34208u)) return;
    // 80D34208: bl      0x8045F220
    {
            ctx->lr = 0x80D3420Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3420C:
    ctx->pc = 0x80D3420Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3420Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3420C: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34210:
    ctx->pc = 0x80D34210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34210u)) return;
    // 80D34210: addi    r4, r4, -24816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24816);

label_80D34214:
    ctx->pc = 0x80D34214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34214: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34214u)) return;
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
label_80D34218:
    ctx->pc = 0x80D34218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34218u)) return;
    // 80D34218: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3421C:
    ctx->pc = 0x80D3421Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3421Cu)) return;
    // 80D3421C: addi    r4, r4, -24812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24812);

label_80D34220:
    ctx->pc = 0x80D34220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34220: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34220u)) return;
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
label_80D34224:
    ctx->pc = 0x80D34224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34224u)) return;
    // 80D34224: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34228:
    ctx->pc = 0x80D34228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34228u)) return;
    // 80D34228: addi    r4, r4, -24808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24808);

label_80D3422C:
    ctx->pc = 0x80D3422Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3422Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3422C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3422Cu)) return;
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
label_80D34230:
    ctx->pc = 0x80D34230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34230u)) return;
    // 80D34230: bl      0x8045E70C
    {
            ctx->lr = 0x80D34234u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D34234:
    ctx->pc = 0x80D34234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34234: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34238:
    ctx->pc = 0x80D34238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34238u)) return;
    // 80D34238: bl      0x8045F220
    {
            ctx->lr = 0x80D3423Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3423C:
    ctx->pc = 0x80D3423Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3423Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3423C: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34240:
    ctx->pc = 0x80D34240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34240u)) return;
    // 80D34240: addi    r4, r4, -24568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24568);

label_80D34244:
    ctx->pc = 0x80D34244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34244u)) return;
    // 80D34244: bl      0x8045C060
    {
            ctx->lr = 0x80D34248u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D34248:
    ctx->pc = 0x80D34248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34248: li      r3, 1547
    ctx->gpr[3] = (u32)(s32)(1547);

label_80D3424C:
    ctx->pc = 0x80D3424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3424Cu)) return;
    // 80D3424C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D34250u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D34250:
    ctx->pc = 0x80D34250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D34250: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D34254:
    ctx->pc = 0x80D34254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34254u)) return;
    // 80D34254: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D34258:
    ctx->pc = 0x80D34258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34258u)) return;
    // 80D34258: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D3425C:
    ctx->pc = 0x80D3425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3425Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3425C: lwz     r0, 0(r4)
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
label_80D34260:
    ctx->pc = 0x80D34260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34260u)) return;
    // 80D34260: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D34264:
    ctx->pc = 0x80D34264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34264u)) return;
    // 80D34264: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34268:
    ctx->pc = 0x80D34268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34268u)) return;
    // 80D34268: addi    r4, r4, -24596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24596);

label_80D3426C:
    ctx->pc = 0x80D3426Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3426Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3426C: lwzx    r4, r4, r0
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
label_80D34270:
    ctx->pc = 0x80D34270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34270: lwz     r4, 0(r4)
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
label_80D34274:
    ctx->pc = 0x80D34274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34274u)) return;
    // 80D34274: bl      0x8045F608
    {
            ctx->lr = 0x80D34278u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D34278:
    ctx->pc = 0x80D34278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34278: bl      0x8045BFF4
    {
            ctx->lr = 0x80D3427Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D3427C:
    ctx->pc = 0x80D3427Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3427Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3427C: bl      0x8045F300
    {
            ctx->lr = 0x80D34280u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D34280:
    ctx->pc = 0x80D34280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34280: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34284:
    ctx->pc = 0x80D34284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34284u)) return;
    // 80D34284: bl      0x8045F220
    {
            ctx->lr = 0x80D34288u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34288:
    ctx->pc = 0x80D34288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34288: bl      0x8045E760
    {
            ctx->lr = 0x80D3428Cu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D3428C:
    ctx->pc = 0x80D3428Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3428Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3428C: b       0x80D34298
    {
            goto label_80D34298;
    }

label_80D34290:
    ctx->pc = 0x80D34290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34290: bl      0x8045DE34
    {
            ctx->lr = 0x80D34294u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D34294:
    ctx->pc = 0x80D34294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34294: bl      0x80460A80
    {
            ctx->lr = 0x80D34298u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D34298:
    ctx->pc = 0x80D34298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34298: lwz     r0, 20(r1)
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
label_80D3429C:
    ctx->pc = 0x80D3429Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D3429Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3429C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D342A0:
    ctx->pc = 0x80D342A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342A0u)) return;
    // 80D342A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D342A4:
    ctx->pc = 0x80D342A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342A4u)) return;
    // 80D342A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D341C0;
        }
    }

    ctx->pc = 0x80D342A8u;
    return;
return_dispatch_80D341C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D341F4u: goto label_80D341F4;
    case 0x80D341F8u: goto label_80D341F8;
    case 0x80D341FCu: goto label_80D341FC;
    case 0x80D34204u: goto label_80D34204;
    case 0x80D3420Cu: goto label_80D3420C;
    case 0x80D34234u: goto label_80D34234;
    case 0x80D3423Cu: goto label_80D3423C;
    case 0x80D34248u: goto label_80D34248;
    case 0x80D34250u: goto label_80D34250;
    case 0x80D34278u: goto label_80D34278;
    case 0x80D3427Cu: goto label_80D3427C;
    case 0x80D34280u: goto label_80D34280;
    case 0x80D34288u: goto label_80D34288;
    case 0x80D3428Cu: goto label_80D3428C;
    case 0x80D34294u: goto label_80D34294;
    case 0x80D34298u: goto label_80D34298;
    default: return;
    }
}

