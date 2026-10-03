// DolRecomp output
#include "../generated.h"

void func_80BBCBC0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80BBCBC0[14] = {
        &&label_80BBCBC0,
        &&label_80BBCBC4,
        &&label_80BBCBC8,
        &&label_80BBCBCC,
        &&label_80BBCBD0,
        &&label_80BBCBD4,
        &&label_80BBCBD8,
        &&label_80BBCBDC,
        &&label_80BBCBE0,
        &&label_80BBCBE4,
        &&label_80BBCBE8,
        &&label_80BBCBEC,
        &&label_80BBCBF0,
        &&label_80BBCBF4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80BBCBC0u && pc <= 0x80BBCBF4u && ((pc - 0x80BBCBC0u) & 3u) == 0u)
            goto *pc_table_80BBCBC0[(pc - 0x80BBCBC0u) >> 2];
    }
    return;
label_80BBCBC0:
    ctx->pc = 0x80BBCBC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBCBC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBCBC0: stwu     r1, -16(r1)
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
label_80BBCBC4:
    ctx->pc = 0x80BBCBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBCBC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BBCBC8:
    ctx->pc = 0x80BBCBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BBCBC8: stw     r0, 20(r1)
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
label_80BBCBCC:
    ctx->pc = 0x80BBCBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBCCu)) return;
    // 80BBCBCC: cmpwi   r3, 1
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

label_80BBCBD0:
    ctx->pc = 0x80BBCBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBD0u)) return;
    // 80BBCBD0: bc    12, 2, 0x80BBCBD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BBCBD8;
        }
    }

label_80BBCBD4:
    ctx->pc = 0x80BBCBD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBCBD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBCBD4: b       0x80BBCBE8
    {
            goto label_80BBCBE8;
    }

label_80BBCBD8:
    ctx->pc = 0x80BBCBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBCBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BBCBD8: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80BBCBDC:
    ctx->pc = 0x80BBCBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBDCu)) return;
    // 80BBCBDC: lis     r4, -27516
    ctx->gpr[4] = ((u32)(s32)(-27516) << 16);

label_80BBCBE0:
    ctx->pc = 0x80BBCBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBE0u)) return;
    // 80BBCBE0: addi    r4, r4, 15304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15304);

label_80BBCBE4:
    ctx->pc = 0x80BBCBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBE4u)) return;
    // 80BBCBE4: bl      0x8045F608
    {
            ctx->lr = 0x80BBCBE8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80BBCBE8:
    ctx->pc = 0x80BBCBE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBCBE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBCBE8: lwz     r0, 20(r1)
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
label_80BBCBEC:
    ctx->pc = 0x80BBCBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BBCBECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BBCBEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BBCBF0:
    ctx->pc = 0x80BBCBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBF0u)) return;
    // 80BBCBF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BBCBF4:
    ctx->pc = 0x80BBCBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBCBF4u)) return;
    // 80BBCBF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBCBC0;
        }
    }

    ctx->pc = 0x80BBCBF8u;
    return;
return_dispatch_80BBCBC0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80BBCBE8u: goto label_80BBCBE8;
    default: return;
    }
}

