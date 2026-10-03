// DolRecomp output
#include "../generated.h"

void func_808F2D80(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_808F2D80[9] = {
        &&label_808F2D80,
        &&label_808F2D84,
        &&label_808F2D88,
        &&label_808F2D8C,
        &&label_808F2D90,
        &&label_808F2D94,
        &&label_808F2D98,
        &&label_808F2D9C,
        &&label_808F2DA0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x808F2D80u && pc <= 0x808F2DA0u && ((pc - 0x808F2D80u) & 3u) == 0u)
            goto *pc_table_808F2D80[(pc - 0x808F2D80u) >> 2];
    }
    return;
label_808F2D80:
    ctx->pc = 0x808F2D80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2D80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 808F2D80: lis     r5, -27868
    ctx->gpr[5] = ((u32)(s32)(-27868) << 16);

label_808F2D84:
    ctx->pc = 0x808F2D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D84u)) return;
    // 808F2D84: lis     r4, -28652
    ctx->gpr[4] = ((u32)(s32)(-28652) << 16);

label_808F2D88:
    ctx->pc = 0x808F2D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D88u)) return;
    // 808F2D88: lis     r3, -27867
    ctx->gpr[3] = ((u32)(s32)(-27867) << 16);

label_808F2D8C:
    ctx->pc = 0x808F2D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D8Cu)) return;
    // 808F2D8C: addi    r5, r5, 28040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28040);

label_808F2D90:
    ctx->pc = 0x808F2D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D90u)) return;
    // 808F2D90: addi    r4, r4, -608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-608);

label_808F2D94:
    ctx->pc = 0x808F2D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D94u)) return;
    // 808F2D94: addi    r0, r3, -31556
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31556);

label_808F2D98:
    ctx->pc = 0x808F2D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2D98: stw     r5, 1200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D9C:
    ctx->pc = 0x808F2D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2D9C: stw     r0, 1216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2DA0:
    ctx->pc = 0x808F2DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2DA0u)) return;
    // 808F2DA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

    ctx->pc = 0x808F2DA4u;
}

