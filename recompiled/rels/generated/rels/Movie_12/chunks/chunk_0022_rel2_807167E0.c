// DolRecomp output
#include "../generated.h"

static void loop_80716A00(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716A00:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716A00u;
            return;
        }
        ctx->downcount -= 6;
    }
    ctx->pc = 0x80716A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716A00: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A04u)) return;
    // 80716A04: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A08u)) return;
    // 80716A08: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716A0C: stb     r10, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A10u)) return;
    // 80716A10: addi    r10, r10, 2
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(2);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A14u)) return;
    // 80716A14: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A18u)) return;
    // 80716A18: cmpwi   r9, 16
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A1Cu)) return;
    // 80716A1C: bc    12, 0, 0x80716A00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716A00u;
                return;
            }
            goto label_80716A00;
        }
    }

    ctx->pc = 0x80716A20u;
}

static void loop_80716A3C(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716A3C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 41u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716A3Cu;
            return;
        }
        ctx->downcount -= 41;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A3Cu)) return;
    // 80716A3C: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A40u)) return;
    // 80716A40: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80716A44: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80716A48: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A4Cu)) return;
    // 80716A4C: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A50u)) return;
    // 80716A50: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A54u)) return;
    // 80716A54: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80716A58: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80716A5C: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A60u)) return;
    // 80716A60: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A64u)) return;
    // 80716A64: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A68u)) return;
    // 80716A68: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80716A6C: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80716A70: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A74u)) return;
    // 80716A74: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A78u)) return;
    // 80716A78: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A7Cu)) return;
    // 80716A7C: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80716A80: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80716A84: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A88u)) return;
    // 80716A88: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A8Cu)) return;
    // 80716A8C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A90u)) return;
    // 80716A90: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80716A94: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80716A98: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A9Cu)) return;
    // 80716A9C: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AA0u)) return;
    // 80716AA0: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AA4u)) return;
    // 80716AA4: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716AA8: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80716AAC: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AB0u)) return;
    // 80716AB0: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AB4u)) return;
    // 80716AB4: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AB8u)) return;
    // 80716AB8: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80716ABC: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716AC0: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AC4u)) return;
    // 80716AC4: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AC8u)) return;
    // 80716AC8: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ACCu)) return;
    // 80716ACC: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716AD0: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716AD4: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AD8u)) return;
    // 80716AD8: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ADCu)) return;
    // 80716ADC: bc    16, 0, 0x80716A3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716A3Cu;
                return;
            }
            goto label_80716A3C;
        }
    }

    ctx->pc = 0x80716AE0u;
}

static void loop_80716AEC(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716AEC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716AECu;
            return;
        }
        ctx->downcount -= 6;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AECu)) return;
    // 80716AEC: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AF0u)) return;
    // 80716AF0: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

    ctx->pc = 0x80716AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716AF4: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716AF8: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AFCu)) return;
    // 80716AFC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B00u)) return;
    // 80716B00: bc    16, 0, 0x80716AEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716AECu;
                return;
            }
            goto label_80716AEC;
        }
    }

    ctx->pc = 0x80716B04u;
}

static void loop_80716B24(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716B24:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716B24u;
            return;
        }
        ctx->downcount -= 18;
    }
    ctx->pc = 0x80716B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80716B24: stb     r10, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B28u)) return;
    // 80716B28: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80716B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80716B2C: stb     r10, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B30u)) return;
    // 80716B30: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80716B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716B34: stb     r10, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B38u)) return;
    // 80716B38: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80716B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80716B3C: stb     r10, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B40u)) return;
    // 80716B40: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80716B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80716B44: stb     r10, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B48u)) return;
    // 80716B48: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80716B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716B4C: stb     r10, 5(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B50u)) return;
    // 80716B50: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80716B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716B54: stb     r10, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B58u)) return;
    // 80716B58: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    ctx->pc = 0x80716B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716B5C: stb     r10, 7(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B60u)) return;
    // 80716B60: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B64u)) return;
    // 80716B64: addi    r8, r8, 8
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(8);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B68u)) return;
    // 80716B68: bc    16, 0, 0x80716B24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716B24u;
                return;
            }
            goto label_80716B24;
        }
    }

    ctx->pc = 0x80716B6Cu;
}

static void loop_80716B78(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716B78:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716B78u;
            return;
        }
        ctx->downcount -= 4;
    }
    ctx->pc = 0x80716B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716B78: stb     r10, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B7Cu)) return;
    // 80716B7C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B80u)) return;
    // 80716B80: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B84u)) return;
    // 80716B84: bc    16, 0, 0x80716B78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716B78u;
                return;
            }
            goto label_80716B78;
        }
    }

    ctx->pc = 0x80716B88u;
}

static void loop_80716BD4(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716BD4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 41u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716BD4u;
            return;
        }
        ctx->downcount -= 41;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BD4u)) return;
    // 80716BD4: add   r3, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BD8u)) return;
    // 80716BD8: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    ctx->pc = 0x80716BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80716BDC: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BE0u)) return;
    // 80716BE0: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

    ctx->pc = 0x80716BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80716BE4: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80716BE8: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80716BEC: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80716BF0: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BF4u)) return;
    // 80716BF4: add   r3, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x80716BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80716BF8: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BFCu)) return;
    // 80716BFC: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C00u)) return;
    // 80716C00: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C04u)) return;
    // 80716C04: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

    ctx->pc = 0x80716C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80716C08: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80716C0C: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80716C10: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80716C14: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80716C18: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C1Cu)) return;
    // 80716C1C: add   r3, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x80716C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80716C20: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C24u)) return;
    // 80716C24: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C28u)) return;
    // 80716C28: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C2Cu)) return;
    // 80716C2C: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

    ctx->pc = 0x80716C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80716C30: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80716C34: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80716C38: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80716C3C: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716C40: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C44u)) return;
    // 80716C44: add   r3, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x80716C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80716C48: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C4Cu)) return;
    // 80716C4C: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C50u)) return;
    // 80716C50: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C54u)) return;
    // 80716C54: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

    ctx->pc = 0x80716C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716C58: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80716C5C: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716C60: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716C64: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716C68: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716C6C: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C70u)) return;
    // 80716C70: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C74u)) return;
    // 80716C74: bc    16, 0, 0x80716BD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716BD4u;
                return;
            }
            goto label_80716BD4;
        }
    }

    ctx->pc = 0x80716C78u;
}

static void loop_80716C9C(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716C9C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 347u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716C9Cu;
            return;
        }
        ctx->downcount -= 347;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716C9Cu)) return;
    // 80716C9C: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CA0u)) return;
    // 80716CA0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 305u : 0u;
    // 80716CA4: stb     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 304u : 0u;
    // 80716CA8: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CACu)) return;
    // 80716CAC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CB0u)) return;
    // 80716CB0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 262u : 0u;
    // 80716CB4: stb     r0, -1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 261u : 0u;
    // 80716CB8: stb     r0, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CBCu)) return;
    // 80716CBC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CC0u)) return;
    // 80716CC0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 219u : 0u;
    // 80716CC4: stb     r0, -2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 218u : 0u;
    // 80716CC8: stb     r0, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CCCu)) return;
    // 80716CCC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CD0u)) return;
    // 80716CD0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 176u : 0u;
    // 80716CD4: stb     r0, -3(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 175u : 0u;
    // 80716CD8: stb     r0, -3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CDCu)) return;
    // 80716CDC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CE0u)) return;
    // 80716CE0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 133u : 0u;
    // 80716CE4: stb     r0, -4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 132u : 0u;
    // 80716CE8: stb     r0, -4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CECu)) return;
    // 80716CEC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CF0u)) return;
    // 80716CF0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 90u : 0u;
    // 80716CF4: stb     r0, -5(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 89u : 0u;
    // 80716CF8: stb     r0, -5(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CFCu)) return;
    // 80716CFC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D00u)) return;
    // 80716D00: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80716D04: stb     r0, -6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80716D08: stb     r0, -6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716D0Cu)) return;
    // 80716D0C: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D10u)) return;
    // 80716D10: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716D14: stb     r0, -7(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D18u)) return;
    // 80716D18: addi    r7, r7, -8
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-8);

    ctx->pc = 0x80716D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716D1C: stb     r0, -7(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D20u)) return;
    // 80716D20: addi    r6, r6, -8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D24u)) return;
    // 80716D24: bc    16, 0, 0x80716C9C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716C9Cu;
                return;
            }
            goto label_80716C9C;
        }
    }

    ctx->pc = 0x80716D28u;
}

static void loop_80716D34(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716D34:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 46u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716D34u;
            return;
        }
        ctx->downcount -= 46;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716D34u)) return;
    // 80716D34: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D38u)) return;
    // 80716D38: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

    ctx->pc = 0x80716D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716D3C: stb     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D40u)) return;
    // 80716D40: addi    r7, r7, -1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1);

    ctx->pc = 0x80716D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716D44: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D48u)) return;
    // 80716D48: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D4Cu)) return;
    // 80716D4C: bc    16, 0, 0x80716D34
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716D34u;
                return;
            }
            goto label_80716D34;
        }
    }

    ctx->pc = 0x80716D50u;
}

static void loop_80716D60(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716D60:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 41u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716D60u;
            return;
        }
        ctx->downcount -= 41;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D60u)) return;
    // 80716D60: add   r3, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D64u)) return;
    // 80716D64: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    ctx->pc = 0x80716D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80716D68: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D6Cu)) return;
    // 80716D6C: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

    ctx->pc = 0x80716D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80716D70: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80716D74: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80716D78: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80716D7C: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D80u)) return;
    // 80716D80: add   r3, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x80716D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80716D84: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D88u)) return;
    // 80716D88: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D8Cu)) return;
    // 80716D8C: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D90u)) return;
    // 80716D90: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

    ctx->pc = 0x80716D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80716D94: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80716D98: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80716D9C: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80716DA0: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80716DA4: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DA8u)) return;
    // 80716DA8: add   r3, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x80716DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80716DAC: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DB0u)) return;
    // 80716DB0: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DB4u)) return;
    // 80716DB4: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DB8u)) return;
    // 80716DB8: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

    ctx->pc = 0x80716DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80716DBC: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80716DC0: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80716DC4: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80716DC8: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716DCC: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DD0u)) return;
    // 80716DD0: add   r3, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x80716DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80716DD4: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DD8u)) return;
    // 80716DD8: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DDCu)) return;
    // 80716DDC: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DE0u)) return;
    // 80716DE0: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

    ctx->pc = 0x80716DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716DE4: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80716DE8: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716DEC: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716DF0: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716DF4: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716DF8: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DFCu)) return;
    // 80716DFC: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E00u)) return;
    // 80716E00: bc    16, 0, 0x80716D60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716D60u;
                return;
            }
            goto label_80716D60;
        }
    }

    ctx->pc = 0x80716E04u;
}

static void loop_80716E30(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716E30:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 403u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716E30u;
            return;
        }
        ctx->downcount -= 403;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E30u)) return;
    // 80716E30: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E34u)) return;
    // 80716E34: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E38u)) return;
    // 80716E38: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E3Cu)) return;
    // 80716E3C: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E40u)) return;
    // 80716E40: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E44u)) return;
    // 80716E44: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E48u)) return;
    // 80716E48: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E4Cu)) return;
    // 80716E4C: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x80716E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 347u : 0u;
    // 80716E50: stb     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E54u)) return;
    // 80716E54: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80716E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 345u : 0u;
    // 80716E58: stb     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E5Cu)) return;
    // 80716E5C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E60u)) return;
    // 80716E60: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E64u)) return;
    // 80716E64: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E68u)) return;
    // 80716E68: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x80716E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 297u : 0u;
    // 80716E6C: stb     r9, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E70u)) return;
    // 80716E70: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80716E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 295u : 0u;
    // 80716E74: stb     r9, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E78u)) return;
    // 80716E78: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E7Cu)) return;
    // 80716E7C: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E80u)) return;
    // 80716E80: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E84u)) return;
    // 80716E84: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x80716E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 247u : 0u;
    // 80716E88: stb     r9, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E8Cu)) return;
    // 80716E8C: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80716E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 245u : 0u;
    // 80716E90: stb     r9, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E94u)) return;
    // 80716E94: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E98u)) return;
    // 80716E98: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E9Cu)) return;
    // 80716E9C: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716EA0u)) return;
    // 80716EA0: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x80716EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 197u : 0u;
    // 80716EA4: stb     r9, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EA8u)) return;
    // 80716EA8: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80716EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 195u : 0u;
    // 80716EAC: stb     r9, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EB0u)) return;
    // 80716EB0: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716EB4u)) return;
    // 80716EB4: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EB8u)) return;
    // 80716EB8: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716EBCu)) return;
    // 80716EBC: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x80716EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 147u : 0u;
    // 80716EC0: stb     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EC4u)) return;
    // 80716EC4: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80716EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 145u : 0u;
    // 80716EC8: stb     r9, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ECCu)) return;
    // 80716ECC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716ED0u)) return;
    // 80716ED0: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ED4u)) return;
    // 80716ED4: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716ED8u)) return;
    // 80716ED8: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x80716EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 97u : 0u;
    // 80716EDC: stb     r9, 5(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EE0u)) return;
    // 80716EE0: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80716EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 80716EE4: stb     r9, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EE8u)) return;
    // 80716EE8: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716EECu)) return;
    // 80716EEC: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EF0u)) return;
    // 80716EF0: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716EF4u)) return;
    // 80716EF4: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x80716EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80716EF8: stb     r9, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80716EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80716EFC: stb     r9, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716F00u)) return;
    // 80716F00: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F04u)) return;
    // 80716F04: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    ctx->pc = 0x80716F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716F08: stb     r9, 7(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F0Cu)) return;
    // 80716F0C: addi    r6, r6, 8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8);

    ctx->pc = 0x80716F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716F10: stb     r9, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F14u)) return;
    // 80716F14: addi    r4, r4, 8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F18u)) return;
    // 80716F18: bc    16, 0, 0x80716E30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716E30u;
                return;
            }
            goto label_80716E30;
        }
    }

    ctx->pc = 0x80716F1Cu;
}

static void loop_80716F28(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80716F28:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 53u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80716F28u;
            return;
        }
        ctx->downcount -= 53;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F28u)) return;
    // 80716F28: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F2Cu)) return;
    // 80716F2C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716F30u)) return;
    // 80716F30: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716F34u)) return;
    // 80716F34: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F38u)) return;
    // 80716F38: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    ctx->pc = 0x80716F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716F3C: stb     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F40u)) return;
    // 80716F40: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    ctx->pc = 0x80716F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716F44: stb     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F48u)) return;
    // 80716F48: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F4Cu)) return;
    // 80716F4C: bc    16, 0, 0x80716F28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716F28u;
                return;
            }
            goto label_80716F28;
        }
    }

    ctx->pc = 0x80716F50u;
}

void func_807167E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_807167E0[477] = {
        &&label_807167E0,
        &&label_807167E4,
        &&label_807167E8,
        &&label_807167EC,
        &&label_807167F0,
        &&label_807167F4,
        &&label_807167F8,
        &&label_807167FC,
        &&label_80716800,
        &&label_80716804,
        &&label_80716808,
        &&label_8071680C,
        &&label_80716810,
        &&label_80716814,
        &&label_80716818,
        &&label_8071681C,
        &&label_80716820,
        &&label_80716824,
        &&label_80716828,
        &&label_8071682C,
        &&label_80716830,
        &&label_80716834,
        &&label_80716838,
        &&label_8071683C,
        &&label_80716840,
        &&label_80716844,
        &&label_80716848,
        &&label_8071684C,
        &&label_80716850,
        &&label_80716854,
        &&label_80716858,
        &&label_8071685C,
        &&label_80716860,
        &&label_80716864,
        &&label_80716868,
        &&label_8071686C,
        &&label_80716870,
        &&label_80716874,
        &&label_80716878,
        &&label_8071687C,
        &&label_80716880,
        &&label_80716884,
        &&label_80716888,
        &&label_8071688C,
        &&label_80716890,
        &&label_80716894,
        &&label_80716898,
        &&label_8071689C,
        &&label_807168A0,
        &&label_807168A4,
        &&label_807168A8,
        &&label_807168AC,
        &&label_807168B0,
        &&label_807168B4,
        &&label_807168B8,
        &&label_807168BC,
        &&label_807168C0,
        &&label_807168C4,
        &&label_807168C8,
        &&label_807168CC,
        &&label_807168D0,
        &&label_807168D4,
        &&label_807168D8,
        &&label_807168DC,
        &&label_807168E0,
        &&label_807168E4,
        &&label_807168E8,
        &&label_807168EC,
        &&label_807168F0,
        &&label_807168F4,
        &&label_807168F8,
        &&label_807168FC,
        &&label_80716900,
        &&label_80716904,
        &&label_80716908,
        &&label_8071690C,
        &&label_80716910,
        &&label_80716914,
        &&label_80716918,
        &&label_8071691C,
        &&label_80716920,
        &&label_80716924,
        &&label_80716928,
        &&label_8071692C,
        &&label_80716930,
        &&label_80716934,
        &&label_80716938,
        &&label_8071693C,
        &&label_80716940,
        &&label_80716944,
        &&label_80716948,
        &&label_8071694C,
        &&label_80716950,
        &&label_80716954,
        &&label_80716958,
        &&label_8071695C,
        &&label_80716960,
        &&label_80716964,
        &&label_80716968,
        &&label_8071696C,
        &&label_80716970,
        &&label_80716974,
        &&label_80716978,
        &&label_8071697C,
        &&label_80716980,
        &&label_80716984,
        &&label_80716988,
        &&label_8071698C,
        &&label_80716990,
        &&label_80716994,
        &&label_80716998,
        &&label_8071699C,
        &&label_807169A0,
        &&label_807169A4,
        &&label_807169A8,
        &&label_807169AC,
        &&label_807169B0,
        &&label_807169B4,
        &&label_807169B8,
        &&label_807169BC,
        &&label_807169C0,
        &&label_807169C4,
        &&label_807169C8,
        &&label_807169CC,
        &&label_807169D0,
        &&label_807169D4,
        &&label_807169D8,
        &&label_807169DC,
        &&label_807169E0,
        &&label_807169E4,
        &&label_807169E8,
        &&label_807169EC,
        &&label_807169F0,
        &&label_807169F4,
        &&label_807169F8,
        &&label_807169FC,
        &&label_80716A00,
        &&label_80716A04,
        &&label_80716A08,
        &&label_80716A0C,
        &&label_80716A10,
        &&label_80716A14,
        &&label_80716A18,
        &&label_80716A1C,
        &&label_80716A20,
        &&label_80716A24,
        &&label_80716A28,
        &&label_80716A2C,
        &&label_80716A30,
        &&label_80716A34,
        &&label_80716A38,
        &&label_80716A3C,
        &&label_80716A40,
        &&label_80716A44,
        &&label_80716A48,
        &&label_80716A4C,
        &&label_80716A50,
        &&label_80716A54,
        &&label_80716A58,
        &&label_80716A5C,
        &&label_80716A60,
        &&label_80716A64,
        &&label_80716A68,
        &&label_80716A6C,
        &&label_80716A70,
        &&label_80716A74,
        &&label_80716A78,
        &&label_80716A7C,
        &&label_80716A80,
        &&label_80716A84,
        &&label_80716A88,
        &&label_80716A8C,
        &&label_80716A90,
        &&label_80716A94,
        &&label_80716A98,
        &&label_80716A9C,
        &&label_80716AA0,
        &&label_80716AA4,
        &&label_80716AA8,
        &&label_80716AAC,
        &&label_80716AB0,
        &&label_80716AB4,
        &&label_80716AB8,
        &&label_80716ABC,
        &&label_80716AC0,
        &&label_80716AC4,
        &&label_80716AC8,
        &&label_80716ACC,
        &&label_80716AD0,
        &&label_80716AD4,
        &&label_80716AD8,
        &&label_80716ADC,
        &&label_80716AE0,
        &&label_80716AE4,
        &&label_80716AE8,
        &&label_80716AEC,
        &&label_80716AF0,
        &&label_80716AF4,
        &&label_80716AF8,
        &&label_80716AFC,
        &&label_80716B00,
        &&label_80716B04,
        &&label_80716B08,
        &&label_80716B0C,
        &&label_80716B10,
        &&label_80716B14,
        &&label_80716B18,
        &&label_80716B1C,
        &&label_80716B20,
        &&label_80716B24,
        &&label_80716B28,
        &&label_80716B2C,
        &&label_80716B30,
        &&label_80716B34,
        &&label_80716B38,
        &&label_80716B3C,
        &&label_80716B40,
        &&label_80716B44,
        &&label_80716B48,
        &&label_80716B4C,
        &&label_80716B50,
        &&label_80716B54,
        &&label_80716B58,
        &&label_80716B5C,
        &&label_80716B60,
        &&label_80716B64,
        &&label_80716B68,
        &&label_80716B6C,
        &&label_80716B70,
        &&label_80716B74,
        &&label_80716B78,
        &&label_80716B7C,
        &&label_80716B80,
        &&label_80716B84,
        &&label_80716B88,
        &&label_80716B8C,
        &&label_80716B90,
        &&label_80716B94,
        &&label_80716B98,
        &&label_80716B9C,
        &&label_80716BA0,
        &&label_80716BA4,
        &&label_80716BA8,
        &&label_80716BAC,
        &&label_80716BB0,
        &&label_80716BB4,
        &&label_80716BB8,
        &&label_80716BBC,
        &&label_80716BC0,
        &&label_80716BC4,
        &&label_80716BC8,
        &&label_80716BCC,
        &&label_80716BD0,
        &&label_80716BD4,
        &&label_80716BD8,
        &&label_80716BDC,
        &&label_80716BE0,
        &&label_80716BE4,
        &&label_80716BE8,
        &&label_80716BEC,
        &&label_80716BF0,
        &&label_80716BF4,
        &&label_80716BF8,
        &&label_80716BFC,
        &&label_80716C00,
        &&label_80716C04,
        &&label_80716C08,
        &&label_80716C0C,
        &&label_80716C10,
        &&label_80716C14,
        &&label_80716C18,
        &&label_80716C1C,
        &&label_80716C20,
        &&label_80716C24,
        &&label_80716C28,
        &&label_80716C2C,
        &&label_80716C30,
        &&label_80716C34,
        &&label_80716C38,
        &&label_80716C3C,
        &&label_80716C40,
        &&label_80716C44,
        &&label_80716C48,
        &&label_80716C4C,
        &&label_80716C50,
        &&label_80716C54,
        &&label_80716C58,
        &&label_80716C5C,
        &&label_80716C60,
        &&label_80716C64,
        &&label_80716C68,
        &&label_80716C6C,
        &&label_80716C70,
        &&label_80716C74,
        &&label_80716C78,
        &&label_80716C7C,
        &&label_80716C80,
        &&label_80716C84,
        &&label_80716C88,
        &&label_80716C8C,
        &&label_80716C90,
        &&label_80716C94,
        &&label_80716C98,
        &&label_80716C9C,
        &&label_80716CA0,
        &&label_80716CA4,
        &&label_80716CA8,
        &&label_80716CAC,
        &&label_80716CB0,
        &&label_80716CB4,
        &&label_80716CB8,
        &&label_80716CBC,
        &&label_80716CC0,
        &&label_80716CC4,
        &&label_80716CC8,
        &&label_80716CCC,
        &&label_80716CD0,
        &&label_80716CD4,
        &&label_80716CD8,
        &&label_80716CDC,
        &&label_80716CE0,
        &&label_80716CE4,
        &&label_80716CE8,
        &&label_80716CEC,
        &&label_80716CF0,
        &&label_80716CF4,
        &&label_80716CF8,
        &&label_80716CFC,
        &&label_80716D00,
        &&label_80716D04,
        &&label_80716D08,
        &&label_80716D0C,
        &&label_80716D10,
        &&label_80716D14,
        &&label_80716D18,
        &&label_80716D1C,
        &&label_80716D20,
        &&label_80716D24,
        &&label_80716D28,
        &&label_80716D2C,
        &&label_80716D30,
        &&label_80716D34,
        &&label_80716D38,
        &&label_80716D3C,
        &&label_80716D40,
        &&label_80716D44,
        &&label_80716D48,
        &&label_80716D4C,
        &&label_80716D50,
        &&label_80716D54,
        &&label_80716D58,
        &&label_80716D5C,
        &&label_80716D60,
        &&label_80716D64,
        &&label_80716D68,
        &&label_80716D6C,
        &&label_80716D70,
        &&label_80716D74,
        &&label_80716D78,
        &&label_80716D7C,
        &&label_80716D80,
        &&label_80716D84,
        &&label_80716D88,
        &&label_80716D8C,
        &&label_80716D90,
        &&label_80716D94,
        &&label_80716D98,
        &&label_80716D9C,
        &&label_80716DA0,
        &&label_80716DA4,
        &&label_80716DA8,
        &&label_80716DAC,
        &&label_80716DB0,
        &&label_80716DB4,
        &&label_80716DB8,
        &&label_80716DBC,
        &&label_80716DC0,
        &&label_80716DC4,
        &&label_80716DC8,
        &&label_80716DCC,
        &&label_80716DD0,
        &&label_80716DD4,
        &&label_80716DD8,
        &&label_80716DDC,
        &&label_80716DE0,
        &&label_80716DE4,
        &&label_80716DE8,
        &&label_80716DEC,
        &&label_80716DF0,
        &&label_80716DF4,
        &&label_80716DF8,
        &&label_80716DFC,
        &&label_80716E00,
        &&label_80716E04,
        &&label_80716E08,
        &&label_80716E0C,
        &&label_80716E10,
        &&label_80716E14,
        &&label_80716E18,
        &&label_80716E1C,
        &&label_80716E20,
        &&label_80716E24,
        &&label_80716E28,
        &&label_80716E2C,
        &&label_80716E30,
        &&label_80716E34,
        &&label_80716E38,
        &&label_80716E3C,
        &&label_80716E40,
        &&label_80716E44,
        &&label_80716E48,
        &&label_80716E4C,
        &&label_80716E50,
        &&label_80716E54,
        &&label_80716E58,
        &&label_80716E5C,
        &&label_80716E60,
        &&label_80716E64,
        &&label_80716E68,
        &&label_80716E6C,
        &&label_80716E70,
        &&label_80716E74,
        &&label_80716E78,
        &&label_80716E7C,
        &&label_80716E80,
        &&label_80716E84,
        &&label_80716E88,
        &&label_80716E8C,
        &&label_80716E90,
        &&label_80716E94,
        &&label_80716E98,
        &&label_80716E9C,
        &&label_80716EA0,
        &&label_80716EA4,
        &&label_80716EA8,
        &&label_80716EAC,
        &&label_80716EB0,
        &&label_80716EB4,
        &&label_80716EB8,
        &&label_80716EBC,
        &&label_80716EC0,
        &&label_80716EC4,
        &&label_80716EC8,
        &&label_80716ECC,
        &&label_80716ED0,
        &&label_80716ED4,
        &&label_80716ED8,
        &&label_80716EDC,
        &&label_80716EE0,
        &&label_80716EE4,
        &&label_80716EE8,
        &&label_80716EEC,
        &&label_80716EF0,
        &&label_80716EF4,
        &&label_80716EF8,
        &&label_80716EFC,
        &&label_80716F00,
        &&label_80716F04,
        &&label_80716F08,
        &&label_80716F0C,
        &&label_80716F10,
        &&label_80716F14,
        &&label_80716F18,
        &&label_80716F1C,
        &&label_80716F20,
        &&label_80716F24,
        &&label_80716F28,
        &&label_80716F2C,
        &&label_80716F30,
        &&label_80716F34,
        &&label_80716F38,
        &&label_80716F3C,
        &&label_80716F40,
        &&label_80716F44,
        &&label_80716F48,
        &&label_80716F4C,
        &&label_80716F50
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x807167E0u && pc <= 0x80716F50u && ((pc - 0x807167E0u) & 3u) == 0u)
            goto *pc_table_807167E0[(pc - 0x807167E0u) >> 2];
    }
    return;
label_807167E0:
    ctx->pc = 0x807167E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807167E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 807167E0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807167E0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_807167E4:
    ctx->pc = 0x807167E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807167E4u)) return;
    // 807167E4: fmadds f0, f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x807167E4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[3], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_807167E8:
    ctx->pc = 0x807167E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807167E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 807167E8: stfs     f0, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x807167E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807167EC:
    ctx->pc = 0x807167ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807167ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 807167EC: lfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x807167ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
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
label_807167F0:
    ctx->pc = 0x807167F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807167F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 807167F0: lfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x807167F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807167F4:
    ctx->pc = 0x807167F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807167F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 807167F4: lfs     f2, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x807167F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
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
label_807167F8:
    ctx->pc = 0x807167F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807167F8u)) return;
    // 807167F8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807167F8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_807167FC:
    ctx->pc = 0x807167FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807167FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 807167FC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x807167FCu)) return;
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
label_80716800:
    ctx->pc = 0x80716800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80716800: lfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80716800u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716804:
    ctx->pc = 0x80716804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80716804: lfs     f3, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716804u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
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
label_80716808:
    ctx->pc = 0x80716808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716808u)) return;
    // 80716808: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80716808u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8071680C:
    ctx->pc = 0x8071680Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071680Cu)) return;
    // 8071680C: fmadds f0, f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8071680Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[3], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80716810:
    ctx->pc = 0x80716810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80716810: stfs     f0, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x80716810u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716814:
    ctx->pc = 0x80716814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80716814: lfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80716814u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
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
label_80716818:
    ctx->pc = 0x80716818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80716818: lfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716818u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071681C:
    ctx->pc = 0x8071681Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071681Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8071681C: lfs     f2, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x8071681Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
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
label_80716820:
    ctx->pc = 0x80716820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716820u)) return;
    // 80716820: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80716820u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80716824:
    ctx->pc = 0x80716824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80716824: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716824u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
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
label_80716828:
    ctx->pc = 0x80716828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80716828: lfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80716828u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071682C:
    ctx->pc = 0x8071682Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071682Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8071682C: lfs     f3, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x8071682Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
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
label_80716830:
    ctx->pc = 0x80716830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716830u)) return;
    // 80716830: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80716830u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80716834:
    ctx->pc = 0x80716834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716834u)) return;
    // 80716834: fmadds f0, f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80716834u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[3], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80716838:
    ctx->pc = 0x80716838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80716838: stfs     f0, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x80716838u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071683C:
    ctx->pc = 0x8071683Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071683Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8071683C: lfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x8071683Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
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
label_80716840:
    ctx->pc = 0x80716840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80716840: lfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716840u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716844:
    ctx->pc = 0x80716844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80716844: lfs     f2, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80716844u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
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
label_80716848:
    ctx->pc = 0x80716848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716848u)) return;
    // 80716848: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80716848u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_8071684C:
    ctx->pc = 0x8071684Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071684Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8071684C: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x8071684Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
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
label_80716850:
    ctx->pc = 0x80716850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716850: lfs     f4, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80716850u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716854:
    ctx->pc = 0x80716854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716854: lfs     f3, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716854u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80716858:
    ctx->pc = 0x80716858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716858u)) return;
    // 80716858: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80716858u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8071685C:
    ctx->pc = 0x8071685Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071685Cu)) return;
    // 8071685C: fmadds f0, f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8071685Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[3], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80716860:
    ctx->pc = 0x80716860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80716860: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80716860u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716864:
    ctx->pc = 0x80716864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716864u)) return;
    // 80716864: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80716868:
    ctx->pc = 0x80716868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 242u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 242u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 241u : 0u;
    // 80716868: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071686C:
    ctx->pc = 0x8071686Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071686Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 240u : 0u;
    // 8071686C: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8071686Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716870:
    ctx->pc = 0x80716870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 239u : 0u;
    // 80716870: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80716870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80716870u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716874:
    ctx->pc = 0x80716874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 238u : 0u;
    // 80716874: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80716874u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716878:
    ctx->pc = 0x80716878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 237u : 0u;
    // 80716878: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80716878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80716878u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071687C:
    ctx->pc = 0x8071687Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071687Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 236u : 0u;
    // 8071687C: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8071687Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716880:
    ctx->pc = 0x80716880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 235u : 0u;
    // 80716880: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80716880u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80716880u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716884:
    ctx->pc = 0x80716884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 234u : 0u;
    // 80716884: stfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80716884u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716888:
    ctx->pc = 0x80716888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 233u : 0u;
    // 80716888: psq_st   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80716888u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80716888u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071688C:
    ctx->pc = 0x8071688Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071688Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 232u : 0u;
    // 8071688C: stfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8071688Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716890:
    ctx->pc = 0x80716890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 231u : 0u;
    // 80716890: psq_st   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80716890u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80716890u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716894:
    ctx->pc = 0x80716894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 230u : 0u;
    // 80716894: stfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80716894u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716898:
    ctx->pc = 0x80716898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 229u : 0u;
    // 80716898: psq_st   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80716898u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80716898u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071689C:
    ctx->pc = 0x8071689Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071689Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 228u : 0u;
    // 8071689C: stfd     f25, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8071689Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168A0:
    ctx->pc = 0x807168A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 227u : 0u;
    // 807168A0: psq_st   f25, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807168A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x807168A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168A4:
    ctx->pc = 0x807168A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 226u : 0u;
    // 807168A4: lfs     f6, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168A8:
    ctx->pc = 0x807168A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168A8u)) return;
    // 807168A8: lis     r5, -28345
    ctx->gpr[5] = ((u32)(s32)(-28345) << 16);

label_807168AC:
    ctx->pc = 0x807168ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 224u : 0u;
    // 807168AC: lfs     f7, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168B0:
    ctx->pc = 0x807168B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 223u : 0u;
    // 807168B0: lfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168B4:
    ctx->pc = 0x807168B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 222u : 0u;
    // 807168B4: lfs     f9, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168B8:
    ctx->pc = 0x807168B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168B8u)) return;
    // 807168B8: fmuls   f2, f6, f7
    if (!ppc_fp_available_inline(ctx, 0x807168B8u)) return;
    ppc_fmuls(ctx, 2, 6, 7);

label_807168BC:
    ctx->pc = 0x807168BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168BCu)) return;
    // 807168BC: fmuls   f27, f6, f0
    if (!ppc_fp_available_inline(ctx, 0x807168BCu)) return;
    ppc_fmuls(ctx, 27, 6, 0);

label_807168C0:
    ctx->pc = 0x807168C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 219u : 0u;
    // 807168C0: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168C4:
    ctx->pc = 0x807168C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 218u : 0u;
    // 807168C4: lfs     f8, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168C8:
    ctx->pc = 0x807168C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168C8u)) return;
    // 807168C8: fmuls   f31, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x807168C8u)) return;
    ppc_fmuls(ctx, 31, 0, 9);

label_807168CC:
    ctx->pc = 0x807168CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 216u : 0u;
    // 807168CC: lfs     f13, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[13] = value;
        ctx->ps1[13] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168D0:
    ctx->pc = 0x807168D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 215u : 0u;
    // 807168D0: lfs     f11, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168D4:
    ctx->pc = 0x807168D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 214u : 0u;
    // 807168D4: lfs     f10, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x807168D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807168D8:
    ctx->pc = 0x807168D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168D8u)) return;
    // 807168D8: fmuls   f3, f5, f8
    if (!ppc_fp_available_inline(ctx, 0x807168D8u)) return;
    ppc_fmuls(ctx, 3, 5, 8);

label_807168DC:
    ctx->pc = 0x807168DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168DCu)) return;
    // 807168DC: fmuls   f4, f9, f27
    if (!ppc_fp_available_inline(ctx, 0x807168DCu)) return;
    ppc_fmuls(ctx, 4, 9, 27);

label_807168E0:
    ctx->pc = 0x807168E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 211u : 0u;
    // 807168E0: lfs     f1, 20984(r5)
    if (!ppc_fp_available_inline(ctx, 0x807168E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20984);
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
label_807168E4:
    ctx->pc = 0x807168E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168E4u)) return;
    // 807168E4: fmuls   f28, f0, f10
    if (!ppc_fp_available_inline(ctx, 0x807168E4u)) return;
    ppc_fmuls(ctx, 28, 0, 10);

label_807168E8:
    ctx->pc = 0x807168E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168E8u)) return;
    // 807168E8: fmuls   f25, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x807168E8u)) return;
    ppc_fmuls(ctx, 25, 5, 0);

label_807168EC:
    ctx->pc = 0x807168ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168ECu)) return;
    // 807168EC: fmuls   f0, f11, f2
    if (!ppc_fp_available_inline(ctx, 0x807168ECu)) return;
    ppc_fmuls(ctx, 0, 11, 2);

label_807168F0:
    ctx->pc = 0x807168F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168F0u)) return;
    // 807168F0: fmadds f12, f11, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x807168F0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[11], ctx->fpr[3], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[12] = ctx->ps1[12] = result;
    }

label_807168F4:
    ctx->pc = 0x807168F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168F4u)) return;
    // 807168F4: fmuls   f26, f13, f7
    if (!ppc_fp_available_inline(ctx, 0x807168F4u)) return;
    ppc_fmuls(ctx, 26, 13, 7);

label_807168F8:
    ctx->pc = 0x807168F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168F8u)) return;
    // 807168F8: fmadds f4, f10, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x807168F8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[10], ctx->fpr[25], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_807168FC:
    ctx->pc = 0x807168FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807168FCu)) return;
    // 807168FC: fmuls   f30, f13, f8
    if (!ppc_fp_available_inline(ctx, 0x807168FCu)) return;
    ppc_fmuls(ctx, 30, 13, 8);

label_80716900:
    ctx->pc = 0x80716900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716900u)) return;
    // 80716900: fmadds f29, f10, f26, f12
    if (!ppc_fp_available_inline(ctx, 0x80716900u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[10], ctx->fpr[26], ctx->fpr[12], true, false, false, &result))
            ctx->fpr[29] = ctx->ps1[29] = result;
    }

label_80716904:
    ctx->pc = 0x80716904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716904u)) return;
    // 80716904: fmuls   f0, f13, f10
    if (!ppc_fp_available_inline(ctx, 0x80716904u)) return;
    ppc_fmuls(ctx, 0, 13, 10);

label_80716908:
    ctx->pc = 0x80716908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716908u)) return;
    // 80716908: fmadds f4, f9, f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80716908u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[9], ctx->fpr[30], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_8071690C:
    ctx->pc = 0x8071690Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071690Cu)) return;
    // 8071690C: fmsubs f28, f8, f11, f28
    if (!ppc_fp_available_inline(ctx, 0x8071690Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[8], ctx->fpr[11], ctx->fpr[28], true, true, false, &result))
            ctx->fpr[28] = ctx->ps1[28] = result;
    }

label_80716910:
    ctx->pc = 0x80716910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716910u)) return;
    // 80716910: fmuls   f13, f13, f9
    if (!ppc_fp_available_inline(ctx, 0x80716910u)) return;
    ppc_fmuls(ctx, 13, 13, 9);

label_80716914:
    ctx->pc = 0x80716914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716914u)) return;
    // 80716914: fsubs   f4, f29, f4
    if (!ppc_fp_available_inline(ctx, 0x80716914u)) return;
    ppc_fsubs(ctx, 4, 29, 4);

label_80716918:
    ctx->pc = 0x80716918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716918u)) return;
    // 80716918: fnmsubs f29, f6, f11, f0
    if (!ppc_fp_available_inline(ctx, 0x80716918u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[6], ctx->fpr[11], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[29] = ctx->ps1[29] = result;
    }

label_8071691C:
    ctx->pc = 0x8071691Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071691Cu)) return;
    // 8071691C: fsubs   f30, f27, f30
    if (!ppc_fp_available_inline(ctx, 0x8071691Cu)) return;
    ppc_fsubs(ctx, 30, 27, 30);

label_80716920:
    ctx->pc = 0x80716920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716920u)) return;
    // 80716920: fnmsubs f31, f7, f11, f31
    if (!ppc_fp_available_inline(ctx, 0x80716920u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[11], ctx->fpr[31], true, true, true, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_80716924:
    ctx->pc = 0x80716924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716924u)) return;
    // 80716924: fmuls   f8, f8, f9
    if (!ppc_fp_available_inline(ctx, 0x80716924u)) return;
    ppc_fmuls(ctx, 8, 8, 9);

label_80716928:
    ctx->pc = 0x80716928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80716928u)) return;
    // 80716928: fdivs   f0, f28, f4
    if (!ppc_fp_available_inline(ctx, 0x80716928u)) return;
    ppc_fdivs(ctx, 0, 28, 4);

label_8071692C:
    ctx->pc = 0x8071692Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071692Cu)) return;
    // 8071692C: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x8071692Cu)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_80716930:
    ctx->pc = 0x80716930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80716930u)) return;
    // 80716930: fdivs   f29, f29, f4
    if (!ppc_fp_available_inline(ctx, 0x80716930u)) return;
    ppc_fdivs(ctx, 29, 29, 4);

label_80716934:
    ctx->pc = 0x80716934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716934u)) return;
    // 80716934: fsubs   f12, f25, f26
    if (!ppc_fp_available_inline(ctx, 0x80716934u)) return;
    ppc_fsubs(ctx, 12, 25, 26);

label_80716938:
    ctx->pc = 0x80716938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716938u)) return;
    // 80716938: fmsubs f13, f5, f11, f13
    if (!ppc_fp_available_inline(ctx, 0x80716938u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[11], ctx->fpr[13], true, true, false, &result))
            ctx->fpr[13] = ctx->ps1[13] = result;
    }

label_8071693C:
    ctx->pc = 0x8071693Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071693Cu)) return;
    // 8071693C: fmuls   f6, f6, f9
    if (!ppc_fp_available_inline(ctx, 0x8071693Cu)) return;
    ppc_fmuls(ctx, 6, 6, 9);

label_80716940:
    ctx->pc = 0x80716940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80716940u)) return;
    // 80716940: fdivs   f31, f31, f4
    if (!ppc_fp_available_inline(ctx, 0x80716940u)) return;
    ppc_fdivs(ctx, 31, 31, 4);

label_80716944:
    ctx->pc = 0x80716944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716944u)) return;
    // 80716944: fneg    f11, f12
    if (!ppc_fp_available_inline(ctx, 0x80716944u)) return;
    ctx->fpr[11] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[12]) ^ 0x8000000000000000ull);

label_80716948:
    ctx->pc = 0x80716948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716948u)) return;
    // 80716948: fmsubs f7, f7, f10, f8
    if (!ppc_fp_available_inline(ctx, 0x80716948u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[10], ctx->fpr[8], true, true, false, &result))
            ctx->fpr[7] = ctx->ps1[7] = result;
    }

label_8071694C:
    ctx->pc = 0x8071694Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071694Cu)) return;
    // 8071694C: fnmsubs f5, f5, f10, f6
    if (!ppc_fp_available_inline(ctx, 0x8071694Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[10], ctx->fpr[6], true, true, true, &result))
            ctx->fpr[5] = ctx->ps1[5] = result;
    }

label_80716950:
    ctx->pc = 0x80716950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80716950u)) return;
    // 80716950: fdivs   f30, f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80716950u)) return;
    ppc_fdivs(ctx, 30, 30, 4);

label_80716954:
    ctx->pc = 0x80716954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80716954u)) return;
    // 80716954: fdivs   f3, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80716954u)) return;
    ppc_fdivs(ctx, 3, 5, 4);

label_80716958:
    ctx->pc = 0x80716958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716958u)) return;
    // 80716958: fmuls   f5, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80716958u)) return;
    ppc_fmuls(ctx, 5, 1, 0);

label_8071695C:
    ctx->pc = 0x8071695Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8071695Cu)) return;
    // 8071695C: fdivs   f12, f13, f4
    if (!ppc_fp_available_inline(ctx, 0x8071695Cu)) return;
    ppc_fdivs(ctx, 12, 13, 4);

label_80716960:
    ctx->pc = 0x80716960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 80716960: stfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716960u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716964:
    ctx->pc = 0x80716964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80716964u)) return;
    // 80716964: fdivs   f8, f11, f4
    if (!ppc_fp_available_inline(ctx, 0x80716964u)) return;
    ppc_fdivs(ctx, 8, 11, 4);

label_80716968:
    ctx->pc = 0x80716968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80716968u)) return;
    // 80716968: fdivs   f6, f7, f4
    if (!ppc_fp_available_inline(ctx, 0x80716968u)) return;
    ppc_fdivs(ctx, 6, 7, 4);

label_8071696C:
    ctx->pc = 0x8071696Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8071696Cu)) return;
    // 8071696C: fdivs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x8071696Cu)) return;
    ppc_fdivs(ctx, 2, 2, 4);

label_80716970:
    ctx->pc = 0x80716970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716970u)) return;
    // 80716970: fmuls   f4, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x80716970u)) return;
    ppc_fmuls(ctx, 4, 1, 29);

label_80716974:
    ctx->pc = 0x80716974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716974u)) return;
    // 80716974: fmuls   f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x80716974u)) return;
    ppc_fmuls(ctx, 0, 1, 30);

label_80716978:
    ctx->pc = 0x80716978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716978u)) return;
    // 80716978: fmuls   f9, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80716978u)) return;
    ppc_fmuls(ctx, 9, 1, 31);

label_8071697C:
    ctx->pc = 0x8071697Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071697Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8071697C: stfs     f4, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x8071697Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716980:
    ctx->pc = 0x80716980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716980u)) return;
    // 80716980: fmuls   f7, f1, f12
    if (!ppc_fp_available_inline(ctx, 0x80716980u)) return;
    ppc_fmuls(ctx, 7, 1, 12);

label_80716984:
    ctx->pc = 0x80716984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716984u)) return;
    // 80716984: fmuls   f5, f1, f8
    if (!ppc_fp_available_inline(ctx, 0x80716984u)) return;
    ppc_fmuls(ctx, 5, 1, 8);

label_80716988:
    ctx->pc = 0x80716988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80716988: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716988u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8071698C:
    ctx->pc = 0x8071698Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071698Cu)) return;
    // 8071698C: fmuls   f4, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x8071698Cu)) return;
    ppc_fmuls(ctx, 4, 1, 6);

label_80716990:
    ctx->pc = 0x80716990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716990u)) return;
    // 80716990: fmuls   f3, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x80716990u)) return;
    ppc_fmuls(ctx, 3, 1, 3);

label_80716994:
    ctx->pc = 0x80716994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80716994: stfs     f9, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x80716994u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716998:
    ctx->pc = 0x80716998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716998u)) return;
    // 80716998: fmuls   f0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80716998u)) return;
    ppc_fmuls(ctx, 0, 1, 2);

label_8071699C:
    ctx->pc = 0x8071699Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8071699Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8071699C: stfs     f7, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x8071699Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169A0:
    ctx->pc = 0x807169A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 807169A0: stfs     f5, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x807169A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169A4:
    ctx->pc = 0x807169A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807169A4: stfs     f4, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x807169A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169A8:
    ctx->pc = 0x807169A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807169A8: stfs     f3, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x807169A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169AC:
    ctx->pc = 0x807169ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807169AC: stfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x807169ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169B0:
    ctx->pc = 0x807169B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807169B0: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807169B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x807169B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169B4:
    ctx->pc = 0x807169B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807169B4: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x807169B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169B8:
    ctx->pc = 0x807169B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807169B8: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807169B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x807169B8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169BC:
    ctx->pc = 0x807169BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807169BC: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x807169BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169C0:
    ctx->pc = 0x807169C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807169C0: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807169C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x807169C0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169C4:
    ctx->pc = 0x807169C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807169C4: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x807169C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169C8:
    ctx->pc = 0x807169C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807169C8: psq_l   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807169C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x807169C8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169CC:
    ctx->pc = 0x807169CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807169CC: lfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x807169CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169D0:
    ctx->pc = 0x807169D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807169D0: psq_l   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807169D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x807169D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169D4:
    ctx->pc = 0x807169D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807169D4: lfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x807169D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169D8:
    ctx->pc = 0x807169D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807169D8: psq_l   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807169D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x807169D8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169DC:
    ctx->pc = 0x807169DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807169DC: lfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x807169DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169E0:
    ctx->pc = 0x807169E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807169E0: psq_l   f25, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807169E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x807169E0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169E4:
    ctx->pc = 0x807169E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807169E4: lfd     f25, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x807169E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807169E8:
    ctx->pc = 0x807169E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169E8u)) return;
    // 807169E8: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_807169EC:
    ctx->pc = 0x807169ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169ECu)) return;
    // 807169EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_807169F0:
    ctx->pc = 0x807169F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807169F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807169F0: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807169F4:
    ctx->pc = 0x807169F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169F4u)) return;
    // 807169F4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_807169F8:
    ctx->pc = 0x807169F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169F8u)) return;
    // 807169F8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_807169FC:
    ctx->pc = 0x807169FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807169FCu)) return;
    // 807169FC: b       0x80716A18
    {
            goto label_80716A18;
    }

label_80716A00:
    loop_80716A00(ctx);
    if (ctx->pc == 0x80716A20u) goto label_80716A20;
    return;
label_80716A04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A04u)) return;
    // 80716A04: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716A08:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A08u)) return;
    // 80716A08: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716A0C:
    ctx->pc = 0x80716A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716A0C: stb     r10, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A10u)) return;
    // 80716A10: addi    r10, r10, 2
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(2);

label_80716A14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A14u)) return;
    // 80716A14: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_80716A18:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80716A18: cmpwi   r9, 16
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80716A1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A1Cu)) return;
    // 80716A1C: bc    12, 0, 0x80716A00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716A00u;
                return;
            }
            goto label_80716A00;
        }
    }

label_80716A20:
    ctx->pc = 0x80716A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80716A20: cmpwi   r9, 176
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(176);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80716A24:
    ctx->pc = 0x80716A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A24u)) return;
    // 80716A24: subfic  r6, r9, 177
    {
        u64 res = (u64)(u32)(s32)(177) + (u64)(~ctx->gpr[9]) + 1u;
        ctx->gpr[6] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80716A28:
    ctx->pc = 0x80716A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A28u)) return;
    // 80716A28: rlwinm r6, r6, 31, 1, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 31u) & 0x7FFFFFFFu;
    }

label_80716A2C:
    ctx->pc = 0x80716A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A2Cu)) return;
    // 80716A2C: bc    4, 0, 0x80716B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80716B04;
        }
    }

label_80716A30:
    ctx->pc = 0x80716A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80716A30: rlwinm. r0, r6, 29, 3, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 29u) & 0x1FFFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716A34:
    ctx->pc = 0x80716A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80716A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80716A34: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A38:
    ctx->pc = 0x80716A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A38u)) return;
    // 80716A38: bc    12, 2, 0x80716AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716AE8;
        }
    }

label_80716A3C:
    loop_80716A3C(ctx);
    if (ctx->pc == 0x80716AE0u) goto label_80716AE0;
    return;
label_80716A40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A40u)) return;
    // 80716A40: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716A44:
    ctx->pc = 0x80716A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80716A44: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A48:
    ctx->pc = 0x80716A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80716A48: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A4Cu)) return;
    // 80716A4C: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716A50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A50u)) return;
    // 80716A50: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716A54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A54u)) return;
    // 80716A54: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716A58:
    ctx->pc = 0x80716A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80716A58: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A5C:
    ctx->pc = 0x80716A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80716A5C: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A60u)) return;
    // 80716A60: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716A64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A64u)) return;
    // 80716A64: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716A68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A68u)) return;
    // 80716A68: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716A6C:
    ctx->pc = 0x80716A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80716A6C: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A70:
    ctx->pc = 0x80716A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80716A70: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A74u)) return;
    // 80716A74: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716A78:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A78u)) return;
    // 80716A78: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716A7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A7Cu)) return;
    // 80716A7C: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716A80:
    ctx->pc = 0x80716A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80716A80: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A84:
    ctx->pc = 0x80716A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80716A84: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A88u)) return;
    // 80716A88: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716A8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A8Cu)) return;
    // 80716A8C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716A90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A90u)) return;
    // 80716A90: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716A94:
    ctx->pc = 0x80716A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80716A94: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A98:
    ctx->pc = 0x80716A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80716A98: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716A9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716A9Cu)) return;
    // 80716A9C: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716AA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AA0u)) return;
    // 80716AA0: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716AA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AA4u)) return;
    // 80716AA4: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716AA8:
    ctx->pc = 0x80716AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716AA8: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AAC:
    ctx->pc = 0x80716AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80716AAC: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AB0u)) return;
    // 80716AB0: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716AB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AB4u)) return;
    // 80716AB4: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716AB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AB8u)) return;
    // 80716AB8: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716ABC:
    ctx->pc = 0x80716ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80716ABC: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AC0:
    ctx->pc = 0x80716AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716AC0: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AC4u)) return;
    // 80716AC4: add   r7, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716AC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AC8u)) return;
    // 80716AC8: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716ACC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ACCu)) return;
    // 80716ACC: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716AD0:
    ctx->pc = 0x80716AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716AD0: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AD4:
    ctx->pc = 0x80716AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716AD4: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AD8u)) return;
    // 80716AD8: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716ADC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ADCu)) return;
    // 80716ADC: bc    16, 0, 0x80716A3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716A3Cu;
                return;
            }
            goto label_80716A3C;
        }
    }

label_80716AE0:
    ctx->pc = 0x80716AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80716AE0: andi.   r6, r6, 0x0007
    {
        ctx->gpr[6] = ctx->gpr[6] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716AE4:
    ctx->pc = 0x80716AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AE4u)) return;
    // 80716AE4: bc    12, 2, 0x80716B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716B04;
        }
    }

label_80716AE8:
    ctx->pc = 0x80716AE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716AE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80716AE8: mtctr    r6
    ctx->ctr = ctx->gpr[6];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AEC:
    loop_80716AEC(ctx);
    if (ctx->pc == 0x80716B04u) goto label_80716B04;
    return;
label_80716AF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AF0u)) return;
    // 80716AF0: addi    r9, r9, 2
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(2);

label_80716AF4:
    ctx->pc = 0x80716AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716AF4: stb     r10, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AF8:
    ctx->pc = 0x80716AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716AF8: stb     r10, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716AFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716AFCu)) return;
    // 80716AFC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B00u)) return;
    // 80716B00: bc    16, 0, 0x80716AEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716AECu;
                return;
            }
            goto label_80716AEC;
        }
    }

label_80716B04:
    ctx->pc = 0x80716B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80716B04: cmpwi   r9, 192
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80716B08:
    ctx->pc = 0x80716B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B08u)) return;
    // 80716B08: add   r8, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80716B0C:
    ctx->pc = 0x80716B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B0Cu)) return;
    // 80716B0C: subfic  r7, r9, 192
    {
        u64 res = (u64)(u32)(s32)(192) + (u64)(~ctx->gpr[9]) + 1u;
        ctx->gpr[7] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80716B10:
    ctx->pc = 0x80716B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B10u)) return;
    // 80716B10: bc    4, 0, 0x80716B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80716B8C;
        }
    }

label_80716B14:
    ctx->pc = 0x80716B14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716B14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80716B14: rlwinm. r6, r7, 29, 3, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 29u) & 0x1FFFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716B18:
    ctx->pc = 0x80716B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B18u)) return;
    // 80716B18: or   r0, r7, r7
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80716B1C:
    ctx->pc = 0x80716B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80716B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80716B1C: mtctr    r6
    ctx->ctr = ctx->gpr[6];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B20:
    ctx->pc = 0x80716B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B20u)) return;
    // 80716B20: bc    12, 2, 0x80716B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716B74;
        }
    }

label_80716B24:
    loop_80716B24(ctx);
    if (ctx->pc == 0x80716B6Cu) goto label_80716B6C;
    return;
label_80716B28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B28u)) return;
    // 80716B28: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B2C:
    ctx->pc = 0x80716B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80716B2C: stb     r10, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B30u)) return;
    // 80716B30: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B34:
    ctx->pc = 0x80716B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716B34: stb     r10, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B38:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B38u)) return;
    // 80716B38: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B3C:
    ctx->pc = 0x80716B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80716B3C: stb     r10, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B40u)) return;
    // 80716B40: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B44:
    ctx->pc = 0x80716B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80716B44: stb     r10, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B48u)) return;
    // 80716B48: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B4C:
    ctx->pc = 0x80716B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716B4C: stb     r10, 5(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B50u)) return;
    // 80716B50: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B54:
    ctx->pc = 0x80716B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716B54: stb     r10, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B58u)) return;
    // 80716B58: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B5C:
    ctx->pc = 0x80716B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716B5C: stb     r10, 7(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B60u)) return;
    // 80716B60: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B64u)) return;
    // 80716B64: addi    r8, r8, 8
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(8);

label_80716B68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B68u)) return;
    // 80716B68: bc    16, 0, 0x80716B24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716B24u;
                return;
            }
            goto label_80716B24;
        }
    }

label_80716B6C:
    ctx->pc = 0x80716B6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716B6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80716B6C: andi.   r7, r7, 0x0007
    {
        ctx->gpr[7] = ctx->gpr[7] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[7];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716B70:
    ctx->pc = 0x80716B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B70u)) return;
    // 80716B70: bc    12, 2, 0x80716B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716B88;
        }
    }

label_80716B74:
    ctx->pc = 0x80716B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80716B74: mtctr    r7
    ctx->ctr = ctx->gpr[7];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B78:
    loop_80716B78(ctx);
    if (ctx->pc == 0x80716B88u) goto label_80716B88;
    return;
label_80716B7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B7Cu)) return;
    // 80716B7C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716B80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B80u)) return;
    // 80716B80: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80716B84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B84u)) return;
    // 80716B84: bc    16, 0, 0x80716B78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716B78u;
                return;
            }
            goto label_80716B78;
        }
    }

label_80716B88:
    ctx->pc = 0x80716B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80716B88: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716B8C:
    ctx->pc = 0x80716B8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716B8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80716B8C: subfic  r0, r9, 256
    {
        u64 res = (u64)(u32)(s32)(256) + (u64)(~ctx->gpr[9]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80716B90:
    ctx->pc = 0x80716B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B90u)) return;
    // 80716B90: add   r3, r3, r9
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80716B94:
    ctx->pc = 0x80716B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80716B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716B94: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716B98:
    ctx->pc = 0x80716B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B98u)) return;
    // 80716B98: cmpwi   r9, 256
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80716B9C:
    ctx->pc = 0x80716B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716B9Cu)) return;
    // 80716B9C: bc    4, 0, 0x80716BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80716BC4;
        }
    }

label_80716BA0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80716BA0: cmpwi   r10, 255
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80716BA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BA4u)) return;
    // 80716BA4: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80716BA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BA8u)) return;
    // 80716BA8: bc    4, 0, 0x80716BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80716BB0;
        }
    }

label_80716BAC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80716BAC: or   r0, r10, r10
    {
        ctx->gpr[0] = ctx->gpr[10] | ctx->gpr[10];
    }

label_80716BB0:
    ctx->pc = 0x80716BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716BB0: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BB4u)) return;
    // 80716BB4: addi    r10, r10, 2
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(2);

label_80716BB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BB8u)) return;
    // 80716BB8: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_80716BBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BBCu)) return;
    // 80716BBC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80716BC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BC0u)) return;
    // 80716BC0: bc    16, 0, 0x80716BA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716BA0u;
                return;
            }
            goto label_80716BA0;
        }
    }

label_80716BC4:
    ctx->pc = 0x80716BC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716BC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80716BC4: li      r9, 128
    ctx->gpr[9] = (u32)(s32)(128);

label_80716BC8:
    ctx->pc = 0x80716BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BC8u)) return;
    // 80716BC8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80716BCC:
    ctx->pc = 0x80716BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BCCu)) return;
    // 80716BCC: or   r10, r9, r9
    {
        ctx->gpr[10] = ctx->gpr[9] | ctx->gpr[9];
    }

label_80716BD0:
    ctx->pc = 0x80716BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80716BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80716BD0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BD4:
    loop_80716BD4(ctx);
    if (ctx->pc == 0x80716C78u) goto label_80716C78;
    return;
label_80716BD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BD8u)) return;
    // 80716BD8: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716BDC:
    ctx->pc = 0x80716BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80716BDC: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BE0u)) return;
    // 80716BE0: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

label_80716BE4:
    ctx->pc = 0x80716BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80716BE4: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BE8:
    ctx->pc = 0x80716BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80716BE8: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BEC:
    ctx->pc = 0x80716BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80716BEC: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BF0:
    ctx->pc = 0x80716BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80716BF0: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BF4u)) return;
    // 80716BF4: add   r3, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80716BF8:
    ctx->pc = 0x80716BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80716BF8: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716BFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716BFCu)) return;
    // 80716BFC: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

label_80716C00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C00u)) return;
    // 80716C00: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716C04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C04u)) return;
    // 80716C04: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

label_80716C08:
    ctx->pc = 0x80716C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80716C08: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C0C:
    ctx->pc = 0x80716C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80716C0C: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C10:
    ctx->pc = 0x80716C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80716C10: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C14:
    ctx->pc = 0x80716C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80716C14: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C18:
    ctx->pc = 0x80716C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80716C18: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C1Cu)) return;
    // 80716C1C: add   r3, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80716C20:
    ctx->pc = 0x80716C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80716C20: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C24u)) return;
    // 80716C24: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

label_80716C28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C28u)) return;
    // 80716C28: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716C2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C2Cu)) return;
    // 80716C2C: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

label_80716C30:
    ctx->pc = 0x80716C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80716C30: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C34:
    ctx->pc = 0x80716C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80716C34: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C38:
    ctx->pc = 0x80716C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80716C38: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C3C:
    ctx->pc = 0x80716C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80716C3C: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C40:
    ctx->pc = 0x80716C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716C40: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C44:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C44u)) return;
    // 80716C44: add   r3, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80716C48:
    ctx->pc = 0x80716C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80716C48: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C4Cu)) return;
    // 80716C4C: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

label_80716C50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C50u)) return;
    // 80716C50: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716C54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C54u)) return;
    // 80716C54: addi    r9, r9, -3
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3);

label_80716C58:
    ctx->pc = 0x80716C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716C58: stb     r10, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C5C:
    ctx->pc = 0x80716C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80716C5C: stb     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C60:
    ctx->pc = 0x80716C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716C60: stb     r10, -1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C64:
    ctx->pc = 0x80716C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716C64: stb     r10, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C68:
    ctx->pc = 0x80716C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716C68: stb     r10, -2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C6C:
    ctx->pc = 0x80716C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716C6C: stb     r10, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C70u)) return;
    // 80716C70: addi    r10, r10, -1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-1);

label_80716C74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C74u)) return;
    // 80716C74: bc    16, 0, 0x80716BD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716BD4u;
                return;
            }
            goto label_80716BD4;
        }
    }

label_80716C78:
    ctx->pc = 0x80716C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 5u;
    // 80716C78: mullw   r8, r9, r10
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[10];
        ctx->gpr[8] = (u32)product;
    }

label_80716C7C:
    ctx->pc = 0x80716C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C7Cu)) return;
    // 80716C7C: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80716C80:
    ctx->pc = 0x80716C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C80u)) return;
    // 80716C80: add   r7, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80716C84:
    ctx->pc = 0x80716C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C84u)) return;
    // 80716C84: add   r6, r5, r9
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716C88:
    ctx->pc = 0x80716C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C88u)) return;
    // 80716C88: addi    r3, r9, 1
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(1);

label_80716C8C:
    ctx->pc = 0x80716C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C8Cu)) return;
    // 80716C8C: bc    12, 0, 0x80716D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716D50;
        }
    }

label_80716C90:
    ctx->pc = 0x80716C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80716C90: rlwinm. r0, r3, 29, 3, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 29u) & 0x1FFFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716C94:
    ctx->pc = 0x80716C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80716C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80716C94: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716C98:
    ctx->pc = 0x80716C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716C98u)) return;
    // 80716C98: bc    12, 2, 0x80716D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716D30;
        }
    }

label_80716C9C:
    loop_80716C9C(ctx);
    if (ctx->pc == 0x80716D28u) goto label_80716D28;
    return;
label_80716CA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CA0u)) return;
    // 80716CA0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716CA4:
    ctx->pc = 0x80716CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 305u : 0u;
    // 80716CA4: stb     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CA8:
    ctx->pc = 0x80716CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 304u : 0u;
    // 80716CA8: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CACu)) return;
    // 80716CAC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716CB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CB0u)) return;
    // 80716CB0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716CB4:
    ctx->pc = 0x80716CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 262u : 0u;
    // 80716CB4: stb     r0, -1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CB8:
    ctx->pc = 0x80716CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 261u : 0u;
    // 80716CB8: stb     r0, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CBCu)) return;
    // 80716CBC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716CC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CC0u)) return;
    // 80716CC0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716CC4:
    ctx->pc = 0x80716CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 219u : 0u;
    // 80716CC4: stb     r0, -2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CC8:
    ctx->pc = 0x80716CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 218u : 0u;
    // 80716CC8: stb     r0, -2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CCC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CCCu)) return;
    // 80716CCC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716CD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CD0u)) return;
    // 80716CD0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716CD4:
    ctx->pc = 0x80716CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 176u : 0u;
    // 80716CD4: stb     r0, -3(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CD8:
    ctx->pc = 0x80716CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 175u : 0u;
    // 80716CD8: stb     r0, -3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CDCu)) return;
    // 80716CDC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716CE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CE0u)) return;
    // 80716CE0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716CE4:
    ctx->pc = 0x80716CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 133u : 0u;
    // 80716CE4: stb     r0, -4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CE8:
    ctx->pc = 0x80716CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 132u : 0u;
    // 80716CE8: stb     r0, -4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CECu)) return;
    // 80716CEC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716CF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CF0u)) return;
    // 80716CF0: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716CF4:
    ctx->pc = 0x80716CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 90u : 0u;
    // 80716CF4: stb     r0, -5(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CF8:
    ctx->pc = 0x80716CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 89u : 0u;
    // 80716CF8: stb     r0, -5(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716CFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716CFCu)) return;
    // 80716CFC: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716D00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D00u)) return;
    // 80716D00: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716D04:
    ctx->pc = 0x80716D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80716D04: stb     r0, -6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D08:
    ctx->pc = 0x80716D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80716D08: stb     r0, -6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716D0Cu)) return;
    // 80716D0C: divw   r0, r8, r9
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[9];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716D10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D10u)) return;
    // 80716D10: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716D14:
    ctx->pc = 0x80716D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716D14: stb     r0, -7(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D18u)) return;
    // 80716D18: addi    r7, r7, -8
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-8);

label_80716D1C:
    ctx->pc = 0x80716D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716D1C: stb     r0, -7(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D20u)) return;
    // 80716D20: addi    r6, r6, -8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8);

label_80716D24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D24u)) return;
    // 80716D24: bc    16, 0, 0x80716C9C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716C9Cu;
                return;
            }
            goto label_80716C9C;
        }
    }

label_80716D28:
    ctx->pc = 0x80716D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80716D28: andi.   r3, r3, 0x0007
    {
        ctx->gpr[3] = ctx->gpr[3] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716D2C:
    ctx->pc = 0x80716D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D2Cu)) return;
    // 80716D2C: bc    12, 2, 0x80716D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716D50;
        }
    }

label_80716D30:
    ctx->pc = 0x80716D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80716D30: mtctr    r3
    ctx->ctr = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D34:
    loop_80716D34(ctx);
    if (ctx->pc == 0x80716D50u) goto label_80716D50;
    return;
label_80716D38:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D38u)) return;
    // 80716D38: subf   r8, r10, r8
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80716D3C:
    ctx->pc = 0x80716D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716D3C: stb     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D40u)) return;
    // 80716D40: addi    r7, r7, -1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1);

label_80716D44:
    ctx->pc = 0x80716D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716D44: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D48u)) return;
    // 80716D48: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_80716D4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D4Cu)) return;
    // 80716D4C: bc    16, 0, 0x80716D34
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716D34u;
                return;
            }
            goto label_80716D34;
        }
    }

label_80716D50:
    ctx->pc = 0x80716D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80716D50: li      r10, 128
    ctx->gpr[10] = (u32)(s32)(128);

label_80716D54:
    ctx->pc = 0x80716D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D54u)) return;
    // 80716D54: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80716D58:
    ctx->pc = 0x80716D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D58u)) return;
    // 80716D58: or   r11, r10, r10
    {
        ctx->gpr[11] = ctx->gpr[10] | ctx->gpr[10];
    }

label_80716D5C:
    ctx->pc = 0x80716D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80716D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80716D5C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D60:
    loop_80716D60(ctx);
    if (ctx->pc == 0x80716E04u) goto label_80716E04;
    return;
label_80716D64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D64u)) return;
    // 80716D64: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716D68:
    ctx->pc = 0x80716D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80716D68: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D6Cu)) return;
    // 80716D6C: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

label_80716D70:
    ctx->pc = 0x80716D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80716D70: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D74:
    ctx->pc = 0x80716D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80716D74: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D78:
    ctx->pc = 0x80716D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80716D78: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D7C:
    ctx->pc = 0x80716D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80716D7C: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D80u)) return;
    // 80716D80: add   r3, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80716D84:
    ctx->pc = 0x80716D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80716D84: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D88u)) return;
    // 80716D88: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_80716D8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D8Cu)) return;
    // 80716D8C: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716D90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D90u)) return;
    // 80716D90: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

label_80716D94:
    ctx->pc = 0x80716D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80716D94: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D98:
    ctx->pc = 0x80716D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80716D98: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716D9C:
    ctx->pc = 0x80716D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80716D9C: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DA0:
    ctx->pc = 0x80716DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80716DA0: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DA4:
    ctx->pc = 0x80716DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80716DA4: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DA8u)) return;
    // 80716DA8: add   r3, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80716DAC:
    ctx->pc = 0x80716DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80716DAC: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DB0u)) return;
    // 80716DB0: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_80716DB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DB4u)) return;
    // 80716DB4: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716DB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DB8u)) return;
    // 80716DB8: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

label_80716DBC:
    ctx->pc = 0x80716DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80716DBC: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DC0:
    ctx->pc = 0x80716DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80716DC0: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DC4:
    ctx->pc = 0x80716DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80716DC4: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DC8:
    ctx->pc = 0x80716DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80716DC8: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DCC:
    ctx->pc = 0x80716DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80716DCC: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DD0u)) return;
    // 80716DD0: add   r3, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80716DD4:
    ctx->pc = 0x80716DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80716DD4: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DD8u)) return;
    // 80716DD8: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_80716DDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DDCu)) return;
    // 80716DDC: add   r6, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716DE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DE0u)) return;
    // 80716DE0: addi    r10, r10, 3
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(3);

label_80716DE4:
    ctx->pc = 0x80716DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80716DE4: stb     r11, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DE8:
    ctx->pc = 0x80716DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80716DE8: stb     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DEC:
    ctx->pc = 0x80716DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80716DEC: stb     r11, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DF0:
    ctx->pc = 0x80716DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716DF0: stb     r11, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DF4:
    ctx->pc = 0x80716DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80716DF4: stb     r11, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DF8:
    ctx->pc = 0x80716DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716DF8: stb     r11, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716DFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716DFCu)) return;
    // 80716DFC: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_80716E00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E00u)) return;
    // 80716E00: bc    16, 0, 0x80716D60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716D60u;
                return;
            }
            goto label_80716D60;
        }
    }

label_80716E04:
    ctx->pc = 0x80716E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80716E04: subfic  r7, r11, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[11]) + 1u;
        ctx->gpr[7] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80716E08:
    ctx->pc = 0x80716E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E08u)) return;
    // 80716E08: cmpwi   r10, 255
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80716E0C:
    ctx->pc = 0x80716E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E0Cu)) return;
    // 80716E0C: subfic  r8, r10, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[10]) + 1u;
        ctx->gpr[8] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80716E10:
    ctx->pc = 0x80716E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E10u)) return;
    // 80716E10: or   r12, r10, r10
    {
        ctx->gpr[12] = ctx->gpr[10] | ctx->gpr[10];
    }

label_80716E14:
    ctx->pc = 0x80716E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E14u)) return;
    // 80716E14: add   r6, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80716E18:
    ctx->pc = 0x80716E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E18u)) return;
    // 80716E18: add   r4, r5, r10
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80716E1C:
    ctx->pc = 0x80716E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E1Cu)) return;
    // 80716E1C: subfic  r3, r10, 256
    {
        u64 res = (u64)(u32)(s32)(256) + (u64)(~ctx->gpr[10]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80716E20:
    ctx->pc = 0x80716E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E20u)) return;
    // 80716E20: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80716E24:
    ctx->pc = 0x80716E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80716E24: rlwinm. r0, r3, 29, 3, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 29u) & 0x1FFFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716E28:
    ctx->pc = 0x80716E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80716E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80716E28: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716E2C:
    ctx->pc = 0x80716E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E2Cu)) return;
    // 80716E2C: bc    12, 2, 0x80716F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80716F24;
        }
    }

label_80716E30:
    loop_80716E30(ctx);
    if (ctx->pc == 0x80716F1Cu) goto label_80716F1C;
    return;
label_80716E34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E34u)) return;
    // 80716E34: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716E38:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E38u)) return;
    // 80716E38: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716E3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E3Cu)) return;
    // 80716E3C: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80716E40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E40u)) return;
    // 80716E40: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716E44:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E44u)) return;
    // 80716E44: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716E48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E48u)) return;
    // 80716E48: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716E4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E4Cu)) return;
    // 80716E4C: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716E50:
    ctx->pc = 0x80716E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 347u : 0u;
    // 80716E50: stb     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716E54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E54u)) return;
    // 80716E54: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80716E58:
    ctx->pc = 0x80716E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 345u : 0u;
    // 80716E58: stb     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716E5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E5Cu)) return;
    // 80716E5C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716E60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E60u)) return;
    // 80716E60: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716E64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E64u)) return;
    // 80716E64: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716E68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E68u)) return;
    // 80716E68: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716E6C:
    ctx->pc = 0x80716E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 297u : 0u;
    // 80716E6C: stb     r9, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716E70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E70u)) return;
    // 80716E70: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80716E74:
    ctx->pc = 0x80716E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 295u : 0u;
    // 80716E74: stb     r9, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716E78:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E78u)) return;
    // 80716E78: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716E7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E7Cu)) return;
    // 80716E7C: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716E80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E80u)) return;
    // 80716E80: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716E84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716E84u)) return;
    // 80716E84: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716E88:
    ctx->pc = 0x80716E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 247u : 0u;
    // 80716E88: stb     r9, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716E8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E8Cu)) return;
    // 80716E8C: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80716E90:
    ctx->pc = 0x80716E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 245u : 0u;
    // 80716E90: stb     r9, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716E94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E94u)) return;
    // 80716E94: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716E98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716E98u)) return;
    // 80716E98: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716E9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716E9Cu)) return;
    // 80716E9C: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716EA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716EA0u)) return;
    // 80716EA0: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716EA4:
    ctx->pc = 0x80716EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 197u : 0u;
    // 80716EA4: stb     r9, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716EA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EA8u)) return;
    // 80716EA8: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80716EAC:
    ctx->pc = 0x80716EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 195u : 0u;
    // 80716EAC: stb     r9, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716EB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EB0u)) return;
    // 80716EB0: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716EB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716EB4u)) return;
    // 80716EB4: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716EB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EB8u)) return;
    // 80716EB8: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716EBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716EBCu)) return;
    // 80716EBC: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716EC0:
    ctx->pc = 0x80716EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 147u : 0u;
    // 80716EC0: stb     r9, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716EC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EC4u)) return;
    // 80716EC4: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80716EC8:
    ctx->pc = 0x80716EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 145u : 0u;
    // 80716EC8: stb     r9, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716ECC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ECCu)) return;
    // 80716ECC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716ED0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716ED0u)) return;
    // 80716ED0: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716ED4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716ED4u)) return;
    // 80716ED4: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716ED8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716ED8u)) return;
    // 80716ED8: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716EDC:
    ctx->pc = 0x80716EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 97u : 0u;
    // 80716EDC: stb     r9, 5(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716EE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EE0u)) return;
    // 80716EE0: subf   r5, r12, r10
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80716EE4:
    ctx->pc = 0x80716EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 80716EE4: stb     r9, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716EE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EE8u)) return;
    // 80716EE8: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716EEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716EECu)) return;
    // 80716EEC: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716EF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EF0u)) return;
    // 80716EF0: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716EF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716EF4u)) return;
    // 80716EF4: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716EF8:
    ctx->pc = 0x80716EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80716EF8: stb     r9, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716EFC:
    ctx->pc = 0x80716EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80716EFC: stb     r9, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716F00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716F00u)) return;
    // 80716F00: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716F04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F04u)) return;
    // 80716F04: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716F08:
    ctx->pc = 0x80716F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716F08: stb     r9, 7(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716F0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F0Cu)) return;
    // 80716F0C: addi    r6, r6, 8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8);

label_80716F10:
    ctx->pc = 0x80716F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716F10: stb     r9, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716F14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F14u)) return;
    // 80716F14: addi    r4, r4, 8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8);

label_80716F18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F18u)) return;
    // 80716F18: bc    16, 0, 0x80716E30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716E30u;
                return;
            }
            goto label_80716E30;
        }
    }

label_80716F1C:
    ctx->pc = 0x80716F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80716F1C: andi.   r3, r3, 0x0007
    {
        ctx->gpr[3] = ctx->gpr[3] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80716F20:
    ctx->pc = 0x80716F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F20u)) return;
    // 80716F20: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80716F24:
    ctx->pc = 0x80716F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80716F24: mtctr    r3
    ctx->ctr = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716F28:
    loop_80716F28(ctx);
    if (ctx->pc == 0x80716F50u) goto label_80716F50;
    return;
label_80716F2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F2Cu)) return;
    // 80716F2C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80716F30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80716F30u)) return;
    // 80716F30: mullw   r0, r7, r5
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_80716F34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80716F34u)) return;
    // 80716F34: divw   r0, r0, r8
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[8];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80716F38:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F38u)) return;
    // 80716F38: add   r9, r11, r0
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80716F3C:
    ctx->pc = 0x80716F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80716F3C: stb     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716F40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F40u)) return;
    // 80716F40: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_80716F44:
    ctx->pc = 0x80716F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80716F44: stb     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80716F48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F48u)) return;
    // 80716F48: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80716F4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80716F4Cu)) return;
    // 80716F4C: bc    16, 0, 0x80716F28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80716F28u;
                return;
            }
            goto label_80716F28;
        }
    }

label_80716F50:
    ctx->pc = 0x80716F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80716F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80716F50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

    ctx->pc = 0x80716F54u;
}

