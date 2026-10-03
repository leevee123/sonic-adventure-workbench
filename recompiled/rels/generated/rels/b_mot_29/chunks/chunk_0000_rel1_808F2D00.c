// DolRecomp output
#include "../generated.h"

void func_808F2D00(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_808F2D00[14] = {
        &&label_808F2D00,
        &&label_808F2D04,
        &&label_808F2D08,
        &&label_808F2D0C,
        &&label_808F2D10,
        &&label_808F2D14,
        &&label_808F2D18,
        &&label_808F2D1C,
        &&label_808F2D20,
        &&label_808F2D24,
        &&label_808F2D28,
        &&label_808F2D2C,
        &&label_808F2D30,
        &&label_808F2D34
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x808F2D00u && pc <= 0x808F2D34u && ((pc - 0x808F2D00u) & 3u) == 0u)
            goto *pc_table_808F2D00[(pc - 0x808F2D00u) >> 2];
    }
    return;
label_808F2D00:
    ctx->pc = 0x808F2D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 808F2D00: lis     r6, -27888
    ctx->gpr[6] = ((u32)(s32)(-27888) << 16);

label_808F2D04:
    ctx->pc = 0x808F2D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D04u)) return;
    // 808F2D04: lis     r5, -28653
    ctx->gpr[5] = ((u32)(s32)(-28653) << 16);

label_808F2D08:
    ctx->pc = 0x808F2D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D08u)) return;
    // 808F2D08: lis     r4, -27888
    ctx->gpr[4] = ((u32)(s32)(-27888) << 16);

label_808F2D0C:
    ctx->pc = 0x808F2D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D0Cu)) return;
    // 808F2D0C: lis     r3, -27888
    ctx->gpr[3] = ((u32)(s32)(-27888) << 16);

label_808F2D10:
    ctx->pc = 0x808F2D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D10u)) return;
    // 808F2D10: addi    r6, r6, 24064
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24064);

label_808F2D14:
    ctx->pc = 0x808F2D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D14u)) return;
    // 808F2D14: addi    r5, r5, 6648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6648);

label_808F2D18:
    ctx->pc = 0x808F2D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D18u)) return;
    // 808F2D18: addi    r0, r3, 16700
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16700);

label_808F2D1C:
    ctx->pc = 0x808F2D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D1Cu)) return;
    // 808F2D1C: addi    r3, r4, 1192
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(1192);

label_808F2D20:
    ctx->pc = 0x808F2D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2D20: stw     r6, 800(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(800);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D24:
    ctx->pc = 0x808F2D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2D24: stw     r6, 816(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(816);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D28:
    ctx->pc = 0x808F2D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2D28: stw     r3, 832(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(832);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D2C:
    ctx->pc = 0x808F2D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2D2C: stw     r0, 864(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D30:
    ctx->pc = 0x808F2D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2D30: stw     r0, 848(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2D34:
    ctx->pc = 0x808F2D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2D34u)) return;
    // 808F2D34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

    ctx->pc = 0x808F2D38u;
}

