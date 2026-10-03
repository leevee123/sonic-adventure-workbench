// DolRecomp output
#include "../generated.h"

void func_808F2D40(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_808F2D40[9] = {
        &&label_808F2D40,
        &&label_808F2D44,
        &&label_808F2D48,
        &&label_808F2D4C,
        &&label_808F2D50,
        &&label_808F2D54,
        &&label_808F2D58,
        &&label_808F2D5C,
        &&label_808F2D60
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x808F2D40u && pc <= 0x808F2D60u && ((pc - 0x808F2D40u) & 3u) == 0u)
            goto *pc_table_808F2D40[(pc - 0x808F2D40u) >> 2];
    }
    return;
label_808F2D40:
    ctx->pc = 0x808F2D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 808F2D40: lis     r5, -27873
    ctx->gpr[5] = ((u32)(s32)(-27873) << 16);

label_808F2D44:
    ctx->pc = 0x808F2D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D44u)) return;
    // 808F2D44: lis     r4, -28652
    ctx->gpr[4] = ((u32)(s32)(-28652) << 16);

label_808F2D48:
    ctx->pc = 0x808F2D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D48u)) return;
    // 808F2D48: lis     r3, -27873
    ctx->gpr[3] = ((u32)(s32)(-27873) << 16);

label_808F2D4C:
    ctx->pc = 0x808F2D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D4Cu)) return;
    // 808F2D4C: addi    r5, r5, -20616
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20616);

label_808F2D50:
    ctx->pc = 0x808F2D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D50u)) return;
    // 808F2D50: addi    r4, r4, -7520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7520);

label_808F2D54:
    ctx->pc = 0x808F2D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D54u)) return;
    // 808F2D54: addi    r0, r3, -13604
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-13604);

label_808F2D58:
    ctx->pc = 0x808F2D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2D58: stw     r5, 624(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D5C:
    ctx->pc = 0x808F2D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2D5C: stw     r0, 640(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D60:
    ctx->pc = 0x808F2D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D60u)) return;
    // 808F2D60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

    ctx->pc = 0x808F2D64u;
}

