// DolRecomp output
#include "../generated.h"

static void loop_80614084(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80614084:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80614084u;
            return;
        }
        ctx->downcount -= 7;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614084u)) return;
    // 80614084: srawi r6, r3, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614088u)) return;
    // 80614088: rlwinm r5, r0, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061408Cu)) return;
    // 8061408C: subfc   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614090u)) return;
    // 80614090: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614094u)) return;
    // 80614094: adde   r0, r6, r5
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614098u)) return;
    // 80614098: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061409Cu)) return;
    // 8061409C: extsb r7, r0
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[0];
    }

    ctx->pc = 0x806140A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806140A0: lbz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140A4u)) return;
    // 806140A4: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140A8u)) return;
    // 806140A8: bc    4, 2, 0x80614084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80614084u;
                return;
            }
            goto label_80614084;
        }
    }

    ctx->pc = 0x806140ACu;
}

static void loop_806140B8(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_806140B8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x806140B8u;
            return;
        }
        ctx->downcount -= 7;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140B8u)) return;
    // 806140B8: srawi r5, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[5] = value;
        } else if (sh > 31) {
            ctx->gpr[5] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[5] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140BCu)) return;
    // 806140BC: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140C0u)) return;
    // 806140C0: subfc   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140C4u)) return;
    // 806140C4: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140C8u)) return;
    // 806140C8: adde   r0, r5, r3
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140CCu)) return;
    // 806140CC: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140D0u)) return;
    // 806140D0: extsb r7, r0
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[0];
    }

    ctx->pc = 0x806140D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806140D4: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140D8u)) return;
    // 806140D8: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140DCu)) return;
    // 806140DC: bc    4, 2, 0x806140B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x806140B8u;
                return;
            }
            goto label_806140B8;
        }
    }

    ctx->pc = 0x806140E0u;
}

static void loop_806140FC(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_806140FC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x806140FCu;
            return;
        }
        ctx->downcount -= 11;
    }
    ctx->pc = 0x806140FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 806140FC: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614100u)) return;
    // 80614100: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614104u)) return;
    // 80614104: cmplwi  r5, 0x003C
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x003Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614108u)) return;
    // 80614108: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061410Cu)) return;
    // 8061410C: rlwinm r4, r0, 0, 24, 24
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614110u)) return;
    // 80614110: addi    r0, r4, -128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-128);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614114u)) return;
    // 80614114: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614118u)) return;
    // 80614118: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061411Cu)) return;
    // 8061411C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614120u)) return;
    // 80614120: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614124u)) return;
    // 80614124: bc    12, 0, 0x806140FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x806140FCu;
                return;
            }
            goto label_806140FC;
        }
    }

    ctx->pc = 0x80614128u;
}

void func_80614000(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80614000[415] = {
        &&label_80614000,
        &&label_80614004,
        &&label_80614008,
        &&label_8061400C,
        &&label_80614010,
        &&label_80614014,
        &&label_80614018,
        &&label_8061401C,
        &&label_80614020,
        &&label_80614024,
        &&label_80614028,
        &&label_8061402C,
        &&label_80614030,
        &&label_80614034,
        &&label_80614038,
        &&label_8061403C,
        &&label_80614040,
        &&label_80614044,
        &&label_80614048,
        &&label_8061404C,
        &&label_80614050,
        &&label_80614054,
        &&label_80614058,
        &&label_8061405C,
        &&label_80614060,
        &&label_80614064,
        &&label_80614068,
        &&label_8061406C,
        &&label_80614070,
        &&label_80614074,
        &&label_80614078,
        &&label_8061407C,
        &&label_80614080,
        &&label_80614084,
        &&label_80614088,
        &&label_8061408C,
        &&label_80614090,
        &&label_80614094,
        &&label_80614098,
        &&label_8061409C,
        &&label_806140A0,
        &&label_806140A4,
        &&label_806140A8,
        &&label_806140AC,
        &&label_806140B0,
        &&label_806140B4,
        &&label_806140B8,
        &&label_806140BC,
        &&label_806140C0,
        &&label_806140C4,
        &&label_806140C8,
        &&label_806140CC,
        &&label_806140D0,
        &&label_806140D4,
        &&label_806140D8,
        &&label_806140DC,
        &&label_806140E0,
        &&label_806140E4,
        &&label_806140E8,
        &&label_806140EC,
        &&label_806140F0,
        &&label_806140F4,
        &&label_806140F8,
        &&label_806140FC,
        &&label_80614100,
        &&label_80614104,
        &&label_80614108,
        &&label_8061410C,
        &&label_80614110,
        &&label_80614114,
        &&label_80614118,
        &&label_8061411C,
        &&label_80614120,
        &&label_80614124,
        &&label_80614128,
        &&label_8061412C,
        &&label_80614130,
        &&label_80614134,
        &&label_80614138,
        &&label_8061413C,
        &&label_80614140,
        &&label_80614144,
        &&label_80614148,
        &&label_8061414C,
        &&label_80614150,
        &&label_80614154,
        &&label_80614158,
        &&label_8061415C,
        &&label_80614160,
        &&label_80614164,
        &&label_80614168,
        &&label_8061416C,
        &&label_80614170,
        &&label_80614174,
        &&label_80614178,
        &&label_8061417C,
        &&label_80614180,
        &&label_80614184,
        &&label_80614188,
        &&label_8061418C,
        &&label_80614190,
        &&label_80614194,
        &&label_80614198,
        &&label_8061419C,
        &&label_806141A0,
        &&label_806141A4,
        &&label_806141A8,
        &&label_806141AC,
        &&label_806141B0,
        &&label_806141B4,
        &&label_806141B8,
        &&label_806141BC,
        &&label_806141C0,
        &&label_806141C4,
        &&label_806141C8,
        &&label_806141CC,
        &&label_806141D0,
        &&label_806141D4,
        &&label_806141D8,
        &&label_806141DC,
        &&label_806141E0,
        &&label_806141E4,
        &&label_806141E8,
        &&label_806141EC,
        &&label_806141F0,
        &&label_806141F4,
        &&label_806141F8,
        &&label_806141FC,
        &&label_80614200,
        &&label_80614204,
        &&label_80614208,
        &&label_8061420C,
        &&label_80614210,
        &&label_80614214,
        &&label_80614218,
        &&label_8061421C,
        &&label_80614220,
        &&label_80614224,
        &&label_80614228,
        &&label_8061422C,
        &&label_80614230,
        &&label_80614234,
        &&label_80614238,
        &&label_8061423C,
        &&label_80614240,
        &&label_80614244,
        &&label_80614248,
        &&label_8061424C,
        &&label_80614250,
        &&label_80614254,
        &&label_80614258,
        &&label_8061425C,
        &&label_80614260,
        &&label_80614264,
        &&label_80614268,
        &&label_8061426C,
        &&label_80614270,
        &&label_80614274,
        &&label_80614278,
        &&label_8061427C,
        &&label_80614280,
        &&label_80614284,
        &&label_80614288,
        &&label_8061428C,
        &&label_80614290,
        &&label_80614294,
        &&label_80614298,
        &&label_8061429C,
        &&label_806142A0,
        &&label_806142A4,
        &&label_806142A8,
        &&label_806142AC,
        &&label_806142B0,
        &&label_806142B4,
        &&label_806142B8,
        &&label_806142BC,
        &&label_806142C0,
        &&label_806142C4,
        &&label_806142C8,
        &&label_806142CC,
        &&label_806142D0,
        &&label_806142D4,
        &&label_806142D8,
        &&label_806142DC,
        &&label_806142E0,
        &&label_806142E4,
        &&label_806142E8,
        &&label_806142EC,
        &&label_806142F0,
        &&label_806142F4,
        &&label_806142F8,
        &&label_806142FC,
        &&label_80614300,
        &&label_80614304,
        &&label_80614308,
        &&label_8061430C,
        &&label_80614310,
        &&label_80614314,
        &&label_80614318,
        &&label_8061431C,
        &&label_80614320,
        &&label_80614324,
        &&label_80614328,
        &&label_8061432C,
        &&label_80614330,
        &&label_80614334,
        &&label_80614338,
        &&label_8061433C,
        &&label_80614340,
        &&label_80614344,
        &&label_80614348,
        &&label_8061434C,
        &&label_80614350,
        &&label_80614354,
        &&label_80614358,
        &&label_8061435C,
        &&label_80614360,
        &&label_80614364,
        &&label_80614368,
        &&label_8061436C,
        &&label_80614370,
        &&label_80614374,
        &&label_80614378,
        &&label_8061437C,
        &&label_80614380,
        &&label_80614384,
        &&label_80614388,
        &&label_8061438C,
        &&label_80614390,
        &&label_80614394,
        &&label_80614398,
        &&label_8061439C,
        &&label_806143A0,
        &&label_806143A4,
        &&label_806143A8,
        &&label_806143AC,
        &&label_806143B0,
        &&label_806143B4,
        &&label_806143B8,
        &&label_806143BC,
        &&label_806143C0,
        &&label_806143C4,
        &&label_806143C8,
        &&label_806143CC,
        &&label_806143D0,
        &&label_806143D4,
        &&label_806143D8,
        &&label_806143DC,
        &&label_806143E0,
        &&label_806143E4,
        &&label_806143E8,
        &&label_806143EC,
        &&label_806143F0,
        &&label_806143F4,
        &&label_806143F8,
        &&label_806143FC,
        &&label_80614400,
        &&label_80614404,
        &&label_80614408,
        &&label_8061440C,
        &&label_80614410,
        &&label_80614414,
        &&label_80614418,
        &&label_8061441C,
        &&label_80614420,
        &&label_80614424,
        &&label_80614428,
        &&label_8061442C,
        &&label_80614430,
        &&label_80614434,
        &&label_80614438,
        &&label_8061443C,
        &&label_80614440,
        &&label_80614444,
        &&label_80614448,
        &&label_8061444C,
        &&label_80614450,
        &&label_80614454,
        &&label_80614458,
        &&label_8061445C,
        &&label_80614460,
        &&label_80614464,
        &&label_80614468,
        &&label_8061446C,
        &&label_80614470,
        &&label_80614474,
        &&label_80614478,
        &&label_8061447C,
        &&label_80614480,
        &&label_80614484,
        &&label_80614488,
        &&label_8061448C,
        &&label_80614490,
        &&label_80614494,
        &&label_80614498,
        &&label_8061449C,
        &&label_806144A0,
        &&label_806144A4,
        &&label_806144A8,
        &&label_806144AC,
        &&label_806144B0,
        &&label_806144B4,
        &&label_806144B8,
        &&label_806144BC,
        &&label_806144C0,
        &&label_806144C4,
        &&label_806144C8,
        &&label_806144CC,
        &&label_806144D0,
        &&label_806144D4,
        &&label_806144D8,
        &&label_806144DC,
        &&label_806144E0,
        &&label_806144E4,
        &&label_806144E8,
        &&label_806144EC,
        &&label_806144F0,
        &&label_806144F4,
        &&label_806144F8,
        &&label_806144FC,
        &&label_80614500,
        &&label_80614504,
        &&label_80614508,
        &&label_8061450C,
        &&label_80614510,
        &&label_80614514,
        &&label_80614518,
        &&label_8061451C,
        &&label_80614520,
        &&label_80614524,
        &&label_80614528,
        &&label_8061452C,
        &&label_80614530,
        &&label_80614534,
        &&label_80614538,
        &&label_8061453C,
        &&label_80614540,
        &&label_80614544,
        &&label_80614548,
        &&label_8061454C,
        &&label_80614550,
        &&label_80614554,
        &&label_80614558,
        &&label_8061455C,
        &&label_80614560,
        &&label_80614564,
        &&label_80614568,
        &&label_8061456C,
        &&label_80614570,
        &&label_80614574,
        &&label_80614578,
        &&label_8061457C,
        &&label_80614580,
        &&label_80614584,
        &&label_80614588,
        &&label_8061458C,
        &&label_80614590,
        &&label_80614594,
        &&label_80614598,
        &&label_8061459C,
        &&label_806145A0,
        &&label_806145A4,
        &&label_806145A8,
        &&label_806145AC,
        &&label_806145B0,
        &&label_806145B4,
        &&label_806145B8,
        &&label_806145BC,
        &&label_806145C0,
        &&label_806145C4,
        &&label_806145C8,
        &&label_806145CC,
        &&label_806145D0,
        &&label_806145D4,
        &&label_806145D8,
        &&label_806145DC,
        &&label_806145E0,
        &&label_806145E4,
        &&label_806145E8,
        &&label_806145EC,
        &&label_806145F0,
        &&label_806145F4,
        &&label_806145F8,
        &&label_806145FC,
        &&label_80614600,
        &&label_80614604,
        &&label_80614608,
        &&label_8061460C,
        &&label_80614610,
        &&label_80614614,
        &&label_80614618,
        &&label_8061461C,
        &&label_80614620,
        &&label_80614624,
        &&label_80614628,
        &&label_8061462C,
        &&label_80614630,
        &&label_80614634,
        &&label_80614638,
        &&label_8061463C,
        &&label_80614640,
        &&label_80614644,
        &&label_80614648,
        &&label_8061464C,
        &&label_80614650,
        &&label_80614654,
        &&label_80614658,
        &&label_8061465C,
        &&label_80614660,
        &&label_80614664,
        &&label_80614668,
        &&label_8061466C,
        &&label_80614670,
        &&label_80614674,
        &&label_80614678
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80614000u && pc <= 0x80614678u && ((pc - 0x80614000u) & 3u) == 0u)
            goto *pc_table_80614000[(pc - 0x80614000u) >> 2];
    }
    return;
label_80614000:
    ctx->pc = 0x80614000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614000: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614004:
    ctx->pc = 0x80614004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614004u)) return;
    // 80614004: bc    4, 2, 0x80613F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80613F70u;
            return;
        }
    }

label_80614008:
    ctx->pc = 0x80614008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614008: cmpwi   r3, 130
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(130);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061400C:
    ctx->pc = 0x8061400Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061400Cu)) return;
    // 8061400C: bc    12, 0, 0x80614028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614028;
        }
    }

label_80614010:
    ctx->pc = 0x80614010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614010: cmpwi   r7, 60
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614014:
    ctx->pc = 0x80614014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614014u)) return;
    // 80614014: bc    12, 0, 0x80614028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614028;
        }
    }

label_80614018:
    ctx->pc = 0x80614018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80614018: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8061401C:
    ctx->pc = 0x8061401Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061401Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8061401C: lbz     r0, 11(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(11);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614020:
    ctx->pc = 0x80614020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614020: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614024:
    ctx->pc = 0x80614024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614024u)) return;
    // 80614024: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80614028:
    ctx->pc = 0x80614028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80614028: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8061402C:
    ctx->pc = 0x8061402Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061402Cu)) return;
    // 8061402C: addi    r0, r3, 20704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20704);

label_80614030:
    ctx->pc = 0x80614030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614030u)) return;
    // 80614030: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614034:
    ctx->pc = 0x80614034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614034u)) return;
    // 80614034: bc    4, 2, 0x80614050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80614050;
        }
    }

label_80614038:
    ctx->pc = 0x80614038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80614038: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8061403C:
    ctx->pc = 0x8061403Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061403Cu)) return;
    // 8061403C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80614040:
    ctx->pc = 0x80614040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614040u)) return;
    // 80614040: addi    r4, r3, 20708
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20708);

label_80614044:
    ctx->pc = 0x80614044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614044u)) return;
    // 80614044: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80614048:
    ctx->pc = 0x80614048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614048: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061404C:
    ctx->pc = 0x8061404Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061404Cu)) return;
    // 8061404C: b       0x8061405C
    {
            goto label_8061405C;
    }

label_80614050:
    ctx->pc = 0x80614050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80614050: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80614054:
    ctx->pc = 0x80614054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614054u)) return;
    // 80614054: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80614058:
    ctx->pc = 0x80614058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80614058: stw     r0, 20708(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061405C:
    ctx->pc = 0x8061405Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061405Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8061405C: lwz     r0, 20(r1)
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
label_80614060:
    ctx->pc = 0x80614060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80614060: lwz     r31, 12(r1)
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
label_80614064:
    ctx->pc = 0x80614064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614064: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614068:
    ctx->pc = 0x80614068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614068u)) return;
    // 80614068: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8061406C:
    ctx->pc = 0x8061406Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061406Cu)) return;
    // 8061406C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_80614070:
    ctx->pc = 0x80614070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80614070: lis     r5, -28648
    ctx->gpr[5] = ((u32)(s32)(-28648) << 16);

label_80614074:
    ctx->pc = 0x80614074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614074u)) return;
    // 80614074: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80614078:
    ctx->pc = 0x80614078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614078u)) return;
    // 80614078: addi    r0, r5, 4616
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(4616);

label_8061407C:
    ctx->pc = 0x8061407Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061407Cu)) return;
    // 8061407C: or   r8, r0, r0
    {
        ctx->gpr[8] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80614080:
    ctx->pc = 0x80614080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614080u)) return;
    // 80614080: b       0x806140A0
    {
            goto label_806140A0;
    }

label_80614084:
    loop_80614084(ctx);
    if (ctx->pc == 0x806140ACu) goto label_806140AC;
    return;
label_80614088:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614088u)) return;
    // 80614088: rlwinm r5, r0, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_8061408C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061408Cu)) return;
    // 8061408C: subfc   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80614090:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614090u)) return;
    // 80614090: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80614094:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614094u)) return;
    // 80614094: adde   r0, r6, r5
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80614098:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614098u)) return;
    // 80614098: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8061409C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061409Cu)) return;
    // 8061409C: extsb r7, r0
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_806140A0:
    ctx->pc = 0x806140A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806140A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806140A0: lbz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806140A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140A4u)) return;
    // 806140A4: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806140A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140A8u)) return;
    // 806140A8: bc    4, 2, 0x80614084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80614084u;
                return;
            }
            goto label_80614084;
        }
    }

label_806140AC:
    ctx->pc = 0x806140ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806140ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806140AC: lis     r3, -28648
    ctx->gpr[3] = ((u32)(s32)(-28648) << 16);

label_806140B0:
    ctx->pc = 0x806140B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140B0u)) return;
    // 806140B0: addi    r6, r3, 4628
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(4628);

label_806140B4:
    ctx->pc = 0x806140B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140B4u)) return;
    // 806140B4: b       0x806140D4
    {
            goto label_806140D4;
    }

label_806140B8:
    loop_806140B8(ctx);
    if (ctx->pc == 0x806140E0u) goto label_806140E0;
    return;
label_806140BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140BCu)) return;
    // 806140BC: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_806140C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140C0u)) return;
    // 806140C0: subfc   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_806140C4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140C4u)) return;
    // 806140C4: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_806140C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140C8u)) return;
    // 806140C8: adde   r0, r5, r3
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_806140CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140CCu)) return;
    // 806140CC: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_806140D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140D0u)) return;
    // 806140D0: extsb r7, r0
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_806140D4:
    ctx->pc = 0x806140D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806140D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806140D4: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806140D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140D8u)) return;
    // 806140D8: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806140DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140DCu)) return;
    // 806140DC: bc    4, 2, 0x806140B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x806140B8u;
                return;
            }
            goto label_806140B8;
        }
    }

label_806140E0:
    ctx->pc = 0x806140E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806140E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806140E0: rlwinm r3, r7, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
    }

label_806140E4:
    ctx->pc = 0x806140E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140E4u)) return;
    // 806140E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_806140E8:
    ctx->pc = 0x806140E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806140E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 806140E8: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_806140EC:
    ctx->pc = 0x806140ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140ECu)) return;
    // 806140EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_806140F0:
    ctx->pc = 0x806140F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140F0u)) return;
    // 806140F0: addi    r0, r3, -14644
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14644);

label_806140F4:
    ctx->pc = 0x806140F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140F4u)) return;
    // 806140F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_806140F8:
    ctx->pc = 0x806140F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806140F8u)) return;
    // 806140F8: or   r6, r0, r0
    {
        ctx->gpr[6] = ctx->gpr[0] | ctx->gpr[0];
    }

label_806140FC:
    loop_806140FC(ctx);
    if (ctx->pc == 0x80614128u) goto label_80614128;
    return;
label_80614100:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614100u)) return;
    // 80614100: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80614104:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614104u)) return;
    // 80614104: cmplwi  r5, 0x003C
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x003Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614108:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614108u)) return;
    // 80614108: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_8061410C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061410Cu)) return;
    // 8061410C: rlwinm r4, r0, 0, 24, 24
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
    }

label_80614110:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614110u)) return;
    // 80614110: addi    r0, r4, -128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-128);

label_80614114:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614114u)) return;
    // 80614114: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80614118:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614118u)) return;
    // 80614118: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8061411C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061411Cu)) return;
    // 8061411C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80614120:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614120u)) return;
    // 80614120: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80614124:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614124u)) return;
    // 80614124: bc    12, 0, 0x806140FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x806140FCu;
                return;
            }
            goto label_806140FC;
        }
    }

label_80614128:
    ctx->pc = 0x80614128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_8061412C:
    ctx->pc = 0x8061412Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061412Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8061412C: stwu     r1, -16(r1)
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
label_80614130:
    ctx->pc = 0x80614130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614130: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614134:
    ctx->pc = 0x80614134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614134u)) return;
    // 80614134: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80614138:
    ctx->pc = 0x80614138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614138: stw     r0, 20(r1)
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
label_8061413C:
    ctx->pc = 0x8061413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061413Cu)) return;
    // 8061413C: bl      0x804C9268
    {
            ctx->lr = 0x80614140u;
            ctx->pc = 0x804C9268u;
            return;
    }

label_80614140:
    ctx->pc = 0x80614140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614140: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614144:
    ctx->pc = 0x80614144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614144u)) return;
    // 80614144: bc    12, 1, 0x80614160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614160;
        }
    }

label_80614148:
    ctx->pc = 0x80614148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80614148: lis     r4, -28648
    ctx->gpr[4] = ((u32)(s32)(-28648) << 16);

label_8061414C:
    ctx->pc = 0x8061414Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061414Cu)) return;
    // 8061414C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80614150:
    ctx->pc = 0x80614150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614150u)) return;
    // 80614150: addi    r3, r4, 4640
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4640);

label_80614154:
    ctx->pc = 0x80614154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614154: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614158:
    ctx->pc = 0x80614158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614158: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061415C:
    ctx->pc = 0x8061415Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061415Cu)) return;
    // 8061415C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80614160:
    ctx->pc = 0x80614160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614160: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80614164:
    ctx->pc = 0x80614164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614164u)) return;
    // 80614164: b       0x8061416C
    {
            goto label_8061416C;
    }

label_80614168:
    ctx->pc = 0x80614168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614168: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8061416C:
    ctx->pc = 0x8061416Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061416Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 3u;
    // 8061416C: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80614170:
    ctx->pc = 0x80614170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614170u)) return;
    // 80614170: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80614174:
    ctx->pc = 0x80614174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614174u)) return;
    // 80614174: addi    r0, r3, 20712
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20712);

label_80614178:
    ctx->pc = 0x80614178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614178u)) return;
    // 80614178: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8061417C:
    ctx->pc = 0x8061417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061417Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8061417C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614180:
    ctx->pc = 0x80614180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80614180: lwz     r0, 20(r1)
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
label_80614184:
    ctx->pc = 0x80614184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614184: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614188:
    ctx->pc = 0x80614188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614188u)) return;
    // 80614188: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8061418C:
    ctx->pc = 0x8061418Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061418Cu)) return;
    // 8061418C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_80614190:
    ctx->pc = 0x80614190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80614190: stwu     r1, -16(r1)
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
label_80614194:
    ctx->pc = 0x80614194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614194: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614198:
    ctx->pc = 0x80614198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614198u)) return;
    // 80614198: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8061419C:
    ctx->pc = 0x8061419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061419Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8061419C: stw     r0, 20(r1)
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
label_806141A0:
    ctx->pc = 0x806141A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141A0u)) return;
    // 806141A0: bl      0x804C9268
    {
            ctx->lr = 0x806141A4u;
            ctx->pc = 0x804C9268u;
            return;
    }

label_806141A4:
    ctx->pc = 0x806141A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806141A4: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806141A8:
    ctx->pc = 0x806141A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141A8u)) return;
    // 806141A8: bc    12, 1, 0x806141C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806141C4;
        }
    }

label_806141AC:
    ctx->pc = 0x806141ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 806141AC: lis     r4, -28648
    ctx->gpr[4] = ((u32)(s32)(-28648) << 16);

label_806141B0:
    ctx->pc = 0x806141B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141B0u)) return;
    // 806141B0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_806141B4:
    ctx->pc = 0x806141B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141B4u)) return;
    // 806141B4: addi    r3, r4, 4672
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4672);

label_806141B8:
    ctx->pc = 0x806141B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806141B8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806141BC:
    ctx->pc = 0x806141BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x806141BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806141BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806141C0:
    ctx->pc = 0x806141C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141C0u)) return;
    // 806141C0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_806141C4:
    ctx->pc = 0x806141C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806141C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_806141C8:
    ctx->pc = 0x806141C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141C8u)) return;
    // 806141C8: b       0x806141D0
    {
            goto label_806141D0;
    }

label_806141CC:
    ctx->pc = 0x806141CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806141CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_806141D0:
    ctx->pc = 0x806141D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 3u;
    // 806141D0: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_806141D4:
    ctx->pc = 0x806141D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141D4u)) return;
    // 806141D4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_806141D8:
    ctx->pc = 0x806141D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141D8u)) return;
    // 806141D8: addi    r0, r3, 20712
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20712);

label_806141DC:
    ctx->pc = 0x806141DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141DCu)) return;
    // 806141DC: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_806141E0:
    ctx->pc = 0x806141E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806141E0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806141E4:
    ctx->pc = 0x806141E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141E4u)) return;
    // 806141E4: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806141E8:
    ctx->pc = 0x806141E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141E8u)) return;
    // 806141E8: bc    12, 2, 0x806141FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806141FC;
        }
    }

label_806141EC:
    ctx->pc = 0x806141ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806141EC: lwz     r0, 0(r4)
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
label_806141F0:
    ctx->pc = 0x806141F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141F0u)) return;
    // 806141F0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806141F4:
    ctx->pc = 0x806141F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806141F4u)) return;
    // 806141F4: bc    4, 2, 0x806141FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806141FC;
        }
    }

label_806141F8:
    ctx->pc = 0x806141F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806141F8: b       0x80614200
    {
            goto label_80614200;
    }

label_806141FC:
    ctx->pc = 0x806141FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806141FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806141FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80614200:
    ctx->pc = 0x80614200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80614200: lwz     r0, 20(r1)
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
label_80614204:
    ctx->pc = 0x80614204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614204: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614208:
    ctx->pc = 0x80614208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614208u)) return;
    // 80614208: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8061420C:
    ctx->pc = 0x8061420Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061420Cu)) return;
    // 8061420C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_80614210:
    ctx->pc = 0x80614210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80614210: stwu     r1, -16(r1)
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
label_80614214:
    ctx->pc = 0x80614214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80614214: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614218:
    ctx->pc = 0x80614218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614218u)) return;
    // 80614218: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8061421C:
    ctx->pc = 0x8061421Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061421Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8061421C: stw     r0, 20(r1)
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
label_80614220:
    ctx->pc = 0x80614220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614220: stw     r31, 12(r1)
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
label_80614224:
    ctx->pc = 0x80614224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614224u)) return;
    // 80614224: bl      0x804C9268
    {
            ctx->lr = 0x80614228u;
            ctx->pc = 0x804C9268u;
            return;
    }

label_80614228:
    ctx->pc = 0x80614228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614228: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061422C:
    ctx->pc = 0x8061422Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061422Cu)) return;
    // 8061422C: bc    12, 1, 0x80614248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614248;
        }
    }

label_80614230:
    ctx->pc = 0x80614230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80614230: lis     r4, -28648
    ctx->gpr[4] = ((u32)(s32)(-28648) << 16);

label_80614234:
    ctx->pc = 0x80614234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614234u)) return;
    // 80614234: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80614238:
    ctx->pc = 0x80614238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614238u)) return;
    // 80614238: addi    r3, r4, 4704
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4704);

label_8061423C:
    ctx->pc = 0x8061423Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061423Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8061423C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614240:
    ctx->pc = 0x80614240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614240: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614244:
    ctx->pc = 0x80614244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614244u)) return;
    // 80614244: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80614248:
    ctx->pc = 0x80614248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614248: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8061424C:
    ctx->pc = 0x8061424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061424Cu)) return;
    // 8061424C: b       0x80614254
    {
            goto label_80614254;
    }

label_80614250:
    ctx->pc = 0x80614250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614250: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80614254:
    ctx->pc = 0x80614254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 3u;
    // 80614254: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80614258:
    ctx->pc = 0x80614258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614258u)) return;
    // 80614258: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8061425C:
    ctx->pc = 0x8061425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061425Cu)) return;
    // 8061425C: addi    r0, r3, 20712
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20712);

label_80614260:
    ctx->pc = 0x80614260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614260u)) return;
    // 80614260: add   r31, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_80614264:
    ctx->pc = 0x80614264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614264: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614268:
    ctx->pc = 0x80614268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614268u)) return;
    // 80614268: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061426C:
    ctx->pc = 0x8061426Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061426Cu)) return;
    // 8061426C: bc    12, 2, 0x80614298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614298;
        }
    }

label_80614270:
    ctx->pc = 0x80614270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614270: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614274:
    ctx->pc = 0x80614274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614274: lwz     r12, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614278:
    ctx->pc = 0x80614278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614278u)) return;
    // 80614278: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061427C:
    ctx->pc = 0x8061427Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061427Cu)) return;
    // 8061427C: bc    12, 2, 0x80614288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614288;
        }
    }

label_80614280:
    ctx->pc = 0x80614280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614280: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614284:
    ctx->pc = 0x80614284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614284u)) return;
    // 80614284: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80614288u;
            ctx->pc = target;
            return;
        }
    }

label_80614288:
    ctx->pc = 0x80614288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614288: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061428C:
    ctx->pc = 0x8061428Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061428Cu)) return;
    // 8061428C: bl      0x8003FD78
    {
            ctx->lr = 0x80614290u;
            ctx->pc = 0x8003FD78u;
            return;
    }

label_80614290:
    ctx->pc = 0x80614290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614290: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80614294:
    ctx->pc = 0x80614294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80614294: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614298:
    ctx->pc = 0x80614298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80614298: lwz     r0, 20(r1)
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
label_8061429C:
    ctx->pc = 0x8061429Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061429Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8061429C: lwz     r31, 12(r1)
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
label_806142A0:
    ctx->pc = 0x806142A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x806142A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806142A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142A4:
    ctx->pc = 0x806142A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142A4u)) return;
    // 806142A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_806142A8:
    ctx->pc = 0x806142A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142A8u)) return;
    // 806142A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_806142AC:
    ctx->pc = 0x806142ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806142ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 806142AC: stwu     r1, -32(r1)
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
label_806142B0:
    ctx->pc = 0x806142B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 806142B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142B4:
    ctx->pc = 0x806142B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142B4u)) return;
    // 806142B4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_806142B8:
    ctx->pc = 0x806142B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 806142B8: stw     r0, 36(r1)
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
label_806142BC:
    ctx->pc = 0x806142BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 806142BC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142C0:
    ctx->pc = 0x806142C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142C0u)) return;
    // 806142C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_806142C4:
    ctx->pc = 0x806142C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806142C4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142C8:
    ctx->pc = 0x806142C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142C8u)) return;
    // 806142C8: addi    r30, r3, 20712
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(20712);

label_806142CC:
    ctx->pc = 0x806142CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806142CC: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142D0:
    ctx->pc = 0x806142D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142D0u)) return;
    // 806142D0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_806142D4:
    ctx->pc = 0x806142D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806142D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806142D4: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142D8u)) return;
    // 806142D8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806142DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142DCu)) return;
    // 806142DC: bc    12, 2, 0x80614304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614304;
        }
    }

label_806142E0:
    ctx->pc = 0x806142E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806142E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806142E0: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142E4:
    ctx->pc = 0x806142E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806142E4: lwz     r12, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142E8u)) return;
    // 806142E8: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806142EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142ECu)) return;
    // 806142EC: bc    12, 2, 0x806142F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806142F8;
        }
    }

label_806142F0:
    ctx->pc = 0x806142F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806142F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806142F0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142F4:
    ctx->pc = 0x806142F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142F4u)) return;
    // 806142F4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x806142F8u;
            ctx->pc = target;
            return;
        }
    }

label_806142F8:
    ctx->pc = 0x806142F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806142F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806142F8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806142FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806142FCu)) return;
    // 806142FC: bl      0x8003FD78
    {
            ctx->lr = 0x80614300u;
            ctx->pc = 0x8003FD78u;
            return;
    }

label_80614300:
    ctx->pc = 0x80614300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80614300: stw     r31, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614304:
    ctx->pc = 0x80614304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614304: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614308:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614308u)) return;
    // 80614308: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061430C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061430Cu)) return;
    // 8061430C: bc    12, 2, 0x80614318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614318;
        }
    }

label_80614310:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614310: bl      0x8004E730
    {
            ctx->lr = 0x80614314u;
            ctx->pc = 0x8004E730u;
            return;
    }

label_80614314:
    ctx->pc = 0x80614314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80614314: stw     r31, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614318:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80614318: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8061431C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061431Cu)) return;
    // 8061431C: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_80614320:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614320u)) return;
    // 80614320: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614324:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614324u)) return;
    // 80614324: bc    12, 0, 0x806142D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x806142D4u;
                return;
            }
            goto label_806142D4;
        }
    }

label_80614328:
    ctx->pc = 0x80614328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80614328: lwz     r0, 36(r1)
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
label_8061432C:
    ctx->pc = 0x8061432Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061432Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8061432C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614330:
    ctx->pc = 0x80614330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80614330: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614334:
    ctx->pc = 0x80614334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80614334: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614338:
    ctx->pc = 0x80614338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614338: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061433C:
    ctx->pc = 0x8061433Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061433Cu)) return;
    // 8061433C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80614340:
    ctx->pc = 0x80614340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614340u)) return;
    // 80614340: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_80614344:
    ctx->pc = 0x80614344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80614344: stwu     r1, -16(r1)
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
label_80614348:
    ctx->pc = 0x80614348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80614348: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061434C:
    ctx->pc = 0x8061434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8061434Cu)) return;
    // 8061434C: mulli   r4, r3, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_80614350:
    ctx->pc = 0x80614350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614350u)) return;
    // 80614350: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80614354:
    ctx->pc = 0x80614354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80614354: stw     r0, 20(r1)
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
label_80614358:
    ctx->pc = 0x80614358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614358u)) return;
    // 80614358: addi    r0, r3, 20712
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20712);

label_8061435C:
    ctx->pc = 0x8061435Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061435Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8061435C: stw     r31, 12(r1)
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
label_80614360:
    ctx->pc = 0x80614360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614360u)) return;
    // 80614360: add   r31, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_80614364:
    ctx->pc = 0x80614364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614364: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614368:
    ctx->pc = 0x80614368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614368u)) return;
    // 80614368: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061436C:
    ctx->pc = 0x8061436Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061436Cu)) return;
    // 8061436C: bc    12, 2, 0x80614398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614398;
        }
    }

label_80614370:
    ctx->pc = 0x80614370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614370: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614374:
    ctx->pc = 0x80614374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614374: lwz     r12, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614378:
    ctx->pc = 0x80614378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614378u)) return;
    // 80614378: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061437C:
    ctx->pc = 0x8061437Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061437Cu)) return;
    // 8061437C: bc    12, 2, 0x80614388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614388;
        }
    }

label_80614380:
    ctx->pc = 0x80614380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614380: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614384:
    ctx->pc = 0x80614384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614384u)) return;
    // 80614384: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80614388u;
            ctx->pc = target;
            return;
        }
    }

label_80614388:
    ctx->pc = 0x80614388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614388: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061438C:
    ctx->pc = 0x8061438Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061438Cu)) return;
    // 8061438C: bl      0x8003FD78
    {
            ctx->lr = 0x80614390u;
            ctx->pc = 0x8003FD78u;
            return;
    }

label_80614390:
    ctx->pc = 0x80614390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614390: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80614394:
    ctx->pc = 0x80614394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80614394: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614398:
    ctx->pc = 0x80614398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80614398: lwz     r0, 20(r1)
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
label_8061439C:
    ctx->pc = 0x8061439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061439Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8061439C: lwz     r31, 12(r1)
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
label_806143A0:
    ctx->pc = 0x806143A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x806143A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806143A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806143A4:
    ctx->pc = 0x806143A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143A4u)) return;
    // 806143A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_806143A8:
    ctx->pc = 0x806143A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143A8u)) return;
    // 806143A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_806143AC:
    ctx->pc = 0x806143ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 806143AC: stwu     r1, -32(r1)
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
label_806143B0:
    ctx->pc = 0x806143B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 806143B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806143B4:
    ctx->pc = 0x806143B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143B4u)) return;
    // 806143B4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_806143B8:
    ctx->pc = 0x806143B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 806143B8: stw     r0, 36(r1)
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
label_806143BC:
    ctx->pc = 0x806143BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x806143BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806143BC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806143C0:
    ctx->pc = 0x806143C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143C0u)) return;
    // 806143C0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_806143C4:
    ctx->pc = 0x806143C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143C4u)) return;
    // 806143C4: addi    r31, r3, 20712
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(20712);

label_806143C8:
    ctx->pc = 0x806143C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806143C8: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806143CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143CCu)) return;
    // 806143CC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806143D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143D0u)) return;
    // 806143D0: bc    4, 2, 0x806144B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806144B0;
        }
    }

label_806143D4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806143D4: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806143D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143D8u)) return;
    // 806143D8: bc    12, 2, 0x806143F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806143F8;
        }
    }

label_806143DC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806143DC: bc    4, 0, 0x80614400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80614400;
        }
    }

label_806143E0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806143E0: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806143E4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143E4u)) return;
    // 806143E4: bc    4, 0, 0x806143EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806143EC;
        }
    }

label_806143E8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806143E8: b       0x80614400
    {
            goto label_80614400;
    }

label_806143EC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806143EC: lis     r3, -28648
    ctx->gpr[3] = ((u32)(s32)(-28648) << 16);

label_806143F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143F0u)) return;
    // 806143F0: addi    r29, r3, 4736
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(4736);

label_806143F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143F4u)) return;
    // 806143F4: b       0x80614400
    {
            goto label_80614400;
    }

label_806143F8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806143F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806143F8: lis     r3, -28648
    ctx->gpr[3] = ((u32)(s32)(-28648) << 16);

label_806143FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806143FCu)) return;
    // 806143FC: addi    r29, r3, 4752
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(4752);

label_80614400:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614400: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80614404:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614404u)) return;
    // 80614404: bl      0x80462AA8
    {
            ctx->lr = 0x80614408u;
            ctx->pc = 0x80462AA8u;
            return;
    }

label_80614408:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80614408: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_8061440C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061440Cu)) return;
    // 8061440C: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_80614410:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614410u)) return;
    // 80614410: rlwinm r28, r0, 0, 0, 26
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_80614414:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614414u)) return;
    // 80614414: bl      0x8004E6D8
    {
            ctx->lr = 0x80614418u;
            ctx->pc = 0x8004E6D8u;
            return;
    }

label_80614418:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80614418: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8061441C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061441Cu)) return;
    // 8061441C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80614420:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614420u)) return;
    // 80614420: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_80614424:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614424u)) return;
    // 80614424: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80614428:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614428u)) return;
    // 80614428: bl      0x80463CA0
    {
            ctx->lr = 0x8061442Cu;
            ctx->pc = 0x80463CA0u;
            return;
    }

label_8061442C:
    ctx->pc = 0x8061442Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061442Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8061442C: lwz     r5, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614430:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614430u)) return;
    // 80614430: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80614434:
    ctx->pc = 0x80614434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80614434: lwz     r4, 72(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614438:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614438u)) return;
    // 80614438: addi    r5, r5, 31
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31);

label_8061443C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061443Cu)) return;
    // 8061443C: addi    r0, r4, 31
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(31);

label_80614440:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614440u)) return;
    // 80614440: rlwinm r26, r5, 0, 0, 26
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFE0u;
    }

label_80614444:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614444u)) return;
    // 80614444: rlwinm r27, r0, 0, 0, 26
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_80614448:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614448u)) return;
    // 80614448: bl      0x8004E730
    {
            ctx->lr = 0x8061444Cu;
            ctx->pc = 0x8004E730u;
            return;
    }

label_8061444C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061444Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8061444C: add   r0, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80614450:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614450u)) return;
    // 80614450: cmplw   r28, r0
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614454:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614454u)) return;
    // 80614454: bc    4, 0, 0x8061445C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8061445C;
        }
    }

label_80614458:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614458: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8061445C:
    ctx->pc = 0x8061445Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061445Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8061445C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614460:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614460u)) return;
    // 80614460: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614464:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614464u)) return;
    // 80614464: bc    4, 2, 0x80614478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80614478;
        }
    }

label_80614468:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614468: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8061446C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061446Cu)) return;
    // 8061446C: bl      0x8004E6D8
    {
            ctx->lr = 0x80614470u;
            ctx->pc = 0x8004E6D8u;
            return;
    }

label_80614470:
    ctx->pc = 0x80614470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614470: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614474:
    ctx->pc = 0x80614474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80614474: stw     r28, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614478:
    ctx->pc = 0x80614478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614478: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061447C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061447Cu)) return;
    // 8061447C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80614480:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614480u)) return;
    // 80614480: bl      0x80463DC8
    {
            ctx->lr = 0x80614484u;
            ctx->pc = 0x80463DC8u;
            return;
    }

label_80614484:
    ctx->pc = 0x80614484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614484: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614488:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614488u)) return;
    // 80614488: add   r4, r3, r27
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8061448C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061448Cu)) return;
    // 8061448C: bl      0x8003FB04
    {
            ctx->lr = 0x80614490u;
            ctx->pc = 0x8003FB04u;
            return;
    }

label_80614490:
    ctx->pc = 0x80614490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614490: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614494:
    ctx->pc = 0x80614494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614494: lwz     r12, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614498:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614498u)) return;
    // 80614498: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061449C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061449Cu)) return;
    // 8061449C: bc    12, 2, 0x806144A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806144A8;
        }
    }

label_806144A0:
    ctx->pc = 0x806144A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806144A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806144A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806144A4:
    ctx->pc = 0x806144A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144A4u)) return;
    // 806144A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x806144A8u;
            ctx->pc = target;
            return;
        }
    }

label_806144A8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806144A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806144A8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_806144AC:
    ctx->pc = 0x806144ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 806144AC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806144B0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806144B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 806144B0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_806144B4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144B4u)) return;
    // 806144B4: addi    r31, r31, 12
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(12);

label_806144B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144B8u)) return;
    // 806144B8: cmpwi   r30, 2
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806144BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144BCu)) return;
    // 806144BC: bc    12, 0, 0x806143C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x806143C8u;
                return;
            }
            goto label_806143C8;
        }
    }

label_806144C0:
    ctx->pc = 0x806144C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806144C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 806144C0: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806144C4:
    ctx->pc = 0x806144C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806144C4: lwz     r0, 36(r1)
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
label_806144C8:
    ctx->pc = 0x806144C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x806144C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806144C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806144CC:
    ctx->pc = 0x806144CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144CCu)) return;
    // 806144CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_806144D0:
    ctx->pc = 0x806144D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144D0u)) return;
    // 806144D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_806144D4:
    ctx->pc = 0x806144D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806144D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 806144D4: stwu     r1, -32(r1)
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
label_806144D8:
    ctx->pc = 0x806144D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 806144D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806144DC:
    ctx->pc = 0x806144DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x806144DCu)) return;
    // 806144DC: mulli   r5, r3, 12
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_806144E0:
    ctx->pc = 0x806144E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144E0u)) return;
    // 806144E0: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_806144E4:
    ctx->pc = 0x806144E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 806144E4: stw     r0, 36(r1)
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
label_806144E8:
    ctx->pc = 0x806144E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144E8u)) return;
    // 806144E8: addi    r0, r4, 20712
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20712);

label_806144EC:
    ctx->pc = 0x806144ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x806144ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806144EC: stmw     r27, 12(r1)
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
label_806144F0:
    ctx->pc = 0x806144F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144F0u)) return;
    // 806144F0: add   r30, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_806144F4:
    ctx->pc = 0x806144F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806144F4: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806144F8:
    ctx->pc = 0x806144F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144F8u)) return;
    // 806144F8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806144FC:
    ctx->pc = 0x806144FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806144FCu)) return;
    // 806144FC: bc    4, 2, 0x806145E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806145E8;
        }
    }

label_80614500:
    ctx->pc = 0x80614500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614500: cmpwi   r3, 1
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

label_80614504:
    ctx->pc = 0x80614504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614504u)) return;
    // 80614504: bc    12, 2, 0x80614528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614528;
        }
    }

label_80614508:
    ctx->pc = 0x80614508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614508: bc    4, 0, 0x80614534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80614534;
        }
    }

label_8061450C:
    ctx->pc = 0x8061450Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061450Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8061450C: cmpwi   r3, 0
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

label_80614510:
    ctx->pc = 0x80614510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614510u)) return;
    // 80614510: bc    4, 0, 0x80614518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80614518;
        }
    }

label_80614514:
    ctx->pc = 0x80614514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614514: b       0x80614534
    {
            goto label_80614534;
    }

label_80614518:
    ctx->pc = 0x80614518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80614518: lis     r3, -28648
    ctx->gpr[3] = ((u32)(s32)(-28648) << 16);

label_8061451C:
    ctx->pc = 0x8061451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061451Cu)) return;
    // 8061451C: addi    r0, r3, 4736
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4736);

label_80614520:
    ctx->pc = 0x80614520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614520u)) return;
    // 80614520: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80614524:
    ctx->pc = 0x80614524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614524u)) return;
    // 80614524: b       0x80614534
    {
            goto label_80614534;
    }

label_80614528:
    ctx->pc = 0x80614528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80614528: lis     r3, -28648
    ctx->gpr[3] = ((u32)(s32)(-28648) << 16);

label_8061452C:
    ctx->pc = 0x8061452Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061452Cu)) return;
    // 8061452C: addi    r0, r3, 4752
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4752);

label_80614530:
    ctx->pc = 0x80614530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614530u)) return;
    // 80614530: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80614534:
    ctx->pc = 0x80614534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614534: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80614538:
    ctx->pc = 0x80614538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614538u)) return;
    // 80614538: bl      0x80462AA8
    {
            ctx->lr = 0x8061453Cu;
            ctx->pc = 0x80462AA8u;
            return;
    }

label_8061453C:
    ctx->pc = 0x8061453Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061453Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8061453C: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_80614540:
    ctx->pc = 0x80614540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614540u)) return;
    // 80614540: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_80614544:
    ctx->pc = 0x80614544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614544u)) return;
    // 80614544: rlwinm r27, r0, 0, 0, 26
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_80614548:
    ctx->pc = 0x80614548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614548u)) return;
    // 80614548: bl      0x8004E6D8
    {
            ctx->lr = 0x8061454Cu;
            ctx->pc = 0x8004E6D8u;
            return;
    }

label_8061454C:
    ctx->pc = 0x8061454Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061454Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8061454C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80614550:
    ctx->pc = 0x80614550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614550u)) return;
    // 80614550: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80614554:
    ctx->pc = 0x80614554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614554u)) return;
    // 80614554: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80614558:
    ctx->pc = 0x80614558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614558u)) return;
    // 80614558: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_8061455C:
    ctx->pc = 0x8061455Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061455Cu)) return;
    // 8061455C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80614560:
    ctx->pc = 0x80614560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614560u)) return;
    // 80614560: bl      0x80463CA0
    {
            ctx->lr = 0x80614564u;
            ctx->pc = 0x80463CA0u;
            return;
    }

label_80614564:
    ctx->pc = 0x80614564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80614564: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614568:
    ctx->pc = 0x80614568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614568u)) return;
    // 80614568: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8061456C:
    ctx->pc = 0x8061456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061456Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8061456C: lwz     r4, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614570:
    ctx->pc = 0x80614570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614570u)) return;
    // 80614570: addi    r5, r5, 31
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31);

label_80614574:
    ctx->pc = 0x80614574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614574u)) return;
    // 80614574: addi    r0, r4, 31
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(31);

label_80614578:
    ctx->pc = 0x80614578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614578u)) return;
    // 80614578: rlwinm r29, r5, 0, 0, 26
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFE0u;
    }

label_8061457C:
    ctx->pc = 0x8061457Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061457Cu)) return;
    // 8061457C: rlwinm r28, r0, 0, 0, 26
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_80614580:
    ctx->pc = 0x80614580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614580u)) return;
    // 80614580: bl      0x8004E730
    {
            ctx->lr = 0x80614584u;
            ctx->pc = 0x8004E730u;
            return;
    }

label_80614584:
    ctx->pc = 0x80614584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80614584: add   r0, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80614588:
    ctx->pc = 0x80614588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614588u)) return;
    // 80614588: cmplw   r27, r0
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061458C:
    ctx->pc = 0x8061458Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061458Cu)) return;
    // 8061458C: bc    4, 0, 0x80614594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80614594;
        }
    }

label_80614590:
    ctx->pc = 0x80614590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614590: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80614594:
    ctx->pc = 0x80614594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614594: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614598:
    ctx->pc = 0x80614598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614598u)) return;
    // 80614598: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8061459C:
    ctx->pc = 0x8061459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061459Cu)) return;
    // 8061459C: bc    4, 2, 0x806145B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806145B0;
        }
    }

label_806145A0:
    ctx->pc = 0x806145A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806145A0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_806145A4:
    ctx->pc = 0x806145A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145A4u)) return;
    // 806145A4: bl      0x8004E6D8
    {
            ctx->lr = 0x806145A8u;
            ctx->pc = 0x8004E6D8u;
            return;
    }

label_806145A8:
    ctx->pc = 0x806145A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806145A8: stw     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145AC:
    ctx->pc = 0x806145ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 806145AC: stw     r27, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145B0:
    ctx->pc = 0x806145B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806145B0: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145B4:
    ctx->pc = 0x806145B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145B4u)) return;
    // 806145B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_806145B8:
    ctx->pc = 0x806145B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145B8u)) return;
    // 806145B8: bl      0x80463DC8
    {
            ctx->lr = 0x806145BCu;
            ctx->pc = 0x80463DC8u;
            return;
    }

label_806145BC:
    ctx->pc = 0x806145BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806145BC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145C0:
    ctx->pc = 0x806145C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145C0u)) return;
    // 806145C0: add   r4, r3, r28
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_806145C4:
    ctx->pc = 0x806145C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145C4u)) return;
    // 806145C4: bl      0x8003FB04
    {
            ctx->lr = 0x806145C8u;
            ctx->pc = 0x8003FB04u;
            return;
    }

label_806145C8:
    ctx->pc = 0x806145C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806145C8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145CC:
    ctx->pc = 0x806145CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806145CC: lwz     r12, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145D0:
    ctx->pc = 0x806145D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145D0u)) return;
    // 806145D0: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806145D4:
    ctx->pc = 0x806145D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145D4u)) return;
    // 806145D4: bc    12, 2, 0x806145E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806145E0;
        }
    }

label_806145D8:
    ctx->pc = 0x806145D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 2u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806145D8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145DC:
    ctx->pc = 0x806145DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145DCu)) return;
    // 806145DC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x806145E0u;
            ctx->pc = target;
            return;
        }
    }

label_806145E0:
    ctx->pc = 0x806145E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806145E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_806145E4:
    ctx->pc = 0x806145E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 806145E4: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145E8:
    ctx->pc = 0x806145E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 806145E8: lmw     r27, 12(r1)
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
label_806145EC:
    ctx->pc = 0x806145ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806145EC: lwz     r0, 36(r1)
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
label_806145F0:
    ctx->pc = 0x806145F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x806145F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806145F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806145F4:
    ctx->pc = 0x806145F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145F4u)) return;
    // 806145F4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_806145F8:
    ctx->pc = 0x806145F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806145F8u)) return;
    // 806145F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_806145FC:
    ctx->pc = 0x806145FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806145FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806145FC: stwu     r1, -16(r1)
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
label_80614600:
    ctx->pc = 0x80614600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614600: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614604:
    ctx->pc = 0x80614604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614604u)) return;
    // 80614604: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80614608:
    ctx->pc = 0x80614608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614608: stw     r0, 20(r1)
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
label_8061460C:
    ctx->pc = 0x8061460Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061460Cu)) return;
    // 8061460C: bl      0x804C9268
    {
            ctx->lr = 0x80614610u;
            ctx->pc = 0x804C9268u;
            return;
    }

label_80614610:
    ctx->pc = 0x80614610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614610: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614614:
    ctx->pc = 0x80614614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614614u)) return;
    // 80614614: bc    12, 1, 0x80614630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80614630;
        }
    }

label_80614618:
    ctx->pc = 0x80614618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80614618: lis     r4, -28648
    ctx->gpr[4] = ((u32)(s32)(-28648) << 16);

label_8061461C:
    ctx->pc = 0x8061461Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061461Cu)) return;
    // 8061461C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80614620:
    ctx->pc = 0x80614620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614620u)) return;
    // 80614620: addi    r3, r4, 4772
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4772);

label_80614624:
    ctx->pc = 0x80614624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614624: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614628:
    ctx->pc = 0x80614628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614628: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8061462C:
    ctx->pc = 0x8061462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061462Cu)) return;
    // 8061462C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80614630:
    ctx->pc = 0x80614630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614630: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80614634:
    ctx->pc = 0x80614634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614634u)) return;
    // 80614634: b       0x8061463C
    {
            goto label_8061463C;
    }

label_80614638:
    ctx->pc = 0x80614638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80614638: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8061463C:
    ctx->pc = 0x8061463Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061463Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8061463C: lwz     r0, 20(r1)
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
label_80614640:
    ctx->pc = 0x80614640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80614640: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614644:
    ctx->pc = 0x80614644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614644u)) return;
    // 80614644: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80614648:
    ctx->pc = 0x80614648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614648u)) return;
    // 80614648: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_8061464C:
    ctx->pc = 0x8061464Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061464Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8061464C: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80614650:
    ctx->pc = 0x80614650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614650u)) return;
    // 80614650: bc    12, 1, 0x8061466C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8061466C;
        }
    }

label_80614654:
    ctx->pc = 0x80614654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80614654: lis     r4, -28648
    ctx->gpr[4] = ((u32)(s32)(-28648) << 16);

label_80614658:
    ctx->pc = 0x80614658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614658u)) return;
    // 80614658: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8061465C:
    ctx->pc = 0x8061465Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8061465Cu)) return;
    // 8061465C: addi    r3, r4, 4804
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4804);

label_80614660:
    ctx->pc = 0x80614660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80614660: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614664:
    ctx->pc = 0x80614664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80614664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80614664: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80614668:
    ctx->pc = 0x80614668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614668u)) return;
    // 80614668: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8061466C:
    ctx->pc = 0x8061466Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8061466Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8061466C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80614670:
    ctx->pc = 0x80614670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614670u)) return;
    // 80614670: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

label_80614674:
    ctx->pc = 0x80614674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80614674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80614674: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80614678:
    ctx->pc = 0x80614678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80614678u)) return;
    // 80614678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80614000;
        }
    }

    ctx->pc = 0x8061467Cu;
    return;
return_dispatch_80614000:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80614140u: goto label_80614140;
    case 0x806141A4u: goto label_806141A4;
    case 0x80614228u: goto label_80614228;
    case 0x80614288u: goto label_80614288;
    case 0x80614290u: goto label_80614290;
    case 0x806142F8u: goto label_806142F8;
    case 0x80614300u: goto label_80614300;
    case 0x80614314u: goto label_80614314;
    case 0x80614388u: goto label_80614388;
    case 0x80614390u: goto label_80614390;
    case 0x80614408u: goto label_80614408;
    case 0x80614418u: goto label_80614418;
    case 0x8061442Cu: goto label_8061442C;
    case 0x8061444Cu: goto label_8061444C;
    case 0x80614470u: goto label_80614470;
    case 0x80614484u: goto label_80614484;
    case 0x80614490u: goto label_80614490;
    case 0x806144A8u: goto label_806144A8;
    case 0x8061453Cu: goto label_8061453C;
    case 0x8061454Cu: goto label_8061454C;
    case 0x80614564u: goto label_80614564;
    case 0x80614584u: goto label_80614584;
    case 0x806145A8u: goto label_806145A8;
    case 0x806145BCu: goto label_806145BC;
    case 0x806145C8u: goto label_806145C8;
    case 0x806145E0u: goto label_806145E0;
    case 0x80614610u: goto label_80614610;
    default: return;
    }
}

