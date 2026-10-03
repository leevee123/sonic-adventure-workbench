// DolRecomp output
#include "../generated.h"

static void loop_80003154(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80003154:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80003154u;
            return;
        }
        ctx->downcount -= 3;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003154u)) return;
    // 80003154: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80003158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80003158: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000315Cu)) return;
    // 8000315C: bc    4, 2, 0x80003154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003154u;
                return;
            }
            goto label_80003154;
        }
    }

    ctx->pc = 0x80003160u;
}

static void loop_8000318C(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_8000318C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x8000318Cu;
            return;
        }
        ctx->downcount -= 10;
    }
    ctx->pc = 0x8000318Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000318Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8000318C: stw     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003190u)) return;
    // 80003190: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80003194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80003194: stw     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80003198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80003198: stw     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x8000319Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000319Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8000319C: stw     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x800031A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 800031A0: stw     r7, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x800031A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800031A4: stw     r7, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x800031A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800031A8: stw     r7, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x800031ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800031AC: stwu     r7, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031B0u)) return;
    // 800031B0: bc    4, 2, 0x8000318C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000318Cu;
                return;
            }
            goto label_8000318C;
        }
    }

    ctx->pc = 0x800031B4u;
}

static void loop_800031BC(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_800031BC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x800031BCu;
            return;
        }
        ctx->downcount -= 3;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031BCu)) return;
    // 800031BC: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x800031C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800031C0: stwu     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031C4u)) return;
    // 800031C4: bc    4, 2, 0x800031BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031BCu;
                return;
            }
            goto label_800031BC;
        }
    }

    ctx->pc = 0x800031C8u;
}

static void loop_800031D8(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_800031D8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x800031D8u;
            return;
        }
        ctx->downcount -= 3;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031D8u)) return;
    // 800031D8: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x800031DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800031DC: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031E0u)) return;
    // 800031E0: bc    4, 2, 0x800031D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031D8u;
                return;
            }
            goto label_800031D8;
        }
    }

    ctx->pc = 0x800031E4u;
}

static void loop_80003200(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80003200:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80003200u;
            return;
        }
        ctx->downcount -= 2;
    }
    ctx->pc = 0x80003200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80003200: lbzu     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80003204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003204: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003208u)) return;
    // 80003208: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000320Cu)) return;
    // 8000320C: bc    4, 2, 0x80003200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003200u;
                return;
            }
            goto label_80003200;
        }
    }

    ctx->pc = 0x80003210u;
}

static void loop_80003224(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80003224:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80003224u;
            return;
        }
        ctx->downcount -= 2;
    }
    ctx->pc = 0x80003224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80003224: lbzu     r0, -1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1);
        ctx->gpr[0] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80003228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003228: stbu     r0, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000322Cu)) return;
    // 8000322C: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003230u)) return;
    // 80003230: bc    4, 2, 0x80003224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003224u;
                return;
            }
            goto label_80003224;
        }
    }

    ctx->pc = 0x80003234u;
}

static void loop_80003278(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80003278:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80003278u;
            return;
        }
        ctx->downcount -= 2;
    }
    ctx->pc = 0x80003278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80003278: lbzu     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x8000327Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000327Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000327C: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003280u)) return;
    // 80003280: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003284u)) return;
    // 80003284: bc    4, 2, 0x80003278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003278u;
                return;
            }
            goto label_80003278;
        }
    }

    ctx->pc = 0x80003288u;
}

static void loop_800053F4(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_800053F4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x800053F4u;
            return;
        }
        ctx->downcount -= 5;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053F4u)) return;
    // 800053F4: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

    ctx->pc = 0x800053F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800053F8: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053FCu)) return;
    // 800053FC: add   r7, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    ctx->pc = 0x80005400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005400: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005404u)) return;
    // 80005404: bc    16, 0, 0x800053F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800053F4u;
                return;
            }
            goto label_800053F4;
        }
    }

    ctx->pc = 0x80005408u;
}

void func_80003100(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80003100[2416] = {
        &&label_80003100,
        &&label_80003104,
        &&label_80003108,
        &&label_8000310C,
        &&label_80003110,
        &&label_80003114,
        &&label_80003118,
        &&label_8000311C,
        &&label_80003120,
        &&label_80003124,
        &&label_80003128,
        &&label_8000312C,
        &&label_80003130,
        &&label_80003134,
        &&label_80003138,
        &&label_8000313C,
        &&label_80003140,
        &&label_80003144,
        &&label_80003148,
        &&label_8000314C,
        &&label_80003150,
        &&label_80003154,
        &&label_80003158,
        &&label_8000315C,
        &&label_80003160,
        &&label_80003164,
        &&label_80003168,
        &&label_8000316C,
        &&label_80003170,
        &&label_80003174,
        &&label_80003178,
        &&label_8000317C,
        &&label_80003180,
        &&label_80003184,
        &&label_80003188,
        &&label_8000318C,
        &&label_80003190,
        &&label_80003194,
        &&label_80003198,
        &&label_8000319C,
        &&label_800031A0,
        &&label_800031A4,
        &&label_800031A8,
        &&label_800031AC,
        &&label_800031B0,
        &&label_800031B4,
        &&label_800031B8,
        &&label_800031BC,
        &&label_800031C0,
        &&label_800031C4,
        &&label_800031C8,
        &&label_800031CC,
        &&label_800031D0,
        &&label_800031D4,
        &&label_800031D8,
        &&label_800031DC,
        &&label_800031E0,
        &&label_800031E4,
        &&label_800031E8,
        &&label_800031EC,
        &&label_800031F0,
        &&label_800031F4,
        &&label_800031F8,
        &&label_800031FC,
        &&label_80003200,
        &&label_80003204,
        &&label_80003208,
        &&label_8000320C,
        &&label_80003210,
        &&label_80003214,
        &&label_80003218,
        &&label_8000321C,
        &&label_80003220,
        &&label_80003224,
        &&label_80003228,
        &&label_8000322C,
        &&label_80003230,
        &&label_80003234,
        &&label_80003238,
        &&label_8000323C,
        &&label_80003240,
        &&label_80003244,
        &&label_80003248,
        &&label_8000324C,
        &&label_80003250,
        &&label_80003254,
        &&label_80003258,
        &&label_8000325C,
        &&label_80003260,
        &&label_80003264,
        &&label_80003268,
        &&label_8000326C,
        &&label_80003270,
        &&label_80003274,
        &&label_80003278,
        &&label_8000327C,
        &&label_80003280,
        &&label_80003284,
        &&label_80003288,
        &&label_8000328C,
        &&label_80003290,
        &&label_80003294,
        &&label_80003298,
        &&label_8000329C,
        &&label_800032A0,
        &&label_800032A4,
        &&label_800032A8,
        &&label_800032AC,
        &&label_800032B0,
        &&label_800032B4,
        &&label_800032B8,
        &&label_800032BC,
        &&label_800032C0,
        &&label_800032C4,
        &&label_800032C8,
        &&label_800032CC,
        &&label_800032D0,
        &&label_800032D4,
        &&label_800032D8,
        &&label_800032DC,
        &&label_800032E0,
        &&label_800032E4,
        &&label_800032E8,
        &&label_800032EC,
        &&label_800032F0,
        &&label_800032F4,
        &&label_800032F8,
        &&label_800032FC,
        &&label_80003300,
        &&label_80003304,
        &&label_80003308,
        &&label_8000330C,
        &&label_80003310,
        &&label_80003314,
        &&label_80003318,
        &&label_8000331C,
        &&label_80003320,
        &&label_80003324,
        &&label_80003328,
        &&label_8000332C,
        &&label_80003330,
        &&label_80003334,
        &&label_80003338,
        &&label_8000333C,
        &&label_80003340,
        &&label_80003344,
        &&label_80003348,
        &&label_8000334C,
        &&label_80003350,
        &&label_80003354,
        &&label_80003358,
        &&label_8000335C,
        &&label_80003360,
        &&label_80003364,
        &&label_80003368,
        &&label_8000336C,
        &&label_80003370,
        &&label_80003374,
        &&label_80003378,
        &&label_8000337C,
        &&label_80003380,
        &&label_80003384,
        &&label_80003388,
        &&label_8000338C,
        &&label_80003390,
        &&label_80003394,
        &&label_80003398,
        &&label_8000339C,
        &&label_800033A0,
        &&label_800033A4,
        &&label_800033A8,
        &&label_800033AC,
        &&label_800033B0,
        &&label_800033B4,
        &&label_800033B8,
        &&label_800033BC,
        &&label_800033C0,
        &&label_800033C4,
        &&label_800033C8,
        &&label_800033CC,
        &&label_800033D0,
        &&label_800033D4,
        &&label_800033D8,
        &&label_800033DC,
        &&label_800033E0,
        &&label_800033E4,
        &&label_800033E8,
        &&label_800033EC,
        &&label_800033F0,
        &&label_800033F4,
        &&label_800033F8,
        &&label_800033FC,
        &&label_80003400,
        &&label_80003404,
        &&label_80003408,
        &&label_8000340C,
        &&label_80003410,
        &&label_80003414,
        &&label_80003418,
        &&label_8000341C,
        &&label_80003420,
        &&label_80003424,
        &&label_80003428,
        &&label_8000342C,
        &&label_80003430,
        &&label_80003434,
        &&label_80003438,
        &&label_8000343C,
        &&label_80003440,
        &&label_80003444,
        &&label_80003448,
        &&label_8000344C,
        &&label_80003450,
        &&label_80003454,
        &&label_80003458,
        &&label_8000345C,
        &&label_80003460,
        &&label_80003464,
        &&label_80003468,
        &&label_8000346C,
        &&label_80003470,
        &&label_80003474,
        &&label_80003478,
        &&label_8000347C,
        &&label_80003480,
        &&label_80003484,
        &&label_80003488,
        &&label_8000348C,
        &&label_80003490,
        &&label_80003494,
        &&label_80003498,
        &&label_8000349C,
        &&label_800034A0,
        &&label_800034A4,
        &&label_800034A8,
        &&label_800034AC,
        &&label_800034B0,
        &&label_800034B4,
        &&label_800034B8,
        &&label_800034BC,
        &&label_800034C0,
        &&label_800034C4,
        &&label_800034C8,
        &&label_800034CC,
        &&label_800034D0,
        &&label_800034D4,
        &&label_800034D8,
        &&label_800034DC,
        &&label_800034E0,
        &&label_800034E4,
        &&label_800034E8,
        &&label_800034EC,
        &&label_800034F0,
        &&label_800034F4,
        &&label_800034F8,
        &&label_800034FC,
        &&label_80003500,
        &&label_80003504,
        &&label_80003508,
        &&label_8000350C,
        &&label_80003510,
        &&label_80003514,
        &&label_80003518,
        &&label_8000351C,
        &&label_80003520,
        &&label_80003524,
        &&label_80003528,
        &&label_8000352C,
        &&label_80003530,
        &&label_80003534,
        &&label_80003538,
        &&label_8000353C,
        &&label_80003540,
        &&label_80003544,
        &&label_80003548,
        &&label_8000354C,
        &&label_80003550,
        &&label_80003554,
        &&label_80003558,
        &&label_8000355C,
        &&label_80003560,
        &&label_80003564,
        &&label_80003568,
        &&label_8000356C,
        &&label_80003570,
        &&label_80003574,
        &&label_80003578,
        &&label_8000357C,
        &&label_80003580,
        &&label_80003584,
        &&label_80003588,
        &&label_8000358C,
        &&label_80003590,
        &&label_80003594,
        &&label_80003598,
        &&label_8000359C,
        &&label_800035A0,
        &&label_800035A4,
        &&label_800035A8,
        &&label_800035AC,
        &&label_800035B0,
        &&label_800035B4,
        &&label_800035B8,
        &&label_800035BC,
        &&label_800035C0,
        &&label_800035C4,
        &&label_800035C8,
        &&label_800035CC,
        &&label_800035D0,
        &&label_800035D4,
        &&label_800035D8,
        &&label_800035DC,
        &&label_800035E0,
        &&label_800035E4,
        &&label_800035E8,
        &&label_800035EC,
        &&label_800035F0,
        &&label_800035F4,
        &&label_800035F8,
        &&label_800035FC,
        &&label_80003600,
        &&label_80003604,
        &&label_80003608,
        &&label_8000360C,
        &&label_80003610,
        &&label_80003614,
        &&label_80003618,
        &&label_8000361C,
        &&label_80003620,
        &&label_80003624,
        &&label_80003628,
        &&label_8000362C,
        &&label_80003630,
        &&label_80003634,
        &&label_80003638,
        &&label_8000363C,
        &&label_80003640,
        &&label_80003644,
        &&label_80003648,
        &&label_8000364C,
        &&label_80003650,
        &&label_80003654,
        &&label_80003658,
        &&label_8000365C,
        &&label_80003660,
        &&label_80003664,
        &&label_80003668,
        &&label_8000366C,
        &&label_80003670,
        &&label_80003674,
        &&label_80003678,
        &&label_8000367C,
        &&label_80003680,
        &&label_80003684,
        &&label_80003688,
        &&label_8000368C,
        &&label_80003690,
        &&label_80003694,
        &&label_80003698,
        &&label_8000369C,
        &&label_800036A0,
        &&label_800036A4,
        &&label_800036A8,
        &&label_800036AC,
        &&label_800036B0,
        &&label_800036B4,
        &&label_800036B8,
        &&label_800036BC,
        &&label_800036C0,
        &&label_800036C4,
        &&label_800036C8,
        &&label_800036CC,
        &&label_800036D0,
        &&label_800036D4,
        &&label_800036D8,
        &&label_800036DC,
        &&label_800036E0,
        &&label_800036E4,
        &&label_800036E8,
        &&label_800036EC,
        &&label_800036F0,
        &&label_800036F4,
        &&label_800036F8,
        &&label_800036FC,
        &&label_80003700,
        &&label_80003704,
        &&label_80003708,
        &&label_8000370C,
        &&label_80003710,
        &&label_80003714,
        &&label_80003718,
        &&label_8000371C,
        &&label_80003720,
        &&label_80003724,
        &&label_80003728,
        &&label_8000372C,
        &&label_80003730,
        &&label_80003734,
        &&label_80003738,
        &&label_8000373C,
        &&label_80003740,
        &&label_80003744,
        &&label_80003748,
        &&label_8000374C,
        &&label_80003750,
        &&label_80003754,
        &&label_80003758,
        &&label_8000375C,
        &&label_80003760,
        &&label_80003764,
        &&label_80003768,
        &&label_8000376C,
        &&label_80003770,
        &&label_80003774,
        &&label_80003778,
        &&label_8000377C,
        &&label_80003780,
        &&label_80003784,
        &&label_80003788,
        &&label_8000378C,
        &&label_80003790,
        &&label_80003794,
        &&label_80003798,
        &&label_8000379C,
        &&label_800037A0,
        &&label_800037A4,
        &&label_800037A8,
        &&label_800037AC,
        &&label_800037B0,
        &&label_800037B4,
        &&label_800037B8,
        &&label_800037BC,
        &&label_800037C0,
        &&label_800037C4,
        &&label_800037C8,
        &&label_800037CC,
        &&label_800037D0,
        &&label_800037D4,
        &&label_800037D8,
        &&label_800037DC,
        &&label_800037E0,
        &&label_800037E4,
        &&label_800037E8,
        &&label_800037EC,
        &&label_800037F0,
        &&label_800037F4,
        &&label_800037F8,
        &&label_800037FC,
        &&label_80003800,
        &&label_80003804,
        &&label_80003808,
        &&label_8000380C,
        &&label_80003810,
        &&label_80003814,
        &&label_80003818,
        &&label_8000381C,
        &&label_80003820,
        &&label_80003824,
        &&label_80003828,
        &&label_8000382C,
        &&label_80003830,
        &&label_80003834,
        &&label_80003838,
        &&label_8000383C,
        &&label_80003840,
        &&label_80003844,
        &&label_80003848,
        &&label_8000384C,
        &&label_80003850,
        &&label_80003854,
        &&label_80003858,
        &&label_8000385C,
        &&label_80003860,
        &&label_80003864,
        &&label_80003868,
        &&label_8000386C,
        &&label_80003870,
        &&label_80003874,
        &&label_80003878,
        &&label_8000387C,
        &&label_80003880,
        &&label_80003884,
        &&label_80003888,
        &&label_8000388C,
        &&label_80003890,
        &&label_80003894,
        &&label_80003898,
        &&label_8000389C,
        &&label_800038A0,
        &&label_800038A4,
        &&label_800038A8,
        &&label_800038AC,
        &&label_800038B0,
        &&label_800038B4,
        &&label_800038B8,
        &&label_800038BC,
        &&label_800038C0,
        &&label_800038C4,
        &&label_800038C8,
        &&label_800038CC,
        &&label_800038D0,
        &&label_800038D4,
        &&label_800038D8,
        &&label_800038DC,
        &&label_800038E0,
        &&label_800038E4,
        &&label_800038E8,
        &&label_800038EC,
        &&label_800038F0,
        &&label_800038F4,
        &&label_800038F8,
        &&label_800038FC,
        &&label_80003900,
        &&label_80003904,
        &&label_80003908,
        &&label_8000390C,
        &&label_80003910,
        &&label_80003914,
        &&label_80003918,
        &&label_8000391C,
        &&label_80003920,
        &&label_80003924,
        &&label_80003928,
        &&label_8000392C,
        &&label_80003930,
        &&label_80003934,
        &&label_80003938,
        &&label_8000393C,
        &&label_80003940,
        &&label_80003944,
        &&label_80003948,
        &&label_8000394C,
        &&label_80003950,
        &&label_80003954,
        &&label_80003958,
        &&label_8000395C,
        &&label_80003960,
        &&label_80003964,
        &&label_80003968,
        &&label_8000396C,
        &&label_80003970,
        &&label_80003974,
        &&label_80003978,
        &&label_8000397C,
        &&label_80003980,
        &&label_80003984,
        &&label_80003988,
        &&label_8000398C,
        &&label_80003990,
        &&label_80003994,
        &&label_80003998,
        &&label_8000399C,
        &&label_800039A0,
        &&label_800039A4,
        &&label_800039A8,
        &&label_800039AC,
        &&label_800039B0,
        &&label_800039B4,
        &&label_800039B8,
        &&label_800039BC,
        &&label_800039C0,
        &&label_800039C4,
        &&label_800039C8,
        &&label_800039CC,
        &&label_800039D0,
        &&label_800039D4,
        &&label_800039D8,
        &&label_800039DC,
        &&label_800039E0,
        &&label_800039E4,
        &&label_800039E8,
        &&label_800039EC,
        &&label_800039F0,
        &&label_800039F4,
        &&label_800039F8,
        &&label_800039FC,
        &&label_80003A00,
        &&label_80003A04,
        &&label_80003A08,
        &&label_80003A0C,
        &&label_80003A10,
        &&label_80003A14,
        &&label_80003A18,
        &&label_80003A1C,
        &&label_80003A20,
        &&label_80003A24,
        &&label_80003A28,
        &&label_80003A2C,
        &&label_80003A30,
        &&label_80003A34,
        &&label_80003A38,
        &&label_80003A3C,
        &&label_80003A40,
        &&label_80003A44,
        &&label_80003A48,
        &&label_80003A4C,
        &&label_80003A50,
        &&label_80003A54,
        &&label_80003A58,
        &&label_80003A5C,
        &&label_80003A60,
        &&label_80003A64,
        &&label_80003A68,
        &&label_80003A6C,
        &&label_80003A70,
        &&label_80003A74,
        &&label_80003A78,
        &&label_80003A7C,
        &&label_80003A80,
        &&label_80003A84,
        &&label_80003A88,
        &&label_80003A8C,
        &&label_80003A90,
        &&label_80003A94,
        &&label_80003A98,
        &&label_80003A9C,
        &&label_80003AA0,
        &&label_80003AA4,
        &&label_80003AA8,
        &&label_80003AAC,
        &&label_80003AB0,
        &&label_80003AB4,
        &&label_80003AB8,
        &&label_80003ABC,
        &&label_80003AC0,
        &&label_80003AC4,
        &&label_80003AC8,
        &&label_80003ACC,
        &&label_80003AD0,
        &&label_80003AD4,
        &&label_80003AD8,
        &&label_80003ADC,
        &&label_80003AE0,
        &&label_80003AE4,
        &&label_80003AE8,
        &&label_80003AEC,
        &&label_80003AF0,
        &&label_80003AF4,
        &&label_80003AF8,
        &&label_80003AFC,
        &&label_80003B00,
        &&label_80003B04,
        &&label_80003B08,
        &&label_80003B0C,
        &&label_80003B10,
        &&label_80003B14,
        &&label_80003B18,
        &&label_80003B1C,
        &&label_80003B20,
        &&label_80003B24,
        &&label_80003B28,
        &&label_80003B2C,
        &&label_80003B30,
        &&label_80003B34,
        &&label_80003B38,
        &&label_80003B3C,
        &&label_80003B40,
        &&label_80003B44,
        &&label_80003B48,
        &&label_80003B4C,
        &&label_80003B50,
        &&label_80003B54,
        &&label_80003B58,
        &&label_80003B5C,
        &&label_80003B60,
        &&label_80003B64,
        &&label_80003B68,
        &&label_80003B6C,
        &&label_80003B70,
        &&label_80003B74,
        &&label_80003B78,
        &&label_80003B7C,
        &&label_80003B80,
        &&label_80003B84,
        &&label_80003B88,
        &&label_80003B8C,
        &&label_80003B90,
        &&label_80003B94,
        &&label_80003B98,
        &&label_80003B9C,
        &&label_80003BA0,
        &&label_80003BA4,
        &&label_80003BA8,
        &&label_80003BAC,
        &&label_80003BB0,
        &&label_80003BB4,
        &&label_80003BB8,
        &&label_80003BBC,
        &&label_80003BC0,
        &&label_80003BC4,
        &&label_80003BC8,
        &&label_80003BCC,
        &&label_80003BD0,
        &&label_80003BD4,
        &&label_80003BD8,
        &&label_80003BDC,
        &&label_80003BE0,
        &&label_80003BE4,
        &&label_80003BE8,
        &&label_80003BEC,
        &&label_80003BF0,
        &&label_80003BF4,
        &&label_80003BF8,
        &&label_80003BFC,
        &&label_80003C00,
        &&label_80003C04,
        &&label_80003C08,
        &&label_80003C0C,
        &&label_80003C10,
        &&label_80003C14,
        &&label_80003C18,
        &&label_80003C1C,
        &&label_80003C20,
        &&label_80003C24,
        &&label_80003C28,
        &&label_80003C2C,
        &&label_80003C30,
        &&label_80003C34,
        &&label_80003C38,
        &&label_80003C3C,
        &&label_80003C40,
        &&label_80003C44,
        &&label_80003C48,
        &&label_80003C4C,
        &&label_80003C50,
        &&label_80003C54,
        &&label_80003C58,
        &&label_80003C5C,
        &&label_80003C60,
        &&label_80003C64,
        &&label_80003C68,
        &&label_80003C6C,
        &&label_80003C70,
        &&label_80003C74,
        &&label_80003C78,
        &&label_80003C7C,
        &&label_80003C80,
        &&label_80003C84,
        &&label_80003C88,
        &&label_80003C8C,
        &&label_80003C90,
        &&label_80003C94,
        &&label_80003C98,
        &&label_80003C9C,
        &&label_80003CA0,
        &&label_80003CA4,
        &&label_80003CA8,
        &&label_80003CAC,
        &&label_80003CB0,
        &&label_80003CB4,
        &&label_80003CB8,
        &&label_80003CBC,
        &&label_80003CC0,
        &&label_80003CC4,
        &&label_80003CC8,
        &&label_80003CCC,
        &&label_80003CD0,
        &&label_80003CD4,
        &&label_80003CD8,
        &&label_80003CDC,
        &&label_80003CE0,
        &&label_80003CE4,
        &&label_80003CE8,
        &&label_80003CEC,
        &&label_80003CF0,
        &&label_80003CF4,
        &&label_80003CF8,
        &&label_80003CFC,
        &&label_80003D00,
        &&label_80003D04,
        &&label_80003D08,
        &&label_80003D0C,
        &&label_80003D10,
        &&label_80003D14,
        &&label_80003D18,
        &&label_80003D1C,
        &&label_80003D20,
        &&label_80003D24,
        &&label_80003D28,
        &&label_80003D2C,
        &&label_80003D30,
        &&label_80003D34,
        &&label_80003D38,
        &&label_80003D3C,
        &&label_80003D40,
        &&label_80003D44,
        &&label_80003D48,
        &&label_80003D4C,
        &&label_80003D50,
        &&label_80003D54,
        &&label_80003D58,
        &&label_80003D5C,
        &&label_80003D60,
        &&label_80003D64,
        &&label_80003D68,
        &&label_80003D6C,
        &&label_80003D70,
        &&label_80003D74,
        &&label_80003D78,
        &&label_80003D7C,
        &&label_80003D80,
        &&label_80003D84,
        &&label_80003D88,
        &&label_80003D8C,
        &&label_80003D90,
        &&label_80003D94,
        &&label_80003D98,
        &&label_80003D9C,
        &&label_80003DA0,
        &&label_80003DA4,
        &&label_80003DA8,
        &&label_80003DAC,
        &&label_80003DB0,
        &&label_80003DB4,
        &&label_80003DB8,
        &&label_80003DBC,
        &&label_80003DC0,
        &&label_80003DC4,
        &&label_80003DC8,
        &&label_80003DCC,
        &&label_80003DD0,
        &&label_80003DD4,
        &&label_80003DD8,
        &&label_80003DDC,
        &&label_80003DE0,
        &&label_80003DE4,
        &&label_80003DE8,
        &&label_80003DEC,
        &&label_80003DF0,
        &&label_80003DF4,
        &&label_80003DF8,
        &&label_80003DFC,
        &&label_80003E00,
        &&label_80003E04,
        &&label_80003E08,
        &&label_80003E0C,
        &&label_80003E10,
        &&label_80003E14,
        &&label_80003E18,
        &&label_80003E1C,
        &&label_80003E20,
        &&label_80003E24,
        &&label_80003E28,
        &&label_80003E2C,
        &&label_80003E30,
        &&label_80003E34,
        &&label_80003E38,
        &&label_80003E3C,
        &&label_80003E40,
        &&label_80003E44,
        &&label_80003E48,
        &&label_80003E4C,
        &&label_80003E50,
        &&label_80003E54,
        &&label_80003E58,
        &&label_80003E5C,
        &&label_80003E60,
        &&label_80003E64,
        &&label_80003E68,
        &&label_80003E6C,
        &&label_80003E70,
        &&label_80003E74,
        &&label_80003E78,
        &&label_80003E7C,
        &&label_80003E80,
        &&label_80003E84,
        &&label_80003E88,
        &&label_80003E8C,
        &&label_80003E90,
        &&label_80003E94,
        &&label_80003E98,
        &&label_80003E9C,
        &&label_80003EA0,
        &&label_80003EA4,
        &&label_80003EA8,
        &&label_80003EAC,
        &&label_80003EB0,
        &&label_80003EB4,
        &&label_80003EB8,
        &&label_80003EBC,
        &&label_80003EC0,
        &&label_80003EC4,
        &&label_80003EC8,
        &&label_80003ECC,
        &&label_80003ED0,
        &&label_80003ED4,
        &&label_80003ED8,
        &&label_80003EDC,
        &&label_80003EE0,
        &&label_80003EE4,
        &&label_80003EE8,
        &&label_80003EEC,
        &&label_80003EF0,
        &&label_80003EF4,
        &&label_80003EF8,
        &&label_80003EFC,
        &&label_80003F00,
        &&label_80003F04,
        &&label_80003F08,
        &&label_80003F0C,
        &&label_80003F10,
        &&label_80003F14,
        &&label_80003F18,
        &&label_80003F1C,
        &&label_80003F20,
        &&label_80003F24,
        &&label_80003F28,
        &&label_80003F2C,
        &&label_80003F30,
        &&label_80003F34,
        &&label_80003F38,
        &&label_80003F3C,
        &&label_80003F40,
        &&label_80003F44,
        &&label_80003F48,
        &&label_80003F4C,
        &&label_80003F50,
        &&label_80003F54,
        &&label_80003F58,
        &&label_80003F5C,
        &&label_80003F60,
        &&label_80003F64,
        &&label_80003F68,
        &&label_80003F6C,
        &&label_80003F70,
        &&label_80003F74,
        &&label_80003F78,
        &&label_80003F7C,
        &&label_80003F80,
        &&label_80003F84,
        &&label_80003F88,
        &&label_80003F8C,
        &&label_80003F90,
        &&label_80003F94,
        &&label_80003F98,
        &&label_80003F9C,
        &&label_80003FA0,
        &&label_80003FA4,
        &&label_80003FA8,
        &&label_80003FAC,
        &&label_80003FB0,
        &&label_80003FB4,
        &&label_80003FB8,
        &&label_80003FBC,
        &&label_80003FC0,
        &&label_80003FC4,
        &&label_80003FC8,
        &&label_80003FCC,
        &&label_80003FD0,
        &&label_80003FD4,
        &&label_80003FD8,
        &&label_80003FDC,
        &&label_80003FE0,
        &&label_80003FE4,
        &&label_80003FE8,
        &&label_80003FEC,
        &&label_80003FF0,
        &&label_80003FF4,
        &&label_80003FF8,
        &&label_80003FFC,
        &&label_80004000,
        &&label_80004004,
        &&label_80004008,
        &&label_8000400C,
        &&label_80004010,
        &&label_80004014,
        &&label_80004018,
        &&label_8000401C,
        &&label_80004020,
        &&label_80004024,
        &&label_80004028,
        &&label_8000402C,
        &&label_80004030,
        &&label_80004034,
        &&label_80004038,
        &&label_8000403C,
        &&label_80004040,
        &&label_80004044,
        &&label_80004048,
        &&label_8000404C,
        &&label_80004050,
        &&label_80004054,
        &&label_80004058,
        &&label_8000405C,
        &&label_80004060,
        &&label_80004064,
        &&label_80004068,
        &&label_8000406C,
        &&label_80004070,
        &&label_80004074,
        &&label_80004078,
        &&label_8000407C,
        &&label_80004080,
        &&label_80004084,
        &&label_80004088,
        &&label_8000408C,
        &&label_80004090,
        &&label_80004094,
        &&label_80004098,
        &&label_8000409C,
        &&label_800040A0,
        &&label_800040A4,
        &&label_800040A8,
        &&label_800040AC,
        &&label_800040B0,
        &&label_800040B4,
        &&label_800040B8,
        &&label_800040BC,
        &&label_800040C0,
        &&label_800040C4,
        &&label_800040C8,
        &&label_800040CC,
        &&label_800040D0,
        &&label_800040D4,
        &&label_800040D8,
        &&label_800040DC,
        &&label_800040E0,
        &&label_800040E4,
        &&label_800040E8,
        &&label_800040EC,
        &&label_800040F0,
        &&label_800040F4,
        &&label_800040F8,
        &&label_800040FC,
        &&label_80004100,
        &&label_80004104,
        &&label_80004108,
        &&label_8000410C,
        &&label_80004110,
        &&label_80004114,
        &&label_80004118,
        &&label_8000411C,
        &&label_80004120,
        &&label_80004124,
        &&label_80004128,
        &&label_8000412C,
        &&label_80004130,
        &&label_80004134,
        &&label_80004138,
        &&label_8000413C,
        &&label_80004140,
        &&label_80004144,
        &&label_80004148,
        &&label_8000414C,
        &&label_80004150,
        &&label_80004154,
        &&label_80004158,
        &&label_8000415C,
        &&label_80004160,
        &&label_80004164,
        &&label_80004168,
        &&label_8000416C,
        &&label_80004170,
        &&label_80004174,
        &&label_80004178,
        &&label_8000417C,
        &&label_80004180,
        &&label_80004184,
        &&label_80004188,
        &&label_8000418C,
        &&label_80004190,
        &&label_80004194,
        &&label_80004198,
        &&label_8000419C,
        &&label_800041A0,
        &&label_800041A4,
        &&label_800041A8,
        &&label_800041AC,
        &&label_800041B0,
        &&label_800041B4,
        &&label_800041B8,
        &&label_800041BC,
        &&label_800041C0,
        &&label_800041C4,
        &&label_800041C8,
        &&label_800041CC,
        &&label_800041D0,
        &&label_800041D4,
        &&label_800041D8,
        &&label_800041DC,
        &&label_800041E0,
        &&label_800041E4,
        &&label_800041E8,
        &&label_800041EC,
        &&label_800041F0,
        &&label_800041F4,
        &&label_800041F8,
        &&label_800041FC,
        &&label_80004200,
        &&label_80004204,
        &&label_80004208,
        &&label_8000420C,
        &&label_80004210,
        &&label_80004214,
        &&label_80004218,
        &&label_8000421C,
        &&label_80004220,
        &&label_80004224,
        &&label_80004228,
        &&label_8000422C,
        &&label_80004230,
        &&label_80004234,
        &&label_80004238,
        &&label_8000423C,
        &&label_80004240,
        &&label_80004244,
        &&label_80004248,
        &&label_8000424C,
        &&label_80004250,
        &&label_80004254,
        &&label_80004258,
        &&label_8000425C,
        &&label_80004260,
        &&label_80004264,
        &&label_80004268,
        &&label_8000426C,
        &&label_80004270,
        &&label_80004274,
        &&label_80004278,
        &&label_8000427C,
        &&label_80004280,
        &&label_80004284,
        &&label_80004288,
        &&label_8000428C,
        &&label_80004290,
        &&label_80004294,
        &&label_80004298,
        &&label_8000429C,
        &&label_800042A0,
        &&label_800042A4,
        &&label_800042A8,
        &&label_800042AC,
        &&label_800042B0,
        &&label_800042B4,
        &&label_800042B8,
        &&label_800042BC,
        &&label_800042C0,
        &&label_800042C4,
        &&label_800042C8,
        &&label_800042CC,
        &&label_800042D0,
        &&label_800042D4,
        &&label_800042D8,
        &&label_800042DC,
        &&label_800042E0,
        &&label_800042E4,
        &&label_800042E8,
        &&label_800042EC,
        &&label_800042F0,
        &&label_800042F4,
        &&label_800042F8,
        &&label_800042FC,
        &&label_80004300,
        &&label_80004304,
        &&label_80004308,
        &&label_8000430C,
        &&label_80004310,
        &&label_80004314,
        &&label_80004318,
        &&label_8000431C,
        &&label_80004320,
        &&label_80004324,
        &&label_80004328,
        &&label_8000432C,
        &&label_80004330,
        &&label_80004334,
        &&label_80004338,
        &&label_8000433C,
        &&label_80004340,
        &&label_80004344,
        &&label_80004348,
        &&label_8000434C,
        &&label_80004350,
        &&label_80004354,
        &&label_80004358,
        &&label_8000435C,
        &&label_80004360,
        &&label_80004364,
        &&label_80004368,
        &&label_8000436C,
        &&label_80004370,
        &&label_80004374,
        &&label_80004378,
        &&label_8000437C,
        &&label_80004380,
        &&label_80004384,
        &&label_80004388,
        &&label_8000438C,
        &&label_80004390,
        &&label_80004394,
        &&label_80004398,
        &&label_8000439C,
        &&label_800043A0,
        &&label_800043A4,
        &&label_800043A8,
        &&label_800043AC,
        &&label_800043B0,
        &&label_800043B4,
        &&label_800043B8,
        &&label_800043BC,
        &&label_800043C0,
        &&label_800043C4,
        &&label_800043C8,
        &&label_800043CC,
        &&label_800043D0,
        &&label_800043D4,
        &&label_800043D8,
        &&label_800043DC,
        &&label_800043E0,
        &&label_800043E4,
        &&label_800043E8,
        &&label_800043EC,
        &&label_800043F0,
        &&label_800043F4,
        &&label_800043F8,
        &&label_800043FC,
        &&label_80004400,
        &&label_80004404,
        &&label_80004408,
        &&label_8000440C,
        &&label_80004410,
        &&label_80004414,
        &&label_80004418,
        &&label_8000441C,
        &&label_80004420,
        &&label_80004424,
        &&label_80004428,
        &&label_8000442C,
        &&label_80004430,
        &&label_80004434,
        &&label_80004438,
        &&label_8000443C,
        &&label_80004440,
        &&label_80004444,
        &&label_80004448,
        &&label_8000444C,
        &&label_80004450,
        &&label_80004454,
        &&label_80004458,
        &&label_8000445C,
        &&label_80004460,
        &&label_80004464,
        &&label_80004468,
        &&label_8000446C,
        &&label_80004470,
        &&label_80004474,
        &&label_80004478,
        &&label_8000447C,
        &&label_80004480,
        &&label_80004484,
        &&label_80004488,
        &&label_8000448C,
        &&label_80004490,
        &&label_80004494,
        &&label_80004498,
        &&label_8000449C,
        &&label_800044A0,
        &&label_800044A4,
        &&label_800044A8,
        &&label_800044AC,
        &&label_800044B0,
        &&label_800044B4,
        &&label_800044B8,
        &&label_800044BC,
        &&label_800044C0,
        &&label_800044C4,
        &&label_800044C8,
        &&label_800044CC,
        &&label_800044D0,
        &&label_800044D4,
        &&label_800044D8,
        &&label_800044DC,
        &&label_800044E0,
        &&label_800044E4,
        &&label_800044E8,
        &&label_800044EC,
        &&label_800044F0,
        &&label_800044F4,
        &&label_800044F8,
        &&label_800044FC,
        &&label_80004500,
        &&label_80004504,
        &&label_80004508,
        &&label_8000450C,
        &&label_80004510,
        &&label_80004514,
        &&label_80004518,
        &&label_8000451C,
        &&label_80004520,
        &&label_80004524,
        &&label_80004528,
        &&label_8000452C,
        &&label_80004530,
        &&label_80004534,
        &&label_80004538,
        &&label_8000453C,
        &&label_80004540,
        &&label_80004544,
        &&label_80004548,
        &&label_8000454C,
        &&label_80004550,
        &&label_80004554,
        &&label_80004558,
        &&label_8000455C,
        &&label_80004560,
        &&label_80004564,
        &&label_80004568,
        &&label_8000456C,
        &&label_80004570,
        &&label_80004574,
        &&label_80004578,
        &&label_8000457C,
        &&label_80004580,
        &&label_80004584,
        &&label_80004588,
        &&label_8000458C,
        &&label_80004590,
        &&label_80004594,
        &&label_80004598,
        &&label_8000459C,
        &&label_800045A0,
        &&label_800045A4,
        &&label_800045A8,
        &&label_800045AC,
        &&label_800045B0,
        &&label_800045B4,
        &&label_800045B8,
        &&label_800045BC,
        &&label_800045C0,
        &&label_800045C4,
        &&label_800045C8,
        &&label_800045CC,
        &&label_800045D0,
        &&label_800045D4,
        &&label_800045D8,
        &&label_800045DC,
        &&label_800045E0,
        &&label_800045E4,
        &&label_800045E8,
        &&label_800045EC,
        &&label_800045F0,
        &&label_800045F4,
        &&label_800045F8,
        &&label_800045FC,
        &&label_80004600,
        &&label_80004604,
        &&label_80004608,
        &&label_8000460C,
        &&label_80004610,
        &&label_80004614,
        &&label_80004618,
        &&label_8000461C,
        &&label_80004620,
        &&label_80004624,
        &&label_80004628,
        &&label_8000462C,
        &&label_80004630,
        &&label_80004634,
        &&label_80004638,
        &&label_8000463C,
        &&label_80004640,
        &&label_80004644,
        &&label_80004648,
        &&label_8000464C,
        &&label_80004650,
        &&label_80004654,
        &&label_80004658,
        &&label_8000465C,
        &&label_80004660,
        &&label_80004664,
        &&label_80004668,
        &&label_8000466C,
        &&label_80004670,
        &&label_80004674,
        &&label_80004678,
        &&label_8000467C,
        &&label_80004680,
        &&label_80004684,
        &&label_80004688,
        &&label_8000468C,
        &&label_80004690,
        &&label_80004694,
        &&label_80004698,
        &&label_8000469C,
        &&label_800046A0,
        &&label_800046A4,
        &&label_800046A8,
        &&label_800046AC,
        &&label_800046B0,
        &&label_800046B4,
        &&label_800046B8,
        &&label_800046BC,
        &&label_800046C0,
        &&label_800046C4,
        &&label_800046C8,
        &&label_800046CC,
        &&label_800046D0,
        &&label_800046D4,
        &&label_800046D8,
        &&label_800046DC,
        &&label_800046E0,
        &&label_800046E4,
        &&label_800046E8,
        &&label_800046EC,
        &&label_800046F0,
        &&label_800046F4,
        &&label_800046F8,
        &&label_800046FC,
        &&label_80004700,
        &&label_80004704,
        &&label_80004708,
        &&label_8000470C,
        &&label_80004710,
        &&label_80004714,
        &&label_80004718,
        &&label_8000471C,
        &&label_80004720,
        &&label_80004724,
        &&label_80004728,
        &&label_8000472C,
        &&label_80004730,
        &&label_80004734,
        &&label_80004738,
        &&label_8000473C,
        &&label_80004740,
        &&label_80004744,
        &&label_80004748,
        &&label_8000474C,
        &&label_80004750,
        &&label_80004754,
        &&label_80004758,
        &&label_8000475C,
        &&label_80004760,
        &&label_80004764,
        &&label_80004768,
        &&label_8000476C,
        &&label_80004770,
        &&label_80004774,
        &&label_80004778,
        &&label_8000477C,
        &&label_80004780,
        &&label_80004784,
        &&label_80004788,
        &&label_8000478C,
        &&label_80004790,
        &&label_80004794,
        &&label_80004798,
        &&label_8000479C,
        &&label_800047A0,
        &&label_800047A4,
        &&label_800047A8,
        &&label_800047AC,
        &&label_800047B0,
        &&label_800047B4,
        &&label_800047B8,
        &&label_800047BC,
        &&label_800047C0,
        &&label_800047C4,
        &&label_800047C8,
        &&label_800047CC,
        &&label_800047D0,
        &&label_800047D4,
        &&label_800047D8,
        &&label_800047DC,
        &&label_800047E0,
        &&label_800047E4,
        &&label_800047E8,
        &&label_800047EC,
        &&label_800047F0,
        &&label_800047F4,
        &&label_800047F8,
        &&label_800047FC,
        &&label_80004800,
        &&label_80004804,
        &&label_80004808,
        &&label_8000480C,
        &&label_80004810,
        &&label_80004814,
        &&label_80004818,
        &&label_8000481C,
        &&label_80004820,
        &&label_80004824,
        &&label_80004828,
        &&label_8000482C,
        &&label_80004830,
        &&label_80004834,
        &&label_80004838,
        &&label_8000483C,
        &&label_80004840,
        &&label_80004844,
        &&label_80004848,
        &&label_8000484C,
        &&label_80004850,
        &&label_80004854,
        &&label_80004858,
        &&label_8000485C,
        &&label_80004860,
        &&label_80004864,
        &&label_80004868,
        &&label_8000486C,
        &&label_80004870,
        &&label_80004874,
        &&label_80004878,
        &&label_8000487C,
        &&label_80004880,
        &&label_80004884,
        &&label_80004888,
        &&label_8000488C,
        &&label_80004890,
        &&label_80004894,
        &&label_80004898,
        &&label_8000489C,
        &&label_800048A0,
        &&label_800048A4,
        &&label_800048A8,
        &&label_800048AC,
        &&label_800048B0,
        &&label_800048B4,
        &&label_800048B8,
        &&label_800048BC,
        &&label_800048C0,
        &&label_800048C4,
        &&label_800048C8,
        &&label_800048CC,
        &&label_800048D0,
        &&label_800048D4,
        &&label_800048D8,
        &&label_800048DC,
        &&label_800048E0,
        &&label_800048E4,
        &&label_800048E8,
        &&label_800048EC,
        &&label_800048F0,
        &&label_800048F4,
        &&label_800048F8,
        &&label_800048FC,
        &&label_80004900,
        &&label_80004904,
        &&label_80004908,
        &&label_8000490C,
        &&label_80004910,
        &&label_80004914,
        &&label_80004918,
        &&label_8000491C,
        &&label_80004920,
        &&label_80004924,
        &&label_80004928,
        &&label_8000492C,
        &&label_80004930,
        &&label_80004934,
        &&label_80004938,
        &&label_8000493C,
        &&label_80004940,
        &&label_80004944,
        &&label_80004948,
        &&label_8000494C,
        &&label_80004950,
        &&label_80004954,
        &&label_80004958,
        &&label_8000495C,
        &&label_80004960,
        &&label_80004964,
        &&label_80004968,
        &&label_8000496C,
        &&label_80004970,
        &&label_80004974,
        &&label_80004978,
        &&label_8000497C,
        &&label_80004980,
        &&label_80004984,
        &&label_80004988,
        &&label_8000498C,
        &&label_80004990,
        &&label_80004994,
        &&label_80004998,
        &&label_8000499C,
        &&label_800049A0,
        &&label_800049A4,
        &&label_800049A8,
        &&label_800049AC,
        &&label_800049B0,
        &&label_800049B4,
        &&label_800049B8,
        &&label_800049BC,
        &&label_800049C0,
        &&label_800049C4,
        &&label_800049C8,
        &&label_800049CC,
        &&label_800049D0,
        &&label_800049D4,
        &&label_800049D8,
        &&label_800049DC,
        &&label_800049E0,
        &&label_800049E4,
        &&label_800049E8,
        &&label_800049EC,
        &&label_800049F0,
        &&label_800049F4,
        &&label_800049F8,
        &&label_800049FC,
        &&label_80004A00,
        &&label_80004A04,
        &&label_80004A08,
        &&label_80004A0C,
        &&label_80004A10,
        &&label_80004A14,
        &&label_80004A18,
        &&label_80004A1C,
        &&label_80004A20,
        &&label_80004A24,
        &&label_80004A28,
        &&label_80004A2C,
        &&label_80004A30,
        &&label_80004A34,
        &&label_80004A38,
        &&label_80004A3C,
        &&label_80004A40,
        &&label_80004A44,
        &&label_80004A48,
        &&label_80004A4C,
        &&label_80004A50,
        &&label_80004A54,
        &&label_80004A58,
        &&label_80004A5C,
        &&label_80004A60,
        &&label_80004A64,
        &&label_80004A68,
        &&label_80004A6C,
        &&label_80004A70,
        &&label_80004A74,
        &&label_80004A78,
        &&label_80004A7C,
        &&label_80004A80,
        &&label_80004A84,
        &&label_80004A88,
        &&label_80004A8C,
        &&label_80004A90,
        &&label_80004A94,
        &&label_80004A98,
        &&label_80004A9C,
        &&label_80004AA0,
        &&label_80004AA4,
        &&label_80004AA8,
        &&label_80004AAC,
        &&label_80004AB0,
        &&label_80004AB4,
        &&label_80004AB8,
        &&label_80004ABC,
        &&label_80004AC0,
        &&label_80004AC4,
        &&label_80004AC8,
        &&label_80004ACC,
        &&label_80004AD0,
        &&label_80004AD4,
        &&label_80004AD8,
        &&label_80004ADC,
        &&label_80004AE0,
        &&label_80004AE4,
        &&label_80004AE8,
        &&label_80004AEC,
        &&label_80004AF0,
        &&label_80004AF4,
        &&label_80004AF8,
        &&label_80004AFC,
        &&label_80004B00,
        &&label_80004B04,
        &&label_80004B08,
        &&label_80004B0C,
        &&label_80004B10,
        &&label_80004B14,
        &&label_80004B18,
        &&label_80004B1C,
        &&label_80004B20,
        &&label_80004B24,
        &&label_80004B28,
        &&label_80004B2C,
        &&label_80004B30,
        &&label_80004B34,
        &&label_80004B38,
        &&label_80004B3C,
        &&label_80004B40,
        &&label_80004B44,
        &&label_80004B48,
        &&label_80004B4C,
        &&label_80004B50,
        &&label_80004B54,
        &&label_80004B58,
        &&label_80004B5C,
        &&label_80004B60,
        &&label_80004B64,
        &&label_80004B68,
        &&label_80004B6C,
        &&label_80004B70,
        &&label_80004B74,
        &&label_80004B78,
        &&label_80004B7C,
        &&label_80004B80,
        &&label_80004B84,
        &&label_80004B88,
        &&label_80004B8C,
        &&label_80004B90,
        &&label_80004B94,
        &&label_80004B98,
        &&label_80004B9C,
        &&label_80004BA0,
        &&label_80004BA4,
        &&label_80004BA8,
        &&label_80004BAC,
        &&label_80004BB0,
        &&label_80004BB4,
        &&label_80004BB8,
        &&label_80004BBC,
        &&label_80004BC0,
        &&label_80004BC4,
        &&label_80004BC8,
        &&label_80004BCC,
        &&label_80004BD0,
        &&label_80004BD4,
        &&label_80004BD8,
        &&label_80004BDC,
        &&label_80004BE0,
        &&label_80004BE4,
        &&label_80004BE8,
        &&label_80004BEC,
        &&label_80004BF0,
        &&label_80004BF4,
        &&label_80004BF8,
        &&label_80004BFC,
        &&label_80004C00,
        &&label_80004C04,
        &&label_80004C08,
        &&label_80004C0C,
        &&label_80004C10,
        &&label_80004C14,
        &&label_80004C18,
        &&label_80004C1C,
        &&label_80004C20,
        &&label_80004C24,
        &&label_80004C28,
        &&label_80004C2C,
        &&label_80004C30,
        &&label_80004C34,
        &&label_80004C38,
        &&label_80004C3C,
        &&label_80004C40,
        &&label_80004C44,
        &&label_80004C48,
        &&label_80004C4C,
        &&label_80004C50,
        &&label_80004C54,
        &&label_80004C58,
        &&label_80004C5C,
        &&label_80004C60,
        &&label_80004C64,
        &&label_80004C68,
        &&label_80004C6C,
        &&label_80004C70,
        &&label_80004C74,
        &&label_80004C78,
        &&label_80004C7C,
        &&label_80004C80,
        &&label_80004C84,
        &&label_80004C88,
        &&label_80004C8C,
        &&label_80004C90,
        &&label_80004C94,
        &&label_80004C98,
        &&label_80004C9C,
        &&label_80004CA0,
        &&label_80004CA4,
        &&label_80004CA8,
        &&label_80004CAC,
        &&label_80004CB0,
        &&label_80004CB4,
        &&label_80004CB8,
        &&label_80004CBC,
        &&label_80004CC0,
        &&label_80004CC4,
        &&label_80004CC8,
        &&label_80004CCC,
        &&label_80004CD0,
        &&label_80004CD4,
        &&label_80004CD8,
        &&label_80004CDC,
        &&label_80004CE0,
        &&label_80004CE4,
        &&label_80004CE8,
        &&label_80004CEC,
        &&label_80004CF0,
        &&label_80004CF4,
        &&label_80004CF8,
        &&label_80004CFC,
        &&label_80004D00,
        &&label_80004D04,
        &&label_80004D08,
        &&label_80004D0C,
        &&label_80004D10,
        &&label_80004D14,
        &&label_80004D18,
        &&label_80004D1C,
        &&label_80004D20,
        &&label_80004D24,
        &&label_80004D28,
        &&label_80004D2C,
        &&label_80004D30,
        &&label_80004D34,
        &&label_80004D38,
        &&label_80004D3C,
        &&label_80004D40,
        &&label_80004D44,
        &&label_80004D48,
        &&label_80004D4C,
        &&label_80004D50,
        &&label_80004D54,
        &&label_80004D58,
        &&label_80004D5C,
        &&label_80004D60,
        &&label_80004D64,
        &&label_80004D68,
        &&label_80004D6C,
        &&label_80004D70,
        &&label_80004D74,
        &&label_80004D78,
        &&label_80004D7C,
        &&label_80004D80,
        &&label_80004D84,
        &&label_80004D88,
        &&label_80004D8C,
        &&label_80004D90,
        &&label_80004D94,
        &&label_80004D98,
        &&label_80004D9C,
        &&label_80004DA0,
        &&label_80004DA4,
        &&label_80004DA8,
        &&label_80004DAC,
        &&label_80004DB0,
        &&label_80004DB4,
        &&label_80004DB8,
        &&label_80004DBC,
        &&label_80004DC0,
        &&label_80004DC4,
        &&label_80004DC8,
        &&label_80004DCC,
        &&label_80004DD0,
        &&label_80004DD4,
        &&label_80004DD8,
        &&label_80004DDC,
        &&label_80004DE0,
        &&label_80004DE4,
        &&label_80004DE8,
        &&label_80004DEC,
        &&label_80004DF0,
        &&label_80004DF4,
        &&label_80004DF8,
        &&label_80004DFC,
        &&label_80004E00,
        &&label_80004E04,
        &&label_80004E08,
        &&label_80004E0C,
        &&label_80004E10,
        &&label_80004E14,
        &&label_80004E18,
        &&label_80004E1C,
        &&label_80004E20,
        &&label_80004E24,
        &&label_80004E28,
        &&label_80004E2C,
        &&label_80004E30,
        &&label_80004E34,
        &&label_80004E38,
        &&label_80004E3C,
        &&label_80004E40,
        &&label_80004E44,
        &&label_80004E48,
        &&label_80004E4C,
        &&label_80004E50,
        &&label_80004E54,
        &&label_80004E58,
        &&label_80004E5C,
        &&label_80004E60,
        &&label_80004E64,
        &&label_80004E68,
        &&label_80004E6C,
        &&label_80004E70,
        &&label_80004E74,
        &&label_80004E78,
        &&label_80004E7C,
        &&label_80004E80,
        &&label_80004E84,
        &&label_80004E88,
        &&label_80004E8C,
        &&label_80004E90,
        &&label_80004E94,
        &&label_80004E98,
        &&label_80004E9C,
        &&label_80004EA0,
        &&label_80004EA4,
        &&label_80004EA8,
        &&label_80004EAC,
        &&label_80004EB0,
        &&label_80004EB4,
        &&label_80004EB8,
        &&label_80004EBC,
        &&label_80004EC0,
        &&label_80004EC4,
        &&label_80004EC8,
        &&label_80004ECC,
        &&label_80004ED0,
        &&label_80004ED4,
        &&label_80004ED8,
        &&label_80004EDC,
        &&label_80004EE0,
        &&label_80004EE4,
        &&label_80004EE8,
        &&label_80004EEC,
        &&label_80004EF0,
        &&label_80004EF4,
        &&label_80004EF8,
        &&label_80004EFC,
        &&label_80004F00,
        &&label_80004F04,
        &&label_80004F08,
        &&label_80004F0C,
        &&label_80004F10,
        &&label_80004F14,
        &&label_80004F18,
        &&label_80004F1C,
        &&label_80004F20,
        &&label_80004F24,
        &&label_80004F28,
        &&label_80004F2C,
        &&label_80004F30,
        &&label_80004F34,
        &&label_80004F38,
        &&label_80004F3C,
        &&label_80004F40,
        &&label_80004F44,
        &&label_80004F48,
        &&label_80004F4C,
        &&label_80004F50,
        &&label_80004F54,
        &&label_80004F58,
        &&label_80004F5C,
        &&label_80004F60,
        &&label_80004F64,
        &&label_80004F68,
        &&label_80004F6C,
        &&label_80004F70,
        &&label_80004F74,
        &&label_80004F78,
        &&label_80004F7C,
        &&label_80004F80,
        &&label_80004F84,
        &&label_80004F88,
        &&label_80004F8C,
        &&label_80004F90,
        &&label_80004F94,
        &&label_80004F98,
        &&label_80004F9C,
        &&label_80004FA0,
        &&label_80004FA4,
        &&label_80004FA8,
        &&label_80004FAC,
        &&label_80004FB0,
        &&label_80004FB4,
        &&label_80004FB8,
        &&label_80004FBC,
        &&label_80004FC0,
        &&label_80004FC4,
        &&label_80004FC8,
        &&label_80004FCC,
        &&label_80004FD0,
        &&label_80004FD4,
        &&label_80004FD8,
        &&label_80004FDC,
        &&label_80004FE0,
        &&label_80004FE4,
        &&label_80004FE8,
        &&label_80004FEC,
        &&label_80004FF0,
        &&label_80004FF4,
        &&label_80004FF8,
        &&label_80004FFC,
        &&label_80005000,
        &&label_80005004,
        &&label_80005008,
        &&label_8000500C,
        &&label_80005010,
        &&label_80005014,
        &&label_80005018,
        &&label_8000501C,
        &&label_80005020,
        &&label_80005024,
        &&label_80005028,
        &&label_8000502C,
        &&label_80005030,
        &&label_80005034,
        &&label_80005038,
        &&label_8000503C,
        &&label_80005040,
        &&label_80005044,
        &&label_80005048,
        &&label_8000504C,
        &&label_80005050,
        &&label_80005054,
        &&label_80005058,
        &&label_8000505C,
        &&label_80005060,
        &&label_80005064,
        &&label_80005068,
        &&label_8000506C,
        &&label_80005070,
        &&label_80005074,
        &&label_80005078,
        &&label_8000507C,
        &&label_80005080,
        &&label_80005084,
        &&label_80005088,
        &&label_8000508C,
        &&label_80005090,
        &&label_80005094,
        &&label_80005098,
        &&label_8000509C,
        &&label_800050A0,
        &&label_800050A4,
        &&label_800050A8,
        &&label_800050AC,
        &&label_800050B0,
        &&label_800050B4,
        &&label_800050B8,
        &&label_800050BC,
        &&label_800050C0,
        &&label_800050C4,
        &&label_800050C8,
        &&label_800050CC,
        &&label_800050D0,
        &&label_800050D4,
        &&label_800050D8,
        &&label_800050DC,
        &&label_800050E0,
        &&label_800050E4,
        &&label_800050E8,
        &&label_800050EC,
        &&label_800050F0,
        &&label_800050F4,
        &&label_800050F8,
        &&label_800050FC,
        &&label_80005100,
        &&label_80005104,
        &&label_80005108,
        &&label_8000510C,
        &&label_80005110,
        &&label_80005114,
        &&label_80005118,
        &&label_8000511C,
        &&label_80005120,
        &&label_80005124,
        &&label_80005128,
        &&label_8000512C,
        &&label_80005130,
        &&label_80005134,
        &&label_80005138,
        &&label_8000513C,
        &&label_80005140,
        &&label_80005144,
        &&label_80005148,
        &&label_8000514C,
        &&label_80005150,
        &&label_80005154,
        &&label_80005158,
        &&label_8000515C,
        &&label_80005160,
        &&label_80005164,
        &&label_80005168,
        &&label_8000516C,
        &&label_80005170,
        &&label_80005174,
        &&label_80005178,
        &&label_8000517C,
        &&label_80005180,
        &&label_80005184,
        &&label_80005188,
        &&label_8000518C,
        &&label_80005190,
        &&label_80005194,
        &&label_80005198,
        &&label_8000519C,
        &&label_800051A0,
        &&label_800051A4,
        &&label_800051A8,
        &&label_800051AC,
        &&label_800051B0,
        &&label_800051B4,
        &&label_800051B8,
        &&label_800051BC,
        &&label_800051C0,
        &&label_800051C4,
        &&label_800051C8,
        &&label_800051CC,
        &&label_800051D0,
        &&label_800051D4,
        &&label_800051D8,
        &&label_800051DC,
        &&label_800051E0,
        &&label_800051E4,
        &&label_800051E8,
        &&label_800051EC,
        &&label_800051F0,
        &&label_800051F4,
        &&label_800051F8,
        &&label_800051FC,
        &&label_80005200,
        &&label_80005204,
        &&label_80005208,
        &&label_8000520C,
        &&label_80005210,
        &&label_80005214,
        &&label_80005218,
        &&label_8000521C,
        &&label_80005220,
        &&label_80005224,
        &&label_80005228,
        &&label_8000522C,
        &&label_80005230,
        &&label_80005234,
        &&label_80005238,
        &&label_8000523C,
        &&label_80005240,
        &&label_80005244,
        &&label_80005248,
        &&label_8000524C,
        &&label_80005250,
        &&label_80005254,
        &&label_80005258,
        &&label_8000525C,
        &&label_80005260,
        &&label_80005264,
        &&label_80005268,
        &&label_8000526C,
        &&label_80005270,
        &&label_80005274,
        &&label_80005278,
        &&label_8000527C,
        &&label_80005280,
        &&label_80005284,
        &&label_80005288,
        &&label_8000528C,
        &&label_80005290,
        &&label_80005294,
        &&label_80005298,
        &&label_8000529C,
        &&label_800052A0,
        &&label_800052A4,
        &&label_800052A8,
        &&label_800052AC,
        &&label_800052B0,
        &&label_800052B4,
        &&label_800052B8,
        &&label_800052BC,
        &&label_800052C0,
        &&label_800052C4,
        &&label_800052C8,
        &&label_800052CC,
        &&label_800052D0,
        &&label_800052D4,
        &&label_800052D8,
        &&label_800052DC,
        &&label_800052E0,
        &&label_800052E4,
        &&label_800052E8,
        &&label_800052EC,
        &&label_800052F0,
        &&label_800052F4,
        &&label_800052F8,
        &&label_800052FC,
        &&label_80005300,
        &&label_80005304,
        &&label_80005308,
        &&label_8000530C,
        &&label_80005310,
        &&label_80005314,
        &&label_80005318,
        &&label_8000531C,
        &&label_80005320,
        &&label_80005324,
        &&label_80005328,
        &&label_8000532C,
        &&label_80005330,
        &&label_80005334,
        &&label_80005338,
        &&label_8000533C,
        &&label_80005340,
        &&label_80005344,
        &&label_80005348,
        &&label_8000534C,
        &&label_80005350,
        &&label_80005354,
        &&label_80005358,
        &&label_8000535C,
        &&label_80005360,
        &&label_80005364,
        &&label_80005368,
        &&label_8000536C,
        &&label_80005370,
        &&label_80005374,
        &&label_80005378,
        &&label_8000537C,
        &&label_80005380,
        &&label_80005384,
        &&label_80005388,
        &&label_8000538C,
        &&label_80005390,
        &&label_80005394,
        &&label_80005398,
        &&label_8000539C,
        &&label_800053A0,
        &&label_800053A4,
        &&label_800053A8,
        &&label_800053AC,
        &&label_800053B0,
        &&label_800053B4,
        &&label_800053B8,
        &&label_800053BC,
        &&label_800053C0,
        &&label_800053C4,
        &&label_800053C8,
        &&label_800053CC,
        &&label_800053D0,
        &&label_800053D4,
        &&label_800053D8,
        &&label_800053DC,
        &&label_800053E0,
        &&label_800053E4,
        &&label_800053E8,
        &&label_800053EC,
        &&label_800053F0,
        &&label_800053F4,
        &&label_800053F8,
        &&label_800053FC,
        &&label_80005400,
        &&label_80005404,
        &&label_80005408,
        &&label_8000540C,
        &&label_80005410,
        &&label_80005414,
        &&label_80005418,
        &&label_8000541C,
        &&label_80005420,
        &&label_80005424,
        &&label_80005428,
        &&label_8000542C,
        &&label_80005430,
        &&label_80005434,
        &&label_80005438,
        &&label_8000543C,
        &&label_80005440,
        &&label_80005444,
        &&label_80005448,
        &&label_8000544C,
        &&label_80005450,
        &&label_80005454,
        &&label_80005458,
        &&label_8000545C,
        &&label_80005460,
        &&label_80005464,
        &&label_80005468,
        &&label_8000546C,
        &&label_80005470,
        &&label_80005474,
        &&label_80005478,
        &&label_8000547C,
        &&label_80005480,
        &&label_80005484,
        &&label_80005488,
        &&label_8000548C,
        &&label_80005490,
        &&label_80005494,
        &&label_80005498,
        &&label_8000549C,
        &&label_800054A0,
        &&label_800054A4,
        &&label_800054A8,
        &&label_800054AC,
        &&label_800054B0,
        &&label_800054B4,
        &&label_800054B8,
        &&label_800054BC,
        &&label_800054C0,
        &&label_800054C4,
        &&label_800054C8,
        &&label_800054CC,
        &&label_800054D0,
        &&label_800054D4,
        &&label_800054D8,
        &&label_800054DC,
        &&label_800054E0,
        &&label_800054E4,
        &&label_800054E8,
        &&label_800054EC,
        &&label_800054F0,
        &&label_800054F4,
        &&label_800054F8,
        &&label_800054FC,
        &&label_80005500,
        &&label_80005504,
        &&label_80005508,
        &&label_8000550C,
        &&label_80005510,
        &&label_80005514,
        &&label_80005518,
        &&label_8000551C,
        &&label_80005520,
        &&label_80005524,
        &&label_80005528,
        &&label_8000552C,
        &&label_80005530,
        &&label_80005534,
        &&label_80005538,
        &&label_8000553C,
        &&label_80005540,
        &&label_80005544,
        &&label_80005548,
        &&label_8000554C,
        &&label_80005550,
        &&label_80005554,
        &&label_80005558,
        &&label_8000555C,
        &&label_80005560,
        &&label_80005564,
        &&label_80005568,
        &&label_8000556C,
        &&label_80005570,
        &&label_80005574,
        &&label_80005578,
        &&label_8000557C,
        &&label_80005580,
        &&label_80005584,
        &&label_80005588,
        &&label_8000558C,
        &&label_80005590,
        &&label_80005594,
        &&label_80005598,
        &&label_8000559C,
        &&label_800055A0,
        &&label_800055A4,
        &&label_800055A8,
        &&label_800055AC,
        &&label_800055B0,
        &&label_800055B4,
        &&label_800055B8,
        &&label_800055BC,
        &&label_800055C0,
        &&label_800055C4,
        &&label_800055C8,
        &&label_800055CC,
        &&label_800055D0,
        &&label_800055D4,
        &&label_800055D8,
        &&label_800055DC,
        &&label_800055E0,
        &&label_800055E4,
        &&label_800055E8,
        &&label_800055EC,
        &&label_800055F0,
        &&label_800055F4,
        &&label_800055F8,
        &&label_800055FC,
        &&label_80005600,
        &&label_80005604,
        &&label_80005608,
        &&label_8000560C,
        &&label_80005610,
        &&label_80005614,
        &&label_80005618,
        &&label_8000561C,
        &&label_80005620,
        &&label_80005624,
        &&label_80005628,
        &&label_8000562C,
        &&label_80005630,
        &&label_80005634,
        &&label_80005638,
        &&label_8000563C,
        &&label_80005640,
        &&label_80005644,
        &&label_80005648,
        &&label_8000564C,
        &&label_80005650,
        &&label_80005654,
        &&label_80005658,
        &&label_8000565C,
        &&label_80005660,
        &&label_80005664,
        &&label_80005668,
        &&label_8000566C,
        &&label_80005670,
        &&label_80005674,
        &&label_80005678,
        &&label_8000567C,
        &&label_80005680,
        &&label_80005684,
        &&label_80005688,
        &&label_8000568C,
        &&label_80005690,
        &&label_80005694,
        &&label_80005698,
        &&label_8000569C,
        &&label_800056A0,
        &&label_800056A4,
        &&label_800056A8,
        &&label_800056AC,
        &&label_800056B0,
        &&label_800056B4,
        &&label_800056B8,
        &&label_800056BC
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80003100u && pc <= 0x800056BCu && ((pc - 0x80003100u) & 3u) == 0u)
            goto *pc_table_80003100[(pc - 0x80003100u) >> 2];
    }
    return;
label_80003100:
    ctx->pc = 0x80003100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80003100: stwu     r1, -16(r1)
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
label_80003104:
    ctx->pc = 0x80003104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80003104: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003108:
    ctx->pc = 0x80003108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80003108: stw     r0, 20(r1)
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
label_8000310C:
    ctx->pc = 0x8000310Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000310Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8000310C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003110:
    ctx->pc = 0x80003110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003110u)) return;
    // 80003110: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80003114:
    ctx->pc = 0x80003114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003114u)) return;
    // 80003114: bl      0x80003130
    {
            ctx->lr = 0x80003118u;
            goto label_80003130;
    }

label_80003118:
    ctx->pc = 0x80003118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80003118: lwz     r0, 20(r1)
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
label_8000311C:
    ctx->pc = 0x8000311Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000311Cu)) return;
    // 8000311C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80003120:
    ctx->pc = 0x80003120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80003120: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003124:
    ctx->pc = 0x80003124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80003124: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003128:
    ctx->pc = 0x80003128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003128u)) return;
    // 80003128: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000312C:
    ctx->pc = 0x8000312Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000312Cu)) return;
    // 8000312C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003130:
    ctx->pc = 0x80003130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80003130: cmplwi  r5, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80003134:
    ctx->pc = 0x80003134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003134u)) return;
    // 80003134: rlwinm r4, r4, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80003138:
    ctx->pc = 0x80003138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003138u)) return;
    // 80003138: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_8000313C:
    ctx->pc = 0x8000313Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000313Cu)) return;
    // 8000313C: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80003140:
    ctx->pc = 0x80003140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003140u)) return;
    // 80003140: bc    12, 0, 0x800031D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800031D0;
        }
    }

label_80003144:
    ctx->pc = 0x80003144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80003144: nor   r0, r6, r6
    {
        ctx->gpr[0] = ~(ctx->gpr[6] | ctx->gpr[6]);
    }

label_80003148:
    ctx->pc = 0x80003148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003148u)) return;
    // 80003148: rlwinm. r3, r0, 0, 30, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000314C:
    ctx->pc = 0x8000314Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000314Cu)) return;
    // 8000314C: bc    12, 2, 0x80003160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80003160;
        }
    }

label_80003150:
    ctx->pc = 0x80003150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80003150: subf   r5, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80003154:
    loop_80003154(ctx);
    if (ctx->pc == 0x80003160u) goto label_80003160;
    return;
label_80003158:
    ctx->pc = 0x80003158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80003158: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000315C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000315Cu)) return;
    // 8000315C: bc    4, 2, 0x80003154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003154u;
                return;
            }
            goto label_80003154;
        }
    }

label_80003160:
    ctx->pc = 0x80003160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80003160: cmplwi  r7, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80003164:
    ctx->pc = 0x80003164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003164u)) return;
    // 80003164: bc    12, 2, 0x80003180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80003180;
        }
    }

label_80003168:
    ctx->pc = 0x80003168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80003168: rlwinm r3, r7, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 24u) & 0xFF000000u;
    }

label_8000316C:
    ctx->pc = 0x8000316Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000316Cu)) return;
    // 8000316C: rlwinm r0, r7, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0xFFFF0000u;
    }

label_80003170:
    ctx->pc = 0x80003170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003170u)) return;
    // 80003170: rlwinm r4, r7, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0xFFFFFF00u;
    }

label_80003174:
    ctx->pc = 0x80003174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003174u)) return;
    // 80003174: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80003178:
    ctx->pc = 0x80003178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003178u)) return;
    // 80003178: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8000317C:
    ctx->pc = 0x8000317Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000317Cu)) return;
    // 8000317C: or   r7, r7, r0
    {
        ctx->gpr[7] = ctx->gpr[7] | ctx->gpr[0];
    }

label_80003180:
    ctx->pc = 0x80003180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80003180: rlwinm. r3, r5, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003184:
    ctx->pc = 0x80003184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003184u)) return;
    // 80003184: addi    r4, r6, -3
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-3);

label_80003188:
    ctx->pc = 0x80003188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003188u)) return;
    // 80003188: bc    12, 2, 0x800031B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800031B4;
        }
    }

label_8000318C:
    loop_8000318C(ctx);
    if (ctx->pc == 0x800031B4u) goto label_800031B4;
    return;
label_80003190:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003190u)) return;
    // 80003190: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003194:
    ctx->pc = 0x80003194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80003194: stw     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003198:
    ctx->pc = 0x80003198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80003198: stw     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000319C:
    ctx->pc = 0x8000319Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000319Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8000319C: stw     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800031A0:
    ctx->pc = 0x800031A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 800031A0: stw     r7, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800031A4:
    ctx->pc = 0x800031A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800031A4: stw     r7, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800031A8:
    ctx->pc = 0x800031A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800031A8: stw     r7, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800031AC:
    ctx->pc = 0x800031ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800031AC: stwu     r7, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800031B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031B0u)) return;
    // 800031B0: bc    4, 2, 0x8000318C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000318Cu;
                return;
            }
            goto label_8000318C;
        }
    }

label_800031B4:
    ctx->pc = 0x800031B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800031B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 800031B4: rlwinm. r3, r5, 30, 29, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 30u) & 0x00000007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800031B8:
    ctx->pc = 0x800031B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031B8u)) return;
    // 800031B8: bc    12, 2, 0x800031C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800031C8;
        }
    }

label_800031BC:
    loop_800031BC(ctx);
    if (ctx->pc == 0x800031C8u) goto label_800031C8;
    return;
label_800031C0:
    ctx->pc = 0x800031C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800031C0: stwu     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800031C4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031C4u)) return;
    // 800031C4: bc    4, 2, 0x800031BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031BCu;
                return;
            }
            goto label_800031BC;
        }
    }

label_800031C8:
    ctx->pc = 0x800031C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800031C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 800031C8: addi    r6, r4, 3
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(3);

label_800031CC:
    ctx->pc = 0x800031CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031CCu)) return;
    // 800031CC: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_800031D0:
    ctx->pc = 0x800031D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800031D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 800031D0: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800031D4:
    ctx->pc = 0x800031D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031D4u)) return;
    // 800031D4: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800031D8:
    loop_800031D8(ctx);
    if (ctx->pc == 0x800031E4u) goto label_800031E4;
    return;
label_800031DC:
    ctx->pc = 0x800031DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800031DC: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800031E0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031E0u)) return;
    // 800031E0: bc    4, 2, 0x800031D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031D8u;
                return;
            }
            goto label_800031D8;
        }
    }

label_800031E4:
    ctx->pc = 0x800031E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800031E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800031E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800031E8:
    ctx->pc = 0x800031E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800031E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 800031E8: cmplw   r4, r3
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800031EC:
    ctx->pc = 0x800031ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031ECu)) return;
    // 800031EC: bc    12, 0, 0x80003214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80003214;
        }
    }

label_800031F0:
    ctx->pc = 0x800031F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800031F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 800031F0: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_800031F4:
    ctx->pc = 0x800031F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031F4u)) return;
    // 800031F4: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_800031F8:
    ctx->pc = 0x800031F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031F8u)) return;
    // 800031F8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_800031FC:
    ctx->pc = 0x800031FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800031FCu)) return;
    // 800031FC: b       0x80003208
    {
            goto label_80003208;
    }

label_80003200:
    loop_80003200(ctx);
    if (ctx->pc == 0x80003210u) goto label_80003210;
    return;
label_80003204:
    ctx->pc = 0x80003204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003204: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003208:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80003208: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000320C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000320Cu)) return;
    // 8000320C: bc    4, 2, 0x80003200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003200u;
                return;
            }
            goto label_80003200;
        }
    }

label_80003210:
    ctx->pc = 0x80003210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80003210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003214:
    ctx->pc = 0x80003214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80003214: add   r4, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80003218:
    ctx->pc = 0x80003218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003218u)) return;
    // 80003218: add   r6, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8000321C:
    ctx->pc = 0x8000321Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000321Cu)) return;
    // 8000321C: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80003220:
    ctx->pc = 0x80003220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003220u)) return;
    // 80003220: b       0x8000322C
    {
            goto label_8000322C;
    }

label_80003224:
    loop_80003224(ctx);
    if (ctx->pc == 0x80003234u) goto label_80003234;
    return;
label_80003228:
    ctx->pc = 0x80003228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003228: stbu     r0, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000322C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000322Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8000322C: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003230:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003230u)) return;
    // 80003230: bc    4, 2, 0x80003224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003224u;
                return;
            }
            goto label_80003224;
        }
    }

label_80003234:
    ctx->pc = 0x80003234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80003234: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003238:
    ctx->pc = 0x80003238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80003238: stwu     r1, -16(r1)
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
label_8000323C:
    ctx->pc = 0x8000323Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000323Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8000323C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003240:
    ctx->pc = 0x80003240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80003240: stw     r0, 20(r1)
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
label_80003244:
    ctx->pc = 0x80003244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80003244: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003248:
    ctx->pc = 0x80003248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003248u)) return;
    // 80003248: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000324C:
    ctx->pc = 0x8000324Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000324Cu)) return;
    // 8000324C: bl      0x80018CC4
    {
            ctx->lr = 0x80003250u;
            ctx->pc = 0x80018CC4u;
            return;
    }

label_80003250:
    ctx->pc = 0x80003250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80003250: lwz     r0, 20(r1)
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
label_80003254:
    ctx->pc = 0x80003254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003254u)) return;
    // 80003254: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80003258:
    ctx->pc = 0x80003258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80003258: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000325C:
    ctx->pc = 0x8000325Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8000325Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8000325C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003260:
    ctx->pc = 0x80003260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003260u)) return;
    // 80003260: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80003264:
    ctx->pc = 0x80003264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003264u)) return;
    // 80003264: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003268:
    ctx->pc = 0x80003268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80003268: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_8000326C:
    ctx->pc = 0x8000326Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000326Cu)) return;
    // 8000326C: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_80003270:
    ctx->pc = 0x80003270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003270u)) return;
    // 80003270: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80003274:
    ctx->pc = 0x80003274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003274u)) return;
    // 80003274: b       0x80003280
    {
            goto label_80003280;
    }

label_80003278:
    loop_80003278(ctx);
    if (ctx->pc == 0x80003288u) goto label_80003288;
    return;
label_8000327C:
    ctx->pc = 0x8000327Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000327Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000327C: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003280:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80003280: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003284:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003284u)) return;
    // 80003284: bc    4, 2, 0x80003278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003278u;
                return;
            }
            goto label_80003278;
        }
    }

label_80003288:
    ctx->pc = 0x80003288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80003288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_8000328C:
    ctx->pc = 0x8000328Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 8000328C: .long   0x4D657472
    // embedded data

label_80003290:
    ctx->pc = 0x80003290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003290u)) return;
    // 80003290: xoris   r23, r27, 0x6572
    ctx->gpr[23] = ctx->gpr[27] ^ (0x6572u << 16);

label_80003294:
    ctx->pc = 0x80003294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003294u)) return;
    // 80003294: xori    r19, r27, 0x2054
    ctx->gpr[19] = ctx->gpr[27] ^ 0x2054u;

label_80003298:
    ctx->pc = 0x80003298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003298u)) return;
    // 80003298: ori     r18, r11, 0x6765
    ctx->gpr[18] = ctx->gpr[11] | 0x6765u;

label_8000329C:
    ctx->pc = 0x8000329Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000329Cu)) return;
    // 8000329C: andis.  r0, r1, 0x5265
    {
        ctx->gpr[0] = ctx->gpr[1] & (0x5265u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032A0:
    ctx->pc = 0x800032A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800032A0u)) return;
    // 800032A0: andi.   r9, r27, 0x6465
    {
        ctx->gpr[9] = ctx->gpr[27] & 0x6465u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[9];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032A4:
    ctx->pc = 0x800032A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800032A4u)) return;
    // 800032A4: xoris   r20, r19, 0x204B
    ctx->gpr[20] = ctx->gpr[19] ^ (0x204Bu << 16);

label_800032A8:
    ctx->pc = 0x800032A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800032A8u)) return;
    // 800032A8: oris    r18, r11, 0x6E65
    ctx->gpr[18] = ctx->gpr[11] | (0x6E65u << 16);

label_800032AC:
    ctx->pc = 0x800032ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800032ACu)) return;
    // 800032AC: xoris   r0, r1, 0x666F
    ctx->gpr[0] = ctx->gpr[1] ^ (0x666Fu << 16);

label_800032B0:
    ctx->pc = 0x800032B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800032B0u)) return;
    // 800032B0: andi.   r0, r17, 0x506F
    {
        ctx->gpr[0] = ctx->gpr[17] & 0x506Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032B4:
    ctx->pc = 0x800032B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800032B4u)) return;
    // 800032B4: andis.  r5, r27, 0x7250
    {
        ctx->gpr[5] = ctx->gpr[27] & (0x7250u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032B8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800032B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800032B8: bc    24, 0, 0x800032B8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800032B8u;
                return;
            }
            goto label_800032B8;
        }
    }

label_800032BC:
    ctx->pc = 0x800032BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800032BC: .long   0x00000000
    // embedded data

label_800032C0:
    ctx->pc = 0x800032C0u;
    // 800032C0: .long   0x00000000
    // embedded data

label_800032C4:
    ctx->pc = 0x800032C4u;
    // 800032C4: .long   0x00000000
    // embedded data

label_800032C8:
    ctx->pc = 0x800032C8u;
    // 800032C8: .long   0x00000000
    // embedded data

label_800032CC:
    ctx->pc = 0x800032CCu;
    // 800032CC: .long   0x00000000
    // embedded data

label_800032D0:
    ctx->pc = 0x800032D0u;
    // 800032D0: .long   0x00000000
    // embedded data

label_800032D4:
    ctx->pc = 0x800032D4u;
    // 800032D4: .long   0x00000000
    // embedded data

label_800032D8:
    ctx->pc = 0x800032D8u;
    // 800032D8: .long   0x00000000
    // embedded data

label_800032DC:
    ctx->pc = 0x800032DCu;
    // 800032DC: .long   0x00000000
    // embedded data

label_800032E0:
    ctx->pc = 0x800032E0u;
    // 800032E0: .long   0x00000000
    // embedded data

label_800032E4:
    ctx->pc = 0x800032E4u;
    // 800032E4: .long   0x00000000
    // embedded data

label_800032E8:
    ctx->pc = 0x800032E8u;
    // 800032E8: .long   0x00000000
    // embedded data

label_800032EC:
    ctx->pc = 0x800032ECu;
    // 800032EC: .long   0x00000000
    // embedded data

label_800032F0:
    ctx->pc = 0x800032F0u;
    // 800032F0: .long   0x00000000
    // embedded data

label_800032F4:
    ctx->pc = 0x800032F4u;
    // 800032F4: .long   0x00000000
    // embedded data

label_800032F8:
    ctx->pc = 0x800032F8u;
    // 800032F8: .long   0x00000000
    // embedded data

label_800032FC:
    ctx->pc = 0x800032FCu;
    // 800032FC: .long   0x00000000
    // embedded data

label_80003300:
    ctx->pc = 0x80003300u;
    // 80003300: .long   0x00000000
    // embedded data

label_80003304:
    ctx->pc = 0x80003304u;
    // 80003304: .long   0x00000000
    // embedded data

label_80003308:
    ctx->pc = 0x80003308u;
    // 80003308: .long   0x00000000
    // embedded data

label_8000330C:
    ctx->pc = 0x8000330Cu;
    // 8000330C: .long   0x00000000
    // embedded data

label_80003310:
    ctx->pc = 0x80003310u;
    // 80003310: .long   0x00000000
    // embedded data

label_80003314:
    ctx->pc = 0x80003314u;
    // 80003314: .long   0x00000000
    // embedded data

label_80003318:
    ctx->pc = 0x80003318u;
    // 80003318: .long   0x00000000
    // embedded data

label_8000331C:
    ctx->pc = 0x8000331Cu;
    // 8000331C: .long   0x00000000
    // embedded data

label_80003320:
    ctx->pc = 0x80003320u;
    // 80003320: .long   0x00000000
    // embedded data

label_80003324:
    ctx->pc = 0x80003324u;
    // 80003324: .long   0x00000000
    // embedded data

label_80003328:
    ctx->pc = 0x80003328u;
    // 80003328: .long   0x00000000
    // embedded data

label_8000332C:
    ctx->pc = 0x8000332Cu;
    // 8000332C: .long   0x00000000
    // embedded data

label_80003330:
    ctx->pc = 0x80003330u;
    // 80003330: .long   0x00000000
    // embedded data

label_80003334:
    ctx->pc = 0x80003334u;
    // 80003334: .long   0x00000000
    // embedded data

label_80003338:
    ctx->pc = 0x80003338u;
    // 80003338: .long   0x00000000
    // embedded data

label_8000333C:
    ctx->pc = 0x8000333Cu;
    // 8000333C: .long   0x00000000
    // embedded data

label_80003340:
    ctx->pc = 0x80003340u;
    // 80003340: .long   0x00000000
    // embedded data

label_80003344:
    ctx->pc = 0x80003344u;
    // 80003344: .long   0x00000000
    // embedded data

label_80003348:
    ctx->pc = 0x80003348u;
    // 80003348: .long   0x00000000
    // embedded data

label_8000334C:
    ctx->pc = 0x8000334Cu;
    // 8000334C: .long   0x00000000
    // embedded data

label_80003350:
    ctx->pc = 0x80003350u;
    // 80003350: .long   0x00000000
    // embedded data

label_80003354:
    ctx->pc = 0x80003354u;
    // 80003354: .long   0x00000000
    // embedded data

label_80003358:
    ctx->pc = 0x80003358u;
    // 80003358: .long   0x00000000
    // embedded data

label_8000335C:
    ctx->pc = 0x8000335Cu;
    // 8000335C: .long   0x00000000
    // embedded data

label_80003360:
    ctx->pc = 0x80003360u;
    // 80003360: .long   0x00000000
    // embedded data

label_80003364:
    ctx->pc = 0x80003364u;
    // 80003364: .long   0x00000000
    // embedded data

label_80003368:
    ctx->pc = 0x80003368u;
    // 80003368: .long   0x00000000
    // embedded data

label_8000336C:
    ctx->pc = 0x8000336Cu;
    // 8000336C: .long   0x00000000
    // embedded data

label_80003370:
    ctx->pc = 0x80003370u;
    // 80003370: .long   0x00000000
    // embedded data

label_80003374:
    ctx->pc = 0x80003374u;
    // 80003374: .long   0x00000000
    // embedded data

label_80003378:
    ctx->pc = 0x80003378u;
    // 80003378: .long   0x00000000
    // embedded data

label_8000337C:
    ctx->pc = 0x8000337Cu;
    // 8000337C: .long   0x00000000
    // embedded data

label_80003380:
    ctx->pc = 0x80003380u;
    // 80003380: .long   0x00000000
    // embedded data

label_80003384:
    ctx->pc = 0x80003384u;
    // 80003384: .long   0x00000000
    // embedded data

label_80003388:
    ctx->pc = 0x80003388u;
    // 80003388: .long   0x00000000
    // embedded data

label_8000338C:
    ctx->pc = 0x8000338Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000338Cu)) return;
    // 8000338C: b       0x800051C0
    {
            goto label_800051C0;
    }

label_80003390:
    ctx->pc = 0x80003390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80003390: .long   0x00000000
    // embedded data

label_80003394:
    ctx->pc = 0x80003394u;
    // 80003394: .long   0x00000000
    // embedded data

label_80003398:
    ctx->pc = 0x80003398u;
    // 80003398: .long   0x00000000
    // embedded data

label_8000339C:
    ctx->pc = 0x8000339Cu;
    // 8000339C: .long   0x00000000
    // embedded data

label_800033A0:
    ctx->pc = 0x800033A0u;
    // 800033A0: .long   0x00000000
    // embedded data

label_800033A4:
    ctx->pc = 0x800033A4u;
    // 800033A4: .long   0x00000000
    // embedded data

label_800033A8:
    ctx->pc = 0x800033A8u;
    // 800033A8: .long   0x00000000
    // embedded data

label_800033AC:
    ctx->pc = 0x800033ACu;
    // 800033AC: .long   0x00000000
    // embedded data

label_800033B0:
    ctx->pc = 0x800033B0u;
    // 800033B0: .long   0x00000000
    // embedded data

label_800033B4:
    ctx->pc = 0x800033B4u;
    // 800033B4: .long   0x00000000
    // embedded data

label_800033B8:
    ctx->pc = 0x800033B8u;
    // 800033B8: .long   0x00000000
    // embedded data

label_800033BC:
    ctx->pc = 0x800033BCu;
    // 800033BC: .long   0x00000000
    // embedded data

label_800033C0:
    ctx->pc = 0x800033C0u;
    // 800033C0: .long   0x00000000
    // embedded data

label_800033C4:
    ctx->pc = 0x800033C4u;
    // 800033C4: .long   0x00000000
    // embedded data

label_800033C8:
    ctx->pc = 0x800033C8u;
    // 800033C8: .long   0x00000000
    // embedded data

label_800033CC:
    ctx->pc = 0x800033CCu;
    // 800033CC: .long   0x00000000
    // embedded data

label_800033D0:
    ctx->pc = 0x800033D0u;
    // 800033D0: .long   0x00000000
    // embedded data

label_800033D4:
    ctx->pc = 0x800033D4u;
    // 800033D4: .long   0x00000000
    // embedded data

label_800033D8:
    ctx->pc = 0x800033D8u;
    // 800033D8: .long   0x00000000
    // embedded data

label_800033DC:
    ctx->pc = 0x800033DCu;
    // 800033DC: .long   0x00000000
    // embedded data

label_800033E0:
    ctx->pc = 0x800033E0u;
    // 800033E0: .long   0x00000000
    // embedded data

label_800033E4:
    ctx->pc = 0x800033E4u;
    // 800033E4: .long   0x00000000
    // embedded data

label_800033E8:
    ctx->pc = 0x800033E8u;
    // 800033E8: .long   0x00000000
    // embedded data

label_800033EC:
    ctx->pc = 0x800033ECu;
    // 800033EC: .long   0x00000000
    // embedded data

label_800033F0:
    ctx->pc = 0x800033F0u;
    // 800033F0: .long   0x00000000
    // embedded data

label_800033F4:
    ctx->pc = 0x800033F4u;
    // 800033F4: .long   0x00000000
    // embedded data

label_800033F8:
    ctx->pc = 0x800033F8u;
    // 800033F8: .long   0x00000000
    // embedded data

label_800033FC:
    ctx->pc = 0x800033FCu;
    // 800033FC: .long   0x00000000
    // embedded data

label_80003400:
    ctx->pc = 0x80003400u;
    // 80003400: .long   0x00000000
    // embedded data

label_80003404:
    ctx->pc = 0x80003404u;
    // 80003404: .long   0x00000000
    // embedded data

label_80003408:
    ctx->pc = 0x80003408u;
    // 80003408: .long   0x00000000
    // embedded data

label_8000340C:
    ctx->pc = 0x8000340Cu;
    // 8000340C: .long   0x00000000
    // embedded data

label_80003410:
    ctx->pc = 0x80003410u;
    // 80003410: .long   0x00000000
    // embedded data

label_80003414:
    ctx->pc = 0x80003414u;
    // 80003414: .long   0x00000000
    // embedded data

label_80003418:
    ctx->pc = 0x80003418u;
    // 80003418: .long   0x00000000
    // embedded data

label_8000341C:
    ctx->pc = 0x8000341Cu;
    // 8000341C: .long   0x00000000
    // embedded data

label_80003420:
    ctx->pc = 0x80003420u;
    // 80003420: .long   0x00000000
    // embedded data

label_80003424:
    ctx->pc = 0x80003424u;
    // 80003424: .long   0x00000000
    // embedded data

label_80003428:
    ctx->pc = 0x80003428u;
    // 80003428: .long   0x00000000
    // embedded data

label_8000342C:
    ctx->pc = 0x8000342Cu;
    // 8000342C: .long   0x00000000
    // embedded data

label_80003430:
    ctx->pc = 0x80003430u;
    // 80003430: .long   0x00000000
    // embedded data

label_80003434:
    ctx->pc = 0x80003434u;
    // 80003434: .long   0x00000000
    // embedded data

label_80003438:
    ctx->pc = 0x80003438u;
    // 80003438: .long   0x00000000
    // embedded data

label_8000343C:
    ctx->pc = 0x8000343Cu;
    // 8000343C: .long   0x00000000
    // embedded data

label_80003440:
    ctx->pc = 0x80003440u;
    // 80003440: .long   0x00000000
    // embedded data

label_80003444:
    ctx->pc = 0x80003444u;
    // 80003444: .long   0x00000000
    // embedded data

label_80003448:
    ctx->pc = 0x80003448u;
    // 80003448: .long   0x00000000
    // embedded data

label_8000344C:
    ctx->pc = 0x8000344Cu;
    // 8000344C: .long   0x00000000
    // embedded data

label_80003450:
    ctx->pc = 0x80003450u;
    // 80003450: .long   0x00000000
    // embedded data

label_80003454:
    ctx->pc = 0x80003454u;
    // 80003454: .long   0x00000000
    // embedded data

label_80003458:
    ctx->pc = 0x80003458u;
    // 80003458: .long   0x00000000
    // embedded data

label_8000345C:
    ctx->pc = 0x8000345Cu;
    // 8000345C: .long   0x00000000
    // embedded data

label_80003460:
    ctx->pc = 0x80003460u;
    // 80003460: .long   0x00000000
    // embedded data

label_80003464:
    ctx->pc = 0x80003464u;
    // 80003464: .long   0x00000000
    // embedded data

label_80003468:
    ctx->pc = 0x80003468u;
    // 80003468: .long   0x00000000
    // embedded data

label_8000346C:
    ctx->pc = 0x8000346Cu;
    // 8000346C: .long   0x00000000
    // embedded data

label_80003470:
    ctx->pc = 0x80003470u;
    // 80003470: .long   0x00000000
    // embedded data

label_80003474:
    ctx->pc = 0x80003474u;
    // 80003474: .long   0x00000000
    // embedded data

label_80003478:
    ctx->pc = 0x80003478u;
    // 80003478: .long   0x00000000
    // embedded data

label_8000347C:
    ctx->pc = 0x8000347Cu;
    // 8000347C: .long   0x00000000
    // embedded data

label_80003480:
    ctx->pc = 0x80003480u;
    // 80003480: .long   0x00000000
    // embedded data

label_80003484:
    ctx->pc = 0x80003484u;
    // 80003484: .long   0x00000000
    // embedded data

label_80003488:
    ctx->pc = 0x80003488u;
    // 80003488: .long   0x00000000
    // embedded data

label_8000348C:
    ctx->pc = 0x8000348Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000348C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000348Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003490:
    ctx->pc = 0x80003490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003490: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003494:
    ctx->pc = 0x80003494u;
    // 80003494: icbi    0, r2
    ppc_fallback_instruction(ctx, 0x7C0017ACu, 0x80003494u);
    return;

label_80003498:
    ctx->pc = 0x80003498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003498: mfdar    r2
    ppc_fallback_instruction(ctx, 0x7C5302A6u, 0x80003498u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000349C:
    ctx->pc = 0x8000349Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 8000349C: dcbi    0, r2
    ppc_fallback_instruction(ctx, 0x7C0013ACu, 0x8000349Cu);
    return;

label_800034A0:
    ctx->pc = 0x800034A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800034A0: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800034A0u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034A4:
    ctx->pc = 0x800034A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800034A4: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800034A4u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034A8:
    ctx->pc = 0x800034A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800034A8: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800034A8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034AC:
    ctx->pc = 0x800034ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800034AC: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800034ACu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034B0:
    ctx->pc = 0x800034B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800034B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 800034B0: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034B4:
    ctx->pc = 0x800034B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800034B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 800034B4: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034B8:
    ctx->pc = 0x800034B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800034B8u)) return;
    // 800034B8: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800034BC:
    ctx->pc = 0x800034BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800034BCu)) return;
    // 800034BC: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800034C0:
    ctx->pc = 0x800034C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800034C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800034C0: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034C4:
    ctx->pc = 0x800034C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800034C4u)) return;
    // 800034C4: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800034C8:
    ctx->pc = 0x800034C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800034C8u)) return;
    // 800034C8: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800034CC:
    ctx->pc = 0x800034CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800034CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800034CC: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800034D0:
    ctx->pc = 0x800034D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800034D0u)) return;
    // 800034D0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_800034D4:
    ctx->pc = 0x800034D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800034D4u)) return;
    // 800034D4: rfi
    ppc_rfi(ctx, 0x800034D4u);
    return;

label_800034D8:
    ctx->pc = 0x800034D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800034D8: .long   0x00000000
    // embedded data

label_800034DC:
    ctx->pc = 0x800034DCu;
    // 800034DC: .long   0x00000000
    // embedded data

label_800034E0:
    ctx->pc = 0x800034E0u;
    // 800034E0: .long   0x00000000
    // embedded data

label_800034E4:
    ctx->pc = 0x800034E4u;
    // 800034E4: .long   0x00000000
    // embedded data

label_800034E8:
    ctx->pc = 0x800034E8u;
    // 800034E8: .long   0x00000000
    // embedded data

label_800034EC:
    ctx->pc = 0x800034ECu;
    // 800034EC: .long   0x00000000
    // embedded data

label_800034F0:
    ctx->pc = 0x800034F0u;
    // 800034F0: .long   0x00000000
    // embedded data

label_800034F4:
    ctx->pc = 0x800034F4u;
    // 800034F4: .long   0x00000000
    // embedded data

label_800034F8:
    ctx->pc = 0x800034F8u;
    // 800034F8: .long   0x00000000
    // embedded data

label_800034FC:
    ctx->pc = 0x800034FCu;
    // 800034FC: .long   0x00000000
    // embedded data

label_80003500:
    ctx->pc = 0x80003500u;
    // 80003500: .long   0x00000000
    // embedded data

label_80003504:
    ctx->pc = 0x80003504u;
    // 80003504: .long   0x00000000
    // embedded data

label_80003508:
    ctx->pc = 0x80003508u;
    // 80003508: .long   0x00000000
    // embedded data

label_8000350C:
    ctx->pc = 0x8000350Cu;
    // 8000350C: .long   0x00000000
    // embedded data

label_80003510:
    ctx->pc = 0x80003510u;
    // 80003510: .long   0x00000000
    // embedded data

label_80003514:
    ctx->pc = 0x80003514u;
    // 80003514: .long   0x00000000
    // embedded data

label_80003518:
    ctx->pc = 0x80003518u;
    // 80003518: .long   0x00000000
    // embedded data

label_8000351C:
    ctx->pc = 0x8000351Cu;
    // 8000351C: .long   0x00000000
    // embedded data

label_80003520:
    ctx->pc = 0x80003520u;
    // 80003520: .long   0x00000000
    // embedded data

label_80003524:
    ctx->pc = 0x80003524u;
    // 80003524: .long   0x00000000
    // embedded data

label_80003528:
    ctx->pc = 0x80003528u;
    // 80003528: .long   0x00000000
    // embedded data

label_8000352C:
    ctx->pc = 0x8000352Cu;
    // 8000352C: .long   0x00000000
    // embedded data

label_80003530:
    ctx->pc = 0x80003530u;
    // 80003530: .long   0x00000000
    // embedded data

label_80003534:
    ctx->pc = 0x80003534u;
    // 80003534: .long   0x00000000
    // embedded data

label_80003538:
    ctx->pc = 0x80003538u;
    // 80003538: .long   0x00000000
    // embedded data

label_8000353C:
    ctx->pc = 0x8000353Cu;
    // 8000353C: .long   0x00000000
    // embedded data

label_80003540:
    ctx->pc = 0x80003540u;
    // 80003540: .long   0x00000000
    // embedded data

label_80003544:
    ctx->pc = 0x80003544u;
    // 80003544: .long   0x00000000
    // embedded data

label_80003548:
    ctx->pc = 0x80003548u;
    // 80003548: .long   0x00000000
    // embedded data

label_8000354C:
    ctx->pc = 0x8000354Cu;
    // 8000354C: .long   0x00000000
    // embedded data

label_80003550:
    ctx->pc = 0x80003550u;
    // 80003550: .long   0x00000000
    // embedded data

label_80003554:
    ctx->pc = 0x80003554u;
    // 80003554: .long   0x00000000
    // embedded data

label_80003558:
    ctx->pc = 0x80003558u;
    // 80003558: .long   0x00000000
    // embedded data

label_8000355C:
    ctx->pc = 0x8000355Cu;
    // 8000355C: .long   0x00000000
    // embedded data

label_80003560:
    ctx->pc = 0x80003560u;
    // 80003560: .long   0x00000000
    // embedded data

label_80003564:
    ctx->pc = 0x80003564u;
    // 80003564: .long   0x00000000
    // embedded data

label_80003568:
    ctx->pc = 0x80003568u;
    // 80003568: .long   0x00000000
    // embedded data

label_8000356C:
    ctx->pc = 0x8000356Cu;
    // 8000356C: .long   0x00000000
    // embedded data

label_80003570:
    ctx->pc = 0x80003570u;
    // 80003570: .long   0x00000000
    // embedded data

label_80003574:
    ctx->pc = 0x80003574u;
    // 80003574: .long   0x00000000
    // embedded data

label_80003578:
    ctx->pc = 0x80003578u;
    // 80003578: .long   0x00000000
    // embedded data

label_8000357C:
    ctx->pc = 0x8000357Cu;
    // 8000357C: .long   0x00000000
    // embedded data

label_80003580:
    ctx->pc = 0x80003580u;
    // 80003580: .long   0x00000000
    // embedded data

label_80003584:
    ctx->pc = 0x80003584u;
    // 80003584: .long   0x00000000
    // embedded data

label_80003588:
    ctx->pc = 0x80003588u;
    // 80003588: .long   0x00000000
    // embedded data

label_8000358C:
    ctx->pc = 0x8000358Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000358C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000358Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003590:
    ctx->pc = 0x80003590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003590: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003590u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003594:
    ctx->pc = 0x80003594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003594: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003594u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003598:
    ctx->pc = 0x80003598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003598: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000359C:
    ctx->pc = 0x8000359Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000359Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000359C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800035A0:
    ctx->pc = 0x800035A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800035A0u)) return;
    // 800035A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800035A4:
    ctx->pc = 0x800035A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800035A4u)) return;
    // 800035A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800035A8:
    ctx->pc = 0x800035A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800035A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800035A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800035AC:
    ctx->pc = 0x800035ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800035ACu)) return;
    // 800035AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800035B0:
    ctx->pc = 0x800035B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800035B0u)) return;
    // 800035B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800035B4:
    ctx->pc = 0x800035B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800035B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800035B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800035B8:
    ctx->pc = 0x800035B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800035B8u)) return;
    // 800035B8: li      r3, 768
    ctx->gpr[3] = (u32)(s32)(768);

label_800035BC:
    ctx->pc = 0x800035BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800035BCu)) return;
    // 800035BC: rfi
    ppc_rfi(ctx, 0x800035BCu);
    return;

label_800035C0:
    ctx->pc = 0x800035C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800035C0: .long   0x00000000
    // embedded data

label_800035C4:
    ctx->pc = 0x800035C4u;
    // 800035C4: .long   0x00000000
    // embedded data

label_800035C8:
    ctx->pc = 0x800035C8u;
    // 800035C8: .long   0x00000000
    // embedded data

label_800035CC:
    ctx->pc = 0x800035CCu;
    // 800035CC: .long   0x00000000
    // embedded data

label_800035D0:
    ctx->pc = 0x800035D0u;
    // 800035D0: .long   0x00000000
    // embedded data

label_800035D4:
    ctx->pc = 0x800035D4u;
    // 800035D4: .long   0x00000000
    // embedded data

label_800035D8:
    ctx->pc = 0x800035D8u;
    // 800035D8: .long   0x00000000
    // embedded data

label_800035DC:
    ctx->pc = 0x800035DCu;
    // 800035DC: .long   0x00000000
    // embedded data

label_800035E0:
    ctx->pc = 0x800035E0u;
    // 800035E0: .long   0x00000000
    // embedded data

label_800035E4:
    ctx->pc = 0x800035E4u;
    // 800035E4: .long   0x00000000
    // embedded data

label_800035E8:
    ctx->pc = 0x800035E8u;
    // 800035E8: .long   0x00000000
    // embedded data

label_800035EC:
    ctx->pc = 0x800035ECu;
    // 800035EC: .long   0x00000000
    // embedded data

label_800035F0:
    ctx->pc = 0x800035F0u;
    // 800035F0: .long   0x00000000
    // embedded data

label_800035F4:
    ctx->pc = 0x800035F4u;
    // 800035F4: .long   0x00000000
    // embedded data

label_800035F8:
    ctx->pc = 0x800035F8u;
    // 800035F8: .long   0x00000000
    // embedded data

label_800035FC:
    ctx->pc = 0x800035FCu;
    // 800035FC: .long   0x00000000
    // embedded data

label_80003600:
    ctx->pc = 0x80003600u;
    // 80003600: .long   0x00000000
    // embedded data

label_80003604:
    ctx->pc = 0x80003604u;
    // 80003604: .long   0x00000000
    // embedded data

label_80003608:
    ctx->pc = 0x80003608u;
    // 80003608: .long   0x00000000
    // embedded data

label_8000360C:
    ctx->pc = 0x8000360Cu;
    // 8000360C: .long   0x00000000
    // embedded data

label_80003610:
    ctx->pc = 0x80003610u;
    // 80003610: .long   0x00000000
    // embedded data

label_80003614:
    ctx->pc = 0x80003614u;
    // 80003614: .long   0x00000000
    // embedded data

label_80003618:
    ctx->pc = 0x80003618u;
    // 80003618: .long   0x00000000
    // embedded data

label_8000361C:
    ctx->pc = 0x8000361Cu;
    // 8000361C: .long   0x00000000
    // embedded data

label_80003620:
    ctx->pc = 0x80003620u;
    // 80003620: .long   0x00000000
    // embedded data

label_80003624:
    ctx->pc = 0x80003624u;
    // 80003624: .long   0x00000000
    // embedded data

label_80003628:
    ctx->pc = 0x80003628u;
    // 80003628: .long   0x00000000
    // embedded data

label_8000362C:
    ctx->pc = 0x8000362Cu;
    // 8000362C: .long   0x00000000
    // embedded data

label_80003630:
    ctx->pc = 0x80003630u;
    // 80003630: .long   0x00000000
    // embedded data

label_80003634:
    ctx->pc = 0x80003634u;
    // 80003634: .long   0x00000000
    // embedded data

label_80003638:
    ctx->pc = 0x80003638u;
    // 80003638: .long   0x00000000
    // embedded data

label_8000363C:
    ctx->pc = 0x8000363Cu;
    // 8000363C: .long   0x00000000
    // embedded data

label_80003640:
    ctx->pc = 0x80003640u;
    // 80003640: .long   0x00000000
    // embedded data

label_80003644:
    ctx->pc = 0x80003644u;
    // 80003644: .long   0x00000000
    // embedded data

label_80003648:
    ctx->pc = 0x80003648u;
    // 80003648: .long   0x00000000
    // embedded data

label_8000364C:
    ctx->pc = 0x8000364Cu;
    // 8000364C: .long   0x00000000
    // embedded data

label_80003650:
    ctx->pc = 0x80003650u;
    // 80003650: .long   0x00000000
    // embedded data

label_80003654:
    ctx->pc = 0x80003654u;
    // 80003654: .long   0x00000000
    // embedded data

label_80003658:
    ctx->pc = 0x80003658u;
    // 80003658: .long   0x00000000
    // embedded data

label_8000365C:
    ctx->pc = 0x8000365Cu;
    // 8000365C: .long   0x00000000
    // embedded data

label_80003660:
    ctx->pc = 0x80003660u;
    // 80003660: .long   0x00000000
    // embedded data

label_80003664:
    ctx->pc = 0x80003664u;
    // 80003664: .long   0x00000000
    // embedded data

label_80003668:
    ctx->pc = 0x80003668u;
    // 80003668: .long   0x00000000
    // embedded data

label_8000366C:
    ctx->pc = 0x8000366Cu;
    // 8000366C: .long   0x00000000
    // embedded data

label_80003670:
    ctx->pc = 0x80003670u;
    // 80003670: .long   0x00000000
    // embedded data

label_80003674:
    ctx->pc = 0x80003674u;
    // 80003674: .long   0x00000000
    // embedded data

label_80003678:
    ctx->pc = 0x80003678u;
    // 80003678: .long   0x00000000
    // embedded data

label_8000367C:
    ctx->pc = 0x8000367Cu;
    // 8000367C: .long   0x00000000
    // embedded data

label_80003680:
    ctx->pc = 0x80003680u;
    // 80003680: .long   0x00000000
    // embedded data

label_80003684:
    ctx->pc = 0x80003684u;
    // 80003684: .long   0x00000000
    // embedded data

label_80003688:
    ctx->pc = 0x80003688u;
    // 80003688: .long   0x00000000
    // embedded data

label_8000368C:
    ctx->pc = 0x8000368Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000368C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000368Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003690:
    ctx->pc = 0x80003690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003690: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003690u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003694:
    ctx->pc = 0x80003694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003694: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003694u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003698:
    ctx->pc = 0x80003698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003698: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000369C:
    ctx->pc = 0x8000369Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000369Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000369C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800036A0:
    ctx->pc = 0x800036A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800036A0u)) return;
    // 800036A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800036A4:
    ctx->pc = 0x800036A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800036A4u)) return;
    // 800036A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800036A8:
    ctx->pc = 0x800036A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800036A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800036A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800036AC:
    ctx->pc = 0x800036ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800036ACu)) return;
    // 800036AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800036B0:
    ctx->pc = 0x800036B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800036B0u)) return;
    // 800036B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800036B4:
    ctx->pc = 0x800036B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800036B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800036B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800036B8:
    ctx->pc = 0x800036B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800036B8u)) return;
    // 800036B8: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_800036BC:
    ctx->pc = 0x800036BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800036BCu)) return;
    // 800036BC: rfi
    ppc_rfi(ctx, 0x800036BCu);
    return;

label_800036C0:
    ctx->pc = 0x800036C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800036C0: .long   0x00000000
    // embedded data

label_800036C4:
    ctx->pc = 0x800036C4u;
    // 800036C4: .long   0x00000000
    // embedded data

label_800036C8:
    ctx->pc = 0x800036C8u;
    // 800036C8: .long   0x00000000
    // embedded data

label_800036CC:
    ctx->pc = 0x800036CCu;
    // 800036CC: .long   0x00000000
    // embedded data

label_800036D0:
    ctx->pc = 0x800036D0u;
    // 800036D0: .long   0x00000000
    // embedded data

label_800036D4:
    ctx->pc = 0x800036D4u;
    // 800036D4: .long   0x00000000
    // embedded data

label_800036D8:
    ctx->pc = 0x800036D8u;
    // 800036D8: .long   0x00000000
    // embedded data

label_800036DC:
    ctx->pc = 0x800036DCu;
    // 800036DC: .long   0x00000000
    // embedded data

label_800036E0:
    ctx->pc = 0x800036E0u;
    // 800036E0: .long   0x00000000
    // embedded data

label_800036E4:
    ctx->pc = 0x800036E4u;
    // 800036E4: .long   0x00000000
    // embedded data

label_800036E8:
    ctx->pc = 0x800036E8u;
    // 800036E8: .long   0x00000000
    // embedded data

label_800036EC:
    ctx->pc = 0x800036ECu;
    // 800036EC: .long   0x00000000
    // embedded data

label_800036F0:
    ctx->pc = 0x800036F0u;
    // 800036F0: .long   0x00000000
    // embedded data

label_800036F4:
    ctx->pc = 0x800036F4u;
    // 800036F4: .long   0x00000000
    // embedded data

label_800036F8:
    ctx->pc = 0x800036F8u;
    // 800036F8: .long   0x00000000
    // embedded data

label_800036FC:
    ctx->pc = 0x800036FCu;
    // 800036FC: .long   0x00000000
    // embedded data

label_80003700:
    ctx->pc = 0x80003700u;
    // 80003700: .long   0x00000000
    // embedded data

label_80003704:
    ctx->pc = 0x80003704u;
    // 80003704: .long   0x00000000
    // embedded data

label_80003708:
    ctx->pc = 0x80003708u;
    // 80003708: .long   0x00000000
    // embedded data

label_8000370C:
    ctx->pc = 0x8000370Cu;
    // 8000370C: .long   0x00000000
    // embedded data

label_80003710:
    ctx->pc = 0x80003710u;
    // 80003710: .long   0x00000000
    // embedded data

label_80003714:
    ctx->pc = 0x80003714u;
    // 80003714: .long   0x00000000
    // embedded data

label_80003718:
    ctx->pc = 0x80003718u;
    // 80003718: .long   0x00000000
    // embedded data

label_8000371C:
    ctx->pc = 0x8000371Cu;
    // 8000371C: .long   0x00000000
    // embedded data

label_80003720:
    ctx->pc = 0x80003720u;
    // 80003720: .long   0x00000000
    // embedded data

label_80003724:
    ctx->pc = 0x80003724u;
    // 80003724: .long   0x00000000
    // embedded data

label_80003728:
    ctx->pc = 0x80003728u;
    // 80003728: .long   0x00000000
    // embedded data

label_8000372C:
    ctx->pc = 0x8000372Cu;
    // 8000372C: .long   0x00000000
    // embedded data

label_80003730:
    ctx->pc = 0x80003730u;
    // 80003730: .long   0x00000000
    // embedded data

label_80003734:
    ctx->pc = 0x80003734u;
    // 80003734: .long   0x00000000
    // embedded data

label_80003738:
    ctx->pc = 0x80003738u;
    // 80003738: .long   0x00000000
    // embedded data

label_8000373C:
    ctx->pc = 0x8000373Cu;
    // 8000373C: .long   0x00000000
    // embedded data

label_80003740:
    ctx->pc = 0x80003740u;
    // 80003740: .long   0x00000000
    // embedded data

label_80003744:
    ctx->pc = 0x80003744u;
    // 80003744: .long   0x00000000
    // embedded data

label_80003748:
    ctx->pc = 0x80003748u;
    // 80003748: .long   0x00000000
    // embedded data

label_8000374C:
    ctx->pc = 0x8000374Cu;
    // 8000374C: .long   0x00000000
    // embedded data

label_80003750:
    ctx->pc = 0x80003750u;
    // 80003750: .long   0x00000000
    // embedded data

label_80003754:
    ctx->pc = 0x80003754u;
    // 80003754: .long   0x00000000
    // embedded data

label_80003758:
    ctx->pc = 0x80003758u;
    // 80003758: .long   0x00000000
    // embedded data

label_8000375C:
    ctx->pc = 0x8000375Cu;
    // 8000375C: .long   0x00000000
    // embedded data

label_80003760:
    ctx->pc = 0x80003760u;
    // 80003760: .long   0x00000000
    // embedded data

label_80003764:
    ctx->pc = 0x80003764u;
    // 80003764: .long   0x00000000
    // embedded data

label_80003768:
    ctx->pc = 0x80003768u;
    // 80003768: .long   0x00000000
    // embedded data

label_8000376C:
    ctx->pc = 0x8000376Cu;
    // 8000376C: .long   0x00000000
    // embedded data

label_80003770:
    ctx->pc = 0x80003770u;
    // 80003770: .long   0x00000000
    // embedded data

label_80003774:
    ctx->pc = 0x80003774u;
    // 80003774: .long   0x00000000
    // embedded data

label_80003778:
    ctx->pc = 0x80003778u;
    // 80003778: .long   0x00000000
    // embedded data

label_8000377C:
    ctx->pc = 0x8000377Cu;
    // 8000377C: .long   0x00000000
    // embedded data

label_80003780:
    ctx->pc = 0x80003780u;
    // 80003780: .long   0x00000000
    // embedded data

label_80003784:
    ctx->pc = 0x80003784u;
    // 80003784: .long   0x00000000
    // embedded data

label_80003788:
    ctx->pc = 0x80003788u;
    // 80003788: .long   0x00000000
    // embedded data

label_8000378C:
    ctx->pc = 0x8000378Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000378C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000378Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003790:
    ctx->pc = 0x80003790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003790: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003790u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003794:
    ctx->pc = 0x80003794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003794: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003794u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003798:
    ctx->pc = 0x80003798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003798: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000379C:
    ctx->pc = 0x8000379Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000379Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000379C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800037A0:
    ctx->pc = 0x800037A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800037A0u)) return;
    // 800037A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800037A4:
    ctx->pc = 0x800037A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800037A4u)) return;
    // 800037A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800037A8:
    ctx->pc = 0x800037A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800037A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800037A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800037AC:
    ctx->pc = 0x800037ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800037ACu)) return;
    // 800037AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800037B0:
    ctx->pc = 0x800037B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800037B0u)) return;
    // 800037B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800037B4:
    ctx->pc = 0x800037B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800037B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800037B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800037B8:
    ctx->pc = 0x800037B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800037B8u)) return;
    // 800037B8: li      r3, 1280
    ctx->gpr[3] = (u32)(s32)(1280);

label_800037BC:
    ctx->pc = 0x800037BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800037BCu)) return;
    // 800037BC: rfi
    ppc_rfi(ctx, 0x800037BCu);
    return;

label_800037C0:
    ctx->pc = 0x800037C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800037C0: .long   0x00000000
    // embedded data

label_800037C4:
    ctx->pc = 0x800037C4u;
    // 800037C4: .long   0x00000000
    // embedded data

label_800037C8:
    ctx->pc = 0x800037C8u;
    // 800037C8: .long   0x00000000
    // embedded data

label_800037CC:
    ctx->pc = 0x800037CCu;
    // 800037CC: .long   0x00000000
    // embedded data

label_800037D0:
    ctx->pc = 0x800037D0u;
    // 800037D0: .long   0x00000000
    // embedded data

label_800037D4:
    ctx->pc = 0x800037D4u;
    // 800037D4: .long   0x00000000
    // embedded data

label_800037D8:
    ctx->pc = 0x800037D8u;
    // 800037D8: .long   0x00000000
    // embedded data

label_800037DC:
    ctx->pc = 0x800037DCu;
    // 800037DC: .long   0x00000000
    // embedded data

label_800037E0:
    ctx->pc = 0x800037E0u;
    // 800037E0: .long   0x00000000
    // embedded data

label_800037E4:
    ctx->pc = 0x800037E4u;
    // 800037E4: .long   0x00000000
    // embedded data

label_800037E8:
    ctx->pc = 0x800037E8u;
    // 800037E8: .long   0x00000000
    // embedded data

label_800037EC:
    ctx->pc = 0x800037ECu;
    // 800037EC: .long   0x00000000
    // embedded data

label_800037F0:
    ctx->pc = 0x800037F0u;
    // 800037F0: .long   0x00000000
    // embedded data

label_800037F4:
    ctx->pc = 0x800037F4u;
    // 800037F4: .long   0x00000000
    // embedded data

label_800037F8:
    ctx->pc = 0x800037F8u;
    // 800037F8: .long   0x00000000
    // embedded data

label_800037FC:
    ctx->pc = 0x800037FCu;
    // 800037FC: .long   0x00000000
    // embedded data

label_80003800:
    ctx->pc = 0x80003800u;
    // 80003800: .long   0x00000000
    // embedded data

label_80003804:
    ctx->pc = 0x80003804u;
    // 80003804: .long   0x00000000
    // embedded data

label_80003808:
    ctx->pc = 0x80003808u;
    // 80003808: .long   0x00000000
    // embedded data

label_8000380C:
    ctx->pc = 0x8000380Cu;
    // 8000380C: .long   0x00000000
    // embedded data

label_80003810:
    ctx->pc = 0x80003810u;
    // 80003810: .long   0x00000000
    // embedded data

label_80003814:
    ctx->pc = 0x80003814u;
    // 80003814: .long   0x00000000
    // embedded data

label_80003818:
    ctx->pc = 0x80003818u;
    // 80003818: .long   0x00000000
    // embedded data

label_8000381C:
    ctx->pc = 0x8000381Cu;
    // 8000381C: .long   0x00000000
    // embedded data

label_80003820:
    ctx->pc = 0x80003820u;
    // 80003820: .long   0x00000000
    // embedded data

label_80003824:
    ctx->pc = 0x80003824u;
    // 80003824: .long   0x00000000
    // embedded data

label_80003828:
    ctx->pc = 0x80003828u;
    // 80003828: .long   0x00000000
    // embedded data

label_8000382C:
    ctx->pc = 0x8000382Cu;
    // 8000382C: .long   0x00000000
    // embedded data

label_80003830:
    ctx->pc = 0x80003830u;
    // 80003830: .long   0x00000000
    // embedded data

label_80003834:
    ctx->pc = 0x80003834u;
    // 80003834: .long   0x00000000
    // embedded data

label_80003838:
    ctx->pc = 0x80003838u;
    // 80003838: .long   0x00000000
    // embedded data

label_8000383C:
    ctx->pc = 0x8000383Cu;
    // 8000383C: .long   0x00000000
    // embedded data

label_80003840:
    ctx->pc = 0x80003840u;
    // 80003840: .long   0x00000000
    // embedded data

label_80003844:
    ctx->pc = 0x80003844u;
    // 80003844: .long   0x00000000
    // embedded data

label_80003848:
    ctx->pc = 0x80003848u;
    // 80003848: .long   0x00000000
    // embedded data

label_8000384C:
    ctx->pc = 0x8000384Cu;
    // 8000384C: .long   0x00000000
    // embedded data

label_80003850:
    ctx->pc = 0x80003850u;
    // 80003850: .long   0x00000000
    // embedded data

label_80003854:
    ctx->pc = 0x80003854u;
    // 80003854: .long   0x00000000
    // embedded data

label_80003858:
    ctx->pc = 0x80003858u;
    // 80003858: .long   0x00000000
    // embedded data

label_8000385C:
    ctx->pc = 0x8000385Cu;
    // 8000385C: .long   0x00000000
    // embedded data

label_80003860:
    ctx->pc = 0x80003860u;
    // 80003860: .long   0x00000000
    // embedded data

label_80003864:
    ctx->pc = 0x80003864u;
    // 80003864: .long   0x00000000
    // embedded data

label_80003868:
    ctx->pc = 0x80003868u;
    // 80003868: .long   0x00000000
    // embedded data

label_8000386C:
    ctx->pc = 0x8000386Cu;
    // 8000386C: .long   0x00000000
    // embedded data

label_80003870:
    ctx->pc = 0x80003870u;
    // 80003870: .long   0x00000000
    // embedded data

label_80003874:
    ctx->pc = 0x80003874u;
    // 80003874: .long   0x00000000
    // embedded data

label_80003878:
    ctx->pc = 0x80003878u;
    // 80003878: .long   0x00000000
    // embedded data

label_8000387C:
    ctx->pc = 0x8000387Cu;
    // 8000387C: .long   0x00000000
    // embedded data

label_80003880:
    ctx->pc = 0x80003880u;
    // 80003880: .long   0x00000000
    // embedded data

label_80003884:
    ctx->pc = 0x80003884u;
    // 80003884: .long   0x00000000
    // embedded data

label_80003888:
    ctx->pc = 0x80003888u;
    // 80003888: .long   0x00000000
    // embedded data

label_8000388C:
    ctx->pc = 0x8000388Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000388C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000388Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003890:
    ctx->pc = 0x80003890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003890: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003890u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003894:
    ctx->pc = 0x80003894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003894: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003894u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003898:
    ctx->pc = 0x80003898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003898: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000389C:
    ctx->pc = 0x8000389Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000389Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000389C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800038A0:
    ctx->pc = 0x800038A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800038A0u)) return;
    // 800038A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800038A4:
    ctx->pc = 0x800038A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800038A4u)) return;
    // 800038A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800038A8:
    ctx->pc = 0x800038A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800038A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800038A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800038AC:
    ctx->pc = 0x800038ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800038ACu)) return;
    // 800038AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800038B0:
    ctx->pc = 0x800038B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800038B0u)) return;
    // 800038B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800038B4:
    ctx->pc = 0x800038B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800038B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800038B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800038B8:
    ctx->pc = 0x800038B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800038B8u)) return;
    // 800038B8: li      r3, 1536
    ctx->gpr[3] = (u32)(s32)(1536);

label_800038BC:
    ctx->pc = 0x800038BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800038BCu)) return;
    // 800038BC: rfi
    ppc_rfi(ctx, 0x800038BCu);
    return;

label_800038C0:
    ctx->pc = 0x800038C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800038C0: .long   0x00000000
    // embedded data

label_800038C4:
    ctx->pc = 0x800038C4u;
    // 800038C4: .long   0x00000000
    // embedded data

label_800038C8:
    ctx->pc = 0x800038C8u;
    // 800038C8: .long   0x00000000
    // embedded data

label_800038CC:
    ctx->pc = 0x800038CCu;
    // 800038CC: .long   0x00000000
    // embedded data

label_800038D0:
    ctx->pc = 0x800038D0u;
    // 800038D0: .long   0x00000000
    // embedded data

label_800038D4:
    ctx->pc = 0x800038D4u;
    // 800038D4: .long   0x00000000
    // embedded data

label_800038D8:
    ctx->pc = 0x800038D8u;
    // 800038D8: .long   0x00000000
    // embedded data

label_800038DC:
    ctx->pc = 0x800038DCu;
    // 800038DC: .long   0x00000000
    // embedded data

label_800038E0:
    ctx->pc = 0x800038E0u;
    // 800038E0: .long   0x00000000
    // embedded data

label_800038E4:
    ctx->pc = 0x800038E4u;
    // 800038E4: .long   0x00000000
    // embedded data

label_800038E8:
    ctx->pc = 0x800038E8u;
    // 800038E8: .long   0x00000000
    // embedded data

label_800038EC:
    ctx->pc = 0x800038ECu;
    // 800038EC: .long   0x00000000
    // embedded data

label_800038F0:
    ctx->pc = 0x800038F0u;
    // 800038F0: .long   0x00000000
    // embedded data

label_800038F4:
    ctx->pc = 0x800038F4u;
    // 800038F4: .long   0x00000000
    // embedded data

label_800038F8:
    ctx->pc = 0x800038F8u;
    // 800038F8: .long   0x00000000
    // embedded data

label_800038FC:
    ctx->pc = 0x800038FCu;
    // 800038FC: .long   0x00000000
    // embedded data

label_80003900:
    ctx->pc = 0x80003900u;
    // 80003900: .long   0x00000000
    // embedded data

label_80003904:
    ctx->pc = 0x80003904u;
    // 80003904: .long   0x00000000
    // embedded data

label_80003908:
    ctx->pc = 0x80003908u;
    // 80003908: .long   0x00000000
    // embedded data

label_8000390C:
    ctx->pc = 0x8000390Cu;
    // 8000390C: .long   0x00000000
    // embedded data

label_80003910:
    ctx->pc = 0x80003910u;
    // 80003910: .long   0x00000000
    // embedded data

label_80003914:
    ctx->pc = 0x80003914u;
    // 80003914: .long   0x00000000
    // embedded data

label_80003918:
    ctx->pc = 0x80003918u;
    // 80003918: .long   0x00000000
    // embedded data

label_8000391C:
    ctx->pc = 0x8000391Cu;
    // 8000391C: .long   0x00000000
    // embedded data

label_80003920:
    ctx->pc = 0x80003920u;
    // 80003920: .long   0x00000000
    // embedded data

label_80003924:
    ctx->pc = 0x80003924u;
    // 80003924: .long   0x00000000
    // embedded data

label_80003928:
    ctx->pc = 0x80003928u;
    // 80003928: .long   0x00000000
    // embedded data

label_8000392C:
    ctx->pc = 0x8000392Cu;
    // 8000392C: .long   0x00000000
    // embedded data

label_80003930:
    ctx->pc = 0x80003930u;
    // 80003930: .long   0x00000000
    // embedded data

label_80003934:
    ctx->pc = 0x80003934u;
    // 80003934: .long   0x00000000
    // embedded data

label_80003938:
    ctx->pc = 0x80003938u;
    // 80003938: .long   0x00000000
    // embedded data

label_8000393C:
    ctx->pc = 0x8000393Cu;
    // 8000393C: .long   0x00000000
    // embedded data

label_80003940:
    ctx->pc = 0x80003940u;
    // 80003940: .long   0x00000000
    // embedded data

label_80003944:
    ctx->pc = 0x80003944u;
    // 80003944: .long   0x00000000
    // embedded data

label_80003948:
    ctx->pc = 0x80003948u;
    // 80003948: .long   0x00000000
    // embedded data

label_8000394C:
    ctx->pc = 0x8000394Cu;
    // 8000394C: .long   0x00000000
    // embedded data

label_80003950:
    ctx->pc = 0x80003950u;
    // 80003950: .long   0x00000000
    // embedded data

label_80003954:
    ctx->pc = 0x80003954u;
    // 80003954: .long   0x00000000
    // embedded data

label_80003958:
    ctx->pc = 0x80003958u;
    // 80003958: .long   0x00000000
    // embedded data

label_8000395C:
    ctx->pc = 0x8000395Cu;
    // 8000395C: .long   0x00000000
    // embedded data

label_80003960:
    ctx->pc = 0x80003960u;
    // 80003960: .long   0x00000000
    // embedded data

label_80003964:
    ctx->pc = 0x80003964u;
    // 80003964: .long   0x00000000
    // embedded data

label_80003968:
    ctx->pc = 0x80003968u;
    // 80003968: .long   0x00000000
    // embedded data

label_8000396C:
    ctx->pc = 0x8000396Cu;
    // 8000396C: .long   0x00000000
    // embedded data

label_80003970:
    ctx->pc = 0x80003970u;
    // 80003970: .long   0x00000000
    // embedded data

label_80003974:
    ctx->pc = 0x80003974u;
    // 80003974: .long   0x00000000
    // embedded data

label_80003978:
    ctx->pc = 0x80003978u;
    // 80003978: .long   0x00000000
    // embedded data

label_8000397C:
    ctx->pc = 0x8000397Cu;
    // 8000397C: .long   0x00000000
    // embedded data

label_80003980:
    ctx->pc = 0x80003980u;
    // 80003980: .long   0x00000000
    // embedded data

label_80003984:
    ctx->pc = 0x80003984u;
    // 80003984: .long   0x00000000
    // embedded data

label_80003988:
    ctx->pc = 0x80003988u;
    // 80003988: .long   0x00000000
    // embedded data

label_8000398C:
    ctx->pc = 0x8000398Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000398C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000398Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003990:
    ctx->pc = 0x80003990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003990: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003990u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003994:
    ctx->pc = 0x80003994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003994: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003994u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003998:
    ctx->pc = 0x80003998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003998: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000399C:
    ctx->pc = 0x8000399Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000399Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000399C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800039A0:
    ctx->pc = 0x800039A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800039A0u)) return;
    // 800039A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800039A4:
    ctx->pc = 0x800039A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800039A4u)) return;
    // 800039A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800039A8:
    ctx->pc = 0x800039A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800039A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800039A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800039AC:
    ctx->pc = 0x800039ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800039ACu)) return;
    // 800039AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800039B0:
    ctx->pc = 0x800039B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800039B0u)) return;
    // 800039B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800039B4:
    ctx->pc = 0x800039B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800039B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800039B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800039B8:
    ctx->pc = 0x800039B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800039B8u)) return;
    // 800039B8: li      r3, 1792
    ctx->gpr[3] = (u32)(s32)(1792);

label_800039BC:
    ctx->pc = 0x800039BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800039BCu)) return;
    // 800039BC: rfi
    ppc_rfi(ctx, 0x800039BCu);
    return;

label_800039C0:
    ctx->pc = 0x800039C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800039C0: .long   0x00000000
    // embedded data

label_800039C4:
    ctx->pc = 0x800039C4u;
    // 800039C4: .long   0x00000000
    // embedded data

label_800039C8:
    ctx->pc = 0x800039C8u;
    // 800039C8: .long   0x00000000
    // embedded data

label_800039CC:
    ctx->pc = 0x800039CCu;
    // 800039CC: .long   0x00000000
    // embedded data

label_800039D0:
    ctx->pc = 0x800039D0u;
    // 800039D0: .long   0x00000000
    // embedded data

label_800039D4:
    ctx->pc = 0x800039D4u;
    // 800039D4: .long   0x00000000
    // embedded data

label_800039D8:
    ctx->pc = 0x800039D8u;
    // 800039D8: .long   0x00000000
    // embedded data

label_800039DC:
    ctx->pc = 0x800039DCu;
    // 800039DC: .long   0x00000000
    // embedded data

label_800039E0:
    ctx->pc = 0x800039E0u;
    // 800039E0: .long   0x00000000
    // embedded data

label_800039E4:
    ctx->pc = 0x800039E4u;
    // 800039E4: .long   0x00000000
    // embedded data

label_800039E8:
    ctx->pc = 0x800039E8u;
    // 800039E8: .long   0x00000000
    // embedded data

label_800039EC:
    ctx->pc = 0x800039ECu;
    // 800039EC: .long   0x00000000
    // embedded data

label_800039F0:
    ctx->pc = 0x800039F0u;
    // 800039F0: .long   0x00000000
    // embedded data

label_800039F4:
    ctx->pc = 0x800039F4u;
    // 800039F4: .long   0x00000000
    // embedded data

label_800039F8:
    ctx->pc = 0x800039F8u;
    // 800039F8: .long   0x00000000
    // embedded data

label_800039FC:
    ctx->pc = 0x800039FCu;
    // 800039FC: .long   0x00000000
    // embedded data

label_80003A00:
    ctx->pc = 0x80003A00u;
    // 80003A00: .long   0x00000000
    // embedded data

label_80003A04:
    ctx->pc = 0x80003A04u;
    // 80003A04: .long   0x00000000
    // embedded data

label_80003A08:
    ctx->pc = 0x80003A08u;
    // 80003A08: .long   0x00000000
    // embedded data

label_80003A0C:
    ctx->pc = 0x80003A0Cu;
    // 80003A0C: .long   0x00000000
    // embedded data

label_80003A10:
    ctx->pc = 0x80003A10u;
    // 80003A10: .long   0x00000000
    // embedded data

label_80003A14:
    ctx->pc = 0x80003A14u;
    // 80003A14: .long   0x00000000
    // embedded data

label_80003A18:
    ctx->pc = 0x80003A18u;
    // 80003A18: .long   0x00000000
    // embedded data

label_80003A1C:
    ctx->pc = 0x80003A1Cu;
    // 80003A1C: .long   0x00000000
    // embedded data

label_80003A20:
    ctx->pc = 0x80003A20u;
    // 80003A20: .long   0x00000000
    // embedded data

label_80003A24:
    ctx->pc = 0x80003A24u;
    // 80003A24: .long   0x00000000
    // embedded data

label_80003A28:
    ctx->pc = 0x80003A28u;
    // 80003A28: .long   0x00000000
    // embedded data

label_80003A2C:
    ctx->pc = 0x80003A2Cu;
    // 80003A2C: .long   0x00000000
    // embedded data

label_80003A30:
    ctx->pc = 0x80003A30u;
    // 80003A30: .long   0x00000000
    // embedded data

label_80003A34:
    ctx->pc = 0x80003A34u;
    // 80003A34: .long   0x00000000
    // embedded data

label_80003A38:
    ctx->pc = 0x80003A38u;
    // 80003A38: .long   0x00000000
    // embedded data

label_80003A3C:
    ctx->pc = 0x80003A3Cu;
    // 80003A3C: .long   0x00000000
    // embedded data

label_80003A40:
    ctx->pc = 0x80003A40u;
    // 80003A40: .long   0x00000000
    // embedded data

label_80003A44:
    ctx->pc = 0x80003A44u;
    // 80003A44: .long   0x00000000
    // embedded data

label_80003A48:
    ctx->pc = 0x80003A48u;
    // 80003A48: .long   0x00000000
    // embedded data

label_80003A4C:
    ctx->pc = 0x80003A4Cu;
    // 80003A4C: .long   0x00000000
    // embedded data

label_80003A50:
    ctx->pc = 0x80003A50u;
    // 80003A50: .long   0x00000000
    // embedded data

label_80003A54:
    ctx->pc = 0x80003A54u;
    // 80003A54: .long   0x00000000
    // embedded data

label_80003A58:
    ctx->pc = 0x80003A58u;
    // 80003A58: .long   0x00000000
    // embedded data

label_80003A5C:
    ctx->pc = 0x80003A5Cu;
    // 80003A5C: .long   0x00000000
    // embedded data

label_80003A60:
    ctx->pc = 0x80003A60u;
    // 80003A60: .long   0x00000000
    // embedded data

label_80003A64:
    ctx->pc = 0x80003A64u;
    // 80003A64: .long   0x00000000
    // embedded data

label_80003A68:
    ctx->pc = 0x80003A68u;
    // 80003A68: .long   0x00000000
    // embedded data

label_80003A6C:
    ctx->pc = 0x80003A6Cu;
    // 80003A6C: .long   0x00000000
    // embedded data

label_80003A70:
    ctx->pc = 0x80003A70u;
    // 80003A70: .long   0x00000000
    // embedded data

label_80003A74:
    ctx->pc = 0x80003A74u;
    // 80003A74: .long   0x00000000
    // embedded data

label_80003A78:
    ctx->pc = 0x80003A78u;
    // 80003A78: .long   0x00000000
    // embedded data

label_80003A7C:
    ctx->pc = 0x80003A7Cu;
    // 80003A7C: .long   0x00000000
    // embedded data

label_80003A80:
    ctx->pc = 0x80003A80u;
    // 80003A80: .long   0x00000000
    // embedded data

label_80003A84:
    ctx->pc = 0x80003A84u;
    // 80003A84: .long   0x00000000
    // embedded data

label_80003A88:
    ctx->pc = 0x80003A88u;
    // 80003A88: .long   0x00000000
    // embedded data

label_80003A8C:
    ctx->pc = 0x80003A8Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003A8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003A8Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003A90:
    ctx->pc = 0x80003A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003A90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003A90u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003A94:
    ctx->pc = 0x80003A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003A94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003A94u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003A98:
    ctx->pc = 0x80003A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003A98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003A9C:
    ctx->pc = 0x80003A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80003A9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003AA0:
    ctx->pc = 0x80003AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003AA0u)) return;
    // 80003AA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003AA4:
    ctx->pc = 0x80003AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003AA4u)) return;
    // 80003AA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003AA8:
    ctx->pc = 0x80003AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80003AA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003AAC:
    ctx->pc = 0x80003AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003AACu)) return;
    // 80003AAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003AB0:
    ctx->pc = 0x80003AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003AB0u)) return;
    // 80003AB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003AB4:
    ctx->pc = 0x80003AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80003AB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003AB8:
    ctx->pc = 0x80003AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003AB8u)) return;
    // 80003AB8: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_80003ABC:
    ctx->pc = 0x80003ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003ABCu)) return;
    // 80003ABC: rfi
    ppc_rfi(ctx, 0x80003ABCu);
    return;

label_80003AC0:
    ctx->pc = 0x80003AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80003AC0: .long   0x00000000
    // embedded data

label_80003AC4:
    ctx->pc = 0x80003AC4u;
    // 80003AC4: .long   0x00000000
    // embedded data

label_80003AC8:
    ctx->pc = 0x80003AC8u;
    // 80003AC8: .long   0x00000000
    // embedded data

label_80003ACC:
    ctx->pc = 0x80003ACCu;
    // 80003ACC: .long   0x00000000
    // embedded data

label_80003AD0:
    ctx->pc = 0x80003AD0u;
    // 80003AD0: .long   0x00000000
    // embedded data

label_80003AD4:
    ctx->pc = 0x80003AD4u;
    // 80003AD4: .long   0x00000000
    // embedded data

label_80003AD8:
    ctx->pc = 0x80003AD8u;
    // 80003AD8: .long   0x00000000
    // embedded data

label_80003ADC:
    ctx->pc = 0x80003ADCu;
    // 80003ADC: .long   0x00000000
    // embedded data

label_80003AE0:
    ctx->pc = 0x80003AE0u;
    // 80003AE0: .long   0x00000000
    // embedded data

label_80003AE4:
    ctx->pc = 0x80003AE4u;
    // 80003AE4: .long   0x00000000
    // embedded data

label_80003AE8:
    ctx->pc = 0x80003AE8u;
    // 80003AE8: .long   0x00000000
    // embedded data

label_80003AEC:
    ctx->pc = 0x80003AECu;
    // 80003AEC: .long   0x00000000
    // embedded data

label_80003AF0:
    ctx->pc = 0x80003AF0u;
    // 80003AF0: .long   0x00000000
    // embedded data

label_80003AF4:
    ctx->pc = 0x80003AF4u;
    // 80003AF4: .long   0x00000000
    // embedded data

label_80003AF8:
    ctx->pc = 0x80003AF8u;
    // 80003AF8: .long   0x00000000
    // embedded data

label_80003AFC:
    ctx->pc = 0x80003AFCu;
    // 80003AFC: .long   0x00000000
    // embedded data

label_80003B00:
    ctx->pc = 0x80003B00u;
    // 80003B00: .long   0x00000000
    // embedded data

label_80003B04:
    ctx->pc = 0x80003B04u;
    // 80003B04: .long   0x00000000
    // embedded data

label_80003B08:
    ctx->pc = 0x80003B08u;
    // 80003B08: .long   0x00000000
    // embedded data

label_80003B0C:
    ctx->pc = 0x80003B0Cu;
    // 80003B0C: .long   0x00000000
    // embedded data

label_80003B10:
    ctx->pc = 0x80003B10u;
    // 80003B10: .long   0x00000000
    // embedded data

label_80003B14:
    ctx->pc = 0x80003B14u;
    // 80003B14: .long   0x00000000
    // embedded data

label_80003B18:
    ctx->pc = 0x80003B18u;
    // 80003B18: .long   0x00000000
    // embedded data

label_80003B1C:
    ctx->pc = 0x80003B1Cu;
    // 80003B1C: .long   0x00000000
    // embedded data

label_80003B20:
    ctx->pc = 0x80003B20u;
    // 80003B20: .long   0x00000000
    // embedded data

label_80003B24:
    ctx->pc = 0x80003B24u;
    // 80003B24: .long   0x00000000
    // embedded data

label_80003B28:
    ctx->pc = 0x80003B28u;
    // 80003B28: .long   0x00000000
    // embedded data

label_80003B2C:
    ctx->pc = 0x80003B2Cu;
    // 80003B2C: .long   0x00000000
    // embedded data

label_80003B30:
    ctx->pc = 0x80003B30u;
    // 80003B30: .long   0x00000000
    // embedded data

label_80003B34:
    ctx->pc = 0x80003B34u;
    // 80003B34: .long   0x00000000
    // embedded data

label_80003B38:
    ctx->pc = 0x80003B38u;
    // 80003B38: .long   0x00000000
    // embedded data

label_80003B3C:
    ctx->pc = 0x80003B3Cu;
    // 80003B3C: .long   0x00000000
    // embedded data

label_80003B40:
    ctx->pc = 0x80003B40u;
    // 80003B40: .long   0x00000000
    // embedded data

label_80003B44:
    ctx->pc = 0x80003B44u;
    // 80003B44: .long   0x00000000
    // embedded data

label_80003B48:
    ctx->pc = 0x80003B48u;
    // 80003B48: .long   0x00000000
    // embedded data

label_80003B4C:
    ctx->pc = 0x80003B4Cu;
    // 80003B4C: .long   0x00000000
    // embedded data

label_80003B50:
    ctx->pc = 0x80003B50u;
    // 80003B50: .long   0x00000000
    // embedded data

label_80003B54:
    ctx->pc = 0x80003B54u;
    // 80003B54: .long   0x00000000
    // embedded data

label_80003B58:
    ctx->pc = 0x80003B58u;
    // 80003B58: .long   0x00000000
    // embedded data

label_80003B5C:
    ctx->pc = 0x80003B5Cu;
    // 80003B5C: .long   0x00000000
    // embedded data

label_80003B60:
    ctx->pc = 0x80003B60u;
    // 80003B60: .long   0x00000000
    // embedded data

label_80003B64:
    ctx->pc = 0x80003B64u;
    // 80003B64: .long   0x00000000
    // embedded data

label_80003B68:
    ctx->pc = 0x80003B68u;
    // 80003B68: .long   0x00000000
    // embedded data

label_80003B6C:
    ctx->pc = 0x80003B6Cu;
    // 80003B6C: .long   0x00000000
    // embedded data

label_80003B70:
    ctx->pc = 0x80003B70u;
    // 80003B70: .long   0x00000000
    // embedded data

label_80003B74:
    ctx->pc = 0x80003B74u;
    // 80003B74: .long   0x00000000
    // embedded data

label_80003B78:
    ctx->pc = 0x80003B78u;
    // 80003B78: .long   0x00000000
    // embedded data

label_80003B7C:
    ctx->pc = 0x80003B7Cu;
    // 80003B7C: .long   0x00000000
    // embedded data

label_80003B80:
    ctx->pc = 0x80003B80u;
    // 80003B80: .long   0x00000000
    // embedded data

label_80003B84:
    ctx->pc = 0x80003B84u;
    // 80003B84: .long   0x00000000
    // embedded data

label_80003B88:
    ctx->pc = 0x80003B88u;
    // 80003B88: .long   0x00000000
    // embedded data

label_80003B8C:
    ctx->pc = 0x80003B8Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003B8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003B8Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003B90:
    ctx->pc = 0x80003B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003B90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003B90u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003B94:
    ctx->pc = 0x80003B94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003B94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003B94u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003B98:
    ctx->pc = 0x80003B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003B98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003B9C:
    ctx->pc = 0x80003B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80003B9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003BA0:
    ctx->pc = 0x80003BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003BA0u)) return;
    // 80003BA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003BA4:
    ctx->pc = 0x80003BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003BA4u)) return;
    // 80003BA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003BA8:
    ctx->pc = 0x80003BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003BA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80003BA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003BAC:
    ctx->pc = 0x80003BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003BACu)) return;
    // 80003BAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003BB0:
    ctx->pc = 0x80003BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003BB0u)) return;
    // 80003BB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003BB4:
    ctx->pc = 0x80003BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80003BB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003BB8:
    ctx->pc = 0x80003BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003BB8u)) return;
    // 80003BB8: li      r3, 2304
    ctx->gpr[3] = (u32)(s32)(2304);

label_80003BBC:
    ctx->pc = 0x80003BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003BBCu)) return;
    // 80003BBC: rfi
    ppc_rfi(ctx, 0x80003BBCu);
    return;

label_80003BC0:
    ctx->pc = 0x80003BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80003BC0: .long   0x00000000
    // embedded data

label_80003BC4:
    ctx->pc = 0x80003BC4u;
    // 80003BC4: .long   0x00000000
    // embedded data

label_80003BC8:
    ctx->pc = 0x80003BC8u;
    // 80003BC8: .long   0x00000000
    // embedded data

label_80003BCC:
    ctx->pc = 0x80003BCCu;
    // 80003BCC: .long   0x00000000
    // embedded data

label_80003BD0:
    ctx->pc = 0x80003BD0u;
    // 80003BD0: .long   0x00000000
    // embedded data

label_80003BD4:
    ctx->pc = 0x80003BD4u;
    // 80003BD4: .long   0x00000000
    // embedded data

label_80003BD8:
    ctx->pc = 0x80003BD8u;
    // 80003BD8: .long   0x00000000
    // embedded data

label_80003BDC:
    ctx->pc = 0x80003BDCu;
    // 80003BDC: .long   0x00000000
    // embedded data

label_80003BE0:
    ctx->pc = 0x80003BE0u;
    // 80003BE0: .long   0x00000000
    // embedded data

label_80003BE4:
    ctx->pc = 0x80003BE4u;
    // 80003BE4: .long   0x00000000
    // embedded data

label_80003BE8:
    ctx->pc = 0x80003BE8u;
    // 80003BE8: .long   0x00000000
    // embedded data

label_80003BEC:
    ctx->pc = 0x80003BECu;
    // 80003BEC: .long   0x00000000
    // embedded data

label_80003BF0:
    ctx->pc = 0x80003BF0u;
    // 80003BF0: .long   0x00000000
    // embedded data

label_80003BF4:
    ctx->pc = 0x80003BF4u;
    // 80003BF4: .long   0x00000000
    // embedded data

label_80003BF8:
    ctx->pc = 0x80003BF8u;
    // 80003BF8: .long   0x00000000
    // embedded data

label_80003BFC:
    ctx->pc = 0x80003BFCu;
    // 80003BFC: .long   0x00000000
    // embedded data

label_80003C00:
    ctx->pc = 0x80003C00u;
    // 80003C00: .long   0x00000000
    // embedded data

label_80003C04:
    ctx->pc = 0x80003C04u;
    // 80003C04: .long   0x00000000
    // embedded data

label_80003C08:
    ctx->pc = 0x80003C08u;
    // 80003C08: .long   0x00000000
    // embedded data

label_80003C0C:
    ctx->pc = 0x80003C0Cu;
    // 80003C0C: .long   0x00000000
    // embedded data

label_80003C10:
    ctx->pc = 0x80003C10u;
    // 80003C10: .long   0x00000000
    // embedded data

label_80003C14:
    ctx->pc = 0x80003C14u;
    // 80003C14: .long   0x00000000
    // embedded data

label_80003C18:
    ctx->pc = 0x80003C18u;
    // 80003C18: .long   0x00000000
    // embedded data

label_80003C1C:
    ctx->pc = 0x80003C1Cu;
    // 80003C1C: .long   0x00000000
    // embedded data

label_80003C20:
    ctx->pc = 0x80003C20u;
    // 80003C20: .long   0x00000000
    // embedded data

label_80003C24:
    ctx->pc = 0x80003C24u;
    // 80003C24: .long   0x00000000
    // embedded data

label_80003C28:
    ctx->pc = 0x80003C28u;
    // 80003C28: .long   0x00000000
    // embedded data

label_80003C2C:
    ctx->pc = 0x80003C2Cu;
    // 80003C2C: .long   0x00000000
    // embedded data

label_80003C30:
    ctx->pc = 0x80003C30u;
    // 80003C30: .long   0x00000000
    // embedded data

label_80003C34:
    ctx->pc = 0x80003C34u;
    // 80003C34: .long   0x00000000
    // embedded data

label_80003C38:
    ctx->pc = 0x80003C38u;
    // 80003C38: .long   0x00000000
    // embedded data

label_80003C3C:
    ctx->pc = 0x80003C3Cu;
    // 80003C3C: .long   0x00000000
    // embedded data

label_80003C40:
    ctx->pc = 0x80003C40u;
    // 80003C40: .long   0x00000000
    // embedded data

label_80003C44:
    ctx->pc = 0x80003C44u;
    // 80003C44: .long   0x00000000
    // embedded data

label_80003C48:
    ctx->pc = 0x80003C48u;
    // 80003C48: .long   0x00000000
    // embedded data

label_80003C4C:
    ctx->pc = 0x80003C4Cu;
    // 80003C4C: .long   0x00000000
    // embedded data

label_80003C50:
    ctx->pc = 0x80003C50u;
    // 80003C50: .long   0x00000000
    // embedded data

label_80003C54:
    ctx->pc = 0x80003C54u;
    // 80003C54: .long   0x00000000
    // embedded data

label_80003C58:
    ctx->pc = 0x80003C58u;
    // 80003C58: .long   0x00000000
    // embedded data

label_80003C5C:
    ctx->pc = 0x80003C5Cu;
    // 80003C5C: .long   0x00000000
    // embedded data

label_80003C60:
    ctx->pc = 0x80003C60u;
    // 80003C60: .long   0x00000000
    // embedded data

label_80003C64:
    ctx->pc = 0x80003C64u;
    // 80003C64: .long   0x00000000
    // embedded data

label_80003C68:
    ctx->pc = 0x80003C68u;
    // 80003C68: .long   0x00000000
    // embedded data

label_80003C6C:
    ctx->pc = 0x80003C6Cu;
    // 80003C6C: .long   0x00000000
    // embedded data

label_80003C70:
    ctx->pc = 0x80003C70u;
    // 80003C70: .long   0x00000000
    // embedded data

label_80003C74:
    ctx->pc = 0x80003C74u;
    // 80003C74: .long   0x00000000
    // embedded data

label_80003C78:
    ctx->pc = 0x80003C78u;
    // 80003C78: .long   0x00000000
    // embedded data

label_80003C7C:
    ctx->pc = 0x80003C7Cu;
    // 80003C7C: .long   0x00000000
    // embedded data

label_80003C80:
    ctx->pc = 0x80003C80u;
    // 80003C80: .long   0x00000000
    // embedded data

label_80003C84:
    ctx->pc = 0x80003C84u;
    // 80003C84: .long   0x00000000
    // embedded data

label_80003C88:
    ctx->pc = 0x80003C88u;
    // 80003C88: .long   0x00000000
    // embedded data

label_80003C8C:
    ctx->pc = 0x80003C8Cu;
    // 80003C8C: .long   0x00000000
    // embedded data

label_80003C90:
    ctx->pc = 0x80003C90u;
    // 80003C90: .long   0x00000000
    // embedded data

label_80003C94:
    ctx->pc = 0x80003C94u;
    // 80003C94: .long   0x00000000
    // embedded data

label_80003C98:
    ctx->pc = 0x80003C98u;
    // 80003C98: .long   0x00000000
    // embedded data

label_80003C9C:
    ctx->pc = 0x80003C9Cu;
    // 80003C9C: .long   0x00000000
    // embedded data

label_80003CA0:
    ctx->pc = 0x80003CA0u;
    // 80003CA0: .long   0x00000000
    // embedded data

label_80003CA4:
    ctx->pc = 0x80003CA4u;
    // 80003CA4: .long   0x00000000
    // embedded data

label_80003CA8:
    ctx->pc = 0x80003CA8u;
    // 80003CA8: .long   0x00000000
    // embedded data

label_80003CAC:
    ctx->pc = 0x80003CACu;
    // 80003CAC: .long   0x00000000
    // embedded data

label_80003CB0:
    ctx->pc = 0x80003CB0u;
    // 80003CB0: .long   0x00000000
    // embedded data

label_80003CB4:
    ctx->pc = 0x80003CB4u;
    // 80003CB4: .long   0x00000000
    // embedded data

label_80003CB8:
    ctx->pc = 0x80003CB8u;
    // 80003CB8: .long   0x00000000
    // embedded data

label_80003CBC:
    ctx->pc = 0x80003CBCu;
    // 80003CBC: .long   0x00000000
    // embedded data

label_80003CC0:
    ctx->pc = 0x80003CC0u;
    // 80003CC0: .long   0x00000000
    // embedded data

label_80003CC4:
    ctx->pc = 0x80003CC4u;
    // 80003CC4: .long   0x00000000
    // embedded data

label_80003CC8:
    ctx->pc = 0x80003CC8u;
    // 80003CC8: .long   0x00000000
    // embedded data

label_80003CCC:
    ctx->pc = 0x80003CCCu;
    // 80003CCC: .long   0x00000000
    // embedded data

label_80003CD0:
    ctx->pc = 0x80003CD0u;
    // 80003CD0: .long   0x00000000
    // embedded data

label_80003CD4:
    ctx->pc = 0x80003CD4u;
    // 80003CD4: .long   0x00000000
    // embedded data

label_80003CD8:
    ctx->pc = 0x80003CD8u;
    // 80003CD8: .long   0x00000000
    // embedded data

label_80003CDC:
    ctx->pc = 0x80003CDCu;
    // 80003CDC: .long   0x00000000
    // embedded data

label_80003CE0:
    ctx->pc = 0x80003CE0u;
    // 80003CE0: .long   0x00000000
    // embedded data

label_80003CE4:
    ctx->pc = 0x80003CE4u;
    // 80003CE4: .long   0x00000000
    // embedded data

label_80003CE8:
    ctx->pc = 0x80003CE8u;
    // 80003CE8: .long   0x00000000
    // embedded data

label_80003CEC:
    ctx->pc = 0x80003CECu;
    // 80003CEC: .long   0x00000000
    // embedded data

label_80003CF0:
    ctx->pc = 0x80003CF0u;
    // 80003CF0: .long   0x00000000
    // embedded data

label_80003CF4:
    ctx->pc = 0x80003CF4u;
    // 80003CF4: .long   0x00000000
    // embedded data

label_80003CF8:
    ctx->pc = 0x80003CF8u;
    // 80003CF8: .long   0x00000000
    // embedded data

label_80003CFC:
    ctx->pc = 0x80003CFCu;
    // 80003CFC: .long   0x00000000
    // embedded data

label_80003D00:
    ctx->pc = 0x80003D00u;
    // 80003D00: .long   0x00000000
    // embedded data

label_80003D04:
    ctx->pc = 0x80003D04u;
    // 80003D04: .long   0x00000000
    // embedded data

label_80003D08:
    ctx->pc = 0x80003D08u;
    // 80003D08: .long   0x00000000
    // embedded data

label_80003D0C:
    ctx->pc = 0x80003D0Cu;
    // 80003D0C: .long   0x00000000
    // embedded data

label_80003D10:
    ctx->pc = 0x80003D10u;
    // 80003D10: .long   0x00000000
    // embedded data

label_80003D14:
    ctx->pc = 0x80003D14u;
    // 80003D14: .long   0x00000000
    // embedded data

label_80003D18:
    ctx->pc = 0x80003D18u;
    // 80003D18: .long   0x00000000
    // embedded data

label_80003D1C:
    ctx->pc = 0x80003D1Cu;
    // 80003D1C: .long   0x00000000
    // embedded data

label_80003D20:
    ctx->pc = 0x80003D20u;
    // 80003D20: .long   0x00000000
    // embedded data

label_80003D24:
    ctx->pc = 0x80003D24u;
    // 80003D24: .long   0x00000000
    // embedded data

label_80003D28:
    ctx->pc = 0x80003D28u;
    // 80003D28: .long   0x00000000
    // embedded data

label_80003D2C:
    ctx->pc = 0x80003D2Cu;
    // 80003D2C: .long   0x00000000
    // embedded data

label_80003D30:
    ctx->pc = 0x80003D30u;
    // 80003D30: .long   0x00000000
    // embedded data

label_80003D34:
    ctx->pc = 0x80003D34u;
    // 80003D34: .long   0x00000000
    // embedded data

label_80003D38:
    ctx->pc = 0x80003D38u;
    // 80003D38: .long   0x00000000
    // embedded data

label_80003D3C:
    ctx->pc = 0x80003D3Cu;
    // 80003D3C: .long   0x00000000
    // embedded data

label_80003D40:
    ctx->pc = 0x80003D40u;
    // 80003D40: .long   0x00000000
    // embedded data

label_80003D44:
    ctx->pc = 0x80003D44u;
    // 80003D44: .long   0x00000000
    // embedded data

label_80003D48:
    ctx->pc = 0x80003D48u;
    // 80003D48: .long   0x00000000
    // embedded data

label_80003D4C:
    ctx->pc = 0x80003D4Cu;
    // 80003D4C: .long   0x00000000
    // embedded data

label_80003D50:
    ctx->pc = 0x80003D50u;
    // 80003D50: .long   0x00000000
    // embedded data

label_80003D54:
    ctx->pc = 0x80003D54u;
    // 80003D54: .long   0x00000000
    // embedded data

label_80003D58:
    ctx->pc = 0x80003D58u;
    // 80003D58: .long   0x00000000
    // embedded data

label_80003D5C:
    ctx->pc = 0x80003D5Cu;
    // 80003D5C: .long   0x00000000
    // embedded data

label_80003D60:
    ctx->pc = 0x80003D60u;
    // 80003D60: .long   0x00000000
    // embedded data

label_80003D64:
    ctx->pc = 0x80003D64u;
    // 80003D64: .long   0x00000000
    // embedded data

label_80003D68:
    ctx->pc = 0x80003D68u;
    // 80003D68: .long   0x00000000
    // embedded data

label_80003D6C:
    ctx->pc = 0x80003D6Cu;
    // 80003D6C: .long   0x00000000
    // embedded data

label_80003D70:
    ctx->pc = 0x80003D70u;
    // 80003D70: .long   0x00000000
    // embedded data

label_80003D74:
    ctx->pc = 0x80003D74u;
    // 80003D74: .long   0x00000000
    // embedded data

label_80003D78:
    ctx->pc = 0x80003D78u;
    // 80003D78: .long   0x00000000
    // embedded data

label_80003D7C:
    ctx->pc = 0x80003D7Cu;
    // 80003D7C: .long   0x00000000
    // embedded data

label_80003D80:
    ctx->pc = 0x80003D80u;
    // 80003D80: .long   0x00000000
    // embedded data

label_80003D84:
    ctx->pc = 0x80003D84u;
    // 80003D84: .long   0x00000000
    // embedded data

label_80003D88:
    ctx->pc = 0x80003D88u;
    // 80003D88: .long   0x00000000
    // embedded data

label_80003D8C:
    ctx->pc = 0x80003D8Cu;
    // 80003D8C: .long   0x00000000
    // embedded data

label_80003D90:
    ctx->pc = 0x80003D90u;
    // 80003D90: .long   0x00000000
    // embedded data

label_80003D94:
    ctx->pc = 0x80003D94u;
    // 80003D94: .long   0x00000000
    // embedded data

label_80003D98:
    ctx->pc = 0x80003D98u;
    // 80003D98: .long   0x00000000
    // embedded data

label_80003D9C:
    ctx->pc = 0x80003D9Cu;
    // 80003D9C: .long   0x00000000
    // embedded data

label_80003DA0:
    ctx->pc = 0x80003DA0u;
    // 80003DA0: .long   0x00000000
    // embedded data

label_80003DA4:
    ctx->pc = 0x80003DA4u;
    // 80003DA4: .long   0x00000000
    // embedded data

label_80003DA8:
    ctx->pc = 0x80003DA8u;
    // 80003DA8: .long   0x00000000
    // embedded data

label_80003DAC:
    ctx->pc = 0x80003DACu;
    // 80003DAC: .long   0x00000000
    // embedded data

label_80003DB0:
    ctx->pc = 0x80003DB0u;
    // 80003DB0: .long   0x00000000
    // embedded data

label_80003DB4:
    ctx->pc = 0x80003DB4u;
    // 80003DB4: .long   0x00000000
    // embedded data

label_80003DB8:
    ctx->pc = 0x80003DB8u;
    // 80003DB8: .long   0x00000000
    // embedded data

label_80003DBC:
    ctx->pc = 0x80003DBCu;
    // 80003DBC: .long   0x00000000
    // embedded data

label_80003DC0:
    ctx->pc = 0x80003DC0u;
    // 80003DC0: .long   0x00000000
    // embedded data

label_80003DC4:
    ctx->pc = 0x80003DC4u;
    // 80003DC4: .long   0x00000000
    // embedded data

label_80003DC8:
    ctx->pc = 0x80003DC8u;
    // 80003DC8: .long   0x00000000
    // embedded data

label_80003DCC:
    ctx->pc = 0x80003DCCu;
    // 80003DCC: .long   0x00000000
    // embedded data

label_80003DD0:
    ctx->pc = 0x80003DD0u;
    // 80003DD0: .long   0x00000000
    // embedded data

label_80003DD4:
    ctx->pc = 0x80003DD4u;
    // 80003DD4: .long   0x00000000
    // embedded data

label_80003DD8:
    ctx->pc = 0x80003DD8u;
    // 80003DD8: .long   0x00000000
    // embedded data

label_80003DDC:
    ctx->pc = 0x80003DDCu;
    // 80003DDC: .long   0x00000000
    // embedded data

label_80003DE0:
    ctx->pc = 0x80003DE0u;
    // 80003DE0: .long   0x00000000
    // embedded data

label_80003DE4:
    ctx->pc = 0x80003DE4u;
    // 80003DE4: .long   0x00000000
    // embedded data

label_80003DE8:
    ctx->pc = 0x80003DE8u;
    // 80003DE8: .long   0x00000000
    // embedded data

label_80003DEC:
    ctx->pc = 0x80003DECu;
    // 80003DEC: .long   0x00000000
    // embedded data

label_80003DF0:
    ctx->pc = 0x80003DF0u;
    // 80003DF0: .long   0x00000000
    // embedded data

label_80003DF4:
    ctx->pc = 0x80003DF4u;
    // 80003DF4: .long   0x00000000
    // embedded data

label_80003DF8:
    ctx->pc = 0x80003DF8u;
    // 80003DF8: .long   0x00000000
    // embedded data

label_80003DFC:
    ctx->pc = 0x80003DFCu;
    // 80003DFC: .long   0x00000000
    // embedded data

label_80003E00:
    ctx->pc = 0x80003E00u;
    // 80003E00: .long   0x00000000
    // embedded data

label_80003E04:
    ctx->pc = 0x80003E04u;
    // 80003E04: .long   0x00000000
    // embedded data

label_80003E08:
    ctx->pc = 0x80003E08u;
    // 80003E08: .long   0x00000000
    // embedded data

label_80003E0C:
    ctx->pc = 0x80003E0Cu;
    // 80003E0C: .long   0x00000000
    // embedded data

label_80003E10:
    ctx->pc = 0x80003E10u;
    // 80003E10: .long   0x00000000
    // embedded data

label_80003E14:
    ctx->pc = 0x80003E14u;
    // 80003E14: .long   0x00000000
    // embedded data

label_80003E18:
    ctx->pc = 0x80003E18u;
    // 80003E18: .long   0x00000000
    // embedded data

label_80003E1C:
    ctx->pc = 0x80003E1Cu;
    // 80003E1C: .long   0x00000000
    // embedded data

label_80003E20:
    ctx->pc = 0x80003E20u;
    // 80003E20: .long   0x00000000
    // embedded data

label_80003E24:
    ctx->pc = 0x80003E24u;
    // 80003E24: .long   0x00000000
    // embedded data

label_80003E28:
    ctx->pc = 0x80003E28u;
    // 80003E28: .long   0x00000000
    // embedded data

label_80003E2C:
    ctx->pc = 0x80003E2Cu;
    // 80003E2C: .long   0x00000000
    // embedded data

label_80003E30:
    ctx->pc = 0x80003E30u;
    // 80003E30: .long   0x00000000
    // embedded data

label_80003E34:
    ctx->pc = 0x80003E34u;
    // 80003E34: .long   0x00000000
    // embedded data

label_80003E38:
    ctx->pc = 0x80003E38u;
    // 80003E38: .long   0x00000000
    // embedded data

label_80003E3C:
    ctx->pc = 0x80003E3Cu;
    // 80003E3C: .long   0x00000000
    // embedded data

label_80003E40:
    ctx->pc = 0x80003E40u;
    // 80003E40: .long   0x00000000
    // embedded data

label_80003E44:
    ctx->pc = 0x80003E44u;
    // 80003E44: .long   0x00000000
    // embedded data

label_80003E48:
    ctx->pc = 0x80003E48u;
    // 80003E48: .long   0x00000000
    // embedded data

label_80003E4C:
    ctx->pc = 0x80003E4Cu;
    // 80003E4C: .long   0x00000000
    // embedded data

label_80003E50:
    ctx->pc = 0x80003E50u;
    // 80003E50: .long   0x00000000
    // embedded data

label_80003E54:
    ctx->pc = 0x80003E54u;
    // 80003E54: .long   0x00000000
    // embedded data

label_80003E58:
    ctx->pc = 0x80003E58u;
    // 80003E58: .long   0x00000000
    // embedded data

label_80003E5C:
    ctx->pc = 0x80003E5Cu;
    // 80003E5C: .long   0x00000000
    // embedded data

label_80003E60:
    ctx->pc = 0x80003E60u;
    // 80003E60: .long   0x00000000
    // embedded data

label_80003E64:
    ctx->pc = 0x80003E64u;
    // 80003E64: .long   0x00000000
    // embedded data

label_80003E68:
    ctx->pc = 0x80003E68u;
    // 80003E68: .long   0x00000000
    // embedded data

label_80003E6C:
    ctx->pc = 0x80003E6Cu;
    // 80003E6C: .long   0x00000000
    // embedded data

label_80003E70:
    ctx->pc = 0x80003E70u;
    // 80003E70: .long   0x00000000
    // embedded data

label_80003E74:
    ctx->pc = 0x80003E74u;
    // 80003E74: .long   0x00000000
    // embedded data

label_80003E78:
    ctx->pc = 0x80003E78u;
    // 80003E78: .long   0x00000000
    // embedded data

label_80003E7C:
    ctx->pc = 0x80003E7Cu;
    // 80003E7C: .long   0x00000000
    // embedded data

label_80003E80:
    ctx->pc = 0x80003E80u;
    // 80003E80: .long   0x00000000
    // embedded data

label_80003E84:
    ctx->pc = 0x80003E84u;
    // 80003E84: .long   0x00000000
    // embedded data

label_80003E88:
    ctx->pc = 0x80003E88u;
    // 80003E88: .long   0x00000000
    // embedded data

label_80003E8C:
    ctx->pc = 0x80003E8Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003E8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003E8Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003E90:
    ctx->pc = 0x80003E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003E90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003E90u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003E94:
    ctx->pc = 0x80003E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003E94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003E94u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003E98:
    ctx->pc = 0x80003E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003E98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003E9C:
    ctx->pc = 0x80003E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80003E9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003EA0:
    ctx->pc = 0x80003EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003EA0u)) return;
    // 80003EA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003EA4:
    ctx->pc = 0x80003EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003EA4u)) return;
    // 80003EA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003EA8:
    ctx->pc = 0x80003EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80003EA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003EAC:
    ctx->pc = 0x80003EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003EACu)) return;
    // 80003EAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003EB0:
    ctx->pc = 0x80003EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003EB0u)) return;
    // 80003EB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003EB4:
    ctx->pc = 0x80003EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80003EB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003EB8:
    ctx->pc = 0x80003EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003EB8u)) return;
    // 80003EB8: li      r3, 3072
    ctx->gpr[3] = (u32)(s32)(3072);

label_80003EBC:
    ctx->pc = 0x80003EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003EBCu)) return;
    // 80003EBC: rfi
    ppc_rfi(ctx, 0x80003EBCu);
    return;

label_80003EC0:
    ctx->pc = 0x80003EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80003EC0: .long   0x00000000
    // embedded data

label_80003EC4:
    ctx->pc = 0x80003EC4u;
    // 80003EC4: .long   0x00000000
    // embedded data

label_80003EC8:
    ctx->pc = 0x80003EC8u;
    // 80003EC8: .long   0x00000000
    // embedded data

label_80003ECC:
    ctx->pc = 0x80003ECCu;
    // 80003ECC: .long   0x00000000
    // embedded data

label_80003ED0:
    ctx->pc = 0x80003ED0u;
    // 80003ED0: .long   0x00000000
    // embedded data

label_80003ED4:
    ctx->pc = 0x80003ED4u;
    // 80003ED4: .long   0x00000000
    // embedded data

label_80003ED8:
    ctx->pc = 0x80003ED8u;
    // 80003ED8: .long   0x00000000
    // embedded data

label_80003EDC:
    ctx->pc = 0x80003EDCu;
    // 80003EDC: .long   0x00000000
    // embedded data

label_80003EE0:
    ctx->pc = 0x80003EE0u;
    // 80003EE0: .long   0x00000000
    // embedded data

label_80003EE4:
    ctx->pc = 0x80003EE4u;
    // 80003EE4: .long   0x00000000
    // embedded data

label_80003EE8:
    ctx->pc = 0x80003EE8u;
    // 80003EE8: .long   0x00000000
    // embedded data

label_80003EEC:
    ctx->pc = 0x80003EECu;
    // 80003EEC: .long   0x00000000
    // embedded data

label_80003EF0:
    ctx->pc = 0x80003EF0u;
    // 80003EF0: .long   0x00000000
    // embedded data

label_80003EF4:
    ctx->pc = 0x80003EF4u;
    // 80003EF4: .long   0x00000000
    // embedded data

label_80003EF8:
    ctx->pc = 0x80003EF8u;
    // 80003EF8: .long   0x00000000
    // embedded data

label_80003EFC:
    ctx->pc = 0x80003EFCu;
    // 80003EFC: .long   0x00000000
    // embedded data

label_80003F00:
    ctx->pc = 0x80003F00u;
    // 80003F00: .long   0x00000000
    // embedded data

label_80003F04:
    ctx->pc = 0x80003F04u;
    // 80003F04: .long   0x00000000
    // embedded data

label_80003F08:
    ctx->pc = 0x80003F08u;
    // 80003F08: .long   0x00000000
    // embedded data

label_80003F0C:
    ctx->pc = 0x80003F0Cu;
    // 80003F0C: .long   0x00000000
    // embedded data

label_80003F10:
    ctx->pc = 0x80003F10u;
    // 80003F10: .long   0x00000000
    // embedded data

label_80003F14:
    ctx->pc = 0x80003F14u;
    // 80003F14: .long   0x00000000
    // embedded data

label_80003F18:
    ctx->pc = 0x80003F18u;
    // 80003F18: .long   0x00000000
    // embedded data

label_80003F1C:
    ctx->pc = 0x80003F1Cu;
    // 80003F1C: .long   0x00000000
    // embedded data

label_80003F20:
    ctx->pc = 0x80003F20u;
    // 80003F20: .long   0x00000000
    // embedded data

label_80003F24:
    ctx->pc = 0x80003F24u;
    // 80003F24: .long   0x00000000
    // embedded data

label_80003F28:
    ctx->pc = 0x80003F28u;
    // 80003F28: .long   0x00000000
    // embedded data

label_80003F2C:
    ctx->pc = 0x80003F2Cu;
    // 80003F2C: .long   0x00000000
    // embedded data

label_80003F30:
    ctx->pc = 0x80003F30u;
    // 80003F30: .long   0x00000000
    // embedded data

label_80003F34:
    ctx->pc = 0x80003F34u;
    // 80003F34: .long   0x00000000
    // embedded data

label_80003F38:
    ctx->pc = 0x80003F38u;
    // 80003F38: .long   0x00000000
    // embedded data

label_80003F3C:
    ctx->pc = 0x80003F3Cu;
    // 80003F3C: .long   0x00000000
    // embedded data

label_80003F40:
    ctx->pc = 0x80003F40u;
    // 80003F40: .long   0x00000000
    // embedded data

label_80003F44:
    ctx->pc = 0x80003F44u;
    // 80003F44: .long   0x00000000
    // embedded data

label_80003F48:
    ctx->pc = 0x80003F48u;
    // 80003F48: .long   0x00000000
    // embedded data

label_80003F4C:
    ctx->pc = 0x80003F4Cu;
    // 80003F4C: .long   0x00000000
    // embedded data

label_80003F50:
    ctx->pc = 0x80003F50u;
    // 80003F50: .long   0x00000000
    // embedded data

label_80003F54:
    ctx->pc = 0x80003F54u;
    // 80003F54: .long   0x00000000
    // embedded data

label_80003F58:
    ctx->pc = 0x80003F58u;
    // 80003F58: .long   0x00000000
    // embedded data

label_80003F5C:
    ctx->pc = 0x80003F5Cu;
    // 80003F5C: .long   0x00000000
    // embedded data

label_80003F60:
    ctx->pc = 0x80003F60u;
    // 80003F60: .long   0x00000000
    // embedded data

label_80003F64:
    ctx->pc = 0x80003F64u;
    // 80003F64: .long   0x00000000
    // embedded data

label_80003F68:
    ctx->pc = 0x80003F68u;
    // 80003F68: .long   0x00000000
    // embedded data

label_80003F6C:
    ctx->pc = 0x80003F6Cu;
    // 80003F6C: .long   0x00000000
    // embedded data

label_80003F70:
    ctx->pc = 0x80003F70u;
    // 80003F70: .long   0x00000000
    // embedded data

label_80003F74:
    ctx->pc = 0x80003F74u;
    // 80003F74: .long   0x00000000
    // embedded data

label_80003F78:
    ctx->pc = 0x80003F78u;
    // 80003F78: .long   0x00000000
    // embedded data

label_80003F7C:
    ctx->pc = 0x80003F7Cu;
    // 80003F7C: .long   0x00000000
    // embedded data

label_80003F80:
    ctx->pc = 0x80003F80u;
    // 80003F80: .long   0x00000000
    // embedded data

label_80003F84:
    ctx->pc = 0x80003F84u;
    // 80003F84: .long   0x00000000
    // embedded data

label_80003F88:
    ctx->pc = 0x80003F88u;
    // 80003F88: .long   0x00000000
    // embedded data

label_80003F8C:
    ctx->pc = 0x80003F8Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003F8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003F8Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003F90:
    ctx->pc = 0x80003F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003F90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003F90u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003F94:
    ctx->pc = 0x80003F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80003F94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003F94u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003F98:
    ctx->pc = 0x80003F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80003F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80003F98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003F9C:
    ctx->pc = 0x80003F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80003F9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003FA0:
    ctx->pc = 0x80003FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003FA0u)) return;
    // 80003FA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003FA4:
    ctx->pc = 0x80003FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003FA4u)) return;
    // 80003FA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003FA8:
    ctx->pc = 0x80003FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80003FA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003FAC:
    ctx->pc = 0x80003FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003FACu)) return;
    // 80003FAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003FB0:
    ctx->pc = 0x80003FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003FB0u)) return;
    // 80003FB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003FB4:
    ctx->pc = 0x80003FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80003FB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80003FB8:
    ctx->pc = 0x80003FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80003FB8u)) return;
    // 80003FB8: li      r3, 3328
    ctx->gpr[3] = (u32)(s32)(3328);

label_80003FBC:
    ctx->pc = 0x80003FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80003FBCu)) return;
    // 80003FBC: rfi
    ppc_rfi(ctx, 0x80003FBCu);
    return;

label_80003FC0:
    ctx->pc = 0x80003FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80003FC0: .long   0x00000000
    // embedded data

label_80003FC4:
    ctx->pc = 0x80003FC4u;
    // 80003FC4: .long   0x00000000
    // embedded data

label_80003FC8:
    ctx->pc = 0x80003FC8u;
    // 80003FC8: .long   0x00000000
    // embedded data

label_80003FCC:
    ctx->pc = 0x80003FCCu;
    // 80003FCC: .long   0x00000000
    // embedded data

label_80003FD0:
    ctx->pc = 0x80003FD0u;
    // 80003FD0: .long   0x00000000
    // embedded data

label_80003FD4:
    ctx->pc = 0x80003FD4u;
    // 80003FD4: .long   0x00000000
    // embedded data

label_80003FD8:
    ctx->pc = 0x80003FD8u;
    // 80003FD8: .long   0x00000000
    // embedded data

label_80003FDC:
    ctx->pc = 0x80003FDCu;
    // 80003FDC: .long   0x00000000
    // embedded data

label_80003FE0:
    ctx->pc = 0x80003FE0u;
    // 80003FE0: .long   0x00000000
    // embedded data

label_80003FE4:
    ctx->pc = 0x80003FE4u;
    // 80003FE4: .long   0x00000000
    // embedded data

label_80003FE8:
    ctx->pc = 0x80003FE8u;
    // 80003FE8: .long   0x00000000
    // embedded data

label_80003FEC:
    ctx->pc = 0x80003FECu;
    // 80003FEC: .long   0x00000000
    // embedded data

label_80003FF0:
    ctx->pc = 0x80003FF0u;
    // 80003FF0: .long   0x00000000
    // embedded data

label_80003FF4:
    ctx->pc = 0x80003FF4u;
    // 80003FF4: .long   0x00000000
    // embedded data

label_80003FF8:
    ctx->pc = 0x80003FF8u;
    // 80003FF8: .long   0x00000000
    // embedded data

label_80003FFC:
    ctx->pc = 0x80003FFCu;
    // 80003FFC: .long   0x00000000
    // embedded data

label_80004000:
    ctx->pc = 0x80004000u;
    // 80004000: .long   0x00000000
    // embedded data

label_80004004:
    ctx->pc = 0x80004004u;
    // 80004004: .long   0x00000000
    // embedded data

label_80004008:
    ctx->pc = 0x80004008u;
    // 80004008: .long   0x00000000
    // embedded data

label_8000400C:
    ctx->pc = 0x8000400Cu;
    // 8000400C: .long   0x00000000
    // embedded data

label_80004010:
    ctx->pc = 0x80004010u;
    // 80004010: .long   0x00000000
    // embedded data

label_80004014:
    ctx->pc = 0x80004014u;
    // 80004014: .long   0x00000000
    // embedded data

label_80004018:
    ctx->pc = 0x80004018u;
    // 80004018: .long   0x00000000
    // embedded data

label_8000401C:
    ctx->pc = 0x8000401Cu;
    // 8000401C: .long   0x00000000
    // embedded data

label_80004020:
    ctx->pc = 0x80004020u;
    // 80004020: .long   0x00000000
    // embedded data

label_80004024:
    ctx->pc = 0x80004024u;
    // 80004024: .long   0x00000000
    // embedded data

label_80004028:
    ctx->pc = 0x80004028u;
    // 80004028: .long   0x00000000
    // embedded data

label_8000402C:
    ctx->pc = 0x8000402Cu;
    // 8000402C: .long   0x00000000
    // embedded data

label_80004030:
    ctx->pc = 0x80004030u;
    // 80004030: .long   0x00000000
    // embedded data

label_80004034:
    ctx->pc = 0x80004034u;
    // 80004034: .long   0x00000000
    // embedded data

label_80004038:
    ctx->pc = 0x80004038u;
    // 80004038: .long   0x00000000
    // embedded data

label_8000403C:
    ctx->pc = 0x8000403Cu;
    // 8000403C: .long   0x00000000
    // embedded data

label_80004040:
    ctx->pc = 0x80004040u;
    // 80004040: .long   0x00000000
    // embedded data

label_80004044:
    ctx->pc = 0x80004044u;
    // 80004044: .long   0x00000000
    // embedded data

label_80004048:
    ctx->pc = 0x80004048u;
    // 80004048: .long   0x00000000
    // embedded data

label_8000404C:
    ctx->pc = 0x8000404Cu;
    // 8000404C: .long   0x00000000
    // embedded data

label_80004050:
    ctx->pc = 0x80004050u;
    // 80004050: .long   0x00000000
    // embedded data

label_80004054:
    ctx->pc = 0x80004054u;
    // 80004054: .long   0x00000000
    // embedded data

label_80004058:
    ctx->pc = 0x80004058u;
    // 80004058: .long   0x00000000
    // embedded data

label_8000405C:
    ctx->pc = 0x8000405Cu;
    // 8000405C: .long   0x00000000
    // embedded data

label_80004060:
    ctx->pc = 0x80004060u;
    // 80004060: .long   0x00000000
    // embedded data

label_80004064:
    ctx->pc = 0x80004064u;
    // 80004064: .long   0x00000000
    // embedded data

label_80004068:
    ctx->pc = 0x80004068u;
    // 80004068: .long   0x00000000
    // embedded data

label_8000406C:
    ctx->pc = 0x8000406Cu;
    // 8000406C: .long   0x00000000
    // embedded data

label_80004070:
    ctx->pc = 0x80004070u;
    // 80004070: .long   0x00000000
    // embedded data

label_80004074:
    ctx->pc = 0x80004074u;
    // 80004074: .long   0x00000000
    // embedded data

label_80004078:
    ctx->pc = 0x80004078u;
    // 80004078: .long   0x00000000
    // embedded data

label_8000407C:
    ctx->pc = 0x8000407Cu;
    // 8000407C: .long   0x00000000
    // embedded data

label_80004080:
    ctx->pc = 0x80004080u;
    // 80004080: .long   0x00000000
    // embedded data

label_80004084:
    ctx->pc = 0x80004084u;
    // 80004084: .long   0x00000000
    // embedded data

label_80004088:
    ctx->pc = 0x80004088u;
    // 80004088: .long   0x00000000
    // embedded data

label_8000408C:
    ctx->pc = 0x8000408Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000408C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000408Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004090:
    ctx->pc = 0x80004090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004090: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004090u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004094:
    ctx->pc = 0x80004094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004094: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004094u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004098:
    ctx->pc = 0x80004098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80004098: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000409C:
    ctx->pc = 0x8000409Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000409Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000409C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800040A0:
    ctx->pc = 0x800040A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800040A0u)) return;
    // 800040A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800040A4:
    ctx->pc = 0x800040A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800040A4u)) return;
    // 800040A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800040A8:
    ctx->pc = 0x800040A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800040A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800040A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800040AC:
    ctx->pc = 0x800040ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800040ACu)) return;
    // 800040AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800040B0:
    ctx->pc = 0x800040B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800040B0u)) return;
    // 800040B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800040B4:
    ctx->pc = 0x800040B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800040B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800040B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800040B8:
    ctx->pc = 0x800040B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800040B8u)) return;
    // 800040B8: li      r3, 3584
    ctx->gpr[3] = (u32)(s32)(3584);

label_800040BC:
    ctx->pc = 0x800040BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800040BCu)) return;
    // 800040BC: rfi
    ppc_rfi(ctx, 0x800040BCu);
    return;

label_800040C0:
    ctx->pc = 0x800040C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800040C0: .long   0x00000000
    // embedded data

label_800040C4:
    ctx->pc = 0x800040C4u;
    // 800040C4: .long   0x00000000
    // embedded data

label_800040C8:
    ctx->pc = 0x800040C8u;
    // 800040C8: .long   0x00000000
    // embedded data

label_800040CC:
    ctx->pc = 0x800040CCu;
    // 800040CC: .long   0x00000000
    // embedded data

label_800040D0:
    ctx->pc = 0x800040D0u;
    // 800040D0: .long   0x00000000
    // embedded data

label_800040D4:
    ctx->pc = 0x800040D4u;
    // 800040D4: .long   0x00000000
    // embedded data

label_800040D8:
    ctx->pc = 0x800040D8u;
    // 800040D8: .long   0x00000000
    // embedded data

label_800040DC:
    ctx->pc = 0x800040DCu;
    // 800040DC: .long   0x00000000
    // embedded data

label_800040E0:
    ctx->pc = 0x800040E0u;
    // 800040E0: .long   0x00000000
    // embedded data

label_800040E4:
    ctx->pc = 0x800040E4u;
    // 800040E4: .long   0x00000000
    // embedded data

label_800040E8:
    ctx->pc = 0x800040E8u;
    // 800040E8: .long   0x00000000
    // embedded data

label_800040EC:
    ctx->pc = 0x800040ECu;
    // 800040EC: .long   0x00000000
    // embedded data

label_800040F0:
    ctx->pc = 0x800040F0u;
    // 800040F0: .long   0x00000000
    // embedded data

label_800040F4:
    ctx->pc = 0x800040F4u;
    // 800040F4: .long   0x00000000
    // embedded data

label_800040F8:
    ctx->pc = 0x800040F8u;
    // 800040F8: .long   0x00000000
    // embedded data

label_800040FC:
    ctx->pc = 0x800040FCu;
    // 800040FC: .long   0x00000000
    // embedded data

label_80004100:
    ctx->pc = 0x80004100u;
    // 80004100: .long   0x00000000
    // embedded data

label_80004104:
    ctx->pc = 0x80004104u;
    // 80004104: .long   0x00000000
    // embedded data

label_80004108:
    ctx->pc = 0x80004108u;
    // 80004108: .long   0x00000000
    // embedded data

label_8000410C:
    ctx->pc = 0x8000410Cu;
    // 8000410C: .long   0x00000000
    // embedded data

label_80004110:
    ctx->pc = 0x80004110u;
    // 80004110: .long   0x00000000
    // embedded data

label_80004114:
    ctx->pc = 0x80004114u;
    // 80004114: .long   0x00000000
    // embedded data

label_80004118:
    ctx->pc = 0x80004118u;
    // 80004118: .long   0x00000000
    // embedded data

label_8000411C:
    ctx->pc = 0x8000411Cu;
    // 8000411C: .long   0x00000000
    // embedded data

label_80004120:
    ctx->pc = 0x80004120u;
    // 80004120: .long   0x00000000
    // embedded data

label_80004124:
    ctx->pc = 0x80004124u;
    // 80004124: .long   0x00000000
    // embedded data

label_80004128:
    ctx->pc = 0x80004128u;
    // 80004128: .long   0x00000000
    // embedded data

label_8000412C:
    ctx->pc = 0x8000412Cu;
    // 8000412C: .long   0x00000000
    // embedded data

label_80004130:
    ctx->pc = 0x80004130u;
    // 80004130: .long   0x00000000
    // embedded data

label_80004134:
    ctx->pc = 0x80004134u;
    // 80004134: .long   0x00000000
    // embedded data

label_80004138:
    ctx->pc = 0x80004138u;
    // 80004138: .long   0x00000000
    // embedded data

label_8000413C:
    ctx->pc = 0x8000413Cu;
    // 8000413C: .long   0x00000000
    // embedded data

label_80004140:
    ctx->pc = 0x80004140u;
    // 80004140: .long   0x00000000
    // embedded data

label_80004144:
    ctx->pc = 0x80004144u;
    // 80004144: .long   0x00000000
    // embedded data

label_80004148:
    ctx->pc = 0x80004148u;
    // 80004148: .long   0x00000000
    // embedded data

label_8000414C:
    ctx->pc = 0x8000414Cu;
    // 8000414C: .long   0x00000000
    // embedded data

label_80004150:
    ctx->pc = 0x80004150u;
    // 80004150: .long   0x00000000
    // embedded data

label_80004154:
    ctx->pc = 0x80004154u;
    // 80004154: .long   0x00000000
    // embedded data

label_80004158:
    ctx->pc = 0x80004158u;
    // 80004158: .long   0x00000000
    // embedded data

label_8000415C:
    ctx->pc = 0x8000415Cu;
    // 8000415C: .long   0x00000000
    // embedded data

label_80004160:
    ctx->pc = 0x80004160u;
    // 80004160: .long   0x00000000
    // embedded data

label_80004164:
    ctx->pc = 0x80004164u;
    // 80004164: .long   0x00000000
    // embedded data

label_80004168:
    ctx->pc = 0x80004168u;
    // 80004168: .long   0x00000000
    // embedded data

label_8000416C:
    ctx->pc = 0x8000416Cu;
    // 8000416C: .long   0x00000000
    // embedded data

label_80004170:
    ctx->pc = 0x80004170u;
    // 80004170: .long   0x00000000
    // embedded data

label_80004174:
    ctx->pc = 0x80004174u;
    // 80004174: .long   0x00000000
    // embedded data

label_80004178:
    ctx->pc = 0x80004178u;
    // 80004178: .long   0x00000000
    // embedded data

label_8000417C:
    ctx->pc = 0x8000417Cu;
    // 8000417C: .long   0x00000000
    // embedded data

label_80004180:
    ctx->pc = 0x80004180u;
    // 80004180: .long   0x00000000
    // embedded data

label_80004184:
    ctx->pc = 0x80004184u;
    // 80004184: .long   0x00000000
    // embedded data

label_80004188:
    ctx->pc = 0x80004188u;
    // 80004188: .long   0x00000000
    // embedded data

label_8000418C:
    ctx->pc = 0x8000418Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000418Cu)) return;
    // 8000418C: b       0x800041E0
    {
            goto label_800041E0;
    }

label_80004190:
    ctx->pc = 0x80004190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80004190: .long   0x00000000
    // embedded data

label_80004194:
    ctx->pc = 0x80004194u;
    // 80004194: .long   0x00000000
    // embedded data

label_80004198:
    ctx->pc = 0x80004198u;
    // 80004198: .long   0x00000000
    // embedded data

label_8000419C:
    ctx->pc = 0x8000419Cu;
    // 8000419C: .long   0x00000000
    // embedded data

label_800041A0:
    ctx->pc = 0x800041A0u;
    // 800041A0: .long   0x00000000
    // embedded data

label_800041A4:
    ctx->pc = 0x800041A4u;
    // 800041A4: .long   0x00000000
    // embedded data

label_800041A8:
    ctx->pc = 0x800041A8u;
    // 800041A8: .long   0x00000000
    // embedded data

label_800041AC:
    ctx->pc = 0x800041ACu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800041AC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800041ACu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041B0:
    ctx->pc = 0x800041B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800041B0: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800041B0u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041B4:
    ctx->pc = 0x800041B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800041B4: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800041B4u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041B8:
    ctx->pc = 0x800041B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800041B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 800041B8: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041BC:
    ctx->pc = 0x800041BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 800041BC: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041C0:
    ctx->pc = 0x800041C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041C0u)) return;
    // 800041C0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800041C4:
    ctx->pc = 0x800041C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041C4u)) return;
    // 800041C4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800041C8:
    ctx->pc = 0x800041C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800041C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800041C8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041CC:
    ctx->pc = 0x800041CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041CCu)) return;
    // 800041CC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800041D0:
    ctx->pc = 0x800041D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041D0u)) return;
    // 800041D0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800041D4:
    ctx->pc = 0x800041D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800041D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800041D4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041D8:
    ctx->pc = 0x800041D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041D8u)) return;
    // 800041D8: li      r3, 3872
    ctx->gpr[3] = (u32)(s32)(3872);

label_800041DC:
    ctx->pc = 0x800041DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800041DCu)) return;
    // 800041DC: rfi
    ppc_rfi(ctx, 0x800041DCu);
    return;

label_800041E0:
    ctx->pc = 0x800041E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800041E0: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800041E0u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041E4:
    ctx->pc = 0x800041E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800041E4: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800041E4u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041E8:
    ctx->pc = 0x800041E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800041E8: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800041E8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041EC:
    ctx->pc = 0x800041ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800041ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 800041EC: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041F0:
    ctx->pc = 0x800041F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 800041F0: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800041F4:
    ctx->pc = 0x800041F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041F4u)) return;
    // 800041F4: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800041F8:
    ctx->pc = 0x800041F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800041F8u)) return;
    // 800041F8: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800041FC:
    ctx->pc = 0x800041FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800041FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800041FC: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004200:
    ctx->pc = 0x80004200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004200u)) return;
    // 80004200: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004204:
    ctx->pc = 0x80004204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004204u)) return;
    // 80004204: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80004208:
    ctx->pc = 0x80004208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80004208: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000420C:
    ctx->pc = 0x8000420Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000420Cu)) return;
    // 8000420C: li      r3, 3840
    ctx->gpr[3] = (u32)(s32)(3840);

label_80004210:
    ctx->pc = 0x80004210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004210u)) return;
    // 80004210: rfi
    ppc_rfi(ctx, 0x80004210u);
    return;

label_80004214:
    ctx->pc = 0x80004214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80004214: .long   0x00000000
    // embedded data

label_80004218:
    ctx->pc = 0x80004218u;
    // 80004218: .long   0x00000000
    // embedded data

label_8000421C:
    ctx->pc = 0x8000421Cu;
    // 8000421C: .long   0x00000000
    // embedded data

label_80004220:
    ctx->pc = 0x80004220u;
    // 80004220: .long   0x00000000
    // embedded data

label_80004224:
    ctx->pc = 0x80004224u;
    // 80004224: .long   0x00000000
    // embedded data

label_80004228:
    ctx->pc = 0x80004228u;
    // 80004228: .long   0x00000000
    // embedded data

label_8000422C:
    ctx->pc = 0x8000422Cu;
    // 8000422C: .long   0x00000000
    // embedded data

label_80004230:
    ctx->pc = 0x80004230u;
    // 80004230: .long   0x00000000
    // embedded data

label_80004234:
    ctx->pc = 0x80004234u;
    // 80004234: .long   0x00000000
    // embedded data

label_80004238:
    ctx->pc = 0x80004238u;
    // 80004238: .long   0x00000000
    // embedded data

label_8000423C:
    ctx->pc = 0x8000423Cu;
    // 8000423C: .long   0x00000000
    // embedded data

label_80004240:
    ctx->pc = 0x80004240u;
    // 80004240: .long   0x00000000
    // embedded data

label_80004244:
    ctx->pc = 0x80004244u;
    // 80004244: .long   0x00000000
    // embedded data

label_80004248:
    ctx->pc = 0x80004248u;
    // 80004248: .long   0x00000000
    // embedded data

label_8000424C:
    ctx->pc = 0x8000424Cu;
    // 8000424C: .long   0x00000000
    // embedded data

label_80004250:
    ctx->pc = 0x80004250u;
    // 80004250: .long   0x00000000
    // embedded data

label_80004254:
    ctx->pc = 0x80004254u;
    // 80004254: .long   0x00000000
    // embedded data

label_80004258:
    ctx->pc = 0x80004258u;
    // 80004258: .long   0x00000000
    // embedded data

label_8000425C:
    ctx->pc = 0x8000425Cu;
    // 8000425C: .long   0x00000000
    // embedded data

label_80004260:
    ctx->pc = 0x80004260u;
    // 80004260: .long   0x00000000
    // embedded data

label_80004264:
    ctx->pc = 0x80004264u;
    // 80004264: .long   0x00000000
    // embedded data

label_80004268:
    ctx->pc = 0x80004268u;
    // 80004268: .long   0x00000000
    // embedded data

label_8000426C:
    ctx->pc = 0x8000426Cu;
    // 8000426C: .long   0x00000000
    // embedded data

label_80004270:
    ctx->pc = 0x80004270u;
    // 80004270: .long   0x00000000
    // embedded data

label_80004274:
    ctx->pc = 0x80004274u;
    // 80004274: .long   0x00000000
    // embedded data

label_80004278:
    ctx->pc = 0x80004278u;
    // 80004278: .long   0x00000000
    // embedded data

label_8000427C:
    ctx->pc = 0x8000427Cu;
    // 8000427C: .long   0x00000000
    // embedded data

label_80004280:
    ctx->pc = 0x80004280u;
    // 80004280: .long   0x00000000
    // embedded data

label_80004284:
    ctx->pc = 0x80004284u;
    // 80004284: .long   0x00000000
    // embedded data

label_80004288:
    ctx->pc = 0x80004288u;
    // 80004288: .long   0x00000000
    // embedded data

label_8000428C:
    ctx->pc = 0x8000428Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000428C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000428Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004290:
    ctx->pc = 0x80004290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80004290: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80004294:
    ctx->pc = 0x80004294u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004294: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80004294u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004298:
    ctx->pc = 0x80004298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80004298: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000429C:
    ctx->pc = 0x8000429Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000429Cu)) return;
    // 8000429C: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800042A0:
    ctx->pc = 0x800042A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042A0u)) return;
    // 800042A0: bc    12, 2, 0x800042BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800042BC;
        }
    }

label_800042A4:
    ctx->pc = 0x800042A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800042A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 800042A4: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_800042A8:
    ctx->pc = 0x800042A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042A8u)) return;
    // 800042A8: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800042AC:
    ctx->pc = 0x800042ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x800042ACu)) return;
    // 800042AC: sync
    ppc_memory_fence();

label_800042B0:
    ctx->pc = 0x800042B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042B0u)) return;
    // 800042B0: mtmsr   r2
    ctx->msr = ctx->gpr[2];
    ctx->pc = 0x800042B4u;
    return;

label_800042B4:
    ctx->pc = 0x800042B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800042B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 3u;
    // 800042B4: sync
    ppc_memory_fence();

label_800042B8:
    ctx->pc = 0x800042B8u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800042B8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800042B8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042BC:
    ctx->pc = 0x800042BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800042BC: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800042BCu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042C0:
    ctx->pc = 0x800042C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800042C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800042C0: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800042C4:
    ctx->pc = 0x800042C4u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800042C4: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800042C4u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042C8:
    ctx->pc = 0x800042C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800042C8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800042C8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042CC:
    ctx->pc = 0x800042CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800042CC: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800042CCu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042D0:
    ctx->pc = 0x800042D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800042D0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800042D0u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042D4:
    ctx->pc = 0x800042D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800042D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 800042D4: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042D8:
    ctx->pc = 0x800042D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 800042D8: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042DC:
    ctx->pc = 0x800042DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042DCu)) return;
    // 800042DC: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800042E0:
    ctx->pc = 0x800042E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042E0u)) return;
    // 800042E0: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800042E4:
    ctx->pc = 0x800042E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800042E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800042E4: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042E8:
    ctx->pc = 0x800042E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042E8u)) return;
    // 800042E8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800042EC:
    ctx->pc = 0x800042ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042ECu)) return;
    // 800042EC: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800042F0:
    ctx->pc = 0x800042F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800042F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800042F0: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800042F4:
    ctx->pc = 0x800042F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800042F4u)) return;
    // 800042F4: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_800042F8:
    ctx->pc = 0x800042F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800042F8u)) return;
    // 800042F8: rfi
    ppc_rfi(ctx, 0x800042F8u);
    return;

label_800042FC:
    ctx->pc = 0x800042FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800042FC: .long   0x00000000
    // embedded data

label_80004300:
    ctx->pc = 0x80004300u;
    // 80004300: .long   0x00000000
    // embedded data

label_80004304:
    ctx->pc = 0x80004304u;
    // 80004304: .long   0x00000000
    // embedded data

label_80004308:
    ctx->pc = 0x80004308u;
    // 80004308: .long   0x00000000
    // embedded data

label_8000430C:
    ctx->pc = 0x8000430Cu;
    // 8000430C: .long   0x00000000
    // embedded data

label_80004310:
    ctx->pc = 0x80004310u;
    // 80004310: .long   0x00000000
    // embedded data

label_80004314:
    ctx->pc = 0x80004314u;
    // 80004314: .long   0x00000000
    // embedded data

label_80004318:
    ctx->pc = 0x80004318u;
    // 80004318: .long   0x00000000
    // embedded data

label_8000431C:
    ctx->pc = 0x8000431Cu;
    // 8000431C: .long   0x00000000
    // embedded data

label_80004320:
    ctx->pc = 0x80004320u;
    // 80004320: .long   0x00000000
    // embedded data

label_80004324:
    ctx->pc = 0x80004324u;
    // 80004324: .long   0x00000000
    // embedded data

label_80004328:
    ctx->pc = 0x80004328u;
    // 80004328: .long   0x00000000
    // embedded data

label_8000432C:
    ctx->pc = 0x8000432Cu;
    // 8000432C: .long   0x00000000
    // embedded data

label_80004330:
    ctx->pc = 0x80004330u;
    // 80004330: .long   0x00000000
    // embedded data

label_80004334:
    ctx->pc = 0x80004334u;
    // 80004334: .long   0x00000000
    // embedded data

label_80004338:
    ctx->pc = 0x80004338u;
    // 80004338: .long   0x00000000
    // embedded data

label_8000433C:
    ctx->pc = 0x8000433Cu;
    // 8000433C: .long   0x00000000
    // embedded data

label_80004340:
    ctx->pc = 0x80004340u;
    // 80004340: .long   0x00000000
    // embedded data

label_80004344:
    ctx->pc = 0x80004344u;
    // 80004344: .long   0x00000000
    // embedded data

label_80004348:
    ctx->pc = 0x80004348u;
    // 80004348: .long   0x00000000
    // embedded data

label_8000434C:
    ctx->pc = 0x8000434Cu;
    // 8000434C: .long   0x00000000
    // embedded data

label_80004350:
    ctx->pc = 0x80004350u;
    // 80004350: .long   0x00000000
    // embedded data

label_80004354:
    ctx->pc = 0x80004354u;
    // 80004354: .long   0x00000000
    // embedded data

label_80004358:
    ctx->pc = 0x80004358u;
    // 80004358: .long   0x00000000
    // embedded data

label_8000435C:
    ctx->pc = 0x8000435Cu;
    // 8000435C: .long   0x00000000
    // embedded data

label_80004360:
    ctx->pc = 0x80004360u;
    // 80004360: .long   0x00000000
    // embedded data

label_80004364:
    ctx->pc = 0x80004364u;
    // 80004364: .long   0x00000000
    // embedded data

label_80004368:
    ctx->pc = 0x80004368u;
    // 80004368: .long   0x00000000
    // embedded data

label_8000436C:
    ctx->pc = 0x8000436Cu;
    // 8000436C: .long   0x00000000
    // embedded data

label_80004370:
    ctx->pc = 0x80004370u;
    // 80004370: .long   0x00000000
    // embedded data

label_80004374:
    ctx->pc = 0x80004374u;
    // 80004374: .long   0x00000000
    // embedded data

label_80004378:
    ctx->pc = 0x80004378u;
    // 80004378: .long   0x00000000
    // embedded data

label_8000437C:
    ctx->pc = 0x8000437Cu;
    // 8000437C: .long   0x00000000
    // embedded data

label_80004380:
    ctx->pc = 0x80004380u;
    // 80004380: .long   0x00000000
    // embedded data

label_80004384:
    ctx->pc = 0x80004384u;
    // 80004384: .long   0x00000000
    // embedded data

label_80004388:
    ctx->pc = 0x80004388u;
    // 80004388: .long   0x00000000
    // embedded data

label_8000438C:
    ctx->pc = 0x8000438Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000438C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000438Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004390:
    ctx->pc = 0x80004390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80004390: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80004394:
    ctx->pc = 0x80004394u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004394: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80004394u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004398:
    ctx->pc = 0x80004398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80004398: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000439C:
    ctx->pc = 0x8000439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000439Cu)) return;
    // 8000439C: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800043A0:
    ctx->pc = 0x800043A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043A0u)) return;
    // 800043A0: bc    12, 2, 0x800043BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800043BC;
        }
    }

label_800043A4:
    ctx->pc = 0x800043A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800043A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 800043A4: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_800043A8:
    ctx->pc = 0x800043A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043A8u)) return;
    // 800043A8: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800043AC:
    ctx->pc = 0x800043ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x800043ACu)) return;
    // 800043AC: sync
    ppc_memory_fence();

label_800043B0:
    ctx->pc = 0x800043B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043B0u)) return;
    // 800043B0: mtmsr   r2
    ctx->msr = ctx->gpr[2];
    ctx->pc = 0x800043B4u;
    return;

label_800043B4:
    ctx->pc = 0x800043B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800043B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 3u;
    // 800043B4: sync
    ppc_memory_fence();

label_800043B8:
    ctx->pc = 0x800043B8u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800043B8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800043B8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043BC:
    ctx->pc = 0x800043BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800043BC: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800043BCu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043C0:
    ctx->pc = 0x800043C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800043C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800043C0: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800043C4:
    ctx->pc = 0x800043C4u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800043C4: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800043C4u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043C8:
    ctx->pc = 0x800043C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800043C8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800043C8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043CC:
    ctx->pc = 0x800043CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800043CC: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800043CCu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043D0:
    ctx->pc = 0x800043D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800043D0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800043D0u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043D4:
    ctx->pc = 0x800043D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800043D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 800043D4: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043D8:
    ctx->pc = 0x800043D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 800043D8: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043DC:
    ctx->pc = 0x800043DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043DCu)) return;
    // 800043DC: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800043E0:
    ctx->pc = 0x800043E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043E0u)) return;
    // 800043E0: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800043E4:
    ctx->pc = 0x800043E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800043E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800043E4: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043E8:
    ctx->pc = 0x800043E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043E8u)) return;
    // 800043E8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800043EC:
    ctx->pc = 0x800043ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043ECu)) return;
    // 800043EC: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800043F0:
    ctx->pc = 0x800043F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800043F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800043F0: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800043F4:
    ctx->pc = 0x800043F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800043F4u)) return;
    // 800043F4: li      r3, 4352
    ctx->gpr[3] = (u32)(s32)(4352);

label_800043F8:
    ctx->pc = 0x800043F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800043F8u)) return;
    // 800043F8: rfi
    ppc_rfi(ctx, 0x800043F8u);
    return;

label_800043FC:
    ctx->pc = 0x800043FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800043FC: .long   0x00000000
    // embedded data

label_80004400:
    ctx->pc = 0x80004400u;
    // 80004400: .long   0x00000000
    // embedded data

label_80004404:
    ctx->pc = 0x80004404u;
    // 80004404: .long   0x00000000
    // embedded data

label_80004408:
    ctx->pc = 0x80004408u;
    // 80004408: .long   0x00000000
    // embedded data

label_8000440C:
    ctx->pc = 0x8000440Cu;
    // 8000440C: .long   0x00000000
    // embedded data

label_80004410:
    ctx->pc = 0x80004410u;
    // 80004410: .long   0x00000000
    // embedded data

label_80004414:
    ctx->pc = 0x80004414u;
    // 80004414: .long   0x00000000
    // embedded data

label_80004418:
    ctx->pc = 0x80004418u;
    // 80004418: .long   0x00000000
    // embedded data

label_8000441C:
    ctx->pc = 0x8000441Cu;
    // 8000441C: .long   0x00000000
    // embedded data

label_80004420:
    ctx->pc = 0x80004420u;
    // 80004420: .long   0x00000000
    // embedded data

label_80004424:
    ctx->pc = 0x80004424u;
    // 80004424: .long   0x00000000
    // embedded data

label_80004428:
    ctx->pc = 0x80004428u;
    // 80004428: .long   0x00000000
    // embedded data

label_8000442C:
    ctx->pc = 0x8000442Cu;
    // 8000442C: .long   0x00000000
    // embedded data

label_80004430:
    ctx->pc = 0x80004430u;
    // 80004430: .long   0x00000000
    // embedded data

label_80004434:
    ctx->pc = 0x80004434u;
    // 80004434: .long   0x00000000
    // embedded data

label_80004438:
    ctx->pc = 0x80004438u;
    // 80004438: .long   0x00000000
    // embedded data

label_8000443C:
    ctx->pc = 0x8000443Cu;
    // 8000443C: .long   0x00000000
    // embedded data

label_80004440:
    ctx->pc = 0x80004440u;
    // 80004440: .long   0x00000000
    // embedded data

label_80004444:
    ctx->pc = 0x80004444u;
    // 80004444: .long   0x00000000
    // embedded data

label_80004448:
    ctx->pc = 0x80004448u;
    // 80004448: .long   0x00000000
    // embedded data

label_8000444C:
    ctx->pc = 0x8000444Cu;
    // 8000444C: .long   0x00000000
    // embedded data

label_80004450:
    ctx->pc = 0x80004450u;
    // 80004450: .long   0x00000000
    // embedded data

label_80004454:
    ctx->pc = 0x80004454u;
    // 80004454: .long   0x00000000
    // embedded data

label_80004458:
    ctx->pc = 0x80004458u;
    // 80004458: .long   0x00000000
    // embedded data

label_8000445C:
    ctx->pc = 0x8000445Cu;
    // 8000445C: .long   0x00000000
    // embedded data

label_80004460:
    ctx->pc = 0x80004460u;
    // 80004460: .long   0x00000000
    // embedded data

label_80004464:
    ctx->pc = 0x80004464u;
    // 80004464: .long   0x00000000
    // embedded data

label_80004468:
    ctx->pc = 0x80004468u;
    // 80004468: .long   0x00000000
    // embedded data

label_8000446C:
    ctx->pc = 0x8000446Cu;
    // 8000446C: .long   0x00000000
    // embedded data

label_80004470:
    ctx->pc = 0x80004470u;
    // 80004470: .long   0x00000000
    // embedded data

label_80004474:
    ctx->pc = 0x80004474u;
    // 80004474: .long   0x00000000
    // embedded data

label_80004478:
    ctx->pc = 0x80004478u;
    // 80004478: .long   0x00000000
    // embedded data

label_8000447C:
    ctx->pc = 0x8000447Cu;
    // 8000447C: .long   0x00000000
    // embedded data

label_80004480:
    ctx->pc = 0x80004480u;
    // 80004480: .long   0x00000000
    // embedded data

label_80004484:
    ctx->pc = 0x80004484u;
    // 80004484: .long   0x00000000
    // embedded data

label_80004488:
    ctx->pc = 0x80004488u;
    // 80004488: .long   0x00000000
    // embedded data

label_8000448C:
    ctx->pc = 0x8000448Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000448C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000448Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004490:
    ctx->pc = 0x80004490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80004490: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80004494:
    ctx->pc = 0x80004494u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004494: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80004494u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004498:
    ctx->pc = 0x80004498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80004498: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000449C:
    ctx->pc = 0x8000449Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000449Cu)) return;
    // 8000449C: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800044A0:
    ctx->pc = 0x800044A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044A0u)) return;
    // 800044A0: bc    12, 2, 0x800044BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800044BC;
        }
    }

label_800044A4:
    ctx->pc = 0x800044A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800044A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 800044A4: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_800044A8:
    ctx->pc = 0x800044A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044A8u)) return;
    // 800044A8: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800044AC:
    ctx->pc = 0x800044ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x800044ACu)) return;
    // 800044AC: sync
    ppc_memory_fence();

label_800044B0:
    ctx->pc = 0x800044B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044B0u)) return;
    // 800044B0: mtmsr   r2
    ctx->msr = ctx->gpr[2];
    ctx->pc = 0x800044B4u;
    return;

label_800044B4:
    ctx->pc = 0x800044B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800044B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 3u;
    // 800044B4: sync
    ppc_memory_fence();

label_800044B8:
    ctx->pc = 0x800044B8u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800044B8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800044B8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044BC:
    ctx->pc = 0x800044BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800044BC: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800044BCu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044C0:
    ctx->pc = 0x800044C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800044C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800044C0: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800044C4:
    ctx->pc = 0x800044C4u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800044C4: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800044C4u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044C8:
    ctx->pc = 0x800044C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800044C8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800044C8u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044CC:
    ctx->pc = 0x800044CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800044CC: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800044CCu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044D0:
    ctx->pc = 0x800044D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800044D0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800044D0u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044D4:
    ctx->pc = 0x800044D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800044D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 800044D4: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044D8:
    ctx->pc = 0x800044D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 800044D8: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044DC:
    ctx->pc = 0x800044DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044DCu)) return;
    // 800044DC: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800044E0:
    ctx->pc = 0x800044E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044E0u)) return;
    // 800044E0: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800044E4:
    ctx->pc = 0x800044E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800044E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800044E4: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044E8:
    ctx->pc = 0x800044E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044E8u)) return;
    // 800044E8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800044EC:
    ctx->pc = 0x800044ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044ECu)) return;
    // 800044EC: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800044F0:
    ctx->pc = 0x800044F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800044F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800044F0: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800044F4:
    ctx->pc = 0x800044F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800044F4u)) return;
    // 800044F4: li      r3, 4608
    ctx->gpr[3] = (u32)(s32)(4608);

label_800044F8:
    ctx->pc = 0x800044F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800044F8u)) return;
    // 800044F8: rfi
    ppc_rfi(ctx, 0x800044F8u);
    return;

label_800044FC:
    ctx->pc = 0x800044FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800044FC: .long   0x00000000
    // embedded data

label_80004500:
    ctx->pc = 0x80004500u;
    // 80004500: .long   0x00000000
    // embedded data

label_80004504:
    ctx->pc = 0x80004504u;
    // 80004504: .long   0x00000000
    // embedded data

label_80004508:
    ctx->pc = 0x80004508u;
    // 80004508: .long   0x00000000
    // embedded data

label_8000450C:
    ctx->pc = 0x8000450Cu;
    // 8000450C: .long   0x00000000
    // embedded data

label_80004510:
    ctx->pc = 0x80004510u;
    // 80004510: .long   0x00000000
    // embedded data

label_80004514:
    ctx->pc = 0x80004514u;
    // 80004514: .long   0x00000000
    // embedded data

label_80004518:
    ctx->pc = 0x80004518u;
    // 80004518: .long   0x00000000
    // embedded data

label_8000451C:
    ctx->pc = 0x8000451Cu;
    // 8000451C: .long   0x00000000
    // embedded data

label_80004520:
    ctx->pc = 0x80004520u;
    // 80004520: .long   0x00000000
    // embedded data

label_80004524:
    ctx->pc = 0x80004524u;
    // 80004524: .long   0x00000000
    // embedded data

label_80004528:
    ctx->pc = 0x80004528u;
    // 80004528: .long   0x00000000
    // embedded data

label_8000452C:
    ctx->pc = 0x8000452Cu;
    // 8000452C: .long   0x00000000
    // embedded data

label_80004530:
    ctx->pc = 0x80004530u;
    // 80004530: .long   0x00000000
    // embedded data

label_80004534:
    ctx->pc = 0x80004534u;
    // 80004534: .long   0x00000000
    // embedded data

label_80004538:
    ctx->pc = 0x80004538u;
    // 80004538: .long   0x00000000
    // embedded data

label_8000453C:
    ctx->pc = 0x8000453Cu;
    // 8000453C: .long   0x00000000
    // embedded data

label_80004540:
    ctx->pc = 0x80004540u;
    // 80004540: .long   0x00000000
    // embedded data

label_80004544:
    ctx->pc = 0x80004544u;
    // 80004544: .long   0x00000000
    // embedded data

label_80004548:
    ctx->pc = 0x80004548u;
    // 80004548: .long   0x00000000
    // embedded data

label_8000454C:
    ctx->pc = 0x8000454Cu;
    // 8000454C: .long   0x00000000
    // embedded data

label_80004550:
    ctx->pc = 0x80004550u;
    // 80004550: .long   0x00000000
    // embedded data

label_80004554:
    ctx->pc = 0x80004554u;
    // 80004554: .long   0x00000000
    // embedded data

label_80004558:
    ctx->pc = 0x80004558u;
    // 80004558: .long   0x00000000
    // embedded data

label_8000455C:
    ctx->pc = 0x8000455Cu;
    // 8000455C: .long   0x00000000
    // embedded data

label_80004560:
    ctx->pc = 0x80004560u;
    // 80004560: .long   0x00000000
    // embedded data

label_80004564:
    ctx->pc = 0x80004564u;
    // 80004564: .long   0x00000000
    // embedded data

label_80004568:
    ctx->pc = 0x80004568u;
    // 80004568: .long   0x00000000
    // embedded data

label_8000456C:
    ctx->pc = 0x8000456Cu;
    // 8000456C: .long   0x00000000
    // embedded data

label_80004570:
    ctx->pc = 0x80004570u;
    // 80004570: .long   0x00000000
    // embedded data

label_80004574:
    ctx->pc = 0x80004574u;
    // 80004574: .long   0x00000000
    // embedded data

label_80004578:
    ctx->pc = 0x80004578u;
    // 80004578: .long   0x00000000
    // embedded data

label_8000457C:
    ctx->pc = 0x8000457Cu;
    // 8000457C: .long   0x00000000
    // embedded data

label_80004580:
    ctx->pc = 0x80004580u;
    // 80004580: .long   0x00000000
    // embedded data

label_80004584:
    ctx->pc = 0x80004584u;
    // 80004584: .long   0x00000000
    // embedded data

label_80004588:
    ctx->pc = 0x80004588u;
    // 80004588: .long   0x00000000
    // embedded data

label_8000458C:
    ctx->pc = 0x8000458Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000458C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000458Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004590:
    ctx->pc = 0x80004590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004590: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004590u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004594:
    ctx->pc = 0x80004594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004594: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004594u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004598:
    ctx->pc = 0x80004598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80004598: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000459C:
    ctx->pc = 0x8000459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000459Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000459C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800045A0:
    ctx->pc = 0x800045A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800045A0u)) return;
    // 800045A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800045A4:
    ctx->pc = 0x800045A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800045A4u)) return;
    // 800045A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800045A8:
    ctx->pc = 0x800045A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800045A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800045A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800045AC:
    ctx->pc = 0x800045ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800045ACu)) return;
    // 800045AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800045B0:
    ctx->pc = 0x800045B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800045B0u)) return;
    // 800045B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800045B4:
    ctx->pc = 0x800045B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800045B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800045B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800045B8:
    ctx->pc = 0x800045B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800045B8u)) return;
    // 800045B8: li      r3, 4864
    ctx->gpr[3] = (u32)(s32)(4864);

label_800045BC:
    ctx->pc = 0x800045BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800045BCu)) return;
    // 800045BC: rfi
    ppc_rfi(ctx, 0x800045BCu);
    return;

label_800045C0:
    ctx->pc = 0x800045C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800045C0: .long   0x00000000
    // embedded data

label_800045C4:
    ctx->pc = 0x800045C4u;
    // 800045C4: .long   0x00000000
    // embedded data

label_800045C8:
    ctx->pc = 0x800045C8u;
    // 800045C8: .long   0x00000000
    // embedded data

label_800045CC:
    ctx->pc = 0x800045CCu;
    // 800045CC: .long   0x00000000
    // embedded data

label_800045D0:
    ctx->pc = 0x800045D0u;
    // 800045D0: .long   0x00000000
    // embedded data

label_800045D4:
    ctx->pc = 0x800045D4u;
    // 800045D4: .long   0x00000000
    // embedded data

label_800045D8:
    ctx->pc = 0x800045D8u;
    // 800045D8: .long   0x00000000
    // embedded data

label_800045DC:
    ctx->pc = 0x800045DCu;
    // 800045DC: .long   0x00000000
    // embedded data

label_800045E0:
    ctx->pc = 0x800045E0u;
    // 800045E0: .long   0x00000000
    // embedded data

label_800045E4:
    ctx->pc = 0x800045E4u;
    // 800045E4: .long   0x00000000
    // embedded data

label_800045E8:
    ctx->pc = 0x800045E8u;
    // 800045E8: .long   0x00000000
    // embedded data

label_800045EC:
    ctx->pc = 0x800045ECu;
    // 800045EC: .long   0x00000000
    // embedded data

label_800045F0:
    ctx->pc = 0x800045F0u;
    // 800045F0: .long   0x00000000
    // embedded data

label_800045F4:
    ctx->pc = 0x800045F4u;
    // 800045F4: .long   0x00000000
    // embedded data

label_800045F8:
    ctx->pc = 0x800045F8u;
    // 800045F8: .long   0x00000000
    // embedded data

label_800045FC:
    ctx->pc = 0x800045FCu;
    // 800045FC: .long   0x00000000
    // embedded data

label_80004600:
    ctx->pc = 0x80004600u;
    // 80004600: .long   0x00000000
    // embedded data

label_80004604:
    ctx->pc = 0x80004604u;
    // 80004604: .long   0x00000000
    // embedded data

label_80004608:
    ctx->pc = 0x80004608u;
    // 80004608: .long   0x00000000
    // embedded data

label_8000460C:
    ctx->pc = 0x8000460Cu;
    // 8000460C: .long   0x00000000
    // embedded data

label_80004610:
    ctx->pc = 0x80004610u;
    // 80004610: .long   0x00000000
    // embedded data

label_80004614:
    ctx->pc = 0x80004614u;
    // 80004614: .long   0x00000000
    // embedded data

label_80004618:
    ctx->pc = 0x80004618u;
    // 80004618: .long   0x00000000
    // embedded data

label_8000461C:
    ctx->pc = 0x8000461Cu;
    // 8000461C: .long   0x00000000
    // embedded data

label_80004620:
    ctx->pc = 0x80004620u;
    // 80004620: .long   0x00000000
    // embedded data

label_80004624:
    ctx->pc = 0x80004624u;
    // 80004624: .long   0x00000000
    // embedded data

label_80004628:
    ctx->pc = 0x80004628u;
    // 80004628: .long   0x00000000
    // embedded data

label_8000462C:
    ctx->pc = 0x8000462Cu;
    // 8000462C: .long   0x00000000
    // embedded data

label_80004630:
    ctx->pc = 0x80004630u;
    // 80004630: .long   0x00000000
    // embedded data

label_80004634:
    ctx->pc = 0x80004634u;
    // 80004634: .long   0x00000000
    // embedded data

label_80004638:
    ctx->pc = 0x80004638u;
    // 80004638: .long   0x00000000
    // embedded data

label_8000463C:
    ctx->pc = 0x8000463Cu;
    // 8000463C: .long   0x00000000
    // embedded data

label_80004640:
    ctx->pc = 0x80004640u;
    // 80004640: .long   0x00000000
    // embedded data

label_80004644:
    ctx->pc = 0x80004644u;
    // 80004644: .long   0x00000000
    // embedded data

label_80004648:
    ctx->pc = 0x80004648u;
    // 80004648: .long   0x00000000
    // embedded data

label_8000464C:
    ctx->pc = 0x8000464Cu;
    // 8000464C: .long   0x00000000
    // embedded data

label_80004650:
    ctx->pc = 0x80004650u;
    // 80004650: .long   0x00000000
    // embedded data

label_80004654:
    ctx->pc = 0x80004654u;
    // 80004654: .long   0x00000000
    // embedded data

label_80004658:
    ctx->pc = 0x80004658u;
    // 80004658: .long   0x00000000
    // embedded data

label_8000465C:
    ctx->pc = 0x8000465Cu;
    // 8000465C: .long   0x00000000
    // embedded data

label_80004660:
    ctx->pc = 0x80004660u;
    // 80004660: .long   0x00000000
    // embedded data

label_80004664:
    ctx->pc = 0x80004664u;
    // 80004664: .long   0x00000000
    // embedded data

label_80004668:
    ctx->pc = 0x80004668u;
    // 80004668: .long   0x00000000
    // embedded data

label_8000466C:
    ctx->pc = 0x8000466Cu;
    // 8000466C: .long   0x00000000
    // embedded data

label_80004670:
    ctx->pc = 0x80004670u;
    // 80004670: .long   0x00000000
    // embedded data

label_80004674:
    ctx->pc = 0x80004674u;
    // 80004674: .long   0x00000000
    // embedded data

label_80004678:
    ctx->pc = 0x80004678u;
    // 80004678: .long   0x00000000
    // embedded data

label_8000467C:
    ctx->pc = 0x8000467Cu;
    // 8000467C: .long   0x00000000
    // embedded data

label_80004680:
    ctx->pc = 0x80004680u;
    // 80004680: .long   0x00000000
    // embedded data

label_80004684:
    ctx->pc = 0x80004684u;
    // 80004684: .long   0x00000000
    // embedded data

label_80004688:
    ctx->pc = 0x80004688u;
    // 80004688: .long   0x00000000
    // embedded data

label_8000468C:
    ctx->pc = 0x8000468Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000468C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000468Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004690:
    ctx->pc = 0x80004690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004690: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004690u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004694:
    ctx->pc = 0x80004694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004694: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004694u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004698:
    ctx->pc = 0x80004698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80004698: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000469C:
    ctx->pc = 0x8000469Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000469Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000469C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800046A0:
    ctx->pc = 0x800046A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800046A0u)) return;
    // 800046A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800046A4:
    ctx->pc = 0x800046A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800046A4u)) return;
    // 800046A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800046A8:
    ctx->pc = 0x800046A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800046A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800046A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800046AC:
    ctx->pc = 0x800046ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800046ACu)) return;
    // 800046AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800046B0:
    ctx->pc = 0x800046B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800046B0u)) return;
    // 800046B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800046B4:
    ctx->pc = 0x800046B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800046B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800046B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800046B8:
    ctx->pc = 0x800046B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800046B8u)) return;
    // 800046B8: li      r3, 5120
    ctx->gpr[3] = (u32)(s32)(5120);

label_800046BC:
    ctx->pc = 0x800046BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800046BCu)) return;
    // 800046BC: rfi
    ppc_rfi(ctx, 0x800046BCu);
    return;

label_800046C0:
    ctx->pc = 0x800046C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800046C0: .long   0x00000000
    // embedded data

label_800046C4:
    ctx->pc = 0x800046C4u;
    // 800046C4: .long   0x00000000
    // embedded data

label_800046C8:
    ctx->pc = 0x800046C8u;
    // 800046C8: .long   0x00000000
    // embedded data

label_800046CC:
    ctx->pc = 0x800046CCu;
    // 800046CC: .long   0x00000000
    // embedded data

label_800046D0:
    ctx->pc = 0x800046D0u;
    // 800046D0: .long   0x00000000
    // embedded data

label_800046D4:
    ctx->pc = 0x800046D4u;
    // 800046D4: .long   0x00000000
    // embedded data

label_800046D8:
    ctx->pc = 0x800046D8u;
    // 800046D8: .long   0x00000000
    // embedded data

label_800046DC:
    ctx->pc = 0x800046DCu;
    // 800046DC: .long   0x00000000
    // embedded data

label_800046E0:
    ctx->pc = 0x800046E0u;
    // 800046E0: .long   0x00000000
    // embedded data

label_800046E4:
    ctx->pc = 0x800046E4u;
    // 800046E4: .long   0x00000000
    // embedded data

label_800046E8:
    ctx->pc = 0x800046E8u;
    // 800046E8: .long   0x00000000
    // embedded data

label_800046EC:
    ctx->pc = 0x800046ECu;
    // 800046EC: .long   0x00000000
    // embedded data

label_800046F0:
    ctx->pc = 0x800046F0u;
    // 800046F0: .long   0x00000000
    // embedded data

label_800046F4:
    ctx->pc = 0x800046F4u;
    // 800046F4: .long   0x00000000
    // embedded data

label_800046F8:
    ctx->pc = 0x800046F8u;
    // 800046F8: .long   0x00000000
    // embedded data

label_800046FC:
    ctx->pc = 0x800046FCu;
    // 800046FC: .long   0x00000000
    // embedded data

label_80004700:
    ctx->pc = 0x80004700u;
    // 80004700: .long   0x00000000
    // embedded data

label_80004704:
    ctx->pc = 0x80004704u;
    // 80004704: .long   0x00000000
    // embedded data

label_80004708:
    ctx->pc = 0x80004708u;
    // 80004708: .long   0x00000000
    // embedded data

label_8000470C:
    ctx->pc = 0x8000470Cu;
    // 8000470C: .long   0x00000000
    // embedded data

label_80004710:
    ctx->pc = 0x80004710u;
    // 80004710: .long   0x00000000
    // embedded data

label_80004714:
    ctx->pc = 0x80004714u;
    // 80004714: .long   0x00000000
    // embedded data

label_80004718:
    ctx->pc = 0x80004718u;
    // 80004718: .long   0x00000000
    // embedded data

label_8000471C:
    ctx->pc = 0x8000471Cu;
    // 8000471C: .long   0x00000000
    // embedded data

label_80004720:
    ctx->pc = 0x80004720u;
    // 80004720: .long   0x00000000
    // embedded data

label_80004724:
    ctx->pc = 0x80004724u;
    // 80004724: .long   0x00000000
    // embedded data

label_80004728:
    ctx->pc = 0x80004728u;
    // 80004728: .long   0x00000000
    // embedded data

label_8000472C:
    ctx->pc = 0x8000472Cu;
    // 8000472C: .long   0x00000000
    // embedded data

label_80004730:
    ctx->pc = 0x80004730u;
    // 80004730: .long   0x00000000
    // embedded data

label_80004734:
    ctx->pc = 0x80004734u;
    // 80004734: .long   0x00000000
    // embedded data

label_80004738:
    ctx->pc = 0x80004738u;
    // 80004738: .long   0x00000000
    // embedded data

label_8000473C:
    ctx->pc = 0x8000473Cu;
    // 8000473C: .long   0x00000000
    // embedded data

label_80004740:
    ctx->pc = 0x80004740u;
    // 80004740: .long   0x00000000
    // embedded data

label_80004744:
    ctx->pc = 0x80004744u;
    // 80004744: .long   0x00000000
    // embedded data

label_80004748:
    ctx->pc = 0x80004748u;
    // 80004748: .long   0x00000000
    // embedded data

label_8000474C:
    ctx->pc = 0x8000474Cu;
    // 8000474C: .long   0x00000000
    // embedded data

label_80004750:
    ctx->pc = 0x80004750u;
    // 80004750: .long   0x00000000
    // embedded data

label_80004754:
    ctx->pc = 0x80004754u;
    // 80004754: .long   0x00000000
    // embedded data

label_80004758:
    ctx->pc = 0x80004758u;
    // 80004758: .long   0x00000000
    // embedded data

label_8000475C:
    ctx->pc = 0x8000475Cu;
    // 8000475C: .long   0x00000000
    // embedded data

label_80004760:
    ctx->pc = 0x80004760u;
    // 80004760: .long   0x00000000
    // embedded data

label_80004764:
    ctx->pc = 0x80004764u;
    // 80004764: .long   0x00000000
    // embedded data

label_80004768:
    ctx->pc = 0x80004768u;
    // 80004768: .long   0x00000000
    // embedded data

label_8000476C:
    ctx->pc = 0x8000476Cu;
    // 8000476C: .long   0x00000000
    // embedded data

label_80004770:
    ctx->pc = 0x80004770u;
    // 80004770: .long   0x00000000
    // embedded data

label_80004774:
    ctx->pc = 0x80004774u;
    // 80004774: .long   0x00000000
    // embedded data

label_80004778:
    ctx->pc = 0x80004778u;
    // 80004778: .long   0x00000000
    // embedded data

label_8000477C:
    ctx->pc = 0x8000477Cu;
    // 8000477C: .long   0x00000000
    // embedded data

label_80004780:
    ctx->pc = 0x80004780u;
    // 80004780: .long   0x00000000
    // embedded data

label_80004784:
    ctx->pc = 0x80004784u;
    // 80004784: .long   0x00000000
    // embedded data

label_80004788:
    ctx->pc = 0x80004788u;
    // 80004788: .long   0x00000000
    // embedded data

label_8000478C:
    ctx->pc = 0x8000478Cu;
    // 8000478C: .long   0x00000000
    // embedded data

label_80004790:
    ctx->pc = 0x80004790u;
    // 80004790: .long   0x00000000
    // embedded data

label_80004794:
    ctx->pc = 0x80004794u;
    // 80004794: .long   0x00000000
    // embedded data

label_80004798:
    ctx->pc = 0x80004798u;
    // 80004798: .long   0x00000000
    // embedded data

label_8000479C:
    ctx->pc = 0x8000479Cu;
    // 8000479C: .long   0x00000000
    // embedded data

label_800047A0:
    ctx->pc = 0x800047A0u;
    // 800047A0: .long   0x00000000
    // embedded data

label_800047A4:
    ctx->pc = 0x800047A4u;
    // 800047A4: .long   0x00000000
    // embedded data

label_800047A8:
    ctx->pc = 0x800047A8u;
    // 800047A8: .long   0x00000000
    // embedded data

label_800047AC:
    ctx->pc = 0x800047ACu;
    // 800047AC: .long   0x00000000
    // embedded data

label_800047B0:
    ctx->pc = 0x800047B0u;
    // 800047B0: .long   0x00000000
    // embedded data

label_800047B4:
    ctx->pc = 0x800047B4u;
    // 800047B4: .long   0x00000000
    // embedded data

label_800047B8:
    ctx->pc = 0x800047B8u;
    // 800047B8: .long   0x00000000
    // embedded data

label_800047BC:
    ctx->pc = 0x800047BCu;
    // 800047BC: .long   0x00000000
    // embedded data

label_800047C0:
    ctx->pc = 0x800047C0u;
    // 800047C0: .long   0x00000000
    // embedded data

label_800047C4:
    ctx->pc = 0x800047C4u;
    // 800047C4: .long   0x00000000
    // embedded data

label_800047C8:
    ctx->pc = 0x800047C8u;
    // 800047C8: .long   0x00000000
    // embedded data

label_800047CC:
    ctx->pc = 0x800047CCu;
    // 800047CC: .long   0x00000000
    // embedded data

label_800047D0:
    ctx->pc = 0x800047D0u;
    // 800047D0: .long   0x00000000
    // embedded data

label_800047D4:
    ctx->pc = 0x800047D4u;
    // 800047D4: .long   0x00000000
    // embedded data

label_800047D8:
    ctx->pc = 0x800047D8u;
    // 800047D8: .long   0x00000000
    // embedded data

label_800047DC:
    ctx->pc = 0x800047DCu;
    // 800047DC: .long   0x00000000
    // embedded data

label_800047E0:
    ctx->pc = 0x800047E0u;
    // 800047E0: .long   0x00000000
    // embedded data

label_800047E4:
    ctx->pc = 0x800047E4u;
    // 800047E4: .long   0x00000000
    // embedded data

label_800047E8:
    ctx->pc = 0x800047E8u;
    // 800047E8: .long   0x00000000
    // embedded data

label_800047EC:
    ctx->pc = 0x800047ECu;
    // 800047EC: .long   0x00000000
    // embedded data

label_800047F0:
    ctx->pc = 0x800047F0u;
    // 800047F0: .long   0x00000000
    // embedded data

label_800047F4:
    ctx->pc = 0x800047F4u;
    // 800047F4: .long   0x00000000
    // embedded data

label_800047F8:
    ctx->pc = 0x800047F8u;
    // 800047F8: .long   0x00000000
    // embedded data

label_800047FC:
    ctx->pc = 0x800047FCu;
    // 800047FC: .long   0x00000000
    // embedded data

label_80004800:
    ctx->pc = 0x80004800u;
    // 80004800: .long   0x00000000
    // embedded data

label_80004804:
    ctx->pc = 0x80004804u;
    // 80004804: .long   0x00000000
    // embedded data

label_80004808:
    ctx->pc = 0x80004808u;
    // 80004808: .long   0x00000000
    // embedded data

label_8000480C:
    ctx->pc = 0x8000480Cu;
    // 8000480C: .long   0x00000000
    // embedded data

label_80004810:
    ctx->pc = 0x80004810u;
    // 80004810: .long   0x00000000
    // embedded data

label_80004814:
    ctx->pc = 0x80004814u;
    // 80004814: .long   0x00000000
    // embedded data

label_80004818:
    ctx->pc = 0x80004818u;
    // 80004818: .long   0x00000000
    // embedded data

label_8000481C:
    ctx->pc = 0x8000481Cu;
    // 8000481C: .long   0x00000000
    // embedded data

label_80004820:
    ctx->pc = 0x80004820u;
    // 80004820: .long   0x00000000
    // embedded data

label_80004824:
    ctx->pc = 0x80004824u;
    // 80004824: .long   0x00000000
    // embedded data

label_80004828:
    ctx->pc = 0x80004828u;
    // 80004828: .long   0x00000000
    // embedded data

label_8000482C:
    ctx->pc = 0x8000482Cu;
    // 8000482C: .long   0x00000000
    // embedded data

label_80004830:
    ctx->pc = 0x80004830u;
    // 80004830: .long   0x00000000
    // embedded data

label_80004834:
    ctx->pc = 0x80004834u;
    // 80004834: .long   0x00000000
    // embedded data

label_80004838:
    ctx->pc = 0x80004838u;
    // 80004838: .long   0x00000000
    // embedded data

label_8000483C:
    ctx->pc = 0x8000483Cu;
    // 8000483C: .long   0x00000000
    // embedded data

label_80004840:
    ctx->pc = 0x80004840u;
    // 80004840: .long   0x00000000
    // embedded data

label_80004844:
    ctx->pc = 0x80004844u;
    // 80004844: .long   0x00000000
    // embedded data

label_80004848:
    ctx->pc = 0x80004848u;
    // 80004848: .long   0x00000000
    // embedded data

label_8000484C:
    ctx->pc = 0x8000484Cu;
    // 8000484C: .long   0x00000000
    // embedded data

label_80004850:
    ctx->pc = 0x80004850u;
    // 80004850: .long   0x00000000
    // embedded data

label_80004854:
    ctx->pc = 0x80004854u;
    // 80004854: .long   0x00000000
    // embedded data

label_80004858:
    ctx->pc = 0x80004858u;
    // 80004858: .long   0x00000000
    // embedded data

label_8000485C:
    ctx->pc = 0x8000485Cu;
    // 8000485C: .long   0x00000000
    // embedded data

label_80004860:
    ctx->pc = 0x80004860u;
    // 80004860: .long   0x00000000
    // embedded data

label_80004864:
    ctx->pc = 0x80004864u;
    // 80004864: .long   0x00000000
    // embedded data

label_80004868:
    ctx->pc = 0x80004868u;
    // 80004868: .long   0x00000000
    // embedded data

label_8000486C:
    ctx->pc = 0x8000486Cu;
    // 8000486C: .long   0x00000000
    // embedded data

label_80004870:
    ctx->pc = 0x80004870u;
    // 80004870: .long   0x00000000
    // embedded data

label_80004874:
    ctx->pc = 0x80004874u;
    // 80004874: .long   0x00000000
    // embedded data

label_80004878:
    ctx->pc = 0x80004878u;
    // 80004878: .long   0x00000000
    // embedded data

label_8000487C:
    ctx->pc = 0x8000487Cu;
    // 8000487C: .long   0x00000000
    // embedded data

label_80004880:
    ctx->pc = 0x80004880u;
    // 80004880: .long   0x00000000
    // embedded data

label_80004884:
    ctx->pc = 0x80004884u;
    // 80004884: .long   0x00000000
    // embedded data

label_80004888:
    ctx->pc = 0x80004888u;
    // 80004888: .long   0x00000000
    // embedded data

label_8000488C:
    ctx->pc = 0x8000488Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000488C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000488Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004890:
    ctx->pc = 0x80004890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004890: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004890u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004894:
    ctx->pc = 0x80004894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004894: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004894u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004898:
    ctx->pc = 0x80004898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80004898: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000489C:
    ctx->pc = 0x8000489Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000489Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000489C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800048A0:
    ctx->pc = 0x800048A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800048A0u)) return;
    // 800048A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800048A4:
    ctx->pc = 0x800048A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800048A4u)) return;
    // 800048A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800048A8:
    ctx->pc = 0x800048A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800048A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800048A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800048AC:
    ctx->pc = 0x800048ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800048ACu)) return;
    // 800048AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800048B0:
    ctx->pc = 0x800048B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800048B0u)) return;
    // 800048B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800048B4:
    ctx->pc = 0x800048B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800048B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800048B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800048B8:
    ctx->pc = 0x800048B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800048B8u)) return;
    // 800048B8: li      r3, 5632
    ctx->gpr[3] = (u32)(s32)(5632);

label_800048BC:
    ctx->pc = 0x800048BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800048BCu)) return;
    // 800048BC: rfi
    ppc_rfi(ctx, 0x800048BCu);
    return;

label_800048C0:
    ctx->pc = 0x800048C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800048C0: .long   0x00000000
    // embedded data

label_800048C4:
    ctx->pc = 0x800048C4u;
    // 800048C4: .long   0x00000000
    // embedded data

label_800048C8:
    ctx->pc = 0x800048C8u;
    // 800048C8: .long   0x00000000
    // embedded data

label_800048CC:
    ctx->pc = 0x800048CCu;
    // 800048CC: .long   0x00000000
    // embedded data

label_800048D0:
    ctx->pc = 0x800048D0u;
    // 800048D0: .long   0x00000000
    // embedded data

label_800048D4:
    ctx->pc = 0x800048D4u;
    // 800048D4: .long   0x00000000
    // embedded data

label_800048D8:
    ctx->pc = 0x800048D8u;
    // 800048D8: .long   0x00000000
    // embedded data

label_800048DC:
    ctx->pc = 0x800048DCu;
    // 800048DC: .long   0x00000000
    // embedded data

label_800048E0:
    ctx->pc = 0x800048E0u;
    // 800048E0: .long   0x00000000
    // embedded data

label_800048E4:
    ctx->pc = 0x800048E4u;
    // 800048E4: .long   0x00000000
    // embedded data

label_800048E8:
    ctx->pc = 0x800048E8u;
    // 800048E8: .long   0x00000000
    // embedded data

label_800048EC:
    ctx->pc = 0x800048ECu;
    // 800048EC: .long   0x00000000
    // embedded data

label_800048F0:
    ctx->pc = 0x800048F0u;
    // 800048F0: .long   0x00000000
    // embedded data

label_800048F4:
    ctx->pc = 0x800048F4u;
    // 800048F4: .long   0x00000000
    // embedded data

label_800048F8:
    ctx->pc = 0x800048F8u;
    // 800048F8: .long   0x00000000
    // embedded data

label_800048FC:
    ctx->pc = 0x800048FCu;
    // 800048FC: .long   0x00000000
    // embedded data

label_80004900:
    ctx->pc = 0x80004900u;
    // 80004900: .long   0x00000000
    // embedded data

label_80004904:
    ctx->pc = 0x80004904u;
    // 80004904: .long   0x00000000
    // embedded data

label_80004908:
    ctx->pc = 0x80004908u;
    // 80004908: .long   0x00000000
    // embedded data

label_8000490C:
    ctx->pc = 0x8000490Cu;
    // 8000490C: .long   0x00000000
    // embedded data

label_80004910:
    ctx->pc = 0x80004910u;
    // 80004910: .long   0x00000000
    // embedded data

label_80004914:
    ctx->pc = 0x80004914u;
    // 80004914: .long   0x00000000
    // embedded data

label_80004918:
    ctx->pc = 0x80004918u;
    // 80004918: .long   0x00000000
    // embedded data

label_8000491C:
    ctx->pc = 0x8000491Cu;
    // 8000491C: .long   0x00000000
    // embedded data

label_80004920:
    ctx->pc = 0x80004920u;
    // 80004920: .long   0x00000000
    // embedded data

label_80004924:
    ctx->pc = 0x80004924u;
    // 80004924: .long   0x00000000
    // embedded data

label_80004928:
    ctx->pc = 0x80004928u;
    // 80004928: .long   0x00000000
    // embedded data

label_8000492C:
    ctx->pc = 0x8000492Cu;
    // 8000492C: .long   0x00000000
    // embedded data

label_80004930:
    ctx->pc = 0x80004930u;
    // 80004930: .long   0x00000000
    // embedded data

label_80004934:
    ctx->pc = 0x80004934u;
    // 80004934: .long   0x00000000
    // embedded data

label_80004938:
    ctx->pc = 0x80004938u;
    // 80004938: .long   0x00000000
    // embedded data

label_8000493C:
    ctx->pc = 0x8000493Cu;
    // 8000493C: .long   0x00000000
    // embedded data

label_80004940:
    ctx->pc = 0x80004940u;
    // 80004940: .long   0x00000000
    // embedded data

label_80004944:
    ctx->pc = 0x80004944u;
    // 80004944: .long   0x00000000
    // embedded data

label_80004948:
    ctx->pc = 0x80004948u;
    // 80004948: .long   0x00000000
    // embedded data

label_8000494C:
    ctx->pc = 0x8000494Cu;
    // 8000494C: .long   0x00000000
    // embedded data

label_80004950:
    ctx->pc = 0x80004950u;
    // 80004950: .long   0x00000000
    // embedded data

label_80004954:
    ctx->pc = 0x80004954u;
    // 80004954: .long   0x00000000
    // embedded data

label_80004958:
    ctx->pc = 0x80004958u;
    // 80004958: .long   0x00000000
    // embedded data

label_8000495C:
    ctx->pc = 0x8000495Cu;
    // 8000495C: .long   0x00000000
    // embedded data

label_80004960:
    ctx->pc = 0x80004960u;
    // 80004960: .long   0x00000000
    // embedded data

label_80004964:
    ctx->pc = 0x80004964u;
    // 80004964: .long   0x00000000
    // embedded data

label_80004968:
    ctx->pc = 0x80004968u;
    // 80004968: .long   0x00000000
    // embedded data

label_8000496C:
    ctx->pc = 0x8000496Cu;
    // 8000496C: .long   0x00000000
    // embedded data

label_80004970:
    ctx->pc = 0x80004970u;
    // 80004970: .long   0x00000000
    // embedded data

label_80004974:
    ctx->pc = 0x80004974u;
    // 80004974: .long   0x00000000
    // embedded data

label_80004978:
    ctx->pc = 0x80004978u;
    // 80004978: .long   0x00000000
    // embedded data

label_8000497C:
    ctx->pc = 0x8000497Cu;
    // 8000497C: .long   0x00000000
    // embedded data

label_80004980:
    ctx->pc = 0x80004980u;
    // 80004980: .long   0x00000000
    // embedded data

label_80004984:
    ctx->pc = 0x80004984u;
    // 80004984: .long   0x00000000
    // embedded data

label_80004988:
    ctx->pc = 0x80004988u;
    // 80004988: .long   0x00000000
    // embedded data

label_8000498C:
    ctx->pc = 0x8000498Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000498C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000498Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004990:
    ctx->pc = 0x80004990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004990: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004990u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004994:
    ctx->pc = 0x80004994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004994: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004994u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004998:
    ctx->pc = 0x80004998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80004998: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000499C:
    ctx->pc = 0x8000499Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000499Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000499C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800049A0:
    ctx->pc = 0x800049A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800049A0u)) return;
    // 800049A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800049A4:
    ctx->pc = 0x800049A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800049A4u)) return;
    // 800049A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800049A8:
    ctx->pc = 0x800049A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800049A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800049A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800049AC:
    ctx->pc = 0x800049ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800049ACu)) return;
    // 800049AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800049B0:
    ctx->pc = 0x800049B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800049B0u)) return;
    // 800049B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800049B4:
    ctx->pc = 0x800049B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800049B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800049B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800049B8:
    ctx->pc = 0x800049B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800049B8u)) return;
    // 800049B8: li      r3, 5888
    ctx->gpr[3] = (u32)(s32)(5888);

label_800049BC:
    ctx->pc = 0x800049BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800049BCu)) return;
    // 800049BC: rfi
    ppc_rfi(ctx, 0x800049BCu);
    return;

label_800049C0:
    ctx->pc = 0x800049C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800049C0: .long   0x00000000
    // embedded data

label_800049C4:
    ctx->pc = 0x800049C4u;
    // 800049C4: .long   0x00000000
    // embedded data

label_800049C8:
    ctx->pc = 0x800049C8u;
    // 800049C8: .long   0x00000000
    // embedded data

label_800049CC:
    ctx->pc = 0x800049CCu;
    // 800049CC: .long   0x00000000
    // embedded data

label_800049D0:
    ctx->pc = 0x800049D0u;
    // 800049D0: .long   0x00000000
    // embedded data

label_800049D4:
    ctx->pc = 0x800049D4u;
    // 800049D4: .long   0x00000000
    // embedded data

label_800049D8:
    ctx->pc = 0x800049D8u;
    // 800049D8: .long   0x00000000
    // embedded data

label_800049DC:
    ctx->pc = 0x800049DCu;
    // 800049DC: .long   0x00000000
    // embedded data

label_800049E0:
    ctx->pc = 0x800049E0u;
    // 800049E0: .long   0x00000000
    // embedded data

label_800049E4:
    ctx->pc = 0x800049E4u;
    // 800049E4: .long   0x00000000
    // embedded data

label_800049E8:
    ctx->pc = 0x800049E8u;
    // 800049E8: .long   0x00000000
    // embedded data

label_800049EC:
    ctx->pc = 0x800049ECu;
    // 800049EC: .long   0x00000000
    // embedded data

label_800049F0:
    ctx->pc = 0x800049F0u;
    // 800049F0: .long   0x00000000
    // embedded data

label_800049F4:
    ctx->pc = 0x800049F4u;
    // 800049F4: .long   0x00000000
    // embedded data

label_800049F8:
    ctx->pc = 0x800049F8u;
    // 800049F8: .long   0x00000000
    // embedded data

label_800049FC:
    ctx->pc = 0x800049FCu;
    // 800049FC: .long   0x00000000
    // embedded data

label_80004A00:
    ctx->pc = 0x80004A00u;
    // 80004A00: .long   0x00000000
    // embedded data

label_80004A04:
    ctx->pc = 0x80004A04u;
    // 80004A04: .long   0x00000000
    // embedded data

label_80004A08:
    ctx->pc = 0x80004A08u;
    // 80004A08: .long   0x00000000
    // embedded data

label_80004A0C:
    ctx->pc = 0x80004A0Cu;
    // 80004A0C: .long   0x00000000
    // embedded data

label_80004A10:
    ctx->pc = 0x80004A10u;
    // 80004A10: .long   0x00000000
    // embedded data

label_80004A14:
    ctx->pc = 0x80004A14u;
    // 80004A14: .long   0x00000000
    // embedded data

label_80004A18:
    ctx->pc = 0x80004A18u;
    // 80004A18: .long   0x00000000
    // embedded data

label_80004A1C:
    ctx->pc = 0x80004A1Cu;
    // 80004A1C: .long   0x00000000
    // embedded data

label_80004A20:
    ctx->pc = 0x80004A20u;
    // 80004A20: .long   0x00000000
    // embedded data

label_80004A24:
    ctx->pc = 0x80004A24u;
    // 80004A24: .long   0x00000000
    // embedded data

label_80004A28:
    ctx->pc = 0x80004A28u;
    // 80004A28: .long   0x00000000
    // embedded data

label_80004A2C:
    ctx->pc = 0x80004A2Cu;
    // 80004A2C: .long   0x00000000
    // embedded data

label_80004A30:
    ctx->pc = 0x80004A30u;
    // 80004A30: .long   0x00000000
    // embedded data

label_80004A34:
    ctx->pc = 0x80004A34u;
    // 80004A34: .long   0x00000000
    // embedded data

label_80004A38:
    ctx->pc = 0x80004A38u;
    // 80004A38: .long   0x00000000
    // embedded data

label_80004A3C:
    ctx->pc = 0x80004A3Cu;
    // 80004A3C: .long   0x00000000
    // embedded data

label_80004A40:
    ctx->pc = 0x80004A40u;
    // 80004A40: .long   0x00000000
    // embedded data

label_80004A44:
    ctx->pc = 0x80004A44u;
    // 80004A44: .long   0x00000000
    // embedded data

label_80004A48:
    ctx->pc = 0x80004A48u;
    // 80004A48: .long   0x00000000
    // embedded data

label_80004A4C:
    ctx->pc = 0x80004A4Cu;
    // 80004A4C: .long   0x00000000
    // embedded data

label_80004A50:
    ctx->pc = 0x80004A50u;
    // 80004A50: .long   0x00000000
    // embedded data

label_80004A54:
    ctx->pc = 0x80004A54u;
    // 80004A54: .long   0x00000000
    // embedded data

label_80004A58:
    ctx->pc = 0x80004A58u;
    // 80004A58: .long   0x00000000
    // embedded data

label_80004A5C:
    ctx->pc = 0x80004A5Cu;
    // 80004A5C: .long   0x00000000
    // embedded data

label_80004A60:
    ctx->pc = 0x80004A60u;
    // 80004A60: .long   0x00000000
    // embedded data

label_80004A64:
    ctx->pc = 0x80004A64u;
    // 80004A64: .long   0x00000000
    // embedded data

label_80004A68:
    ctx->pc = 0x80004A68u;
    // 80004A68: .long   0x00000000
    // embedded data

label_80004A6C:
    ctx->pc = 0x80004A6Cu;
    // 80004A6C: .long   0x00000000
    // embedded data

label_80004A70:
    ctx->pc = 0x80004A70u;
    // 80004A70: .long   0x00000000
    // embedded data

label_80004A74:
    ctx->pc = 0x80004A74u;
    // 80004A74: .long   0x00000000
    // embedded data

label_80004A78:
    ctx->pc = 0x80004A78u;
    // 80004A78: .long   0x00000000
    // embedded data

label_80004A7C:
    ctx->pc = 0x80004A7Cu;
    // 80004A7C: .long   0x00000000
    // embedded data

label_80004A80:
    ctx->pc = 0x80004A80u;
    // 80004A80: .long   0x00000000
    // embedded data

label_80004A84:
    ctx->pc = 0x80004A84u;
    // 80004A84: .long   0x00000000
    // embedded data

label_80004A88:
    ctx->pc = 0x80004A88u;
    // 80004A88: .long   0x00000000
    // embedded data

label_80004A8C:
    ctx->pc = 0x80004A8Cu;
    // 80004A8C: .long   0x00000000
    // embedded data

label_80004A90:
    ctx->pc = 0x80004A90u;
    // 80004A90: .long   0x00000000
    // embedded data

label_80004A94:
    ctx->pc = 0x80004A94u;
    // 80004A94: .long   0x00000000
    // embedded data

label_80004A98:
    ctx->pc = 0x80004A98u;
    // 80004A98: .long   0x00000000
    // embedded data

label_80004A9C:
    ctx->pc = 0x80004A9Cu;
    // 80004A9C: .long   0x00000000
    // embedded data

label_80004AA0:
    ctx->pc = 0x80004AA0u;
    // 80004AA0: .long   0x00000000
    // embedded data

label_80004AA4:
    ctx->pc = 0x80004AA4u;
    // 80004AA4: .long   0x00000000
    // embedded data

label_80004AA8:
    ctx->pc = 0x80004AA8u;
    // 80004AA8: .long   0x00000000
    // embedded data

label_80004AAC:
    ctx->pc = 0x80004AACu;
    // 80004AAC: .long   0x00000000
    // embedded data

label_80004AB0:
    ctx->pc = 0x80004AB0u;
    // 80004AB0: .long   0x00000000
    // embedded data

label_80004AB4:
    ctx->pc = 0x80004AB4u;
    // 80004AB4: .long   0x00000000
    // embedded data

label_80004AB8:
    ctx->pc = 0x80004AB8u;
    // 80004AB8: .long   0x00000000
    // embedded data

label_80004ABC:
    ctx->pc = 0x80004ABCu;
    // 80004ABC: .long   0x00000000
    // embedded data

label_80004AC0:
    ctx->pc = 0x80004AC0u;
    // 80004AC0: .long   0x00000000
    // embedded data

label_80004AC4:
    ctx->pc = 0x80004AC4u;
    // 80004AC4: .long   0x00000000
    // embedded data

label_80004AC8:
    ctx->pc = 0x80004AC8u;
    // 80004AC8: .long   0x00000000
    // embedded data

label_80004ACC:
    ctx->pc = 0x80004ACCu;
    // 80004ACC: .long   0x00000000
    // embedded data

label_80004AD0:
    ctx->pc = 0x80004AD0u;
    // 80004AD0: .long   0x00000000
    // embedded data

label_80004AD4:
    ctx->pc = 0x80004AD4u;
    // 80004AD4: .long   0x00000000
    // embedded data

label_80004AD8:
    ctx->pc = 0x80004AD8u;
    // 80004AD8: .long   0x00000000
    // embedded data

label_80004ADC:
    ctx->pc = 0x80004ADCu;
    // 80004ADC: .long   0x00000000
    // embedded data

label_80004AE0:
    ctx->pc = 0x80004AE0u;
    // 80004AE0: .long   0x00000000
    // embedded data

label_80004AE4:
    ctx->pc = 0x80004AE4u;
    // 80004AE4: .long   0x00000000
    // embedded data

label_80004AE8:
    ctx->pc = 0x80004AE8u;
    // 80004AE8: .long   0x00000000
    // embedded data

label_80004AEC:
    ctx->pc = 0x80004AECu;
    // 80004AEC: .long   0x00000000
    // embedded data

label_80004AF0:
    ctx->pc = 0x80004AF0u;
    // 80004AF0: .long   0x00000000
    // embedded data

label_80004AF4:
    ctx->pc = 0x80004AF4u;
    // 80004AF4: .long   0x00000000
    // embedded data

label_80004AF8:
    ctx->pc = 0x80004AF8u;
    // 80004AF8: .long   0x00000000
    // embedded data

label_80004AFC:
    ctx->pc = 0x80004AFCu;
    // 80004AFC: .long   0x00000000
    // embedded data

label_80004B00:
    ctx->pc = 0x80004B00u;
    // 80004B00: .long   0x00000000
    // embedded data

label_80004B04:
    ctx->pc = 0x80004B04u;
    // 80004B04: .long   0x00000000
    // embedded data

label_80004B08:
    ctx->pc = 0x80004B08u;
    // 80004B08: .long   0x00000000
    // embedded data

label_80004B0C:
    ctx->pc = 0x80004B0Cu;
    // 80004B0C: .long   0x00000000
    // embedded data

label_80004B10:
    ctx->pc = 0x80004B10u;
    // 80004B10: .long   0x00000000
    // embedded data

label_80004B14:
    ctx->pc = 0x80004B14u;
    // 80004B14: .long   0x00000000
    // embedded data

label_80004B18:
    ctx->pc = 0x80004B18u;
    // 80004B18: .long   0x00000000
    // embedded data

label_80004B1C:
    ctx->pc = 0x80004B1Cu;
    // 80004B1C: .long   0x00000000
    // embedded data

label_80004B20:
    ctx->pc = 0x80004B20u;
    // 80004B20: .long   0x00000000
    // embedded data

label_80004B24:
    ctx->pc = 0x80004B24u;
    // 80004B24: .long   0x00000000
    // embedded data

label_80004B28:
    ctx->pc = 0x80004B28u;
    // 80004B28: .long   0x00000000
    // embedded data

label_80004B2C:
    ctx->pc = 0x80004B2Cu;
    // 80004B2C: .long   0x00000000
    // embedded data

label_80004B30:
    ctx->pc = 0x80004B30u;
    // 80004B30: .long   0x00000000
    // embedded data

label_80004B34:
    ctx->pc = 0x80004B34u;
    // 80004B34: .long   0x00000000
    // embedded data

label_80004B38:
    ctx->pc = 0x80004B38u;
    // 80004B38: .long   0x00000000
    // embedded data

label_80004B3C:
    ctx->pc = 0x80004B3Cu;
    // 80004B3C: .long   0x00000000
    // embedded data

label_80004B40:
    ctx->pc = 0x80004B40u;
    // 80004B40: .long   0x00000000
    // embedded data

label_80004B44:
    ctx->pc = 0x80004B44u;
    // 80004B44: .long   0x00000000
    // embedded data

label_80004B48:
    ctx->pc = 0x80004B48u;
    // 80004B48: .long   0x00000000
    // embedded data

label_80004B4C:
    ctx->pc = 0x80004B4Cu;
    // 80004B4C: .long   0x00000000
    // embedded data

label_80004B50:
    ctx->pc = 0x80004B50u;
    // 80004B50: .long   0x00000000
    // embedded data

label_80004B54:
    ctx->pc = 0x80004B54u;
    // 80004B54: .long   0x00000000
    // embedded data

label_80004B58:
    ctx->pc = 0x80004B58u;
    // 80004B58: .long   0x00000000
    // embedded data

label_80004B5C:
    ctx->pc = 0x80004B5Cu;
    // 80004B5C: .long   0x00000000
    // embedded data

label_80004B60:
    ctx->pc = 0x80004B60u;
    // 80004B60: .long   0x00000000
    // embedded data

label_80004B64:
    ctx->pc = 0x80004B64u;
    // 80004B64: .long   0x00000000
    // embedded data

label_80004B68:
    ctx->pc = 0x80004B68u;
    // 80004B68: .long   0x00000000
    // embedded data

label_80004B6C:
    ctx->pc = 0x80004B6Cu;
    // 80004B6C: .long   0x00000000
    // embedded data

label_80004B70:
    ctx->pc = 0x80004B70u;
    // 80004B70: .long   0x00000000
    // embedded data

label_80004B74:
    ctx->pc = 0x80004B74u;
    // 80004B74: .long   0x00000000
    // embedded data

label_80004B78:
    ctx->pc = 0x80004B78u;
    // 80004B78: .long   0x00000000
    // embedded data

label_80004B7C:
    ctx->pc = 0x80004B7Cu;
    // 80004B7C: .long   0x00000000
    // embedded data

label_80004B80:
    ctx->pc = 0x80004B80u;
    // 80004B80: .long   0x00000000
    // embedded data

label_80004B84:
    ctx->pc = 0x80004B84u;
    // 80004B84: .long   0x00000000
    // embedded data

label_80004B88:
    ctx->pc = 0x80004B88u;
    // 80004B88: .long   0x00000000
    // embedded data

label_80004B8C:
    ctx->pc = 0x80004B8Cu;
    // 80004B8C: .long   0x00000000
    // embedded data

label_80004B90:
    ctx->pc = 0x80004B90u;
    // 80004B90: .long   0x00000000
    // embedded data

label_80004B94:
    ctx->pc = 0x80004B94u;
    // 80004B94: .long   0x00000000
    // embedded data

label_80004B98:
    ctx->pc = 0x80004B98u;
    // 80004B98: .long   0x00000000
    // embedded data

label_80004B9C:
    ctx->pc = 0x80004B9Cu;
    // 80004B9C: .long   0x00000000
    // embedded data

label_80004BA0:
    ctx->pc = 0x80004BA0u;
    // 80004BA0: .long   0x00000000
    // embedded data

label_80004BA4:
    ctx->pc = 0x80004BA4u;
    // 80004BA4: .long   0x00000000
    // embedded data

label_80004BA8:
    ctx->pc = 0x80004BA8u;
    // 80004BA8: .long   0x00000000
    // embedded data

label_80004BAC:
    ctx->pc = 0x80004BACu;
    // 80004BAC: .long   0x00000000
    // embedded data

label_80004BB0:
    ctx->pc = 0x80004BB0u;
    // 80004BB0: .long   0x00000000
    // embedded data

label_80004BB4:
    ctx->pc = 0x80004BB4u;
    // 80004BB4: .long   0x00000000
    // embedded data

label_80004BB8:
    ctx->pc = 0x80004BB8u;
    // 80004BB8: .long   0x00000000
    // embedded data

label_80004BBC:
    ctx->pc = 0x80004BBCu;
    // 80004BBC: .long   0x00000000
    // embedded data

label_80004BC0:
    ctx->pc = 0x80004BC0u;
    // 80004BC0: .long   0x00000000
    // embedded data

label_80004BC4:
    ctx->pc = 0x80004BC4u;
    // 80004BC4: .long   0x00000000
    // embedded data

label_80004BC8:
    ctx->pc = 0x80004BC8u;
    // 80004BC8: .long   0x00000000
    // embedded data

label_80004BCC:
    ctx->pc = 0x80004BCCu;
    // 80004BCC: .long   0x00000000
    // embedded data

label_80004BD0:
    ctx->pc = 0x80004BD0u;
    // 80004BD0: .long   0x00000000
    // embedded data

label_80004BD4:
    ctx->pc = 0x80004BD4u;
    // 80004BD4: .long   0x00000000
    // embedded data

label_80004BD8:
    ctx->pc = 0x80004BD8u;
    // 80004BD8: .long   0x00000000
    // embedded data

label_80004BDC:
    ctx->pc = 0x80004BDCu;
    // 80004BDC: .long   0x00000000
    // embedded data

label_80004BE0:
    ctx->pc = 0x80004BE0u;
    // 80004BE0: .long   0x00000000
    // embedded data

label_80004BE4:
    ctx->pc = 0x80004BE4u;
    // 80004BE4: .long   0x00000000
    // embedded data

label_80004BE8:
    ctx->pc = 0x80004BE8u;
    // 80004BE8: .long   0x00000000
    // embedded data

label_80004BEC:
    ctx->pc = 0x80004BECu;
    // 80004BEC: .long   0x00000000
    // embedded data

label_80004BF0:
    ctx->pc = 0x80004BF0u;
    // 80004BF0: .long   0x00000000
    // embedded data

label_80004BF4:
    ctx->pc = 0x80004BF4u;
    // 80004BF4: .long   0x00000000
    // embedded data

label_80004BF8:
    ctx->pc = 0x80004BF8u;
    // 80004BF8: .long   0x00000000
    // embedded data

label_80004BFC:
    ctx->pc = 0x80004BFCu;
    // 80004BFC: .long   0x00000000
    // embedded data

label_80004C00:
    ctx->pc = 0x80004C00u;
    // 80004C00: .long   0x00000000
    // embedded data

label_80004C04:
    ctx->pc = 0x80004C04u;
    // 80004C04: .long   0x00000000
    // embedded data

label_80004C08:
    ctx->pc = 0x80004C08u;
    // 80004C08: .long   0x00000000
    // embedded data

label_80004C0C:
    ctx->pc = 0x80004C0Cu;
    // 80004C0C: .long   0x00000000
    // embedded data

label_80004C10:
    ctx->pc = 0x80004C10u;
    // 80004C10: .long   0x00000000
    // embedded data

label_80004C14:
    ctx->pc = 0x80004C14u;
    // 80004C14: .long   0x00000000
    // embedded data

label_80004C18:
    ctx->pc = 0x80004C18u;
    // 80004C18: .long   0x00000000
    // embedded data

label_80004C1C:
    ctx->pc = 0x80004C1Cu;
    // 80004C1C: .long   0x00000000
    // embedded data

label_80004C20:
    ctx->pc = 0x80004C20u;
    // 80004C20: .long   0x00000000
    // embedded data

label_80004C24:
    ctx->pc = 0x80004C24u;
    // 80004C24: .long   0x00000000
    // embedded data

label_80004C28:
    ctx->pc = 0x80004C28u;
    // 80004C28: .long   0x00000000
    // embedded data

label_80004C2C:
    ctx->pc = 0x80004C2Cu;
    // 80004C2C: .long   0x00000000
    // embedded data

label_80004C30:
    ctx->pc = 0x80004C30u;
    // 80004C30: .long   0x00000000
    // embedded data

label_80004C34:
    ctx->pc = 0x80004C34u;
    // 80004C34: .long   0x00000000
    // embedded data

label_80004C38:
    ctx->pc = 0x80004C38u;
    // 80004C38: .long   0x00000000
    // embedded data

label_80004C3C:
    ctx->pc = 0x80004C3Cu;
    // 80004C3C: .long   0x00000000
    // embedded data

label_80004C40:
    ctx->pc = 0x80004C40u;
    // 80004C40: .long   0x00000000
    // embedded data

label_80004C44:
    ctx->pc = 0x80004C44u;
    // 80004C44: .long   0x00000000
    // embedded data

label_80004C48:
    ctx->pc = 0x80004C48u;
    // 80004C48: .long   0x00000000
    // embedded data

label_80004C4C:
    ctx->pc = 0x80004C4Cu;
    // 80004C4C: .long   0x00000000
    // embedded data

label_80004C50:
    ctx->pc = 0x80004C50u;
    // 80004C50: .long   0x00000000
    // embedded data

label_80004C54:
    ctx->pc = 0x80004C54u;
    // 80004C54: .long   0x00000000
    // embedded data

label_80004C58:
    ctx->pc = 0x80004C58u;
    // 80004C58: .long   0x00000000
    // embedded data

label_80004C5C:
    ctx->pc = 0x80004C5Cu;
    // 80004C5C: .long   0x00000000
    // embedded data

label_80004C60:
    ctx->pc = 0x80004C60u;
    // 80004C60: .long   0x00000000
    // embedded data

label_80004C64:
    ctx->pc = 0x80004C64u;
    // 80004C64: .long   0x00000000
    // embedded data

label_80004C68:
    ctx->pc = 0x80004C68u;
    // 80004C68: .long   0x00000000
    // embedded data

label_80004C6C:
    ctx->pc = 0x80004C6Cu;
    // 80004C6C: .long   0x00000000
    // embedded data

label_80004C70:
    ctx->pc = 0x80004C70u;
    // 80004C70: .long   0x00000000
    // embedded data

label_80004C74:
    ctx->pc = 0x80004C74u;
    // 80004C74: .long   0x00000000
    // embedded data

label_80004C78:
    ctx->pc = 0x80004C78u;
    // 80004C78: .long   0x00000000
    // embedded data

label_80004C7C:
    ctx->pc = 0x80004C7Cu;
    // 80004C7C: .long   0x00000000
    // embedded data

label_80004C80:
    ctx->pc = 0x80004C80u;
    // 80004C80: .long   0x00000000
    // embedded data

label_80004C84:
    ctx->pc = 0x80004C84u;
    // 80004C84: .long   0x00000000
    // embedded data

label_80004C88:
    ctx->pc = 0x80004C88u;
    // 80004C88: .long   0x00000000
    // embedded data

label_80004C8C:
    ctx->pc = 0x80004C8Cu;
    // 80004C8C: .long   0x00000000
    // embedded data

label_80004C90:
    ctx->pc = 0x80004C90u;
    // 80004C90: .long   0x00000000
    // embedded data

label_80004C94:
    ctx->pc = 0x80004C94u;
    // 80004C94: .long   0x00000000
    // embedded data

label_80004C98:
    ctx->pc = 0x80004C98u;
    // 80004C98: .long   0x00000000
    // embedded data

label_80004C9C:
    ctx->pc = 0x80004C9Cu;
    // 80004C9C: .long   0x00000000
    // embedded data

label_80004CA0:
    ctx->pc = 0x80004CA0u;
    // 80004CA0: .long   0x00000000
    // embedded data

label_80004CA4:
    ctx->pc = 0x80004CA4u;
    // 80004CA4: .long   0x00000000
    // embedded data

label_80004CA8:
    ctx->pc = 0x80004CA8u;
    // 80004CA8: .long   0x00000000
    // embedded data

label_80004CAC:
    ctx->pc = 0x80004CACu;
    // 80004CAC: .long   0x00000000
    // embedded data

label_80004CB0:
    ctx->pc = 0x80004CB0u;
    // 80004CB0: .long   0x00000000
    // embedded data

label_80004CB4:
    ctx->pc = 0x80004CB4u;
    // 80004CB4: .long   0x00000000
    // embedded data

label_80004CB8:
    ctx->pc = 0x80004CB8u;
    // 80004CB8: .long   0x00000000
    // embedded data

label_80004CBC:
    ctx->pc = 0x80004CBCu;
    // 80004CBC: .long   0x00000000
    // embedded data

label_80004CC0:
    ctx->pc = 0x80004CC0u;
    // 80004CC0: .long   0x00000000
    // embedded data

label_80004CC4:
    ctx->pc = 0x80004CC4u;
    // 80004CC4: .long   0x00000000
    // embedded data

label_80004CC8:
    ctx->pc = 0x80004CC8u;
    // 80004CC8: .long   0x00000000
    // embedded data

label_80004CCC:
    ctx->pc = 0x80004CCCu;
    // 80004CCC: .long   0x00000000
    // embedded data

label_80004CD0:
    ctx->pc = 0x80004CD0u;
    // 80004CD0: .long   0x00000000
    // embedded data

label_80004CD4:
    ctx->pc = 0x80004CD4u;
    // 80004CD4: .long   0x00000000
    // embedded data

label_80004CD8:
    ctx->pc = 0x80004CD8u;
    // 80004CD8: .long   0x00000000
    // embedded data

label_80004CDC:
    ctx->pc = 0x80004CDCu;
    // 80004CDC: .long   0x00000000
    // embedded data

label_80004CE0:
    ctx->pc = 0x80004CE0u;
    // 80004CE0: .long   0x00000000
    // embedded data

label_80004CE4:
    ctx->pc = 0x80004CE4u;
    // 80004CE4: .long   0x00000000
    // embedded data

label_80004CE8:
    ctx->pc = 0x80004CE8u;
    // 80004CE8: .long   0x00000000
    // embedded data

label_80004CEC:
    ctx->pc = 0x80004CECu;
    // 80004CEC: .long   0x00000000
    // embedded data

label_80004CF0:
    ctx->pc = 0x80004CF0u;
    // 80004CF0: .long   0x00000000
    // embedded data

label_80004CF4:
    ctx->pc = 0x80004CF4u;
    // 80004CF4: .long   0x00000000
    // embedded data

label_80004CF8:
    ctx->pc = 0x80004CF8u;
    // 80004CF8: .long   0x00000000
    // embedded data

label_80004CFC:
    ctx->pc = 0x80004CFCu;
    // 80004CFC: .long   0x00000000
    // embedded data

label_80004D00:
    ctx->pc = 0x80004D00u;
    // 80004D00: .long   0x00000000
    // embedded data

label_80004D04:
    ctx->pc = 0x80004D04u;
    // 80004D04: .long   0x00000000
    // embedded data

label_80004D08:
    ctx->pc = 0x80004D08u;
    // 80004D08: .long   0x00000000
    // embedded data

label_80004D0C:
    ctx->pc = 0x80004D0Cu;
    // 80004D0C: .long   0x00000000
    // embedded data

label_80004D10:
    ctx->pc = 0x80004D10u;
    // 80004D10: .long   0x00000000
    // embedded data

label_80004D14:
    ctx->pc = 0x80004D14u;
    // 80004D14: .long   0x00000000
    // embedded data

label_80004D18:
    ctx->pc = 0x80004D18u;
    // 80004D18: .long   0x00000000
    // embedded data

label_80004D1C:
    ctx->pc = 0x80004D1Cu;
    // 80004D1C: .long   0x00000000
    // embedded data

label_80004D20:
    ctx->pc = 0x80004D20u;
    // 80004D20: .long   0x00000000
    // embedded data

label_80004D24:
    ctx->pc = 0x80004D24u;
    // 80004D24: .long   0x00000000
    // embedded data

label_80004D28:
    ctx->pc = 0x80004D28u;
    // 80004D28: .long   0x00000000
    // embedded data

label_80004D2C:
    ctx->pc = 0x80004D2Cu;
    // 80004D2C: .long   0x00000000
    // embedded data

label_80004D30:
    ctx->pc = 0x80004D30u;
    // 80004D30: .long   0x00000000
    // embedded data

label_80004D34:
    ctx->pc = 0x80004D34u;
    // 80004D34: .long   0x00000000
    // embedded data

label_80004D38:
    ctx->pc = 0x80004D38u;
    // 80004D38: .long   0x00000000
    // embedded data

label_80004D3C:
    ctx->pc = 0x80004D3Cu;
    // 80004D3C: .long   0x00000000
    // embedded data

label_80004D40:
    ctx->pc = 0x80004D40u;
    // 80004D40: .long   0x00000000
    // embedded data

label_80004D44:
    ctx->pc = 0x80004D44u;
    // 80004D44: .long   0x00000000
    // embedded data

label_80004D48:
    ctx->pc = 0x80004D48u;
    // 80004D48: .long   0x00000000
    // embedded data

label_80004D4C:
    ctx->pc = 0x80004D4Cu;
    // 80004D4C: .long   0x00000000
    // embedded data

label_80004D50:
    ctx->pc = 0x80004D50u;
    // 80004D50: .long   0x00000000
    // embedded data

label_80004D54:
    ctx->pc = 0x80004D54u;
    // 80004D54: .long   0x00000000
    // embedded data

label_80004D58:
    ctx->pc = 0x80004D58u;
    // 80004D58: .long   0x00000000
    // embedded data

label_80004D5C:
    ctx->pc = 0x80004D5Cu;
    // 80004D5C: .long   0x00000000
    // embedded data

label_80004D60:
    ctx->pc = 0x80004D60u;
    // 80004D60: .long   0x00000000
    // embedded data

label_80004D64:
    ctx->pc = 0x80004D64u;
    // 80004D64: .long   0x00000000
    // embedded data

label_80004D68:
    ctx->pc = 0x80004D68u;
    // 80004D68: .long   0x00000000
    // embedded data

label_80004D6C:
    ctx->pc = 0x80004D6Cu;
    // 80004D6C: .long   0x00000000
    // embedded data

label_80004D70:
    ctx->pc = 0x80004D70u;
    // 80004D70: .long   0x00000000
    // embedded data

label_80004D74:
    ctx->pc = 0x80004D74u;
    // 80004D74: .long   0x00000000
    // embedded data

label_80004D78:
    ctx->pc = 0x80004D78u;
    // 80004D78: .long   0x00000000
    // embedded data

label_80004D7C:
    ctx->pc = 0x80004D7Cu;
    // 80004D7C: .long   0x00000000
    // embedded data

label_80004D80:
    ctx->pc = 0x80004D80u;
    // 80004D80: .long   0x00000000
    // embedded data

label_80004D84:
    ctx->pc = 0x80004D84u;
    // 80004D84: .long   0x00000000
    // embedded data

label_80004D88:
    ctx->pc = 0x80004D88u;
    // 80004D88: .long   0x00000000
    // embedded data

label_80004D8C:
    ctx->pc = 0x80004D8Cu;
    // 80004D8C: .long   0x00000000
    // embedded data

label_80004D90:
    ctx->pc = 0x80004D90u;
    // 80004D90: .long   0x00000000
    // embedded data

label_80004D94:
    ctx->pc = 0x80004D94u;
    // 80004D94: .long   0x00000000
    // embedded data

label_80004D98:
    ctx->pc = 0x80004D98u;
    // 80004D98: .long   0x00000000
    // embedded data

label_80004D9C:
    ctx->pc = 0x80004D9Cu;
    // 80004D9C: .long   0x00000000
    // embedded data

label_80004DA0:
    ctx->pc = 0x80004DA0u;
    // 80004DA0: .long   0x00000000
    // embedded data

label_80004DA4:
    ctx->pc = 0x80004DA4u;
    // 80004DA4: .long   0x00000000
    // embedded data

label_80004DA8:
    ctx->pc = 0x80004DA8u;
    // 80004DA8: .long   0x00000000
    // embedded data

label_80004DAC:
    ctx->pc = 0x80004DACu;
    // 80004DAC: .long   0x00000000
    // embedded data

label_80004DB0:
    ctx->pc = 0x80004DB0u;
    // 80004DB0: .long   0x00000000
    // embedded data

label_80004DB4:
    ctx->pc = 0x80004DB4u;
    // 80004DB4: .long   0x00000000
    // embedded data

label_80004DB8:
    ctx->pc = 0x80004DB8u;
    // 80004DB8: .long   0x00000000
    // embedded data

label_80004DBC:
    ctx->pc = 0x80004DBCu;
    // 80004DBC: .long   0x00000000
    // embedded data

label_80004DC0:
    ctx->pc = 0x80004DC0u;
    // 80004DC0: .long   0x00000000
    // embedded data

label_80004DC4:
    ctx->pc = 0x80004DC4u;
    // 80004DC4: .long   0x00000000
    // embedded data

label_80004DC8:
    ctx->pc = 0x80004DC8u;
    // 80004DC8: .long   0x00000000
    // embedded data

label_80004DCC:
    ctx->pc = 0x80004DCCu;
    // 80004DCC: .long   0x00000000
    // embedded data

label_80004DD0:
    ctx->pc = 0x80004DD0u;
    // 80004DD0: .long   0x00000000
    // embedded data

label_80004DD4:
    ctx->pc = 0x80004DD4u;
    // 80004DD4: .long   0x00000000
    // embedded data

label_80004DD8:
    ctx->pc = 0x80004DD8u;
    // 80004DD8: .long   0x00000000
    // embedded data

label_80004DDC:
    ctx->pc = 0x80004DDCu;
    // 80004DDC: .long   0x00000000
    // embedded data

label_80004DE0:
    ctx->pc = 0x80004DE0u;
    // 80004DE0: .long   0x00000000
    // embedded data

label_80004DE4:
    ctx->pc = 0x80004DE4u;
    // 80004DE4: .long   0x00000000
    // embedded data

label_80004DE8:
    ctx->pc = 0x80004DE8u;
    // 80004DE8: .long   0x00000000
    // embedded data

label_80004DEC:
    ctx->pc = 0x80004DECu;
    // 80004DEC: .long   0x00000000
    // embedded data

label_80004DF0:
    ctx->pc = 0x80004DF0u;
    // 80004DF0: .long   0x00000000
    // embedded data

label_80004DF4:
    ctx->pc = 0x80004DF4u;
    // 80004DF4: .long   0x00000000
    // embedded data

label_80004DF8:
    ctx->pc = 0x80004DF8u;
    // 80004DF8: .long   0x00000000
    // embedded data

label_80004DFC:
    ctx->pc = 0x80004DFCu;
    // 80004DFC: .long   0x00000000
    // embedded data

label_80004E00:
    ctx->pc = 0x80004E00u;
    // 80004E00: .long   0x00000000
    // embedded data

label_80004E04:
    ctx->pc = 0x80004E04u;
    // 80004E04: .long   0x00000000
    // embedded data

label_80004E08:
    ctx->pc = 0x80004E08u;
    // 80004E08: .long   0x00000000
    // embedded data

label_80004E0C:
    ctx->pc = 0x80004E0Cu;
    // 80004E0C: .long   0x00000000
    // embedded data

label_80004E10:
    ctx->pc = 0x80004E10u;
    // 80004E10: .long   0x00000000
    // embedded data

label_80004E14:
    ctx->pc = 0x80004E14u;
    // 80004E14: .long   0x00000000
    // embedded data

label_80004E18:
    ctx->pc = 0x80004E18u;
    // 80004E18: .long   0x00000000
    // embedded data

label_80004E1C:
    ctx->pc = 0x80004E1Cu;
    // 80004E1C: .long   0x00000000
    // embedded data

label_80004E20:
    ctx->pc = 0x80004E20u;
    // 80004E20: .long   0x00000000
    // embedded data

label_80004E24:
    ctx->pc = 0x80004E24u;
    // 80004E24: .long   0x00000000
    // embedded data

label_80004E28:
    ctx->pc = 0x80004E28u;
    // 80004E28: .long   0x00000000
    // embedded data

label_80004E2C:
    ctx->pc = 0x80004E2Cu;
    // 80004E2C: .long   0x00000000
    // embedded data

label_80004E30:
    ctx->pc = 0x80004E30u;
    // 80004E30: .long   0x00000000
    // embedded data

label_80004E34:
    ctx->pc = 0x80004E34u;
    // 80004E34: .long   0x00000000
    // embedded data

label_80004E38:
    ctx->pc = 0x80004E38u;
    // 80004E38: .long   0x00000000
    // embedded data

label_80004E3C:
    ctx->pc = 0x80004E3Cu;
    // 80004E3C: .long   0x00000000
    // embedded data

label_80004E40:
    ctx->pc = 0x80004E40u;
    // 80004E40: .long   0x00000000
    // embedded data

label_80004E44:
    ctx->pc = 0x80004E44u;
    // 80004E44: .long   0x00000000
    // embedded data

label_80004E48:
    ctx->pc = 0x80004E48u;
    // 80004E48: .long   0x00000000
    // embedded data

label_80004E4C:
    ctx->pc = 0x80004E4Cu;
    // 80004E4C: .long   0x00000000
    // embedded data

label_80004E50:
    ctx->pc = 0x80004E50u;
    // 80004E50: .long   0x00000000
    // embedded data

label_80004E54:
    ctx->pc = 0x80004E54u;
    // 80004E54: .long   0x00000000
    // embedded data

label_80004E58:
    ctx->pc = 0x80004E58u;
    // 80004E58: .long   0x00000000
    // embedded data

label_80004E5C:
    ctx->pc = 0x80004E5Cu;
    // 80004E5C: .long   0x00000000
    // embedded data

label_80004E60:
    ctx->pc = 0x80004E60u;
    // 80004E60: .long   0x00000000
    // embedded data

label_80004E64:
    ctx->pc = 0x80004E64u;
    // 80004E64: .long   0x00000000
    // embedded data

label_80004E68:
    ctx->pc = 0x80004E68u;
    // 80004E68: .long   0x00000000
    // embedded data

label_80004E6C:
    ctx->pc = 0x80004E6Cu;
    // 80004E6C: .long   0x00000000
    // embedded data

label_80004E70:
    ctx->pc = 0x80004E70u;
    // 80004E70: .long   0x00000000
    // embedded data

label_80004E74:
    ctx->pc = 0x80004E74u;
    // 80004E74: .long   0x00000000
    // embedded data

label_80004E78:
    ctx->pc = 0x80004E78u;
    // 80004E78: .long   0x00000000
    // embedded data

label_80004E7C:
    ctx->pc = 0x80004E7Cu;
    // 80004E7C: .long   0x00000000
    // embedded data

label_80004E80:
    ctx->pc = 0x80004E80u;
    // 80004E80: .long   0x00000000
    // embedded data

label_80004E84:
    ctx->pc = 0x80004E84u;
    // 80004E84: .long   0x00000000
    // embedded data

label_80004E88:
    ctx->pc = 0x80004E88u;
    // 80004E88: .long   0x00000000
    // embedded data

label_80004E8C:
    ctx->pc = 0x80004E8Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004E8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004E8Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004E90:
    ctx->pc = 0x80004E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004E90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004E90u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004E94:
    ctx->pc = 0x80004E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004E94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004E94u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004E98:
    ctx->pc = 0x80004E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80004E98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004E9C:
    ctx->pc = 0x80004E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80004E9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004EA0:
    ctx->pc = 0x80004EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004EA0u)) return;
    // 80004EA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004EA4:
    ctx->pc = 0x80004EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004EA4u)) return;
    // 80004EA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004EA8:
    ctx->pc = 0x80004EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80004EA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004EAC:
    ctx->pc = 0x80004EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004EACu)) return;
    // 80004EAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004EB0:
    ctx->pc = 0x80004EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004EB0u)) return;
    // 80004EB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80004EB4:
    ctx->pc = 0x80004EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80004EB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004EB8:
    ctx->pc = 0x80004EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004EB8u)) return;
    // 80004EB8: li      r3, 7168
    ctx->gpr[3] = (u32)(s32)(7168);

label_80004EBC:
    ctx->pc = 0x80004EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004EBCu)) return;
    // 80004EBC: rfi
    ppc_rfi(ctx, 0x80004EBCu);
    return;

label_80004EC0:
    ctx->pc = 0x80004EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80004EC0: .long   0x00000000
    // embedded data

label_80004EC4:
    ctx->pc = 0x80004EC4u;
    // 80004EC4: .long   0x00000000
    // embedded data

label_80004EC8:
    ctx->pc = 0x80004EC8u;
    // 80004EC8: .long   0x00000000
    // embedded data

label_80004ECC:
    ctx->pc = 0x80004ECCu;
    // 80004ECC: .long   0x00000000
    // embedded data

label_80004ED0:
    ctx->pc = 0x80004ED0u;
    // 80004ED0: .long   0x00000000
    // embedded data

label_80004ED4:
    ctx->pc = 0x80004ED4u;
    // 80004ED4: .long   0x00000000
    // embedded data

label_80004ED8:
    ctx->pc = 0x80004ED8u;
    // 80004ED8: .long   0x00000000
    // embedded data

label_80004EDC:
    ctx->pc = 0x80004EDCu;
    // 80004EDC: .long   0x00000000
    // embedded data

label_80004EE0:
    ctx->pc = 0x80004EE0u;
    // 80004EE0: .long   0x00000000
    // embedded data

label_80004EE4:
    ctx->pc = 0x80004EE4u;
    // 80004EE4: .long   0x00000000
    // embedded data

label_80004EE8:
    ctx->pc = 0x80004EE8u;
    // 80004EE8: .long   0x00000000
    // embedded data

label_80004EEC:
    ctx->pc = 0x80004EECu;
    // 80004EEC: .long   0x00000000
    // embedded data

label_80004EF0:
    ctx->pc = 0x80004EF0u;
    // 80004EF0: .long   0x00000000
    // embedded data

label_80004EF4:
    ctx->pc = 0x80004EF4u;
    // 80004EF4: .long   0x00000000
    // embedded data

label_80004EF8:
    ctx->pc = 0x80004EF8u;
    // 80004EF8: .long   0x00000000
    // embedded data

label_80004EFC:
    ctx->pc = 0x80004EFCu;
    // 80004EFC: .long   0x00000000
    // embedded data

label_80004F00:
    ctx->pc = 0x80004F00u;
    // 80004F00: .long   0x00000000
    // embedded data

label_80004F04:
    ctx->pc = 0x80004F04u;
    // 80004F04: .long   0x00000000
    // embedded data

label_80004F08:
    ctx->pc = 0x80004F08u;
    // 80004F08: .long   0x00000000
    // embedded data

label_80004F0C:
    ctx->pc = 0x80004F0Cu;
    // 80004F0C: .long   0x00000000
    // embedded data

label_80004F10:
    ctx->pc = 0x80004F10u;
    // 80004F10: .long   0x00000000
    // embedded data

label_80004F14:
    ctx->pc = 0x80004F14u;
    // 80004F14: .long   0x00000000
    // embedded data

label_80004F18:
    ctx->pc = 0x80004F18u;
    // 80004F18: .long   0x00000000
    // embedded data

label_80004F1C:
    ctx->pc = 0x80004F1Cu;
    // 80004F1C: .long   0x00000000
    // embedded data

label_80004F20:
    ctx->pc = 0x80004F20u;
    // 80004F20: .long   0x00000000
    // embedded data

label_80004F24:
    ctx->pc = 0x80004F24u;
    // 80004F24: .long   0x00000000
    // embedded data

label_80004F28:
    ctx->pc = 0x80004F28u;
    // 80004F28: .long   0x00000000
    // embedded data

label_80004F2C:
    ctx->pc = 0x80004F2Cu;
    // 80004F2C: .long   0x00000000
    // embedded data

label_80004F30:
    ctx->pc = 0x80004F30u;
    // 80004F30: .long   0x00000000
    // embedded data

label_80004F34:
    ctx->pc = 0x80004F34u;
    // 80004F34: .long   0x00000000
    // embedded data

label_80004F38:
    ctx->pc = 0x80004F38u;
    // 80004F38: .long   0x00000000
    // embedded data

label_80004F3C:
    ctx->pc = 0x80004F3Cu;
    // 80004F3C: .long   0x00000000
    // embedded data

label_80004F40:
    ctx->pc = 0x80004F40u;
    // 80004F40: .long   0x00000000
    // embedded data

label_80004F44:
    ctx->pc = 0x80004F44u;
    // 80004F44: .long   0x00000000
    // embedded data

label_80004F48:
    ctx->pc = 0x80004F48u;
    // 80004F48: .long   0x00000000
    // embedded data

label_80004F4C:
    ctx->pc = 0x80004F4Cu;
    // 80004F4C: .long   0x00000000
    // embedded data

label_80004F50:
    ctx->pc = 0x80004F50u;
    // 80004F50: .long   0x00000000
    // embedded data

label_80004F54:
    ctx->pc = 0x80004F54u;
    // 80004F54: .long   0x00000000
    // embedded data

label_80004F58:
    ctx->pc = 0x80004F58u;
    // 80004F58: .long   0x00000000
    // embedded data

label_80004F5C:
    ctx->pc = 0x80004F5Cu;
    // 80004F5C: .long   0x00000000
    // embedded data

label_80004F60:
    ctx->pc = 0x80004F60u;
    // 80004F60: .long   0x00000000
    // embedded data

label_80004F64:
    ctx->pc = 0x80004F64u;
    // 80004F64: .long   0x00000000
    // embedded data

label_80004F68:
    ctx->pc = 0x80004F68u;
    // 80004F68: .long   0x00000000
    // embedded data

label_80004F6C:
    ctx->pc = 0x80004F6Cu;
    // 80004F6C: .long   0x00000000
    // embedded data

label_80004F70:
    ctx->pc = 0x80004F70u;
    // 80004F70: .long   0x00000000
    // embedded data

label_80004F74:
    ctx->pc = 0x80004F74u;
    // 80004F74: .long   0x00000000
    // embedded data

label_80004F78:
    ctx->pc = 0x80004F78u;
    // 80004F78: .long   0x00000000
    // embedded data

label_80004F7C:
    ctx->pc = 0x80004F7Cu;
    // 80004F7C: .long   0x00000000
    // embedded data

label_80004F80:
    ctx->pc = 0x80004F80u;
    // 80004F80: .long   0x00000000
    // embedded data

label_80004F84:
    ctx->pc = 0x80004F84u;
    // 80004F84: .long   0x00000000
    // embedded data

label_80004F88:
    ctx->pc = 0x80004F88u;
    // 80004F88: .long   0x00000000
    // embedded data

label_80004F8C:
    ctx->pc = 0x80004F8Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004F8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004F8Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004F90:
    ctx->pc = 0x80004F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004F90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004F90u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004F94:
    ctx->pc = 0x80004F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80004F94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004F94u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004F98:
    ctx->pc = 0x80004F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80004F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80004F98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004F9C:
    ctx->pc = 0x80004F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80004F9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004FA0:
    ctx->pc = 0x80004FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004FA0u)) return;
    // 80004FA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004FA4:
    ctx->pc = 0x80004FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004FA4u)) return;
    // 80004FA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004FA8:
    ctx->pc = 0x80004FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80004FA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004FAC:
    ctx->pc = 0x80004FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004FACu)) return;
    // 80004FAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004FB0:
    ctx->pc = 0x80004FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004FB0u)) return;
    // 80004FB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80004FB4:
    ctx->pc = 0x80004FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80004FB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80004FB8:
    ctx->pc = 0x80004FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80004FB8u)) return;
    // 80004FB8: li      r3, 7424
    ctx->gpr[3] = (u32)(s32)(7424);

label_80004FBC:
    ctx->pc = 0x80004FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80004FBCu)) return;
    // 80004FBC: rfi
    ppc_rfi(ctx, 0x80004FBCu);
    return;

label_80004FC0:
    ctx->pc = 0x80004FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 80004FC0: .long   0x00000000
    // embedded data

label_80004FC4:
    ctx->pc = 0x80004FC4u;
    // 80004FC4: .long   0x00000000
    // embedded data

label_80004FC8:
    ctx->pc = 0x80004FC8u;
    // 80004FC8: .long   0x00000000
    // embedded data

label_80004FCC:
    ctx->pc = 0x80004FCCu;
    // 80004FCC: .long   0x00000000
    // embedded data

label_80004FD0:
    ctx->pc = 0x80004FD0u;
    // 80004FD0: .long   0x00000000
    // embedded data

label_80004FD4:
    ctx->pc = 0x80004FD4u;
    // 80004FD4: .long   0x00000000
    // embedded data

label_80004FD8:
    ctx->pc = 0x80004FD8u;
    // 80004FD8: .long   0x00000000
    // embedded data

label_80004FDC:
    ctx->pc = 0x80004FDCu;
    // 80004FDC: .long   0x00000000
    // embedded data

label_80004FE0:
    ctx->pc = 0x80004FE0u;
    // 80004FE0: .long   0x00000000
    // embedded data

label_80004FE4:
    ctx->pc = 0x80004FE4u;
    // 80004FE4: .long   0x00000000
    // embedded data

label_80004FE8:
    ctx->pc = 0x80004FE8u;
    // 80004FE8: .long   0x00000000
    // embedded data

label_80004FEC:
    ctx->pc = 0x80004FECu;
    // 80004FEC: .long   0x00000000
    // embedded data

label_80004FF0:
    ctx->pc = 0x80004FF0u;
    // 80004FF0: .long   0x00000000
    // embedded data

label_80004FF4:
    ctx->pc = 0x80004FF4u;
    // 80004FF4: .long   0x00000000
    // embedded data

label_80004FF8:
    ctx->pc = 0x80004FF8u;
    // 80004FF8: .long   0x00000000
    // embedded data

label_80004FFC:
    ctx->pc = 0x80004FFCu;
    // 80004FFC: .long   0x00000000
    // embedded data

label_80005000:
    ctx->pc = 0x80005000u;
    // 80005000: .long   0x00000000
    // embedded data

label_80005004:
    ctx->pc = 0x80005004u;
    // 80005004: .long   0x00000000
    // embedded data

label_80005008:
    ctx->pc = 0x80005008u;
    // 80005008: .long   0x00000000
    // embedded data

label_8000500C:
    ctx->pc = 0x8000500Cu;
    // 8000500C: .long   0x00000000
    // embedded data

label_80005010:
    ctx->pc = 0x80005010u;
    // 80005010: .long   0x00000000
    // embedded data

label_80005014:
    ctx->pc = 0x80005014u;
    // 80005014: .long   0x00000000
    // embedded data

label_80005018:
    ctx->pc = 0x80005018u;
    // 80005018: .long   0x00000000
    // embedded data

label_8000501C:
    ctx->pc = 0x8000501Cu;
    // 8000501C: .long   0x00000000
    // embedded data

label_80005020:
    ctx->pc = 0x80005020u;
    // 80005020: .long   0x00000000
    // embedded data

label_80005024:
    ctx->pc = 0x80005024u;
    // 80005024: .long   0x00000000
    // embedded data

label_80005028:
    ctx->pc = 0x80005028u;
    // 80005028: .long   0x00000000
    // embedded data

label_8000502C:
    ctx->pc = 0x8000502Cu;
    // 8000502C: .long   0x00000000
    // embedded data

label_80005030:
    ctx->pc = 0x80005030u;
    // 80005030: .long   0x00000000
    // embedded data

label_80005034:
    ctx->pc = 0x80005034u;
    // 80005034: .long   0x00000000
    // embedded data

label_80005038:
    ctx->pc = 0x80005038u;
    // 80005038: .long   0x00000000
    // embedded data

label_8000503C:
    ctx->pc = 0x8000503Cu;
    // 8000503C: .long   0x00000000
    // embedded data

label_80005040:
    ctx->pc = 0x80005040u;
    // 80005040: .long   0x00000000
    // embedded data

label_80005044:
    ctx->pc = 0x80005044u;
    // 80005044: .long   0x00000000
    // embedded data

label_80005048:
    ctx->pc = 0x80005048u;
    // 80005048: .long   0x00000000
    // embedded data

label_8000504C:
    ctx->pc = 0x8000504Cu;
    // 8000504C: .long   0x00000000
    // embedded data

label_80005050:
    ctx->pc = 0x80005050u;
    // 80005050: .long   0x00000000
    // embedded data

label_80005054:
    ctx->pc = 0x80005054u;
    // 80005054: .long   0x00000000
    // embedded data

label_80005058:
    ctx->pc = 0x80005058u;
    // 80005058: .long   0x00000000
    // embedded data

label_8000505C:
    ctx->pc = 0x8000505Cu;
    // 8000505C: .long   0x00000000
    // embedded data

label_80005060:
    ctx->pc = 0x80005060u;
    // 80005060: .long   0x00000000
    // embedded data

label_80005064:
    ctx->pc = 0x80005064u;
    // 80005064: .long   0x00000000
    // embedded data

label_80005068:
    ctx->pc = 0x80005068u;
    // 80005068: .long   0x00000000
    // embedded data

label_8000506C:
    ctx->pc = 0x8000506Cu;
    // 8000506C: .long   0x00000000
    // embedded data

label_80005070:
    ctx->pc = 0x80005070u;
    // 80005070: .long   0x00000000
    // embedded data

label_80005074:
    ctx->pc = 0x80005074u;
    // 80005074: .long   0x00000000
    // embedded data

label_80005078:
    ctx->pc = 0x80005078u;
    // 80005078: .long   0x00000000
    // embedded data

label_8000507C:
    ctx->pc = 0x8000507Cu;
    // 8000507C: .long   0x00000000
    // embedded data

label_80005080:
    ctx->pc = 0x80005080u;
    // 80005080: .long   0x00000000
    // embedded data

label_80005084:
    ctx->pc = 0x80005084u;
    // 80005084: .long   0x00000000
    // embedded data

label_80005088:
    ctx->pc = 0x80005088u;
    // 80005088: .long   0x00000000
    // embedded data

label_8000508C:
    ctx->pc = 0x8000508Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000508C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000508Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005090:
    ctx->pc = 0x80005090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80005090: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005090u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005094:
    ctx->pc = 0x80005094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80005094: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005094u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005098:
    ctx->pc = 0x80005098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80005098: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000509C:
    ctx->pc = 0x8000509Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000509Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000509C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800050A0:
    ctx->pc = 0x800050A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800050A0u)) return;
    // 800050A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800050A4:
    ctx->pc = 0x800050A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800050A4u)) return;
    // 800050A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800050A8:
    ctx->pc = 0x800050A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800050A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800050A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800050AC:
    ctx->pc = 0x800050ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800050ACu)) return;
    // 800050AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800050B0:
    ctx->pc = 0x800050B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800050B0u)) return;
    // 800050B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800050B4:
    ctx->pc = 0x800050B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800050B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800050B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800050B8:
    ctx->pc = 0x800050B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800050B8u)) return;
    // 800050B8: li      r3, 7680
    ctx->gpr[3] = (u32)(s32)(7680);

label_800050BC:
    ctx->pc = 0x800050BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800050BCu)) return;
    // 800050BC: rfi
    ppc_rfi(ctx, 0x800050BCu);
    return;

label_800050C0:
    ctx->pc = 0x800050C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800050C0: .long   0x00000000
    // embedded data

label_800050C4:
    ctx->pc = 0x800050C4u;
    // 800050C4: .long   0x00000000
    // embedded data

label_800050C8:
    ctx->pc = 0x800050C8u;
    // 800050C8: .long   0x00000000
    // embedded data

label_800050CC:
    ctx->pc = 0x800050CCu;
    // 800050CC: .long   0x00000000
    // embedded data

label_800050D0:
    ctx->pc = 0x800050D0u;
    // 800050D0: .long   0x00000000
    // embedded data

label_800050D4:
    ctx->pc = 0x800050D4u;
    // 800050D4: .long   0x00000000
    // embedded data

label_800050D8:
    ctx->pc = 0x800050D8u;
    // 800050D8: .long   0x00000000
    // embedded data

label_800050DC:
    ctx->pc = 0x800050DCu;
    // 800050DC: .long   0x00000000
    // embedded data

label_800050E0:
    ctx->pc = 0x800050E0u;
    // 800050E0: .long   0x00000000
    // embedded data

label_800050E4:
    ctx->pc = 0x800050E4u;
    // 800050E4: .long   0x00000000
    // embedded data

label_800050E8:
    ctx->pc = 0x800050E8u;
    // 800050E8: .long   0x00000000
    // embedded data

label_800050EC:
    ctx->pc = 0x800050ECu;
    // 800050EC: .long   0x00000000
    // embedded data

label_800050F0:
    ctx->pc = 0x800050F0u;
    // 800050F0: .long   0x00000000
    // embedded data

label_800050F4:
    ctx->pc = 0x800050F4u;
    // 800050F4: .long   0x00000000
    // embedded data

label_800050F8:
    ctx->pc = 0x800050F8u;
    // 800050F8: .long   0x00000000
    // embedded data

label_800050FC:
    ctx->pc = 0x800050FCu;
    // 800050FC: .long   0x00000000
    // embedded data

label_80005100:
    ctx->pc = 0x80005100u;
    // 80005100: .long   0x00000000
    // embedded data

label_80005104:
    ctx->pc = 0x80005104u;
    // 80005104: .long   0x00000000
    // embedded data

label_80005108:
    ctx->pc = 0x80005108u;
    // 80005108: .long   0x00000000
    // embedded data

label_8000510C:
    ctx->pc = 0x8000510Cu;
    // 8000510C: .long   0x00000000
    // embedded data

label_80005110:
    ctx->pc = 0x80005110u;
    // 80005110: .long   0x00000000
    // embedded data

label_80005114:
    ctx->pc = 0x80005114u;
    // 80005114: .long   0x00000000
    // embedded data

label_80005118:
    ctx->pc = 0x80005118u;
    // 80005118: .long   0x00000000
    // embedded data

label_8000511C:
    ctx->pc = 0x8000511Cu;
    // 8000511C: .long   0x00000000
    // embedded data

label_80005120:
    ctx->pc = 0x80005120u;
    // 80005120: .long   0x00000000
    // embedded data

label_80005124:
    ctx->pc = 0x80005124u;
    // 80005124: .long   0x00000000
    // embedded data

label_80005128:
    ctx->pc = 0x80005128u;
    // 80005128: .long   0x00000000
    // embedded data

label_8000512C:
    ctx->pc = 0x8000512Cu;
    // 8000512C: .long   0x00000000
    // embedded data

label_80005130:
    ctx->pc = 0x80005130u;
    // 80005130: .long   0x00000000
    // embedded data

label_80005134:
    ctx->pc = 0x80005134u;
    // 80005134: .long   0x00000000
    // embedded data

label_80005138:
    ctx->pc = 0x80005138u;
    // 80005138: .long   0x00000000
    // embedded data

label_8000513C:
    ctx->pc = 0x8000513Cu;
    // 8000513C: .long   0x00000000
    // embedded data

label_80005140:
    ctx->pc = 0x80005140u;
    // 80005140: .long   0x00000000
    // embedded data

label_80005144:
    ctx->pc = 0x80005144u;
    // 80005144: .long   0x00000000
    // embedded data

label_80005148:
    ctx->pc = 0x80005148u;
    // 80005148: .long   0x00000000
    // embedded data

label_8000514C:
    ctx->pc = 0x8000514Cu;
    // 8000514C: .long   0x00000000
    // embedded data

label_80005150:
    ctx->pc = 0x80005150u;
    // 80005150: .long   0x00000000
    // embedded data

label_80005154:
    ctx->pc = 0x80005154u;
    // 80005154: .long   0x00000000
    // embedded data

label_80005158:
    ctx->pc = 0x80005158u;
    // 80005158: .long   0x00000000
    // embedded data

label_8000515C:
    ctx->pc = 0x8000515Cu;
    // 8000515C: .long   0x00000000
    // embedded data

label_80005160:
    ctx->pc = 0x80005160u;
    // 80005160: .long   0x00000000
    // embedded data

label_80005164:
    ctx->pc = 0x80005164u;
    // 80005164: .long   0x00000000
    // embedded data

label_80005168:
    ctx->pc = 0x80005168u;
    // 80005168: .long   0x00000000
    // embedded data

label_8000516C:
    ctx->pc = 0x8000516Cu;
    // 8000516C: .long   0x00000000
    // embedded data

label_80005170:
    ctx->pc = 0x80005170u;
    // 80005170: .long   0x00000000
    // embedded data

label_80005174:
    ctx->pc = 0x80005174u;
    // 80005174: .long   0x00000000
    // embedded data

label_80005178:
    ctx->pc = 0x80005178u;
    // 80005178: .long   0x00000000
    // embedded data

label_8000517C:
    ctx->pc = 0x8000517Cu;
    // 8000517C: .long   0x00000000
    // embedded data

label_80005180:
    ctx->pc = 0x80005180u;
    // 80005180: .long   0x00000000
    // embedded data

label_80005184:
    ctx->pc = 0x80005184u;
    // 80005184: .long   0x00000000
    // embedded data

label_80005188:
    ctx->pc = 0x80005188u;
    // 80005188: .long   0x00000000
    // embedded data

label_8000518C:
    ctx->pc = 0x8000518Cu;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000518C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000518Cu);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005190:
    ctx->pc = 0x80005190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80005190: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005190u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005194:
    ctx->pc = 0x80005194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80005194: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005194u);
    return;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005198:
    ctx->pc = 0x80005198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80005198: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000519C:
    ctx->pc = 0x8000519Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000519Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000519C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051A0:
    ctx->pc = 0x800051A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051A0u)) return;
    // 800051A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800051A4:
    ctx->pc = 0x800051A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051A4u)) return;
    // 800051A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800051A8:
    ctx->pc = 0x800051A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800051A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800051A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051AC:
    ctx->pc = 0x800051ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051ACu)) return;
    // 800051AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800051B0:
    ctx->pc = 0x800051B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051B0u)) return;
    // 800051B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800051B4:
    ctx->pc = 0x800051B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800051B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800051B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051B8:
    ctx->pc = 0x800051B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051B8u)) return;
    // 800051B8: li      r3, 7936
    ctx->gpr[3] = (u32)(s32)(7936);

label_800051BC:
    ctx->pc = 0x800051BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800051BCu)) return;
    // 800051BC: rfi
    ppc_rfi(ctx, 0x800051BCu);
    return;

label_800051C0:
    ctx->pc = 0x800051C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800051C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 800051C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051C4:
    ctx->pc = 0x800051C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 800051C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051C8:
    ctx->pc = 0x800051C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051C8u)) return;
    // 800051C8: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_800051CC:
    ctx->pc = 0x800051CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 800051CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051D0:
    ctx->pc = 0x800051D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051D0u)) return;
    // 800051D0: addi    r3, r3, -30056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30056);

label_800051D4:
    ctx->pc = 0x800051D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x800051D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800051D4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051D8:
    ctx->pc = 0x800051D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800051D8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051DC:
    ctx->pc = 0x800051DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051DCu)) return;
    // 800051DC: cmplwi  r3, 0x0044
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0044u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800051E0:
    ctx->pc = 0x800051E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051E0u)) return;
    // 800051E0: bc    12, 1, 0x8000520C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000520C;
        }
    }

label_800051E4:
    ctx->pc = 0x800051E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800051E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 800051E4: addi    r0, r3, 16384
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16384);

label_800051E8:
    ctx->pc = 0x800051E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051E8u)) return;
    // 800051E8: cmplwi  r0, 0x0044
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0044u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800051EC:
    ctx->pc = 0x800051ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051ECu)) return;
    // 800051EC: bc    4, 1, 0x8000520C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000520C;
        }
    }

label_800051F0:
    ctx->pc = 0x800051F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800051F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 800051F0: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_800051F4:
    ctx->pc = 0x800051F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051F4u)) return;
    // 800051F4: addi    r3, r3, -31296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31296);

label_800051F8:
    ctx->pc = 0x800051F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800051F8: lwz     r0, 568(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800051FC:
    ctx->pc = 0x800051FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800051FCu)) return;
    // 800051FC: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005200:
    ctx->pc = 0x80005200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005200u)) return;
    // 80005200: bc    12, 2, 0x8000520C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000520C;
        }
    }

label_80005204:
    ctx->pc = 0x80005204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005204: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_80005208:
    ctx->pc = 0x80005208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005208u)) return;
    // 80005208: b       0x80005214
    {
            goto label_80005214;
    }

label_8000520C:
    ctx->pc = 0x8000520Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000520Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8000520C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80005210:
    ctx->pc = 0x80005210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005210u)) return;
    // 80005210: addi    r5, r3, 68
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(68);

label_80005214:
    ctx->pc = 0x80005214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80005214: lis     r4, -32760
    ctx->gpr[4] = ((u32)(s32)(-32760) << 16);

label_80005218:
    ctx->pc = 0x80005218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005218u)) return;
    // 80005218: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_8000521C:
    ctx->pc = 0x8000521Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000521Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8000521C: lwz     r29, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005220:
    ctx->pc = 0x80005220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005220u)) return;
    // 80005220: addi    r31, r4, -22112
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-22112);

label_80005224:
    ctx->pc = 0x80005224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005224u)) return;
    // 80005224: addi    r30, r3, -31296
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-31296);

label_80005228:
    ctx->pc = 0x80005228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005228u)) return;
    // 80005228: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8000522C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000522Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8000522C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80005230:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005230u)) return;
    // 80005230: slw   r0, r0, r28
    {
        u32 sh = ctx->gpr[28] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80005234:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005234u)) return;
    // 80005234: and.   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005238:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005238u)) return;
    // 80005238: bc    12, 2, 0x800052A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800052A0;
        }
    }

label_8000523C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000523Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8000523C: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_80005240:
    ctx->pc = 0x80005240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80005240: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005244:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005244u)) return;
    // 80005244: addi    r3, r3, -30056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30056);

label_80005248:
    ctx->pc = 0x80005248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80005248: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000524C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000524Cu)) return;
    // 8000524C: cmplw   r6, r3
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005250:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005250u)) return;
    // 80005250: bc    12, 0, 0x80005274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005274;
        }
    }

label_80005254:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005254: addi    r0, r3, 16384
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16384);

label_80005258:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005258u)) return;
    // 80005258: cmplw   r6, r0
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000525C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000525Cu)) return;
    // 8000525C: bc    4, 0, 0x80005274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005274;
        }
    }

label_80005260:
    ctx->pc = 0x80005260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80005260: lwz     r0, 568(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005264:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005264u)) return;
    // 80005264: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005268:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005268u)) return;
    // 80005268: bc    12, 2, 0x80005274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005274;
        }
    }

label_8000526C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000526Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8000526C: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80005270:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005270u)) return;
    // 80005270: b       0x8000527C
    {
            goto label_8000527C;
    }

label_80005274:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005274: rlwinm r0, r6, 0, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x3FFFFFFFu;
    }

label_80005278:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005278u)) return;
    // 80005278: oris    r27, r0, 0x8000
    ctx->gpr[27] = ctx->gpr[0] | (0x8000u << 16);

label_8000527C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000527Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8000527C: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_80005280:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005280u)) return;
    // 80005280: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005284:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005284u)) return;
    // 80005284: addi    r0, r4, 12940
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(12940);

label_80005288:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005288u)) return;
    // 80005288: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_8000528C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000528Cu)) return;
    // 8000528C: add   r4, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80005290:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005290u)) return;
    // 80005290: bl      0x80003268
    {
            ctx->lr = 0x80005294u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003268u;
                return;
            }
            goto label_80003268;
    }

label_80005294:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005294: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005298:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005298u)) return;
    // 80005298: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_8000529C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000529Cu)) return;
    // 8000529C: bl      0x80018C8C
    {
            ctx->lr = 0x800052A0u;
            ctx->pc = 0x80018C8Cu;
            return;
    }

label_800052A0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800052A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 800052A0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_800052A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052A4u)) return;
    // 800052A4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_800052A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052A8u)) return;
    // 800052A8: cmpwi   r28, 14
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800052AC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052ACu)) return;
    // 800052AC: bc    4, 1, 0x8000522C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000522Cu;
                return;
            }
            goto label_8000522C;
        }
    }

label_800052B0:
    ctx->pc = 0x800052B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800052B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 800052B0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052B4:
    ctx->pc = 0x800052B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 800052B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052B8:
    ctx->pc = 0x800052B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800052B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800052B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052BC:
    ctx->pc = 0x800052BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052BCu)) return;
    // 800052BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800052C0:
    ctx->pc = 0x800052C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052C0u)) return;
    // 800052C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800052C4:
    ctx->pc = 0x800052C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800052C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800052C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052C8:
    ctx->pc = 0x800052C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052C8u)) return;
    // 800052C8: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_800052CC:
    ctx->pc = 0x800052CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 800052CC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052D0:
    ctx->pc = 0x800052D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 800052D0: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052D4:
    ctx->pc = 0x800052D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800052D4: lhz     r0, 12516(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12516);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052D8:
    ctx->pc = 0x800052D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052D8u)) return;
    // 800052D8: andi.   r0, r0, 0x0EEF
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0EEFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800052DC:
    ctx->pc = 0x800052DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052DCu)) return;
    // 800052DC: cmpwi   r0, 3823
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3823);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800052E0:
    ctx->pc = 0x800052E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052E0u)) return;
    // 800052E0: bc    4, 2, 0x800052F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800052F4;
        }
    }

label_800052E4:
    ctx->pc = 0x800052E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800052E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 800052E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800052E8:
    ctx->pc = 0x800052E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052E8u)) return;
    // 800052E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800052EC:
    ctx->pc = 0x800052ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052ECu)) return;
    // 800052EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800052F0:
    ctx->pc = 0x800052F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052F0u)) return;
    // 800052F0: bl      0x80040744
    {
            ctx->lr = 0x800052F4u;
            ctx->pc = 0x80040744u;
            return;
    }

label_800052F4:
    ctx->pc = 0x800052F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800052F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 800052F4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800052F8:
    ctx->pc = 0x800052F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800052F8u)) return;
    // 800052F8: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_800052FC:
    ctx->pc = 0x800052FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800052FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800052FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005300:
    ctx->pc = 0x80005300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005300u)) return;
    // 80005300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005304:
    ctx->pc = 0x80005304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005304: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80005308:
    ctx->pc = 0x80005308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005308: stb     r0, -31176(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31176);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000530C:
    ctx->pc = 0x8000530Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000530Cu)) return;
    // 8000530C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005310:
    ctx->pc = 0x80005310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005310: lbz     r3, -31176(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31176);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005314:
    ctx->pc = 0x80005314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005314u)) return;
    // 80005314: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005318:
    ctx->pc = 0x80005318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80005318: bl      0x80005474
    {
            ctx->lr = 0x8000531Cu;
            goto label_80005474;
    }

label_8000531C:
    ctx->pc = 0x8000531Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000531Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8000531C: bl      0x800055C4
    {
            ctx->lr = 0x80005320u;
            goto label_800055C4;
    }

label_80005320:
    ctx->pc = 0x80005320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80005320: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80005324:
    ctx->pc = 0x80005324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80005324: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005328:
    ctx->pc = 0x80005328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80005328: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000532C:
    ctx->pc = 0x8000532Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000532Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8000532C: stw     r0, 0(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005330:
    ctx->pc = 0x80005330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005330u)) return;
    // 80005330: bl      0x80005504
    {
            ctx->lr = 0x80005334u;
            goto label_80005504;
    }

label_80005334:
    ctx->pc = 0x80005334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80005334: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80005338:
    ctx->pc = 0x80005338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005338u)) return;
    // 80005338: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_8000533C:
    ctx->pc = 0x8000533Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000533Cu)) return;
    // 8000533C: addi    r6, r6, 68
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(68);

label_80005340:
    ctx->pc = 0x80005340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80005340: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005344:
    ctx->pc = 0x80005344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005344u)) return;
    // 80005344: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_80005348:
    ctx->pc = 0x80005348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005348u)) return;
    // 80005348: addi    r6, r6, 244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(244);

label_8000534C:
    ctx->pc = 0x8000534Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000534Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8000534C: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005350:
    ctx->pc = 0x80005350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005350u)) return;
    // 80005350: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005354:
    ctx->pc = 0x80005354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005354u)) return;
    // 80005354: bc    12, 2, 0x80005360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005360;
        }
    }

label_80005358:
    ctx->pc = 0x80005358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005358: lwz     r7, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000535C:
    ctx->pc = 0x8000535Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000535Cu)) return;
    // 8000535C: b       0x80005380
    {
            goto label_80005380;
    }

label_80005360:
    ctx->pc = 0x80005360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80005360: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_80005364:
    ctx->pc = 0x80005364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005364u)) return;
    // 80005364: addi    r5, r5, 52
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(52);

label_80005368:
    ctx->pc = 0x80005368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80005368: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000536C:
    ctx->pc = 0x8000536Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000536Cu)) return;
    // 8000536C: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005370:
    ctx->pc = 0x80005370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005370u)) return;
    // 80005370: bc    12, 2, 0x800053BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800053BC;
        }
    }

label_80005374:
    ctx->pc = 0x80005374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005374: lis     r7, -32768
    ctx->gpr[7] = ((u32)(s32)(-32768) << 16);

label_80005378:
    ctx->pc = 0x80005378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005378u)) return;
    // 80005378: addi    r7, r7, 12520
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(12520);

label_8000537C:
    ctx->pc = 0x8000537Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000537Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8000537C: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005380:
    ctx->pc = 0x80005380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005380: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005384:
    ctx->pc = 0x80005384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005384u)) return;
    // 80005384: cmplwi  r7, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005388:
    ctx->pc = 0x80005388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005388u)) return;
    // 80005388: bc    12, 2, 0x800053AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800053AC;
        }
    }

label_8000538C:
    ctx->pc = 0x8000538Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000538Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8000538C: cmplwi  r7, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005390:
    ctx->pc = 0x80005390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005390u)) return;
    // 80005390: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005394:
    ctx->pc = 0x80005394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005394u)) return;
    // 80005394: bc    12, 2, 0x800053AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800053AC;
        }
    }

label_80005398:
    ctx->pc = 0x80005398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005398: cmplwi  r7, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000539C:
    ctx->pc = 0x8000539Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000539Cu)) return;
    // 8000539C: bc    4, 2, 0x800053BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800053BC;
        }
    }

label_800053A0:
    ctx->pc = 0x800053A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800053A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 800053A0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_800053A4:
    ctx->pc = 0x800053A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053A4u)) return;
    // 800053A4: bl      0x80005304
    {
            ctx->lr = 0x800053A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005304u;
                return;
            }
            goto label_80005304;
    }

label_800053A8:
    ctx->pc = 0x800053A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800053A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800053A8: b       0x800053BC
    {
            goto label_800053BC;
    }

label_800053AC:
    ctx->pc = 0x800053ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800053ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 800053AC: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800053B0:
    ctx->pc = 0x800053B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053B0u)) return;
    // 800053B0: addi    r6, r6, -22992
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22992);

label_800053B4:
    ctx->pc = 0x800053B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800053B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800053B4: mtlr    r6
    ctx->lr = ctx->gpr[6];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800053B8:
    ctx->pc = 0x800053B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053B8u)) return;
    // 800053B8: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x800053BCu;
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800053BC:
    ctx->pc = 0x800053BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800053BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 800053BC: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_800053C0:
    ctx->pc = 0x800053C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053C0u)) return;
    // 800053C0: addi    r6, r6, 244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(244);

label_800053C4:
    ctx->pc = 0x800053C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800053C4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800053C8:
    ctx->pc = 0x800053C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053C8u)) return;
    // 800053C8: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800053CC:
    ctx->pc = 0x800053CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053CCu)) return;
    // 800053CC: bc    13, 2, 0x8000541C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000541C;
        }
    }

label_800053D0:
    ctx->pc = 0x800053D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800053D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800053D0: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800053D4:
    ctx->pc = 0x800053D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053D4u)) return;
    // 800053D4: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800053D8:
    ctx->pc = 0x800053D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053D8u)) return;
    // 800053D8: bc    13, 2, 0x8000541C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000541C;
        }
    }

label_800053DC:
    ctx->pc = 0x800053DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800053DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 800053DC: add   r6, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_800053E0:
    ctx->pc = 0x800053E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800053E0: lwz     r14, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[14] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800053E4:
    ctx->pc = 0x800053E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053E4u)) return;
    // 800053E4: cmplwi  r14, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[14]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800053E8:
    ctx->pc = 0x800053E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053E8u)) return;
    // 800053E8: bc    12, 2, 0x8000541C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000541C;
        }
    }

label_800053EC:
    ctx->pc = 0x800053ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800053ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 800053EC: addi    r15, r6, 4
    ctx->gpr[15] = ctx->gpr[6] + (u32)(s32)(4);

label_800053F0:
    ctx->pc = 0x800053F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800053F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800053F0: mtctr    r14
    ctx->ctr = ctx->gpr[14];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800053F4:
    loop_800053F4(ctx);
    if (ctx->pc == 0x80005408u) goto label_80005408;
    return;
label_800053F8:
    ctx->pc = 0x800053F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 800053F8: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800053FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800053FCu)) return;
    // 800053FC: add   r7, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80005400:
    ctx->pc = 0x80005400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005400: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005404:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005404u)) return;
    // 80005404: bc    16, 0, 0x800053F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800053F4u;
                return;
            }
            goto label_800053F4;
        }
    }

label_80005408:
    ctx->pc = 0x80005408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80005408: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_8000540C:
    ctx->pc = 0x8000540Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000540Cu)) return;
    // 8000540C: addi    r5, r5, 52
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(52);

label_80005410:
    ctx->pc = 0x80005410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005410u)) return;
    // 80005410: rlwinm r7, r15, 0, 0, 26
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[15], 0u) & 0xFFFFFFE0u;
    }

label_80005414:
    ctx->pc = 0x80005414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005414: stw     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005418:
    ctx->pc = 0x80005418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005418u)) return;
    // 80005418: b       0x80005424
    {
            goto label_80005424;
    }

label_8000541C:
    ctx->pc = 0x8000541Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000541Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8000541C: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_80005420:
    ctx->pc = 0x80005420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005420u)) return;
    // 80005420: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_80005424:
    ctx->pc = 0x80005424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80005424: bl      0x80029B38
    {
            ctx->lr = 0x80005428u;
            ctx->pc = 0x80029B38u;
            return;
    }

label_80005428:
    ctx->pc = 0x80005428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80005428: bl      0x8003B20C
    {
            ctx->lr = 0x8000542Cu;
            ctx->pc = 0x8003B20Cu;
            return;
    }

label_8000542C:
    ctx->pc = 0x8000542Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000542Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8000542C: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_80005430:
    ctx->pc = 0x80005430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005430u)) return;
    // 80005430: addi    r4, r4, 12518
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12518);

label_80005434:
    ctx->pc = 0x80005434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80005434: lhz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005438:
    ctx->pc = 0x80005438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005438u)) return;
    // 80005438: andi.   r5, r3, 0x8000
    {
        ctx->gpr[5] = ctx->gpr[3] & 0x8000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000543C:
    ctx->pc = 0x8000543Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000543Cu)) return;
    // 8000543C: bc    12, 2, 0x8000544C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000544C;
        }
    }

label_80005440:
    ctx->pc = 0x80005440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005440: andi.   r3, r3, 0x7FFF
    {
        ctx->gpr[3] = ctx->gpr[3] & 0x7FFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005444:
    ctx->pc = 0x80005444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005444u)) return;
    // 80005444: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005448:
    ctx->pc = 0x80005448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005448u)) return;
    // 80005448: bc    4, 2, 0x80005450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005450;
        }
    }

label_8000544C:
    ctx->pc = 0x8000544Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000544Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8000544C: bl      0x800052C4
    {
            ctx->lr = 0x80005450u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800052C4u;
                return;
            }
            goto label_800052C4;
    }

label_80005450:
    ctx->pc = 0x80005450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80005450: bl      0x80005310
    {
            ctx->lr = 0x80005454u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005310u;
                return;
            }
            goto label_80005310;
    }

label_80005454:
    ctx->pc = 0x80005454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005454: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005458:
    ctx->pc = 0x80005458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005458u)) return;
    // 80005458: bc    4, 2, 0x80005460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005460;
        }
    }

label_8000545C:
    ctx->pc = 0x8000545Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000545Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8000545C: bl      0x80042D40
    {
            ctx->lr = 0x80005460u;
            ctx->pc = 0x80042D40u;
            return;
    }

label_80005460:
    ctx->pc = 0x80005460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80005460: bl      0x80042D44
    {
            ctx->lr = 0x80005464u;
            ctx->pc = 0x80042D44u;
            return;
    }

label_80005464:
    ctx->pc = 0x80005464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005464: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80005468:
    ctx->pc = 0x80005468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005468u)) return;
    // 80005468: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_8000546C:
    ctx->pc = 0x8000546Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000546Cu)) return;
    // 8000546C: bl      0x800058A0
    {
            ctx->lr = 0x80005470u;
            ctx->pc = 0x800058A0u;
            return;
    }

label_80005470:
    ctx->pc = 0x80005470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80005470: b       0x80008898
    {
            ctx->pc = 0x80008898u;
            return;
    }

label_80005474:
    ctx->pc = 0x80005474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 36u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 36u : 1u;
    // 80005474: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80005478:
    ctx->pc = 0x80005478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005478u)) return;
    // 80005478: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000547C:
    ctx->pc = 0x8000547Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000547Cu)) return;
    // 8000547C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005480:
    ctx->pc = 0x80005480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005480u)) return;
    // 80005480: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005484:
    ctx->pc = 0x80005484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005484u)) return;
    // 80005484: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80005488:
    ctx->pc = 0x80005488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005488u)) return;
    // 80005488: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8000548C:
    ctx->pc = 0x8000548Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000548Cu)) return;
    // 8000548C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80005490:
    ctx->pc = 0x80005490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005490u)) return;
    // 80005490: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80005494:
    ctx->pc = 0x80005494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005494u)) return;
    // 80005494: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80005498:
    ctx->pc = 0x80005498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005498u)) return;
    // 80005498: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_8000549C:
    ctx->pc = 0x8000549Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000549Cu)) return;
    // 8000549C: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_800054A0:
    ctx->pc = 0x800054A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054A0u)) return;
    // 800054A0: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_800054A4:
    ctx->pc = 0x800054A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054A4u)) return;
    // 800054A4: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_800054A8:
    ctx->pc = 0x800054A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054A8u)) return;
    // 800054A8: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_800054AC:
    ctx->pc = 0x800054ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054ACu)) return;
    // 800054AC: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_800054B0:
    ctx->pc = 0x800054B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054B0u)) return;
    // 800054B0: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_800054B4:
    ctx->pc = 0x800054B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054B4u)) return;
    // 800054B4: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_800054B8:
    ctx->pc = 0x800054B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054B8u)) return;
    // 800054B8: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_800054BC:
    ctx->pc = 0x800054BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054BCu)) return;
    // 800054BC: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_800054C0:
    ctx->pc = 0x800054C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054C0u)) return;
    // 800054C0: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_800054C4:
    ctx->pc = 0x800054C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054C4u)) return;
    // 800054C4: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_800054C8:
    ctx->pc = 0x800054C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054C8u)) return;
    // 800054C8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_800054CC:
    ctx->pc = 0x800054CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054CCu)) return;
    // 800054CC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_800054D0:
    ctx->pc = 0x800054D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054D0u)) return;
    // 800054D0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_800054D4:
    ctx->pc = 0x800054D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054D4u)) return;
    // 800054D4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_800054D8:
    ctx->pc = 0x800054D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054D8u)) return;
    // 800054D8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_800054DC:
    ctx->pc = 0x800054DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054DCu)) return;
    // 800054DC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_800054E0:
    ctx->pc = 0x800054E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054E0u)) return;
    // 800054E0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800054E4:
    ctx->pc = 0x800054E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054E4u)) return;
    // 800054E4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800054E8:
    ctx->pc = 0x800054E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054E8u)) return;
    // 800054E8: lis     r1, -32755
    ctx->gpr[1] = ((u32)(s32)(-32755) << 16);

label_800054EC:
    ctx->pc = 0x800054ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054ECu)) return;
    // 800054EC: ori     r1, r1, 0x5148
    ctx->gpr[1] = ctx->gpr[1] | 0x5148u;

label_800054F0:
    ctx->pc = 0x800054F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054F0u)) return;
    // 800054F0: lis     r2, -32756
    ctx->gpr[2] = ((u32)(s32)(-32756) << 16);

label_800054F4:
    ctx->pc = 0x800054F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054F4u)) return;
    // 800054F4: ori     r2, r2, 0xC680
    ctx->gpr[2] = ctx->gpr[2] | 0xC680u;

label_800054F8:
    ctx->pc = 0x800054F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054F8u)) return;
    // 800054F8: lis     r13, -32756
    ctx->gpr[13] = ((u32)(s32)(-32756) << 16);

label_800054FC:
    ctx->pc = 0x800054FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800054FCu)) return;
    // 800054FC: ori     r13, r13, 0xBE60
    ctx->gpr[13] = ctx->gpr[13] | 0xBE60u;

label_80005500:
    ctx->pc = 0x80005500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005500u)) return;
    // 80005500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005504:
    ctx->pc = 0x80005504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80005504: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005508:
    ctx->pc = 0x80005508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80005508: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000550C:
    ctx->pc = 0x8000550Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000550Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8000550C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005510:
    ctx->pc = 0x80005510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80005510: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005514:
    ctx->pc = 0x80005514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80005514: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005518:
    ctx->pc = 0x80005518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80005518: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000551C:
    ctx->pc = 0x8000551Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000551Cu)) return;
    // 8000551C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80005520:
    ctx->pc = 0x80005520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005520u)) return;
    // 80005520: addi    r0, r3, 22044
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22044);

label_80005524:
    ctx->pc = 0x80005524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005524u)) return;
    // 80005524: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80005528:
    ctx->pc = 0x80005528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005528u)) return;
    // 80005528: b       0x8000552C
    {
            goto label_8000552C;
    }

label_8000552C:
    ctx->pc = 0x8000552Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000552Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8000552C: b       0x80005530
    {
            goto label_80005530;
    }

label_80005530:
    ctx->pc = 0x80005530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80005530: lwz     r30, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005534:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005534u)) return;
    // 80005534: cmplwi  r30, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005538:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005538u)) return;
    // 80005538: bc    12, 2, 0x80005570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005570;
        }
    }

label_8000553C:
    ctx->pc = 0x8000553Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000553Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8000553C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005540:
    ctx->pc = 0x80005540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005540: lwz     r31, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005544:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005544u)) return;
    // 80005544: bc    12, 2, 0x80005568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005568;
        }
    }

label_80005548:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005548: cmplw   r31, r4
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000554C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000554Cu)) return;
    // 8000554C: bc    12, 2, 0x80005568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005568;
        }
    }

label_80005550:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005550: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005554:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005554u)) return;
    // 80005554: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80005558:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005558u)) return;
    // 80005558: bl      0x800031E8
    {
            ctx->lr = 0x8000555Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031E8u;
                return;
            }
            goto label_800031E8;
    }

label_8000555C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000555Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8000555C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005560:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005560u)) return;
    // 80005560: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80005564:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005564u)) return;
    // 80005564: bl      0x800055E8
    {
            ctx->lr = 0x80005568u;
            goto label_800055E8;
    }

label_80005568:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005568: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_8000556C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000556Cu)) return;
    // 8000556C: b       0x80005530
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005530u;
                return;
            }
            goto label_80005530;
    }

label_80005570:
    ctx->pc = 0x80005570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80005570: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80005574:
    ctx->pc = 0x80005574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005574u)) return;
    // 80005574: addi    r0, r3, 22176
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22176);

label_80005578:
    ctx->pc = 0x80005578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005578u)) return;
    // 80005578: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000557C:
    ctx->pc = 0x8000557Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000557Cu)) return;
    // 8000557C: b       0x80005580
    {
            goto label_80005580;
    }

label_80005580:
    ctx->pc = 0x80005580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80005580: b       0x80005584
    {
            goto label_80005584;
    }

label_80005584:
    ctx->pc = 0x80005584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80005584: lwz     r5, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005588:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005588u)) return;
    // 80005588: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000558C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000558Cu)) return;
    // 8000558C: bc    12, 2, 0x800055A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800055A8;
        }
    }

label_80005590:
    ctx->pc = 0x80005590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80005590: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005594:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005594u)) return;
    // 80005594: bc    12, 2, 0x800055A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800055A0;
        }
    }

label_80005598:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005598: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000559C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000559Cu)) return;
    // 8000559C: bl      0x80003100
    {
            ctx->lr = 0x800055A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003100u;
                return;
            }
            goto label_80003100;
    }

label_800055A0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 800055A0: addi    r29, r29, 8
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(8);

label_800055A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055A4u)) return;
    // 800055A4: b       0x80005584
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005584u;
                return;
            }
            goto label_80005584;
    }

label_800055A8:
    ctx->pc = 0x800055A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 800055A8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800055AC:
    ctx->pc = 0x800055ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 800055AC: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800055B0:
    ctx->pc = 0x800055B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 800055B0: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800055B4:
    ctx->pc = 0x800055B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 800055B4: lwz     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800055B8:
    ctx->pc = 0x800055B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055B8u)) return;
    // 800055B8: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_800055BC:
    ctx->pc = 0x800055BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x800055BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800055BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800055C0:
    ctx->pc = 0x800055C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055C0u)) return;
    // 800055C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800055C4:
    ctx->pc = 0x800055C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 800055C4: mfmsr   r0
    ctx->gpr[0] = ctx->msr;

label_800055C8:
    ctx->pc = 0x800055C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055C8u)) return;
    // 800055C8: ori     r0, r0, 0x2000
    ctx->gpr[0] = ctx->gpr[0] | 0x2000u;

label_800055CC:
    ctx->pc = 0x800055CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055CCu)) return;
    // 800055CC: mtmsr   r0
    ctx->msr = ctx->gpr[0];
    ctx->pc = 0x800055D0u;
    return;

label_800055D0:
    ctx->pc = 0x800055D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800055D0: mflr    r31
    ctx->gpr[31] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800055D4:
    ctx->pc = 0x800055D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055D4u)) return;
    // 800055D4: bl      0x8003B9B0
    {
            ctx->lr = 0x800055D8u;
            ctx->pc = 0x8003B9B0u;
            return;
    }

label_800055D8:
    ctx->pc = 0x800055D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800055D8: bl      0x8003AF58
    {
            ctx->lr = 0x800055DCu;
            ctx->pc = 0x8003AF58u;
            return;
    }

label_800055DC:
    ctx->pc = 0x800055DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 800055DC: bl      0x8003CF54
    {
            ctx->lr = 0x800055E0u;
            ctx->pc = 0x8003CF54u;
            return;
    }

label_800055E0:
    ctx->pc = 0x800055E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800055E0: mtlr    r31
    ctx->lr = ctx->gpr[31];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800055E4:
    ctx->pc = 0x800055E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055E4u)) return;
    // 800055E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800055E8:
    ctx->pc = 0x800055E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x800055E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 800055E8: lis     r5, -1
    ctx->gpr[5] = ((u32)(s32)(-1) << 16);

label_800055EC:
    ctx->pc = 0x800055ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055ECu)) return;
    // 800055EC: ori     r5, r5, 0xFFF1
    ctx->gpr[5] = ctx->gpr[5] | 0xFFF1u;

label_800055F0:
    ctx->pc = 0x800055F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055F0u)) return;
    // 800055F0: and   r5, r5, r3
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[3];
    }

label_800055F4:
    ctx->pc = 0x800055F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055F4u)) return;
    // 800055F4: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_800055F8:
    ctx->pc = 0x800055F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800055F8u)) return;
    // 800055F8: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_800055FC:
    ctx->pc = 0x800055FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 0u);
    // 800055FC: dcbst    0, r5
    ppc_fallback_instruction(ctx, 0x7C00286Cu, 0x800055FCu);
    return;

label_80005600:
    ctx->pc = 0x80005600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 3u;
    // 80005600: sync
    ppc_memory_fence();

label_80005604:
    ctx->pc = 0x80005604u;
    // 80005604: icbi    0, r5
    ppc_fallback_instruction(ctx, 0x7C002FACu, 0x80005604u);
    return;

label_80005608:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80005608: addic   r5, r5, 8
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(8);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8000560C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000560Cu)) return;
    // 8000560C: addic.  r4, r4, -8
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-8);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005610:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005610u)) return;
    // 80005610: bc    4, 0, 0x800055FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800055FCu;
                return;
            }
            goto label_800055FC;
        }
    }

label_80005614:
    ctx->pc = 0x80005614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80005614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80005614: isync
    ppc_memory_fence();

label_80005618:
    ctx->pc = 0x80005618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005618u)) return;
    // 80005618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_8000561C:
    ctx->pc = 0x8000561Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8000561Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8000561C: lwz     r0, 12544(r0)
    {
        u32 ea = (u32)(s32)(12544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005620:
    ctx->pc = 0x80005620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80005620: lwz     r0, 12544(r0)
    {
        u32 ea = (u32)(s32)(12544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005624:
    ctx->pc = 0x80005624u;
    // 80005624: .long   0x000025C0
    // embedded data

label_80005628:
    ctx->pc = 0x80005628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80005628: lwz     r0, 22208(r0)
    {
        u32 ea = (u32)(s32)(22208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000562C:
    ctx->pc = 0x8000562Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000562Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8000562C: lwz     r0, 22208(r0)
    {
        u32 ea = (u32)(s32)(22208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005630:
    ctx->pc = 0x80005630u;
    // 80005630: .long   0x000000FC
    // embedded data

label_80005634:
    ctx->pc = 0x80005634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80005634: lwz     r0, 22464(r0)
    {
        u32 ea = (u32)(s32)(22464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005638:
    ctx->pc = 0x80005638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80005638: lwz     r0, 22464(r0)
    {
        u32 ea = (u32)(s32)(22464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000563C:
    ctx->pc = 0x8000563Cu;
    // 8000563C: .long   0x000000E0
    // embedded data

label_80005640:
    ctx->pc = 0x80005640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80005640: lwz     r0, 22688(r0)
    {
        u32 ea = (u32)(s32)(22688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005644:
    ctx->pc = 0x80005644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80005644: lwz     r0, 22688(r0)
    {
        u32 ea = (u32)(s32)(22688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005648:
    ctx->pc = 0x80005648u;
    // 80005648: .long   0x00070BE8
    // embedded data

label_8000564C:
    ctx->pc = 0x8000564Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000564Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8000564C: lwz     r0, 25760(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005650:
    ctx->pc = 0x80005650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80005650: lwz     r0, 25760(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005654:
    ctx->pc = 0x80005654u;
    // 80005654: .long   0x00000008
    // embedded data

label_80005658:
    ctx->pc = 0x80005658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80005658: lwz     r0, 25792(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000565C:
    ctx->pc = 0x8000565Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000565Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8000565C: lwz     r0, 25792(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005660:
    ctx->pc = 0x80005660u;
    // 80005660: .long   0x00000010
    // embedded data

label_80005664:
    ctx->pc = 0x80005664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80005664: lwz     r0, 25824(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005668:
    ctx->pc = 0x80005668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80005668: lwz     r0, 25824(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000566C:
    ctx->pc = 0x8000566Cu;
    // 8000566C: .long   0x00003762
    // embedded data

label_80005670:
    ctx->pc = 0x80005670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80005670: lwz     r0, -25504(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005674:
    ctx->pc = 0x80005674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80005674: lwz     r0, -25504(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005678:
    ctx->pc = 0x80005678u;
    // 80005678: .long   0x0000BEAE
    // embedded data

label_8000567C:
    ctx->pc = 0x8000567Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000567Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8000567C: lwz     r0, 15968(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(15968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005680:
    ctx->pc = 0x80005680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80005680: lwz     r0, 15968(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(15968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005684:
    ctx->pc = 0x80005684u;
    // 80005684: .long   0x00000211
    // embedded data

label_80005688:
    ctx->pc = 0x80005688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80005688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80005688: lwz     r0, 18048(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8000568C:
    ctx->pc = 0x8000568Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8000568Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8000568C: lwz     r0, 18048(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80005690:
    ctx->pc = 0x80005690u;
    // 80005690: .long   0x00000AC0
    // embedded data

label_80005694:
    ctx->pc = 0x80005694u;
    // 80005694: .long   0x00000000
    // embedded data

label_80005698:
    ctx->pc = 0x80005698u;
    // 80005698: .long   0x00000000
    // embedded data

label_8000569C:
    ctx->pc = 0x8000569Cu;
    // 8000569C: .long   0x00000000
    // embedded data

label_800056A0:
    ctx->pc = 0x800056A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800056A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 800056A0: lwz     r0, 23328(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(23328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800056A4:
    ctx->pc = 0x800056A4u;
    // 800056A4: .long   0x0003E340
    // embedded data

label_800056A8:
    ctx->pc = 0x800056A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800056A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 800056A8: lwz     r0, 16512(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16512);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800056AC:
    ctx->pc = 0x800056ACu;
    // 800056AC: .long   0x000005EC
    // embedded data

label_800056B0:
    ctx->pc = 0x800056B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x800056B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 800056B0: lwz     r0, 20800(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_800056B4:
    ctx->pc = 0x800056B4u;
    // 800056B4: .long   0x00000008
    // embedded data

label_800056B8:
    ctx->pc = 0x800056B8u;
    // 800056B8: .long   0x00000000
    // embedded data

label_800056BC:
    ctx->pc = 0x800056BCu;
    // 800056BC: .long   0x00000000
    // embedded data

    ctx->pc = 0x800056C0u;
    return;
return_dispatch_80003100:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80003118u: goto label_80003118;
    case 0x80003250u: goto label_80003250;
    case 0x80005294u: goto label_80005294;
    case 0x800052A0u: goto label_800052A0;
    case 0x800052F4u: goto label_800052F4;
    case 0x8000531Cu: goto label_8000531C;
    case 0x80005320u: goto label_80005320;
    case 0x80005334u: goto label_80005334;
    case 0x800053A8u: goto label_800053A8;
    case 0x800053BCu: goto label_800053BC;
    case 0x80005428u: goto label_80005428;
    case 0x8000542Cu: goto label_8000542C;
    case 0x80005450u: goto label_80005450;
    case 0x80005454u: goto label_80005454;
    case 0x80005460u: goto label_80005460;
    case 0x80005464u: goto label_80005464;
    case 0x80005470u: goto label_80005470;
    case 0x8000555Cu: goto label_8000555C;
    case 0x80005568u: goto label_80005568;
    case 0x800055A0u: goto label_800055A0;
    case 0x800055D8u: goto label_800055D8;
    case 0x800055DCu: goto label_800055DC;
    case 0x800055E0u: goto label_800055E0;
    default: return;
    }
}

