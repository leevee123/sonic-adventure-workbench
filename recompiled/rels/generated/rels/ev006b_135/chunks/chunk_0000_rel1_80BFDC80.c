// DolRecomp output
#include "../generated.h"

void func_80BFDC80(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80BFDC80[14] = {
        &&label_80BFDC80,
        &&label_80BFDC84,
        &&label_80BFDC88,
        &&label_80BFDC8C,
        &&label_80BFDC90,
        &&label_80BFDC94,
        &&label_80BFDC98,
        &&label_80BFDC9C,
        &&label_80BFDCA0,
        &&label_80BFDCA4,
        &&label_80BFDCA8,
        &&label_80BFDCAC,
        &&label_80BFDCB0,
        &&label_80BFDCB4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80BFDC80u && pc <= 0x80BFDCB4u && ((pc - 0x80BFDC80u) & 3u) == 0u)
            goto *pc_table_80BFDC80[(pc - 0x80BFDC80u) >> 2];
    }
    return;
label_80BFDC80:
    ctx->pc = 0x80BFDC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDC80: stwu     r1, -16(r1)
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
label_80BFDC84:
    ctx->pc = 0x80BFDC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDC84: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC88:
    ctx->pc = 0x80BFDC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDC88: stw     r0, 20(r1)
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
label_80BFDC8C:
    ctx->pc = 0x80BFDC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC8Cu)) return;
    // 80BFDC8C: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFDC90:
    ctx->pc = 0x80BFDC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC90u)) return;
    // 80BFDC90: bc    12, 2, 0x80BFDC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFDC98;
        }
    }

label_80BFDC94:
    ctx->pc = 0x80BFDC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDC94: b       0x80BFDCA8
    {
            goto label_80BFDCA8;
    }

label_80BFDC98:
    ctx->pc = 0x80BFDC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFDC98: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80BFDC9C:
    ctx->pc = 0x80BFDC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC9Cu)) return;
    // 80BFDC9C: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDCA0:
    ctx->pc = 0x80BFDCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCA0u)) return;
    // 80BFDCA0: addi    r4, r4, 28744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28744);

label_80BFDCA4:
    ctx->pc = 0x80BFDCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCA4u)) return;
    // 80BFDCA4: bl      0x8045F608
    {
            ctx->lr = 0x80BFDCA8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80BFDCA8:
    ctx->pc = 0x80BFDCA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDCA8: lwz     r0, 20(r1)
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
label_80BFDCAC:
    ctx->pc = 0x80BFDCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFDCACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDCAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDCB0:
    ctx->pc = 0x80BFDCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCB0u)) return;
    // 80BFDCB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFDCB4:
    ctx->pc = 0x80BFDCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCB4u)) return;
    // 80BFDCB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDC80;
        }
    }

    ctx->pc = 0x80BFDCB8u;
    return;
return_dispatch_80BFDC80:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80BFDCA8u: goto label_80BFDCA8;
    default: return;
    }
}

