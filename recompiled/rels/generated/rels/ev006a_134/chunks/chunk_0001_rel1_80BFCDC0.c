// DolRecomp output
#include "../generated.h"

static void loop_80BFCF84(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80BFCF84:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80BFCF84u;
            return;
        }
        ctx->downcount -= 8;
    }
    ctx->pc = 0x80BFCF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCF84: lwz     r4, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF88u)) return;
    // 80BFCF88: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

    ctx->pc = 0x80BFCF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCF8C: lbzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF90u)) return;
    // 80BFCF90: ori     r0, r0, 0x0030
    ctx->gpr[0] = ctx->gpr[0] | 0x0030u;

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF94u)) return;
    // 80BFCF94: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

    ctx->pc = 0x80BFCF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCF98: stbx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF9Cu)) return;
    // 80BFCF9C: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFA0u)) return;
    // 80BFCFA0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x80BFCFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCFA4: lhz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFA8u)) return;
    // 80BFCFA8: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFACu)) return;
    // 80BFCFAC: bc    12, 0, 0x80BFCF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFCF84u;
                return;
            }
            goto label_80BFCF84;
        }
    }

    ctx->pc = 0x80BFCFB0u;
}

static void loop_80BFCFC8(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80BFCFC8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80BFCFC8u;
            return;
        }
        ctx->downcount -= 8;
    }
    ctx->pc = 0x80BFCFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCFC8: lwz     r4, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFCCu)) return;
    // 80BFCFCC: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

    ctx->pc = 0x80BFCFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCFD0: lbzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFD4u)) return;
    // 80BFCFD4: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFD8u)) return;
    // 80BFCFD8: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

    ctx->pc = 0x80BFCFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCFDC: stbx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFE0u)) return;
    // 80BFCFE0: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFE4u)) return;
    // 80BFCFE4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x80BFCFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCFE8: lhz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFECu)) return;
    // 80BFCFEC: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFF0u)) return;
    // 80BFCFF0: bc    12, 0, 0x80BFCFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFCFC8u;
                return;
            }
            goto label_80BFCFC8;
        }
    }

    ctx->pc = 0x80BFCFF4u;
}

void func_80BFCDC0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80BFCDC0[940] = {
        &&label_80BFCDC0,
        &&label_80BFCDC4,
        &&label_80BFCDC8,
        &&label_80BFCDCC,
        &&label_80BFCDD0,
        &&label_80BFCDD4,
        &&label_80BFCDD8,
        &&label_80BFCDDC,
        &&label_80BFCDE0,
        &&label_80BFCDE4,
        &&label_80BFCDE8,
        &&label_80BFCDEC,
        &&label_80BFCDF0,
        &&label_80BFCDF4,
        &&label_80BFCDF8,
        &&label_80BFCDFC,
        &&label_80BFCE00,
        &&label_80BFCE04,
        &&label_80BFCE08,
        &&label_80BFCE0C,
        &&label_80BFCE10,
        &&label_80BFCE14,
        &&label_80BFCE18,
        &&label_80BFCE1C,
        &&label_80BFCE20,
        &&label_80BFCE24,
        &&label_80BFCE28,
        &&label_80BFCE2C,
        &&label_80BFCE30,
        &&label_80BFCE34,
        &&label_80BFCE38,
        &&label_80BFCE3C,
        &&label_80BFCE40,
        &&label_80BFCE44,
        &&label_80BFCE48,
        &&label_80BFCE4C,
        &&label_80BFCE50,
        &&label_80BFCE54,
        &&label_80BFCE58,
        &&label_80BFCE5C,
        &&label_80BFCE60,
        &&label_80BFCE64,
        &&label_80BFCE68,
        &&label_80BFCE6C,
        &&label_80BFCE70,
        &&label_80BFCE74,
        &&label_80BFCE78,
        &&label_80BFCE7C,
        &&label_80BFCE80,
        &&label_80BFCE84,
        &&label_80BFCE88,
        &&label_80BFCE8C,
        &&label_80BFCE90,
        &&label_80BFCE94,
        &&label_80BFCE98,
        &&label_80BFCE9C,
        &&label_80BFCEA0,
        &&label_80BFCEA4,
        &&label_80BFCEA8,
        &&label_80BFCEAC,
        &&label_80BFCEB0,
        &&label_80BFCEB4,
        &&label_80BFCEB8,
        &&label_80BFCEBC,
        &&label_80BFCEC0,
        &&label_80BFCEC4,
        &&label_80BFCEC8,
        &&label_80BFCECC,
        &&label_80BFCED0,
        &&label_80BFCED4,
        &&label_80BFCED8,
        &&label_80BFCEDC,
        &&label_80BFCEE0,
        &&label_80BFCEE4,
        &&label_80BFCEE8,
        &&label_80BFCEEC,
        &&label_80BFCEF0,
        &&label_80BFCEF4,
        &&label_80BFCEF8,
        &&label_80BFCEFC,
        &&label_80BFCF00,
        &&label_80BFCF04,
        &&label_80BFCF08,
        &&label_80BFCF0C,
        &&label_80BFCF10,
        &&label_80BFCF14,
        &&label_80BFCF18,
        &&label_80BFCF1C,
        &&label_80BFCF20,
        &&label_80BFCF24,
        &&label_80BFCF28,
        &&label_80BFCF2C,
        &&label_80BFCF30,
        &&label_80BFCF34,
        &&label_80BFCF38,
        &&label_80BFCF3C,
        &&label_80BFCF40,
        &&label_80BFCF44,
        &&label_80BFCF48,
        &&label_80BFCF4C,
        &&label_80BFCF50,
        &&label_80BFCF54,
        &&label_80BFCF58,
        &&label_80BFCF5C,
        &&label_80BFCF60,
        &&label_80BFCF64,
        &&label_80BFCF68,
        &&label_80BFCF6C,
        &&label_80BFCF70,
        &&label_80BFCF74,
        &&label_80BFCF78,
        &&label_80BFCF7C,
        &&label_80BFCF80,
        &&label_80BFCF84,
        &&label_80BFCF88,
        &&label_80BFCF8C,
        &&label_80BFCF90,
        &&label_80BFCF94,
        &&label_80BFCF98,
        &&label_80BFCF9C,
        &&label_80BFCFA0,
        &&label_80BFCFA4,
        &&label_80BFCFA8,
        &&label_80BFCFAC,
        &&label_80BFCFB0,
        &&label_80BFCFB4,
        &&label_80BFCFB8,
        &&label_80BFCFBC,
        &&label_80BFCFC0,
        &&label_80BFCFC4,
        &&label_80BFCFC8,
        &&label_80BFCFCC,
        &&label_80BFCFD0,
        &&label_80BFCFD4,
        &&label_80BFCFD8,
        &&label_80BFCFDC,
        &&label_80BFCFE0,
        &&label_80BFCFE4,
        &&label_80BFCFE8,
        &&label_80BFCFEC,
        &&label_80BFCFF0,
        &&label_80BFCFF4,
        &&label_80BFCFF8,
        &&label_80BFCFFC,
        &&label_80BFD000,
        &&label_80BFD004,
        &&label_80BFD008,
        &&label_80BFD00C,
        &&label_80BFD010,
        &&label_80BFD014,
        &&label_80BFD018,
        &&label_80BFD01C,
        &&label_80BFD020,
        &&label_80BFD024,
        &&label_80BFD028,
        &&label_80BFD02C,
        &&label_80BFD030,
        &&label_80BFD034,
        &&label_80BFD038,
        &&label_80BFD03C,
        &&label_80BFD040,
        &&label_80BFD044,
        &&label_80BFD048,
        &&label_80BFD04C,
        &&label_80BFD050,
        &&label_80BFD054,
        &&label_80BFD058,
        &&label_80BFD05C,
        &&label_80BFD060,
        &&label_80BFD064,
        &&label_80BFD068,
        &&label_80BFD06C,
        &&label_80BFD070,
        &&label_80BFD074,
        &&label_80BFD078,
        &&label_80BFD07C,
        &&label_80BFD080,
        &&label_80BFD084,
        &&label_80BFD088,
        &&label_80BFD08C,
        &&label_80BFD090,
        &&label_80BFD094,
        &&label_80BFD098,
        &&label_80BFD09C,
        &&label_80BFD0A0,
        &&label_80BFD0A4,
        &&label_80BFD0A8,
        &&label_80BFD0AC,
        &&label_80BFD0B0,
        &&label_80BFD0B4,
        &&label_80BFD0B8,
        &&label_80BFD0BC,
        &&label_80BFD0C0,
        &&label_80BFD0C4,
        &&label_80BFD0C8,
        &&label_80BFD0CC,
        &&label_80BFD0D0,
        &&label_80BFD0D4,
        &&label_80BFD0D8,
        &&label_80BFD0DC,
        &&label_80BFD0E0,
        &&label_80BFD0E4,
        &&label_80BFD0E8,
        &&label_80BFD0EC,
        &&label_80BFD0F0,
        &&label_80BFD0F4,
        &&label_80BFD0F8,
        &&label_80BFD0FC,
        &&label_80BFD100,
        &&label_80BFD104,
        &&label_80BFD108,
        &&label_80BFD10C,
        &&label_80BFD110,
        &&label_80BFD114,
        &&label_80BFD118,
        &&label_80BFD11C,
        &&label_80BFD120,
        &&label_80BFD124,
        &&label_80BFD128,
        &&label_80BFD12C,
        &&label_80BFD130,
        &&label_80BFD134,
        &&label_80BFD138,
        &&label_80BFD13C,
        &&label_80BFD140,
        &&label_80BFD144,
        &&label_80BFD148,
        &&label_80BFD14C,
        &&label_80BFD150,
        &&label_80BFD154,
        &&label_80BFD158,
        &&label_80BFD15C,
        &&label_80BFD160,
        &&label_80BFD164,
        &&label_80BFD168,
        &&label_80BFD16C,
        &&label_80BFD170,
        &&label_80BFD174,
        &&label_80BFD178,
        &&label_80BFD17C,
        &&label_80BFD180,
        &&label_80BFD184,
        &&label_80BFD188,
        &&label_80BFD18C,
        &&label_80BFD190,
        &&label_80BFD194,
        &&label_80BFD198,
        &&label_80BFD19C,
        &&label_80BFD1A0,
        &&label_80BFD1A4,
        &&label_80BFD1A8,
        &&label_80BFD1AC,
        &&label_80BFD1B0,
        &&label_80BFD1B4,
        &&label_80BFD1B8,
        &&label_80BFD1BC,
        &&label_80BFD1C0,
        &&label_80BFD1C4,
        &&label_80BFD1C8,
        &&label_80BFD1CC,
        &&label_80BFD1D0,
        &&label_80BFD1D4,
        &&label_80BFD1D8,
        &&label_80BFD1DC,
        &&label_80BFD1E0,
        &&label_80BFD1E4,
        &&label_80BFD1E8,
        &&label_80BFD1EC,
        &&label_80BFD1F0,
        &&label_80BFD1F4,
        &&label_80BFD1F8,
        &&label_80BFD1FC,
        &&label_80BFD200,
        &&label_80BFD204,
        &&label_80BFD208,
        &&label_80BFD20C,
        &&label_80BFD210,
        &&label_80BFD214,
        &&label_80BFD218,
        &&label_80BFD21C,
        &&label_80BFD220,
        &&label_80BFD224,
        &&label_80BFD228,
        &&label_80BFD22C,
        &&label_80BFD230,
        &&label_80BFD234,
        &&label_80BFD238,
        &&label_80BFD23C,
        &&label_80BFD240,
        &&label_80BFD244,
        &&label_80BFD248,
        &&label_80BFD24C,
        &&label_80BFD250,
        &&label_80BFD254,
        &&label_80BFD258,
        &&label_80BFD25C,
        &&label_80BFD260,
        &&label_80BFD264,
        &&label_80BFD268,
        &&label_80BFD26C,
        &&label_80BFD270,
        &&label_80BFD274,
        &&label_80BFD278,
        &&label_80BFD27C,
        &&label_80BFD280,
        &&label_80BFD284,
        &&label_80BFD288,
        &&label_80BFD28C,
        &&label_80BFD290,
        &&label_80BFD294,
        &&label_80BFD298,
        &&label_80BFD29C,
        &&label_80BFD2A0,
        &&label_80BFD2A4,
        &&label_80BFD2A8,
        &&label_80BFD2AC,
        &&label_80BFD2B0,
        &&label_80BFD2B4,
        &&label_80BFD2B8,
        &&label_80BFD2BC,
        &&label_80BFD2C0,
        &&label_80BFD2C4,
        &&label_80BFD2C8,
        &&label_80BFD2CC,
        &&label_80BFD2D0,
        &&label_80BFD2D4,
        &&label_80BFD2D8,
        &&label_80BFD2DC,
        &&label_80BFD2E0,
        &&label_80BFD2E4,
        &&label_80BFD2E8,
        &&label_80BFD2EC,
        &&label_80BFD2F0,
        &&label_80BFD2F4,
        &&label_80BFD2F8,
        &&label_80BFD2FC,
        &&label_80BFD300,
        &&label_80BFD304,
        &&label_80BFD308,
        &&label_80BFD30C,
        &&label_80BFD310,
        &&label_80BFD314,
        &&label_80BFD318,
        &&label_80BFD31C,
        &&label_80BFD320,
        &&label_80BFD324,
        &&label_80BFD328,
        &&label_80BFD32C,
        &&label_80BFD330,
        &&label_80BFD334,
        &&label_80BFD338,
        &&label_80BFD33C,
        &&label_80BFD340,
        &&label_80BFD344,
        &&label_80BFD348,
        &&label_80BFD34C,
        &&label_80BFD350,
        &&label_80BFD354,
        &&label_80BFD358,
        &&label_80BFD35C,
        &&label_80BFD360,
        &&label_80BFD364,
        &&label_80BFD368,
        &&label_80BFD36C,
        &&label_80BFD370,
        &&label_80BFD374,
        &&label_80BFD378,
        &&label_80BFD37C,
        &&label_80BFD380,
        &&label_80BFD384,
        &&label_80BFD388,
        &&label_80BFD38C,
        &&label_80BFD390,
        &&label_80BFD394,
        &&label_80BFD398,
        &&label_80BFD39C,
        &&label_80BFD3A0,
        &&label_80BFD3A4,
        &&label_80BFD3A8,
        &&label_80BFD3AC,
        &&label_80BFD3B0,
        &&label_80BFD3B4,
        &&label_80BFD3B8,
        &&label_80BFD3BC,
        &&label_80BFD3C0,
        &&label_80BFD3C4,
        &&label_80BFD3C8,
        &&label_80BFD3CC,
        &&label_80BFD3D0,
        &&label_80BFD3D4,
        &&label_80BFD3D8,
        &&label_80BFD3DC,
        &&label_80BFD3E0,
        &&label_80BFD3E4,
        &&label_80BFD3E8,
        &&label_80BFD3EC,
        &&label_80BFD3F0,
        &&label_80BFD3F4,
        &&label_80BFD3F8,
        &&label_80BFD3FC,
        &&label_80BFD400,
        &&label_80BFD404,
        &&label_80BFD408,
        &&label_80BFD40C,
        &&label_80BFD410,
        &&label_80BFD414,
        &&label_80BFD418,
        &&label_80BFD41C,
        &&label_80BFD420,
        &&label_80BFD424,
        &&label_80BFD428,
        &&label_80BFD42C,
        &&label_80BFD430,
        &&label_80BFD434,
        &&label_80BFD438,
        &&label_80BFD43C,
        &&label_80BFD440,
        &&label_80BFD444,
        &&label_80BFD448,
        &&label_80BFD44C,
        &&label_80BFD450,
        &&label_80BFD454,
        &&label_80BFD458,
        &&label_80BFD45C,
        &&label_80BFD460,
        &&label_80BFD464,
        &&label_80BFD468,
        &&label_80BFD46C,
        &&label_80BFD470,
        &&label_80BFD474,
        &&label_80BFD478,
        &&label_80BFD47C,
        &&label_80BFD480,
        &&label_80BFD484,
        &&label_80BFD488,
        &&label_80BFD48C,
        &&label_80BFD490,
        &&label_80BFD494,
        &&label_80BFD498,
        &&label_80BFD49C,
        &&label_80BFD4A0,
        &&label_80BFD4A4,
        &&label_80BFD4A8,
        &&label_80BFD4AC,
        &&label_80BFD4B0,
        &&label_80BFD4B4,
        &&label_80BFD4B8,
        &&label_80BFD4BC,
        &&label_80BFD4C0,
        &&label_80BFD4C4,
        &&label_80BFD4C8,
        &&label_80BFD4CC,
        &&label_80BFD4D0,
        &&label_80BFD4D4,
        &&label_80BFD4D8,
        &&label_80BFD4DC,
        &&label_80BFD4E0,
        &&label_80BFD4E4,
        &&label_80BFD4E8,
        &&label_80BFD4EC,
        &&label_80BFD4F0,
        &&label_80BFD4F4,
        &&label_80BFD4F8,
        &&label_80BFD4FC,
        &&label_80BFD500,
        &&label_80BFD504,
        &&label_80BFD508,
        &&label_80BFD50C,
        &&label_80BFD510,
        &&label_80BFD514,
        &&label_80BFD518,
        &&label_80BFD51C,
        &&label_80BFD520,
        &&label_80BFD524,
        &&label_80BFD528,
        &&label_80BFD52C,
        &&label_80BFD530,
        &&label_80BFD534,
        &&label_80BFD538,
        &&label_80BFD53C,
        &&label_80BFD540,
        &&label_80BFD544,
        &&label_80BFD548,
        &&label_80BFD54C,
        &&label_80BFD550,
        &&label_80BFD554,
        &&label_80BFD558,
        &&label_80BFD55C,
        &&label_80BFD560,
        &&label_80BFD564,
        &&label_80BFD568,
        &&label_80BFD56C,
        &&label_80BFD570,
        &&label_80BFD574,
        &&label_80BFD578,
        &&label_80BFD57C,
        &&label_80BFD580,
        &&label_80BFD584,
        &&label_80BFD588,
        &&label_80BFD58C,
        &&label_80BFD590,
        &&label_80BFD594,
        &&label_80BFD598,
        &&label_80BFD59C,
        &&label_80BFD5A0,
        &&label_80BFD5A4,
        &&label_80BFD5A8,
        &&label_80BFD5AC,
        &&label_80BFD5B0,
        &&label_80BFD5B4,
        &&label_80BFD5B8,
        &&label_80BFD5BC,
        &&label_80BFD5C0,
        &&label_80BFD5C4,
        &&label_80BFD5C8,
        &&label_80BFD5CC,
        &&label_80BFD5D0,
        &&label_80BFD5D4,
        &&label_80BFD5D8,
        &&label_80BFD5DC,
        &&label_80BFD5E0,
        &&label_80BFD5E4,
        &&label_80BFD5E8,
        &&label_80BFD5EC,
        &&label_80BFD5F0,
        &&label_80BFD5F4,
        &&label_80BFD5F8,
        &&label_80BFD5FC,
        &&label_80BFD600,
        &&label_80BFD604,
        &&label_80BFD608,
        &&label_80BFD60C,
        &&label_80BFD610,
        &&label_80BFD614,
        &&label_80BFD618,
        &&label_80BFD61C,
        &&label_80BFD620,
        &&label_80BFD624,
        &&label_80BFD628,
        &&label_80BFD62C,
        &&label_80BFD630,
        &&label_80BFD634,
        &&label_80BFD638,
        &&label_80BFD63C,
        &&label_80BFD640,
        &&label_80BFD644,
        &&label_80BFD648,
        &&label_80BFD64C,
        &&label_80BFD650,
        &&label_80BFD654,
        &&label_80BFD658,
        &&label_80BFD65C,
        &&label_80BFD660,
        &&label_80BFD664,
        &&label_80BFD668,
        &&label_80BFD66C,
        &&label_80BFD670,
        &&label_80BFD674,
        &&label_80BFD678,
        &&label_80BFD67C,
        &&label_80BFD680,
        &&label_80BFD684,
        &&label_80BFD688,
        &&label_80BFD68C,
        &&label_80BFD690,
        &&label_80BFD694,
        &&label_80BFD698,
        &&label_80BFD69C,
        &&label_80BFD6A0,
        &&label_80BFD6A4,
        &&label_80BFD6A8,
        &&label_80BFD6AC,
        &&label_80BFD6B0,
        &&label_80BFD6B4,
        &&label_80BFD6B8,
        &&label_80BFD6BC,
        &&label_80BFD6C0,
        &&label_80BFD6C4,
        &&label_80BFD6C8,
        &&label_80BFD6CC,
        &&label_80BFD6D0,
        &&label_80BFD6D4,
        &&label_80BFD6D8,
        &&label_80BFD6DC,
        &&label_80BFD6E0,
        &&label_80BFD6E4,
        &&label_80BFD6E8,
        &&label_80BFD6EC,
        &&label_80BFD6F0,
        &&label_80BFD6F4,
        &&label_80BFD6F8,
        &&label_80BFD6FC,
        &&label_80BFD700,
        &&label_80BFD704,
        &&label_80BFD708,
        &&label_80BFD70C,
        &&label_80BFD710,
        &&label_80BFD714,
        &&label_80BFD718,
        &&label_80BFD71C,
        &&label_80BFD720,
        &&label_80BFD724,
        &&label_80BFD728,
        &&label_80BFD72C,
        &&label_80BFD730,
        &&label_80BFD734,
        &&label_80BFD738,
        &&label_80BFD73C,
        &&label_80BFD740,
        &&label_80BFD744,
        &&label_80BFD748,
        &&label_80BFD74C,
        &&label_80BFD750,
        &&label_80BFD754,
        &&label_80BFD758,
        &&label_80BFD75C,
        &&label_80BFD760,
        &&label_80BFD764,
        &&label_80BFD768,
        &&label_80BFD76C,
        &&label_80BFD770,
        &&label_80BFD774,
        &&label_80BFD778,
        &&label_80BFD77C,
        &&label_80BFD780,
        &&label_80BFD784,
        &&label_80BFD788,
        &&label_80BFD78C,
        &&label_80BFD790,
        &&label_80BFD794,
        &&label_80BFD798,
        &&label_80BFD79C,
        &&label_80BFD7A0,
        &&label_80BFD7A4,
        &&label_80BFD7A8,
        &&label_80BFD7AC,
        &&label_80BFD7B0,
        &&label_80BFD7B4,
        &&label_80BFD7B8,
        &&label_80BFD7BC,
        &&label_80BFD7C0,
        &&label_80BFD7C4,
        &&label_80BFD7C8,
        &&label_80BFD7CC,
        &&label_80BFD7D0,
        &&label_80BFD7D4,
        &&label_80BFD7D8,
        &&label_80BFD7DC,
        &&label_80BFD7E0,
        &&label_80BFD7E4,
        &&label_80BFD7E8,
        &&label_80BFD7EC,
        &&label_80BFD7F0,
        &&label_80BFD7F4,
        &&label_80BFD7F8,
        &&label_80BFD7FC,
        &&label_80BFD800,
        &&label_80BFD804,
        &&label_80BFD808,
        &&label_80BFD80C,
        &&label_80BFD810,
        &&label_80BFD814,
        &&label_80BFD818,
        &&label_80BFD81C,
        &&label_80BFD820,
        &&label_80BFD824,
        &&label_80BFD828,
        &&label_80BFD82C,
        &&label_80BFD830,
        &&label_80BFD834,
        &&label_80BFD838,
        &&label_80BFD83C,
        &&label_80BFD840,
        &&label_80BFD844,
        &&label_80BFD848,
        &&label_80BFD84C,
        &&label_80BFD850,
        &&label_80BFD854,
        &&label_80BFD858,
        &&label_80BFD85C,
        &&label_80BFD860,
        &&label_80BFD864,
        &&label_80BFD868,
        &&label_80BFD86C,
        &&label_80BFD870,
        &&label_80BFD874,
        &&label_80BFD878,
        &&label_80BFD87C,
        &&label_80BFD880,
        &&label_80BFD884,
        &&label_80BFD888,
        &&label_80BFD88C,
        &&label_80BFD890,
        &&label_80BFD894,
        &&label_80BFD898,
        &&label_80BFD89C,
        &&label_80BFD8A0,
        &&label_80BFD8A4,
        &&label_80BFD8A8,
        &&label_80BFD8AC,
        &&label_80BFD8B0,
        &&label_80BFD8B4,
        &&label_80BFD8B8,
        &&label_80BFD8BC,
        &&label_80BFD8C0,
        &&label_80BFD8C4,
        &&label_80BFD8C8,
        &&label_80BFD8CC,
        &&label_80BFD8D0,
        &&label_80BFD8D4,
        &&label_80BFD8D8,
        &&label_80BFD8DC,
        &&label_80BFD8E0,
        &&label_80BFD8E4,
        &&label_80BFD8E8,
        &&label_80BFD8EC,
        &&label_80BFD8F0,
        &&label_80BFD8F4,
        &&label_80BFD8F8,
        &&label_80BFD8FC,
        &&label_80BFD900,
        &&label_80BFD904,
        &&label_80BFD908,
        &&label_80BFD90C,
        &&label_80BFD910,
        &&label_80BFD914,
        &&label_80BFD918,
        &&label_80BFD91C,
        &&label_80BFD920,
        &&label_80BFD924,
        &&label_80BFD928,
        &&label_80BFD92C,
        &&label_80BFD930,
        &&label_80BFD934,
        &&label_80BFD938,
        &&label_80BFD93C,
        &&label_80BFD940,
        &&label_80BFD944,
        &&label_80BFD948,
        &&label_80BFD94C,
        &&label_80BFD950,
        &&label_80BFD954,
        &&label_80BFD958,
        &&label_80BFD95C,
        &&label_80BFD960,
        &&label_80BFD964,
        &&label_80BFD968,
        &&label_80BFD96C,
        &&label_80BFD970,
        &&label_80BFD974,
        &&label_80BFD978,
        &&label_80BFD97C,
        &&label_80BFD980,
        &&label_80BFD984,
        &&label_80BFD988,
        &&label_80BFD98C,
        &&label_80BFD990,
        &&label_80BFD994,
        &&label_80BFD998,
        &&label_80BFD99C,
        &&label_80BFD9A0,
        &&label_80BFD9A4,
        &&label_80BFD9A8,
        &&label_80BFD9AC,
        &&label_80BFD9B0,
        &&label_80BFD9B4,
        &&label_80BFD9B8,
        &&label_80BFD9BC,
        &&label_80BFD9C0,
        &&label_80BFD9C4,
        &&label_80BFD9C8,
        &&label_80BFD9CC,
        &&label_80BFD9D0,
        &&label_80BFD9D4,
        &&label_80BFD9D8,
        &&label_80BFD9DC,
        &&label_80BFD9E0,
        &&label_80BFD9E4,
        &&label_80BFD9E8,
        &&label_80BFD9EC,
        &&label_80BFD9F0,
        &&label_80BFD9F4,
        &&label_80BFD9F8,
        &&label_80BFD9FC,
        &&label_80BFDA00,
        &&label_80BFDA04,
        &&label_80BFDA08,
        &&label_80BFDA0C,
        &&label_80BFDA10,
        &&label_80BFDA14,
        &&label_80BFDA18,
        &&label_80BFDA1C,
        &&label_80BFDA20,
        &&label_80BFDA24,
        &&label_80BFDA28,
        &&label_80BFDA2C,
        &&label_80BFDA30,
        &&label_80BFDA34,
        &&label_80BFDA38,
        &&label_80BFDA3C,
        &&label_80BFDA40,
        &&label_80BFDA44,
        &&label_80BFDA48,
        &&label_80BFDA4C,
        &&label_80BFDA50,
        &&label_80BFDA54,
        &&label_80BFDA58,
        &&label_80BFDA5C,
        &&label_80BFDA60,
        &&label_80BFDA64,
        &&label_80BFDA68,
        &&label_80BFDA6C,
        &&label_80BFDA70,
        &&label_80BFDA74,
        &&label_80BFDA78,
        &&label_80BFDA7C,
        &&label_80BFDA80,
        &&label_80BFDA84,
        &&label_80BFDA88,
        &&label_80BFDA8C,
        &&label_80BFDA90,
        &&label_80BFDA94,
        &&label_80BFDA98,
        &&label_80BFDA9C,
        &&label_80BFDAA0,
        &&label_80BFDAA4,
        &&label_80BFDAA8,
        &&label_80BFDAAC,
        &&label_80BFDAB0,
        &&label_80BFDAB4,
        &&label_80BFDAB8,
        &&label_80BFDABC,
        &&label_80BFDAC0,
        &&label_80BFDAC4,
        &&label_80BFDAC8,
        &&label_80BFDACC,
        &&label_80BFDAD0,
        &&label_80BFDAD4,
        &&label_80BFDAD8,
        &&label_80BFDADC,
        &&label_80BFDAE0,
        &&label_80BFDAE4,
        &&label_80BFDAE8,
        &&label_80BFDAEC,
        &&label_80BFDAF0,
        &&label_80BFDAF4,
        &&label_80BFDAF8,
        &&label_80BFDAFC,
        &&label_80BFDB00,
        &&label_80BFDB04,
        &&label_80BFDB08,
        &&label_80BFDB0C,
        &&label_80BFDB10,
        &&label_80BFDB14,
        &&label_80BFDB18,
        &&label_80BFDB1C,
        &&label_80BFDB20,
        &&label_80BFDB24,
        &&label_80BFDB28,
        &&label_80BFDB2C,
        &&label_80BFDB30,
        &&label_80BFDB34,
        &&label_80BFDB38,
        &&label_80BFDB3C,
        &&label_80BFDB40,
        &&label_80BFDB44,
        &&label_80BFDB48,
        &&label_80BFDB4C,
        &&label_80BFDB50,
        &&label_80BFDB54,
        &&label_80BFDB58,
        &&label_80BFDB5C,
        &&label_80BFDB60,
        &&label_80BFDB64,
        &&label_80BFDB68,
        &&label_80BFDB6C,
        &&label_80BFDB70,
        &&label_80BFDB74,
        &&label_80BFDB78,
        &&label_80BFDB7C,
        &&label_80BFDB80,
        &&label_80BFDB84,
        &&label_80BFDB88,
        &&label_80BFDB8C,
        &&label_80BFDB90,
        &&label_80BFDB94,
        &&label_80BFDB98,
        &&label_80BFDB9C,
        &&label_80BFDBA0,
        &&label_80BFDBA4,
        &&label_80BFDBA8,
        &&label_80BFDBAC,
        &&label_80BFDBB0,
        &&label_80BFDBB4,
        &&label_80BFDBB8,
        &&label_80BFDBBC,
        &&label_80BFDBC0,
        &&label_80BFDBC4,
        &&label_80BFDBC8,
        &&label_80BFDBCC,
        &&label_80BFDBD0,
        &&label_80BFDBD4,
        &&label_80BFDBD8,
        &&label_80BFDBDC,
        &&label_80BFDBE0,
        &&label_80BFDBE4,
        &&label_80BFDBE8,
        &&label_80BFDBEC,
        &&label_80BFDBF0,
        &&label_80BFDBF4,
        &&label_80BFDBF8,
        &&label_80BFDBFC,
        &&label_80BFDC00,
        &&label_80BFDC04,
        &&label_80BFDC08,
        &&label_80BFDC0C,
        &&label_80BFDC10,
        &&label_80BFDC14,
        &&label_80BFDC18,
        &&label_80BFDC1C,
        &&label_80BFDC20,
        &&label_80BFDC24,
        &&label_80BFDC28,
        &&label_80BFDC2C,
        &&label_80BFDC30,
        &&label_80BFDC34,
        &&label_80BFDC38,
        &&label_80BFDC3C,
        &&label_80BFDC40,
        &&label_80BFDC44,
        &&label_80BFDC48,
        &&label_80BFDC4C,
        &&label_80BFDC50,
        &&label_80BFDC54,
        &&label_80BFDC58,
        &&label_80BFDC5C,
        &&label_80BFDC60,
        &&label_80BFDC64,
        &&label_80BFDC68,
        &&label_80BFDC6C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80BFCDC0u && pc <= 0x80BFDC6Cu && ((pc - 0x80BFCDC0u) & 3u) == 0u)
            goto *pc_table_80BFCDC0[(pc - 0x80BFCDC0u) >> 2];
    }
    return;
label_80BFCDC0:
    ctx->pc = 0x80BFCDC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCDC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFCDC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCDC4:
    ctx->pc = 0x80BFCDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCDC4: stwu     r1, -16(r1)
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
label_80BFCDC8:
    ctx->pc = 0x80BFCDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFCDC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCDCC:
    ctx->pc = 0x80BFCDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCDCC: stw     r0, 20(r1)
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
label_80BFCDD0:
    ctx->pc = 0x80BFCDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDD0u)) return;
    // 80BFCDD0: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFCDD4:
    ctx->pc = 0x80BFCDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDD4u)) return;
    // 80BFCDD4: addi    r6, r6, 28656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28656);

label_80BFCDD8:
    ctx->pc = 0x80BFCDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCDD8: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCDDC:
    ctx->pc = 0x80BFCDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDDCu)) return;
    // 80BFCDDC: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFCDE0:
    ctx->pc = 0x80BFCDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDE0u)) return;
    // 80BFCDE0: bc    4, 0, 0x80BFCE04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFCE04;
        }
    }

label_80BFCDE4:
    ctx->pc = 0x80BFCDE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCDE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFCDE4: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFCDE8:
    ctx->pc = 0x80BFCDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDE8u)) return;
    // 80BFCDE8: addi    r6, r6, 28660
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28660);

label_80BFCDEC:
    ctx->pc = 0x80BFCDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCDEC: lwz     r6, 0(r6)
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
label_80BFCDF0:
    ctx->pc = 0x80BFCDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDF0u)) return;
    // 80BFCDF0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFCDF4:
    ctx->pc = 0x80BFCDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCDF4: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCDF8:
    ctx->pc = 0x80BFCDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDF8u)) return;
    // 80BFCDF8: cmplwi  r3, 0x0000
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

label_80BFCDFC:
    ctx->pc = 0x80BFCDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCDFCu)) return;
    // 80BFCDFC: bc    12, 2, 0x80BFCE04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFCE04;
        }
    }

label_80BFCE00:
    ctx->pc = 0x80BFCE00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFCE00: bl      0x80BFCAF0
    {
            ctx->lr = 0x80BFCE04u;
            ctx->pc = 0x80BFCAF0u;
            return;
    }

label_80BFCE04:
    ctx->pc = 0x80BFCE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCE04: lwz     r0, 20(r1)
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
label_80BFCE08:
    ctx->pc = 0x80BFCE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFCE08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCE08: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE0C:
    ctx->pc = 0x80BFCE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE0Cu)) return;
    // 80BFCE0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFCE10:
    ctx->pc = 0x80BFCE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE10u)) return;
    // 80BFCE10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCE14:
    ctx->pc = 0x80BFCE14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCE14: stwu     r1, -16(r1)
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
label_80BFCE18:
    ctx->pc = 0x80BFCE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFCE18: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE1C:
    ctx->pc = 0x80BFCE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCE1C: stw     r0, 20(r1)
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
label_80BFCE20:
    ctx->pc = 0x80BFCE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE20u)) return;
    // 80BFCE20: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFCE24:
    ctx->pc = 0x80BFCE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE24u)) return;
    // 80BFCE24: addi    r6, r6, 28656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28656);

label_80BFCE28:
    ctx->pc = 0x80BFCE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCE28: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE2C:
    ctx->pc = 0x80BFCE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE2Cu)) return;
    // 80BFCE2C: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFCE30:
    ctx->pc = 0x80BFCE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE30u)) return;
    // 80BFCE30: bc    4, 0, 0x80BFCE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFCE54;
        }
    }

label_80BFCE34:
    ctx->pc = 0x80BFCE34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFCE34: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFCE38:
    ctx->pc = 0x80BFCE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE38u)) return;
    // 80BFCE38: addi    r6, r6, 28660
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28660);

label_80BFCE3C:
    ctx->pc = 0x80BFCE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCE3C: lwz     r6, 0(r6)
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
label_80BFCE40:
    ctx->pc = 0x80BFCE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE40u)) return;
    // 80BFCE40: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFCE44:
    ctx->pc = 0x80BFCE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCE44: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE48:
    ctx->pc = 0x80BFCE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE48u)) return;
    // 80BFCE48: cmplwi  r3, 0x0000
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

label_80BFCE4C:
    ctx->pc = 0x80BFCE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE4Cu)) return;
    // 80BFCE4C: bc    12, 2, 0x80BFCE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFCE54;
        }
    }

label_80BFCE50:
    ctx->pc = 0x80BFCE50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFCE50: bl      0x80BFCB40
    {
            ctx->lr = 0x80BFCE54u;
            ctx->pc = 0x80BFCB40u;
            return;
    }

label_80BFCE54:
    ctx->pc = 0x80BFCE54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCE54: lwz     r0, 20(r1)
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
label_80BFCE58:
    ctx->pc = 0x80BFCE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFCE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCE58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE5C:
    ctx->pc = 0x80BFCE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE5Cu)) return;
    // 80BFCE5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFCE60:
    ctx->pc = 0x80BFCE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE60u)) return;
    // 80BFCE60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCE64:
    ctx->pc = 0x80BFCE64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCE64: stwu     r1, -16(r1)
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
label_80BFCE68:
    ctx->pc = 0x80BFCE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFCE68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE6C:
    ctx->pc = 0x80BFCE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCE6C: stw     r0, 20(r1)
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
label_80BFCE70:
    ctx->pc = 0x80BFCE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE70u)) return;
    // 80BFCE70: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFCE74:
    ctx->pc = 0x80BFCE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE74u)) return;
    // 80BFCE74: addi    r6, r6, 28656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28656);

label_80BFCE78:
    ctx->pc = 0x80BFCE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCE78: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE7C:
    ctx->pc = 0x80BFCE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE7Cu)) return;
    // 80BFCE7C: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFCE80:
    ctx->pc = 0x80BFCE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE80u)) return;
    // 80BFCE80: bc    4, 0, 0x80BFCEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFCEA4;
        }
    }

label_80BFCE84:
    ctx->pc = 0x80BFCE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFCE84: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFCE88:
    ctx->pc = 0x80BFCE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE88u)) return;
    // 80BFCE88: addi    r6, r6, 28660
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28660);

label_80BFCE8C:
    ctx->pc = 0x80BFCE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCE8C: lwz     r6, 0(r6)
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
label_80BFCE90:
    ctx->pc = 0x80BFCE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE90u)) return;
    // 80BFCE90: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFCE94:
    ctx->pc = 0x80BFCE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCE94: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCE98:
    ctx->pc = 0x80BFCE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE98u)) return;
    // 80BFCE98: cmplwi  r3, 0x0000
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

label_80BFCE9C:
    ctx->pc = 0x80BFCE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCE9Cu)) return;
    // 80BFCE9C: bc    12, 2, 0x80BFCEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFCEA4;
        }
    }

label_80BFCEA0:
    ctx->pc = 0x80BFCEA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCEA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFCEA0: bl      0x80BFCB90
    {
            ctx->lr = 0x80BFCEA4u;
            ctx->pc = 0x80BFCB90u;
            return;
    }

label_80BFCEA4:
    ctx->pc = 0x80BFCEA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCEA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCEA4: lwz     r0, 20(r1)
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
label_80BFCEA8:
    ctx->pc = 0x80BFCEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFCEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCEA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCEAC:
    ctx->pc = 0x80BFCEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEACu)) return;
    // 80BFCEAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFCEB0:
    ctx->pc = 0x80BFCEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEB0u)) return;
    // 80BFCEB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCEB4:
    ctx->pc = 0x80BFCEB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCEB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFCEB4: stwu     r1, -32(r1)
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
label_80BFCEB8:
    ctx->pc = 0x80BFCEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFCEB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCEBC:
    ctx->pc = 0x80BFCEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFCEBC: stw     r0, 36(r1)
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
label_80BFCEC0:
    ctx->pc = 0x80BFCEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFCEC0: stw     r31, 28(r1)
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
label_80BFCEC4:
    ctx->pc = 0x80BFCEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFCEC4: stw     r30, 24(r1)
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
label_80BFCEC8:
    ctx->pc = 0x80BFCEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCEC8: stw     r29, 20(r1)
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
label_80BFCECC:
    ctx->pc = 0x80BFCECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFCECC: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCED0:
    ctx->pc = 0x80BFCED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCED0u)) return;
    // 80BFCED0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFCED4:
    ctx->pc = 0x80BFCED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCED4u)) return;
    // 80BFCED4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFCED8:
    ctx->pc = 0x80BFCED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCED8u)) return;
    // 80BFCED8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80BFCEDC:
    ctx->pc = 0x80BFCEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEDCu)) return;
    // 80BFCEDC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80BFCEE0:
    ctx->pc = 0x80BFCEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEE0u)) return;
    // 80BFCEE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFCEE4:
    ctx->pc = 0x80BFCEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEE4u)) return;
    // 80BFCEE4: bl      0x80401DB0
    {
            ctx->lr = 0x80BFCEE8u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80BFCEE8:
    ctx->pc = 0x80BFCEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFCEE8: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFCEEC:
    ctx->pc = 0x80BFCEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEECu)) return;
    // 80BFCEEC: addi    r4, r4, 28664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28664);

label_80BFCEF0:
    ctx->pc = 0x80BFCEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCEF0: lwz     r0, 0(r4)
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
label_80BFCEF4:
    ctx->pc = 0x80BFCEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEF4u)) return;
    // 80BFCEF4: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80BFCEF8:
    ctx->pc = 0x80BFCEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEF8u)) return;
    // 80BFCEF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFCEFC:
    ctx->pc = 0x80BFCEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCEFCu)) return;
    // 80BFCEFC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFCF00:
    ctx->pc = 0x80BFCF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF00u)) return;
    // 80BFCF00: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BFCF04:
    ctx->pc = 0x80BFCF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF04u)) return;
    // 80BFCF04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BFCF08:
    ctx->pc = 0x80BFCF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF08u)) return;
    // 80BFCF08: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80BFCF0C:
    ctx->pc = 0x80BFCF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF0Cu)) return;
    // 80BFCF0C: bl      0x8050A0D4
    {
            ctx->lr = 0x80BFCF10u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80BFCF10:
    ctx->pc = 0x80BFCF10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCF10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFCF10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFCF14:
    ctx->pc = 0x80BFCF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF14u)) return;
    // 80BFCF14: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80BFCF18:
    ctx->pc = 0x80BFCF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF18u)) return;
    // 80BFCF18: bl      0x80509C74
    {
            ctx->lr = 0x80BFCF1Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BFCF1C:
    ctx->pc = 0x80BFCF1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCF1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFCF1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFCF20:
    ctx->pc = 0x80BFCF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF20u)) return;
    // 80BFCF20: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BFCF24:
    ctx->pc = 0x80BFCF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF24u)) return;
    // 80BFCF24: bl      0x80509BF8
    {
            ctx->lr = 0x80BFCF28u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BFCF28:
    ctx->pc = 0x80BFCF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFCF28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFCF2C:
    ctx->pc = 0x80BFCF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF2Cu)) return;
    // 80BFCF2C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BFCF30:
    ctx->pc = 0x80BFCF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF30u)) return;
    // 80BFCF30: bl      0x80509B94
    {
            ctx->lr = 0x80BFCF34u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BFCF34:
    ctx->pc = 0x80BFCF34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCF34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80BFCF34: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFCF38:
    ctx->pc = 0x80BFCF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF38u)) return;
    // 80BFCF38: addi    r4, r3, 28664
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28664);

label_80BFCF3C:
    ctx->pc = 0x80BFCF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFCF3C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCF40:
    ctx->pc = 0x80BFCF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF40u)) return;
    // 80BFCF40: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80BFCF44:
    ctx->pc = 0x80BFCF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFCF44: stw     r0, 0(r4)
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
label_80BFCF48:
    ctx->pc = 0x80BFCF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF48u)) return;
    // 80BFCF48: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80BFCF4C:
    ctx->pc = 0x80BFCF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFCF4C: stw     r0, 0(r4)
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
label_80BFCF50:
    ctx->pc = 0x80BFCF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFCF50: lwz     r31, 28(r1)
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
label_80BFCF54:
    ctx->pc = 0x80BFCF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFCF54: lwz     r30, 24(r1)
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
label_80BFCF58:
    ctx->pc = 0x80BFCF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFCF58: lwz     r29, 20(r1)
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
label_80BFCF5C:
    ctx->pc = 0x80BFCF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCF5C: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCF60:
    ctx->pc = 0x80BFCF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCF60: lwz     r0, 36(r1)
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
label_80BFCF64:
    ctx->pc = 0x80BFCF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFCF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCF64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCF68:
    ctx->pc = 0x80BFCF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF68u)) return;
    // 80BFCF68: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFCF6C:
    ctx->pc = 0x80BFCF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF6Cu)) return;
    // 80BFCF6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCF70:
    ctx->pc = 0x80BFCF70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCF70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCF70: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCF74:
    ctx->pc = 0x80BFCF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFCF74: lwz     r6, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCF78:
    ctx->pc = 0x80BFCF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF78u)) return;
    // 80BFCF78: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BFCF7C:
    ctx->pc = 0x80BFCF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF7Cu)) return;
    // 80BFCF7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80BFCF80:
    ctx->pc = 0x80BFCF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF80u)) return;
    // 80BFCF80: b       0x80BFCFA4
    {
            goto label_80BFCFA4;
    }

label_80BFCF84:
    loop_80BFCF84(ctx);
    if (ctx->pc == 0x80BFCFB0u) goto label_80BFCFB0;
    return;
label_80BFCF88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF88u)) return;
    // 80BFCF88: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

label_80BFCF8C:
    ctx->pc = 0x80BFCF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCF8C: lbzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCF90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF90u)) return;
    // 80BFCF90: ori     r0, r0, 0x0030
    ctx->gpr[0] = ctx->gpr[0] | 0x0030u;

label_80BFCF94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF94u)) return;
    // 80BFCF94: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80BFCF98:
    ctx->pc = 0x80BFCF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCF98: stbx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCF9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCF9Cu)) return;
    // 80BFCF9C: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

label_80BFCFA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFA0u)) return;
    // 80BFCFA0: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80BFCFA4:
    ctx->pc = 0x80BFCFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCFA4: lhz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCFA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFA8u)) return;
    // 80BFCFA8: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFCFAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFACu)) return;
    // 80BFCFAC: bc    12, 0, 0x80BFCF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFCF84u;
                return;
            }
            goto label_80BFCF84;
        }
    }

label_80BFCFB0:
    ctx->pc = 0x80BFCFB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCFB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFCFB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCFB4:
    ctx->pc = 0x80BFCFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFCFB4: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCFB8:
    ctx->pc = 0x80BFCFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFCFB8: lwz     r6, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCFBC:
    ctx->pc = 0x80BFCFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFBCu)) return;
    // 80BFCFBC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BFCFC0:
    ctx->pc = 0x80BFCFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFC0u)) return;
    // 80BFCFC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80BFCFC4:
    ctx->pc = 0x80BFCFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFC4u)) return;
    // 80BFCFC4: b       0x80BFCFE8
    {
            goto label_80BFCFE8;
    }

label_80BFCFC8:
    loop_80BFCFC8(ctx);
    if (ctx->pc == 0x80BFCFF4u) goto label_80BFCFF4;
    return;
label_80BFCFCC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFCCu)) return;
    // 80BFCFCC: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

label_80BFCFD0:
    ctx->pc = 0x80BFCFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFCFD0: lbzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCFD4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFD4u)) return;
    // 80BFCFD4: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_80BFCFD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFD8u)) return;
    // 80BFCFD8: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80BFCFDC:
    ctx->pc = 0x80BFCFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCFDC: stbx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCFE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFE0u)) return;
    // 80BFCFE0: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

label_80BFCFE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFE4u)) return;
    // 80BFCFE4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80BFCFE8:
    ctx->pc = 0x80BFCFE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCFE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFCFE8: lhz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFCFEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFECu)) return;
    // 80BFCFEC: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFCFF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFCFF0u)) return;
    // 80BFCFF0: bc    12, 0, 0x80BFCFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFCFC8u;
                return;
            }
            goto label_80BFCFC8;
        }
    }

label_80BFCFF4:
    ctx->pc = 0x80BFCFF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCFF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFCFF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCFF8:
    ctx->pc = 0x80BFCFF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCFF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFCFF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFCFFC:
    ctx->pc = 0x80BFCFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFCFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFCFFC: stwu     r1, -16(r1)
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
label_80BFD000:
    ctx->pc = 0x80BFD000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD000: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD004:
    ctx->pc = 0x80BFD004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD004: stw     r0, 20(r1)
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
label_80BFD008:
    ctx->pc = 0x80BFD008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD008: stw     r31, 12(r1)
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
label_80BFD00C:
    ctx->pc = 0x80BFD00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD00Cu)) return;
    // 80BFD00C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD010:
    ctx->pc = 0x80BFD010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD010u)) return;
    // 80BFD010: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFD014:
    ctx->pc = 0x80BFD014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD014: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD018:
    ctx->pc = 0x80BFD018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD018: lwz     r6, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD01C:
    ctx->pc = 0x80BFD01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD01C: lwz     r4, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD020:
    ctx->pc = 0x80BFD020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD020u)) return;
    // 80BFD020: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD024:
    ctx->pc = 0x80BFD024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD024u)) return;
    // 80BFD024: bc    12, 2, 0x80BFD038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD038;
        }
    }

label_80BFD028:
    ctx->pc = 0x80BFD028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD028: lwz     r3, 4(r4)
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
label_80BFD02C:
    ctx->pc = 0x80BFD02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD02C: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD030:
    ctx->pc = 0x80BFD030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD030: lfs     f1, 60(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BFD030u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
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
label_80BFD034:
    ctx->pc = 0x80BFD034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD034u)) return;
    // 80BFD034: bl      0x8048BE20
    {
            ctx->lr = 0x80BFD038u;
            ctx->pc = 0x8048BE20u;
            return;
    }

label_80BFD038:
    ctx->pc = 0x80BFD038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD038: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD03C:
    ctx->pc = 0x80BFD03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD03Cu)) return;
    // 80BFD03C: bl      0x80460B90
    {
            ctx->lr = 0x80BFD040u;
            ctx->pc = 0x80460B90u;
            return;
    }

label_80BFD040:
    ctx->pc = 0x80BFD040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD040: lwz     r31, 12(r1)
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
label_80BFD044:
    ctx->pc = 0x80BFD044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD044: lwz     r0, 20(r1)
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
label_80BFD048:
    ctx->pc = 0x80BFD048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD048: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD04C:
    ctx->pc = 0x80BFD04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD04Cu)) return;
    // 80BFD04C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD050:
    ctx->pc = 0x80BFD050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD050u)) return;
    // 80BFD050: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD054:
    ctx->pc = 0x80BFD054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD054: stwu     r1, -16(r1)
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
label_80BFD058:
    ctx->pc = 0x80BFD058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD058: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD05C:
    ctx->pc = 0x80BFD05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD05C: stw     r0, 20(r1)
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
label_80BFD060:
    ctx->pc = 0x80BFD060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD060u)) return;
    // 80BFD060: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD064:
    ctx->pc = 0x80BFD064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD064u)) return;
    // 80BFD064: addi    r4, r4, 28424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28424);

label_80BFD068:
    ctx->pc = 0x80BFD068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD068u)) return;
    // 80BFD068: bl      0x80BFCFFC
    {
            ctx->lr = 0x80BFD06Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFCFFCu;
                return;
            }
            goto label_80BFCFFC;
    }

label_80BFD06C:
    ctx->pc = 0x80BFD06Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD06Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD06C: lwz     r0, 20(r1)
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
label_80BFD070:
    ctx->pc = 0x80BFD070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD070: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD074:
    ctx->pc = 0x80BFD074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD074u)) return;
    // 80BFD074: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD078:
    ctx->pc = 0x80BFD078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD078u)) return;
    // 80BFD078: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD07C:
    ctx->pc = 0x80BFD07Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD07Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD07C: stwu     r1, -16(r1)
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
label_80BFD080:
    ctx->pc = 0x80BFD080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD080: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD084:
    ctx->pc = 0x80BFD084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD084: stw     r0, 20(r1)
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
label_80BFD088:
    ctx->pc = 0x80BFD088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD088u)) return;
    // 80BFD088: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD08C:
    ctx->pc = 0x80BFD08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD08Cu)) return;
    // 80BFD08C: addi    r4, r4, 28448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28448);

label_80BFD090:
    ctx->pc = 0x80BFD090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD090u)) return;
    // 80BFD090: bl      0x80BFCFFC
    {
            ctx->lr = 0x80BFD094u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFCFFCu;
                return;
            }
            goto label_80BFCFFC;
    }

label_80BFD094:
    ctx->pc = 0x80BFD094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD094: lwz     r0, 20(r1)
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
label_80BFD098:
    ctx->pc = 0x80BFD098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD098: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD09C:
    ctx->pc = 0x80BFD09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD09Cu)) return;
    // 80BFD09C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD0A0:
    ctx->pc = 0x80BFD0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0A0u)) return;
    // 80BFD0A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD0A4:
    ctx->pc = 0x80BFD0A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD0A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD0A4: stwu     r1, -16(r1)
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
label_80BFD0A8:
    ctx->pc = 0x80BFD0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD0A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD0AC:
    ctx->pc = 0x80BFD0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD0AC: stw     r0, 20(r1)
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
label_80BFD0B0:
    ctx->pc = 0x80BFD0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0B0u)) return;
    // 80BFD0B0: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD0B4:
    ctx->pc = 0x80BFD0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0B4u)) return;
    // 80BFD0B4: addi    r4, r4, 28472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28472);

label_80BFD0B8:
    ctx->pc = 0x80BFD0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0B8u)) return;
    // 80BFD0B8: bl      0x80BFCFFC
    {
            ctx->lr = 0x80BFD0BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFCFFCu;
                return;
            }
            goto label_80BFCFFC;
    }

label_80BFD0BC:
    ctx->pc = 0x80BFD0BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD0BC: lwz     r0, 20(r1)
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
label_80BFD0C0:
    ctx->pc = 0x80BFD0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD0C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD0C4:
    ctx->pc = 0x80BFD0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0C4u)) return;
    // 80BFD0C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD0C8:
    ctx->pc = 0x80BFD0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0C8u)) return;
    // 80BFD0C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD0CC:
    ctx->pc = 0x80BFD0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD0CC: stwu     r1, -16(r1)
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
label_80BFD0D0:
    ctx->pc = 0x80BFD0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD0D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD0D4:
    ctx->pc = 0x80BFD0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD0D4: stw     r0, 20(r1)
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
label_80BFD0D8:
    ctx->pc = 0x80BFD0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD0D8: stw     r31, 12(r1)
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
label_80BFD0DC:
    ctx->pc = 0x80BFD0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0DCu)) return;
    // 80BFD0DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFD0E0:
    ctx->pc = 0x80BFD0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0E0u)) return;
    // 80BFD0E0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BFD0E4:
    ctx->pc = 0x80BFD0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0E4u)) return;
    // 80BFD0E4: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80BFD0E8:
    ctx->pc = 0x80BFD0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0E8u)) return;
    // 80BFD0E8: addi    r5, r5, -12204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12204);

label_80BFD0EC:
    ctx->pc = 0x80BFD0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0ECu)) return;
    // 80BFD0EC: bl      0x8050FD60
    {
            ctx->lr = 0x80BFD0F0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BFD0F0:
    ctx->pc = 0x80BFD0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD0F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD0F4:
    ctx->pc = 0x80BFD0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD0F4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD0F8:
    ctx->pc = 0x80BFD0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD0F8u)) return;
    // 80BFD0F8: bl      0x80462174
    {
            ctx->lr = 0x80BFD0FCu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80BFD0FC:
    ctx->pc = 0x80BFD0FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD0FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BFD0FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD100:
    ctx->pc = 0x80BFD100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD100u)) return;
    // 80BFD100: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD104:
    ctx->pc = 0x80BFD104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD104u)) return;
    // 80BFD104: addi    r4, r4, 28496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28496);

label_80BFD108:
    ctx->pc = 0x80BFD108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD108u)) return;
    // 80BFD108: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BFD10C:
    ctx->pc = 0x80BFD10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD10Cu)) return;
    // 80BFD10C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80BFD110:
    ctx->pc = 0x80BFD110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD110u)) return;
    // 80BFD110: bl      0x8041E63C
    {
            ctx->lr = 0x80BFD114u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80BFD114:
    ctx->pc = 0x80BFD114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFD114: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD118:
    ctx->pc = 0x80BFD118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD118: lwz     r31, 12(r1)
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
label_80BFD11C:
    ctx->pc = 0x80BFD11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD11C: lwz     r0, 20(r1)
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
label_80BFD120:
    ctx->pc = 0x80BFD120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD120: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD124:
    ctx->pc = 0x80BFD124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD124u)) return;
    // 80BFD124: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD128:
    ctx->pc = 0x80BFD128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD128u)) return;
    // 80BFD128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD12C:
    ctx->pc = 0x80BFD12Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD12Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD12C: stwu     r1, -16(r1)
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
label_80BFD130:
    ctx->pc = 0x80BFD130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD130: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD134:
    ctx->pc = 0x80BFD134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD134: stw     r0, 20(r1)
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
label_80BFD138:
    ctx->pc = 0x80BFD138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD138: stw     r31, 12(r1)
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
label_80BFD13C:
    ctx->pc = 0x80BFD13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD13Cu)) return;
    // 80BFD13C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFD140:
    ctx->pc = 0x80BFD140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD140u)) return;
    // 80BFD140: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BFD144:
    ctx->pc = 0x80BFD144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD144u)) return;
    // 80BFD144: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80BFD148:
    ctx->pc = 0x80BFD148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD148u)) return;
    // 80BFD148: addi    r5, r5, -12164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12164);

label_80BFD14C:
    ctx->pc = 0x80BFD14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD14Cu)) return;
    // 80BFD14C: bl      0x8050FD60
    {
            ctx->lr = 0x80BFD150u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BFD150:
    ctx->pc = 0x80BFD150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD150: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD154:
    ctx->pc = 0x80BFD154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD154: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD158:
    ctx->pc = 0x80BFD158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD158u)) return;
    // 80BFD158: bl      0x80462174
    {
            ctx->lr = 0x80BFD15Cu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80BFD15C:
    ctx->pc = 0x80BFD15Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD15Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BFD15C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD160:
    ctx->pc = 0x80BFD160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD160u)) return;
    // 80BFD160: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD164:
    ctx->pc = 0x80BFD164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD164u)) return;
    // 80BFD164: addi    r4, r4, 28496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28496);

label_80BFD168:
    ctx->pc = 0x80BFD168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD168u)) return;
    // 80BFD168: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BFD16C:
    ctx->pc = 0x80BFD16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD16Cu)) return;
    // 80BFD16C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80BFD170:
    ctx->pc = 0x80BFD170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD170u)) return;
    // 80BFD170: bl      0x8041E63C
    {
            ctx->lr = 0x80BFD174u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80BFD174:
    ctx->pc = 0x80BFD174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFD174: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD178:
    ctx->pc = 0x80BFD178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD178: lwz     r31, 12(r1)
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
label_80BFD17C:
    ctx->pc = 0x80BFD17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD17C: lwz     r0, 20(r1)
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
label_80BFD180:
    ctx->pc = 0x80BFD180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD180: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD184:
    ctx->pc = 0x80BFD184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD184u)) return;
    // 80BFD184: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD188:
    ctx->pc = 0x80BFD188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD188u)) return;
    // 80BFD188: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD18C:
    ctx->pc = 0x80BFD18Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD18Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD18C: stwu     r1, -16(r1)
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
label_80BFD190:
    ctx->pc = 0x80BFD190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD190: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD194:
    ctx->pc = 0x80BFD194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD194: stw     r0, 20(r1)
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
label_80BFD198:
    ctx->pc = 0x80BFD198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD198: stw     r31, 12(r1)
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
label_80BFD19C:
    ctx->pc = 0x80BFD19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD19Cu)) return;
    // 80BFD19C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFD1A0:
    ctx->pc = 0x80BFD1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1A0u)) return;
    // 80BFD1A0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BFD1A4:
    ctx->pc = 0x80BFD1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1A4u)) return;
    // 80BFD1A4: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80BFD1A8:
    ctx->pc = 0x80BFD1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1A8u)) return;
    // 80BFD1A8: addi    r5, r5, -12124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12124);

label_80BFD1AC:
    ctx->pc = 0x80BFD1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1ACu)) return;
    // 80BFD1AC: bl      0x8050FD60
    {
            ctx->lr = 0x80BFD1B0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BFD1B0:
    ctx->pc = 0x80BFD1B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD1B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD1B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD1B4:
    ctx->pc = 0x80BFD1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD1B4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD1B8:
    ctx->pc = 0x80BFD1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1B8u)) return;
    // 80BFD1B8: bl      0x80462174
    {
            ctx->lr = 0x80BFD1BCu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80BFD1BC:
    ctx->pc = 0x80BFD1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BFD1BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD1C0:
    ctx->pc = 0x80BFD1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1C0u)) return;
    // 80BFD1C0: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD1C4:
    ctx->pc = 0x80BFD1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1C4u)) return;
    // 80BFD1C4: addi    r4, r4, 28496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28496);

label_80BFD1C8:
    ctx->pc = 0x80BFD1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1C8u)) return;
    // 80BFD1C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BFD1CC:
    ctx->pc = 0x80BFD1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1CCu)) return;
    // 80BFD1CC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80BFD1D0:
    ctx->pc = 0x80BFD1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1D0u)) return;
    // 80BFD1D0: bl      0x8041E63C
    {
            ctx->lr = 0x80BFD1D4u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80BFD1D4:
    ctx->pc = 0x80BFD1D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD1D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFD1D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD1D8:
    ctx->pc = 0x80BFD1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD1D8: lwz     r31, 12(r1)
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
label_80BFD1DC:
    ctx->pc = 0x80BFD1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD1DC: lwz     r0, 20(r1)
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
label_80BFD1E0:
    ctx->pc = 0x80BFD1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD1E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD1E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD1E4:
    ctx->pc = 0x80BFD1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1E4u)) return;
    // 80BFD1E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD1E8:
    ctx->pc = 0x80BFD1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1E8u)) return;
    // 80BFD1E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD1EC:
    ctx->pc = 0x80BFD1ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD1ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD1EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD1F0:
    ctx->pc = 0x80BFD1F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD1F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80BFD1F0: stwu     r1, -320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-320);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD1F4:
    ctx->pc = 0x80BFD1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80BFD1F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD1F8:
    ctx->pc = 0x80BFD1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80BFD1F8: stw     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD1FC:
    ctx->pc = 0x80BFD1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80BFD1FC: stfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD1FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD200:
    ctx->pc = 0x80BFD200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80BFD200: psq_st   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD200u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80BFD200u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD204:
    ctx->pc = 0x80BFD204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80BFD204: stfd     f30, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD204u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD208:
    ctx->pc = 0x80BFD208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BFD208: psq_st   f30, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD208u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80BFD208u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD20C:
    ctx->pc = 0x80BFD20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80BFD20C: stfd     f29, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD20Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD210:
    ctx->pc = 0x80BFD210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80BFD210: psq_st   f29, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80BFD210u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD214:
    ctx->pc = 0x80BFD214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BFD214: stfd     f28, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD214u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD218:
    ctx->pc = 0x80BFD218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BFD218: psq_st   f28, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80BFD218u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD21C:
    ctx->pc = 0x80BFD21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BFD21C: stfd     f27, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD21Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD220:
    ctx->pc = 0x80BFD220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BFD220: psq_st   f27, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80BFD220u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD224:
    ctx->pc = 0x80BFD224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BFD224: stfd     f26, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD224u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD228:
    ctx->pc = 0x80BFD228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BFD228: psq_st   f26, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD228u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80BFD228u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD22C:
    ctx->pc = 0x80BFD22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BFD22C: stfd     f25, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD22Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD230:
    ctx->pc = 0x80BFD230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BFD230: psq_st   f25, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD230u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x80BFD230u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD234:
    ctx->pc = 0x80BFD234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BFD234: stfd     f24, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD234u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD238:
    ctx->pc = 0x80BFD238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFD238: psq_st   f24, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x80BFD238u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD23C:
    ctx->pc = 0x80BFD23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFD23C: stfd     f23, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD23Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[23]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD240:
    ctx->pc = 0x80BFD240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFD240: psq_st   f23, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 23u, ea, false, 0u, false, 0x80BFD240u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD244:
    ctx->pc = 0x80BFD244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD244: stfd     f22, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD244u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[22]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD248:
    ctx->pc = 0x80BFD248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFD248: psq_st   f22, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 22u, ea, false, 0u, false, 0x80BFD248u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD24C:
    ctx->pc = 0x80BFD24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFD24C: stfd     f21, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD24Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[21]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD250:
    ctx->pc = 0x80BFD250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD250: psq_st   f21, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD250u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 21u, ea, false, 0u, false, 0x80BFD250u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD254:
    ctx->pc = 0x80BFD254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD254: stfd     f20, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD254u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[20]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD258:
    ctx->pc = 0x80BFD258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD258: psq_st   f20, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD258u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 20u, ea, false, 0u, false, 0x80BFD258u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD25C:
    ctx->pc = 0x80BFD25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD25C: stfd     f19, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD25Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[19]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD260:
    ctx->pc = 0x80BFD260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD260: psq_st   f19, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 19u, ea, false, 0u, false, 0x80BFD260u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD264:
    ctx->pc = 0x80BFD264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD264: stfd     f18, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[18]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD268:
    ctx->pc = 0x80BFD268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD268: psq_st   f18, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 18u, ea, false, 0u, false, 0x80BFD268u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD26C:
    ctx->pc = 0x80BFD26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD26C: stfd     f17, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD26Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[17]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD270:
    ctx->pc = 0x80BFD270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD270: psq_st   f17, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 17u, ea, false, 0u, false, 0x80BFD270u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD274:
    ctx->pc = 0x80BFD274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD274u)) return;
    // 80BFD274: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80BFD278:
    ctx->pc = 0x80BFD278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD278u)) return;
    // 80BFD278: bl      0x80006DD4
    {
            ctx->lr = 0x80BFD27Cu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80BFD27C:
    ctx->pc = 0x80BFD27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFD27C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD280:
    ctx->pc = 0x80BFD280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD280: lbz     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD284:
    ctx->pc = 0x80BFD284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD284u)) return;
    // 80BFD284: cmplwi  r0, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD288:
    ctx->pc = 0x80BFD288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD288u)) return;
    // 80BFD288: bc    12, 0, 0x80BFD484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD484;
        }
    }

label_80BFD28C:
    ctx->pc = 0x80BFD28Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 47u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD28Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 47u : 1u;
    // 80BFD28C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFD290:
    ctx->pc = 0x80BFD290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80BFD290: stb     r0, 3(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD294:
    ctx->pc = 0x80BFD294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD294u)) return;
    // 80BFD294: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80BFD298:
    ctx->pc = 0x80BFD298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD298u)) return;
    // 80BFD298: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80BFD29C:
    ctx->pc = 0x80BFD29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD29Cu)) return;
    // 80BFD29C: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFD2A0:
    ctx->pc = 0x80BFD2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2A0u)) return;
    // 80BFD2A0: addi    r30, r3, 28544
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(28544);

label_80BFD2A4:
    ctx->pc = 0x80BFD2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2A4u)) return;
    // 80BFD2A4: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD2A8:
    ctx->pc = 0x80BFD2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2A8u)) return;
    // 80BFD2A8: addi    r3, r3, 4336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4336);

label_80BFD2AC:
    ctx->pc = 0x80BFD2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80BFD2AC: lfd     f18, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD2ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[18] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD2B0:
    ctx->pc = 0x80BFD2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2B0u)) return;
    // 80BFD2B0: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_80BFD2B4:
    ctx->pc = 0x80BFD2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2B4u)) return;
    // 80BFD2B4: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD2B8:
    ctx->pc = 0x80BFD2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2B8u)) return;
    // 80BFD2B8: addi    r3, r3, 4300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4300);

label_80BFD2BC:
    ctx->pc = 0x80BFD2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80BFD2BC: lfs     f19, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD2BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[19] = value;
        ctx->ps1[19] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD2C0:
    ctx->pc = 0x80BFD2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2C0u)) return;
    // 80BFD2C0: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD2C4:
    ctx->pc = 0x80BFD2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2C4u)) return;
    // 80BFD2C4: addi    r3, r3, 4296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4296);

label_80BFD2C8:
    ctx->pc = 0x80BFD2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80BFD2C8: lfs     f20, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD2C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[20] = value;
        ctx->ps1[20] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD2CC:
    ctx->pc = 0x80BFD2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2CCu)) return;
    // 80BFD2CC: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD2D0:
    ctx->pc = 0x80BFD2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2D0u)) return;
    // 80BFD2D0: addi    r3, r3, 4288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4288);

label_80BFD2D4:
    ctx->pc = 0x80BFD2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BFD2D4: lfd     f22, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD2D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[22] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD2D8:
    ctx->pc = 0x80BFD2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2D8u)) return;
    // 80BFD2D8: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD2DC:
    ctx->pc = 0x80BFD2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2DCu)) return;
    // 80BFD2DC: addi    r3, r3, 4280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4280);

label_80BFD2E0:
    ctx->pc = 0x80BFD2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BFD2E0: lfs     f23, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD2E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[23] = value;
        ctx->ps1[23] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD2E4:
    ctx->pc = 0x80BFD2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2E4u)) return;
    // 80BFD2E4: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD2E8:
    ctx->pc = 0x80BFD2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2E8u)) return;
    // 80BFD2E8: addi    r3, r3, 4304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4304);

label_80BFD2EC:
    ctx->pc = 0x80BFD2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BFD2EC: lfs     f24, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD2ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[24] = value;
        ctx->ps1[24] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD2F0:
    ctx->pc = 0x80BFD2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2F0u)) return;
    // 80BFD2F0: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD2F4:
    ctx->pc = 0x80BFD2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2F4u)) return;
    // 80BFD2F4: addi    r3, r3, 4308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4308);

label_80BFD2F8:
    ctx->pc = 0x80BFD2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BFD2F8: lfs     f25, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD2F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD2FC:
    ctx->pc = 0x80BFD2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD2FCu)) return;
    // 80BFD2FC: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD300:
    ctx->pc = 0x80BFD300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD300u)) return;
    // 80BFD300: addi    r3, r3, 4312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4312);

label_80BFD304:
    ctx->pc = 0x80BFD304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFD304: lfs     f26, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD304u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD308:
    ctx->pc = 0x80BFD308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD308u)) return;
    // 80BFD308: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD30C:
    ctx->pc = 0x80BFD30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD30Cu)) return;
    // 80BFD30C: addi    r3, r3, 4316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4316);

label_80BFD310:
    ctx->pc = 0x80BFD310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD310: lfs     f27, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD310u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD314:
    ctx->pc = 0x80BFD314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD314u)) return;
    // 80BFD314: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD318:
    ctx->pc = 0x80BFD318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD318u)) return;
    // 80BFD318: addi    r3, r3, 4320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4320);

label_80BFD31C:
    ctx->pc = 0x80BFD31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD31C: lfs     f28, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD31Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD320:
    ctx->pc = 0x80BFD320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD320u)) return;
    // 80BFD320: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD324:
    ctx->pc = 0x80BFD324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD324u)) return;
    // 80BFD324: addi    r3, r3, 4324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4324);

label_80BFD328:
    ctx->pc = 0x80BFD328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD328: lfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD328u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD32C:
    ctx->pc = 0x80BFD32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD32Cu)) return;
    // 80BFD32C: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD330:
    ctx->pc = 0x80BFD330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD330u)) return;
    // 80BFD330: addi    r3, r3, 4328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4328);

label_80BFD334:
    ctx->pc = 0x80BFD334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD334: lfs     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD334u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD338:
    ctx->pc = 0x80BFD338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD338u)) return;
    // 80BFD338: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD33C:
    ctx->pc = 0x80BFD33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD33Cu)) return;
    // 80BFD33C: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_80BFD340:
    ctx->pc = 0x80BFD340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD340: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD340u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD344:
    ctx->pc = 0x80BFD344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD344u)) return;
    // 80BFD344: b       0x80BFD478
    {
            goto label_80BFD478;
    }

label_80BFD348:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD348: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFD34Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFD34C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD34Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BFD34C: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFD350:
    ctx->pc = 0x80BFD350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD350: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD354:
    ctx->pc = 0x80BFD354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFD354: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD358:
    ctx->pc = 0x80BFD358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFD358: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD35C:
    ctx->pc = 0x80BFD35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD35Cu)) return;
    // 80BFD35C: fsubs   f0, f0, f18
    if (!ppc_fp_available_inline(ctx, 0x80BFD35Cu)) return;
    ppc_fsubs(ctx, 0, 0, 18);

label_80BFD360:
    ctx->pc = 0x80BFD360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD360u)) return;
    // 80BFD360: fmuls   f0, f19, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD360u)) return;
    ppc_fmuls(ctx, 0, 19, 0);

label_80BFD364:
    ctx->pc = 0x80BFD364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD364u)) return;
    // 80BFD364: fmuls   f21, f20, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD364u)) return;
    ppc_fmuls(ctx, 21, 20, 0);

label_80BFD368:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD368u)) return;
    // 80BFD368: xoris   r0, r28, 0x8000
    ctx->gpr[0] = ctx->gpr[28] ^ (0x8000u << 16);

label_80BFD36C:
    ctx->pc = 0x80BFD36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD36C: stw     r0, 20(r1)
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
label_80BFD370:
    ctx->pc = 0x80BFD370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD370: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD374:
    ctx->pc = 0x80BFD374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD374: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD378:
    ctx->pc = 0x80BFD378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD378u)) return;
    // 80BFD378: fsub   f0, f0, f18
    if (!ppc_fp_available_inline(ctx, 0x80BFD378u)) return;
    ppc_fsub(ctx, 0, 0, 18);

label_80BFD37C:
    ctx->pc = 0x80BFD37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD37Cu)) return;
    // 80BFD37C: fmul   f17, f22, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD37Cu)) return;
    ppc_fmul(ctx, 17, 22, 0);

label_80BFD380:
    ctx->pc = 0x80BFD380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD380u)) return;
    // 80BFD380: frsp    f1, f17
    if (!ppc_fp_available_inline(ctx, 0x80BFD380u)) return;
    ppc_frsp(ctx, 1, 17);

label_80BFD384:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD384u)) return;
    // 80BFD384: bl      0x80BFD6B4
    {
            ctx->lr = 0x80BFD388u;
            goto label_80BFD6B4;
    }

label_80BFD388:
    ctx->pc = 0x80BFD388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFD388: fmuls   f1, f23, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD388u)) return;
    ppc_fmuls(ctx, 1, 23, 1);

label_80BFD38C:
    ctx->pc = 0x80BFD38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD38C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFD38Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
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
label_80BFD390:
    ctx->pc = 0x80BFD390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD390u)) return;
    // 80BFD390: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD390u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFD394:
    ctx->pc = 0x80BFD394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD394u)) return;
    // 80BFD394: fadds   f0, f0, f21
    if (!ppc_fp_available_inline(ctx, 0x80BFD394u)) return;
    ppc_fadds(ctx, 0, 0, 21);

label_80BFD398:
    ctx->pc = 0x80BFD398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD398u)) return;
    // 80BFD398: fsubs   f0, f0, f24
    if (!ppc_fp_available_inline(ctx, 0x80BFD398u)) return;
    ppc_fsubs(ctx, 0, 0, 24);

label_80BFD39C:
    ctx->pc = 0x80BFD39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD39C: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BFD39Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD3A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3A0u)) return;
    // 80BFD3A0: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFD3A4u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFD3A4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD3A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BFD3A4: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFD3A8:
    ctx->pc = 0x80BFD3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD3A8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD3AC:
    ctx->pc = 0x80BFD3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD3AC: stw     r31, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD3B0:
    ctx->pc = 0x80BFD3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD3B0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD3B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD3B4:
    ctx->pc = 0x80BFD3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3B4u)) return;
    // 80BFD3B4: fsubs   f0, f0, f18
    if (!ppc_fp_available_inline(ctx, 0x80BFD3B4u)) return;
    ppc_fsubs(ctx, 0, 0, 18);

label_80BFD3B8:
    ctx->pc = 0x80BFD3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3B8u)) return;
    // 80BFD3B8: fmuls   f0, f19, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD3B8u)) return;
    ppc_fmuls(ctx, 0, 19, 0);

label_80BFD3BC:
    ctx->pc = 0x80BFD3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3BCu)) return;
    // 80BFD3BC: fmuls   f1, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD3BCu)) return;
    ppc_fmuls(ctx, 1, 25, 0);

label_80BFD3C0:
    ctx->pc = 0x80BFD3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD3C0: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFD3C0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
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
label_80BFD3C4:
    ctx->pc = 0x80BFD3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3C4u)) return;
    // 80BFD3C4: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD3C4u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFD3C8:
    ctx->pc = 0x80BFD3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3C8u)) return;
    // 80BFD3C8: fsubs   f0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x80BFD3C8u)) return;
    ppc_fsubs(ctx, 0, 0, 26);

label_80BFD3CC:
    ctx->pc = 0x80BFD3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD3CC: stfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BFD3CCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD3D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3D0u)) return;
    // 80BFD3D0: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFD3D4u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFD3D4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD3D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BFD3D4: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFD3D8:
    ctx->pc = 0x80BFD3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD3D8: stw     r0, 36(r1)
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
label_80BFD3DC:
    ctx->pc = 0x80BFD3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD3DC: stw     r31, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD3E0:
    ctx->pc = 0x80BFD3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD3E0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD3E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD3E4:
    ctx->pc = 0x80BFD3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3E4u)) return;
    // 80BFD3E4: fsubs   f0, f0, f18
    if (!ppc_fp_available_inline(ctx, 0x80BFD3E4u)) return;
    ppc_fsubs(ctx, 0, 0, 18);

label_80BFD3E8:
    ctx->pc = 0x80BFD3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3E8u)) return;
    // 80BFD3E8: fmuls   f0, f19, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD3E8u)) return;
    ppc_fmuls(ctx, 0, 19, 0);

label_80BFD3EC:
    ctx->pc = 0x80BFD3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3ECu)) return;
    // 80BFD3EC: fmuls   f21, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD3ECu)) return;
    ppc_fmuls(ctx, 21, 27, 0);

label_80BFD3F0:
    ctx->pc = 0x80BFD3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3F0u)) return;
    // 80BFD3F0: frsp    f1, f17
    if (!ppc_fp_available_inline(ctx, 0x80BFD3F0u)) return;
    ppc_frsp(ctx, 1, 17);

label_80BFD3F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3F4u)) return;
    // 80BFD3F4: bl      0x80BFD690
    {
            ctx->lr = 0x80BFD3F8u;
            goto label_80BFD690;
    }

label_80BFD3F8:
    ctx->pc = 0x80BFD3F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD3F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80BFD3F8: fmuls   f1, f23, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD3F8u)) return;
    ppc_fmuls(ctx, 1, 23, 1);

label_80BFD3FC:
    ctx->pc = 0x80BFD3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD3FC: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFD3FCu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
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
label_80BFD400:
    ctx->pc = 0x80BFD400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD400u)) return;
    // 80BFD400: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD400u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFD404:
    ctx->pc = 0x80BFD404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD404u)) return;
    // 80BFD404: fadds   f0, f0, f21
    if (!ppc_fp_available_inline(ctx, 0x80BFD404u)) return;
    ppc_fadds(ctx, 0, 0, 21);

label_80BFD408:
    ctx->pc = 0x80BFD408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD408u)) return;
    // 80BFD408: fsubs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x80BFD408u)) return;
    ppc_fsubs(ctx, 0, 0, 28);

label_80BFD40C:
    ctx->pc = 0x80BFD40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD40C: stfs     f0, 28(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BFD40Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD410:
    ctx->pc = 0x80BFD410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD410: stfs     f29, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BFD410u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD414:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD414u)) return;
    // 80BFD414: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFD418u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFD418:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80BFD418: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFD41C:
    ctx->pc = 0x80BFD41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD41C: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD420:
    ctx->pc = 0x80BFD420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD420: stw     r31, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD424:
    ctx->pc = 0x80BFD424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD424: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD424u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD428:
    ctx->pc = 0x80BFD428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD428u)) return;
    // 80BFD428: fsubs   f0, f0, f18
    if (!ppc_fp_available_inline(ctx, 0x80BFD428u)) return;
    ppc_fsubs(ctx, 0, 0, 18);

label_80BFD42C:
    ctx->pc = 0x80BFD42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD42Cu)) return;
    // 80BFD42C: fmuls   f0, f19, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD42Cu)) return;
    ppc_fmuls(ctx, 0, 19, 0);

label_80BFD430:
    ctx->pc = 0x80BFD430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD430u)) return;
    // 80BFD430: fmuls   f0, f26, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD430u)) return;
    ppc_fmuls(ctx, 0, 26, 0);

label_80BFD434:
    ctx->pc = 0x80BFD434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD434u)) return;
    // 80BFD434: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80BFD434u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80BFD438:
    ctx->pc = 0x80BFD438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD438: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BFD438u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD43C:
    ctx->pc = 0x80BFD43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD43Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD43C: stfs     f31, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BFD43Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD440:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD440u)) return;
    // 80BFD440: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFD444u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFD444:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80BFD444: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFD448:
    ctx->pc = 0x80BFD448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD448: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD44C:
    ctx->pc = 0x80BFD44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD44C: stw     r31, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD450:
    ctx->pc = 0x80BFD450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD450: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD450u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD454:
    ctx->pc = 0x80BFD454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD454u)) return;
    // 80BFD454: fsubs   f0, f0, f18
    if (!ppc_fp_available_inline(ctx, 0x80BFD454u)) return;
    ppc_fsubs(ctx, 0, 0, 18);

label_80BFD458:
    ctx->pc = 0x80BFD458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD458u)) return;
    // 80BFD458: fmuls   f0, f19, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD458u)) return;
    ppc_fmuls(ctx, 0, 19, 0);

label_80BFD45C:
    ctx->pc = 0x80BFD45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD45Cu)) return;
    // 80BFD45C: fmuls   f0, f26, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD45Cu)) return;
    ppc_fmuls(ctx, 0, 26, 0);

label_80BFD460:
    ctx->pc = 0x80BFD460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD460u)) return;
    // 80BFD460: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80BFD460u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80BFD464:
    ctx->pc = 0x80BFD464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD464: stfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BFD464u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD468:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD468u)) return;
    // 80BFD468: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BFD46C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD46Cu)) return;
    // 80BFD46C: bl      0x8044DD00
    {
            ctx->lr = 0x80BFD470u;
            ctx->pc = 0x8044DD00u;
            return;
    }

label_80BFD470:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD470: addi    r28, r28, 2048
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(2048);

label_80BFD474:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD474u)) return;
    // 80BFD474: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80BFD478:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD478: extsb r0, r29
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[29];
    }

label_80BFD47C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD47Cu)) return;
    // 80BFD47C: cmpwi   r0, 31
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(31);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD480:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD480u)) return;
    // 80BFD480: bc    12, 0, 0x80BFD348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFD348u;
                return;
            }
            goto label_80BFD348;
        }
    }

label_80BFD484:
    ctx->pc = 0x80BFD484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 32u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 32u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80BFD484: psq_l   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD484u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80BFD484u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD488:
    ctx->pc = 0x80BFD488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80BFD488: lfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD488u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD48C:
    ctx->pc = 0x80BFD48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80BFD48C: psq_l   f30, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD48Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80BFD48Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD490:
    ctx->pc = 0x80BFD490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BFD490: lfd     f30, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD490u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD494:
    ctx->pc = 0x80BFD494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80BFD494: psq_l   f29, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD494u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80BFD494u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD498:
    ctx->pc = 0x80BFD498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80BFD498: lfd     f29, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD49C:
    ctx->pc = 0x80BFD49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD49Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BFD49C: psq_l   f28, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD49Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80BFD49Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4A0:
    ctx->pc = 0x80BFD4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BFD4A0: lfd     f28, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4A4:
    ctx->pc = 0x80BFD4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BFD4A4: psq_l   f27, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80BFD4A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4A8:
    ctx->pc = 0x80BFD4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BFD4A8: lfd     f27, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4AC:
    ctx->pc = 0x80BFD4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BFD4AC: psq_l   f26, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x80BFD4ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4B0:
    ctx->pc = 0x80BFD4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BFD4B0: lfd     f26, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4B4:
    ctx->pc = 0x80BFD4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BFD4B4: psq_l   f25, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x80BFD4B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4B8:
    ctx->pc = 0x80BFD4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BFD4B8: lfd     f25, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4BC:
    ctx->pc = 0x80BFD4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BFD4BC: psq_l   f24, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x80BFD4BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4C0:
    ctx->pc = 0x80BFD4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFD4C0: lfd     f24, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4C4:
    ctx->pc = 0x80BFD4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFD4C4: psq_l   f23, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x80BFD4C4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4C8:
    ctx->pc = 0x80BFD4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFD4C8: lfd     f23, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4CC:
    ctx->pc = 0x80BFD4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD4CC: psq_l   f22, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 22u, ea, false, 0u, false, 0x80BFD4CCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4D0:
    ctx->pc = 0x80BFD4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFD4D0: lfd     f22, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[22] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4D4:
    ctx->pc = 0x80BFD4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFD4D4: psq_l   f21, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 21u, ea, false, 0u, false, 0x80BFD4D4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4D8:
    ctx->pc = 0x80BFD4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD4D8: lfd     f21, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[21] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4DC:
    ctx->pc = 0x80BFD4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD4DC: psq_l   f20, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 20u, ea, false, 0u, false, 0x80BFD4DCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4E0:
    ctx->pc = 0x80BFD4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD4E0: lfd     f20, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[20] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4E4:
    ctx->pc = 0x80BFD4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD4E4: psq_l   f19, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 19u, ea, false, 0u, false, 0x80BFD4E4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4E8:
    ctx->pc = 0x80BFD4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD4E8: lfd     f19, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[19] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4EC:
    ctx->pc = 0x80BFD4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD4EC: psq_l   f18, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 18u, ea, false, 0u, false, 0x80BFD4ECu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4F0:
    ctx->pc = 0x80BFD4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD4F0: lfd     f18, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[18] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4F4:
    ctx->pc = 0x80BFD4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD4F4: psq_l   f17, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD4F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 17u, ea, false, 0u, false, 0x80BFD4F4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4F8:
    ctx->pc = 0x80BFD4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD4F8: lfd     f17, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD4F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[17] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD4FC:
    ctx->pc = 0x80BFD4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD4FCu)) return;
    // 80BFD4FC: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80BFD500:
    ctx->pc = 0x80BFD500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD500u)) return;
    // 80BFD500: bl      0x80006E20
    {
            ctx->lr = 0x80BFD504u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80BFD504:
    ctx->pc = 0x80BFD504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD504: lwz     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD508:
    ctx->pc = 0x80BFD508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD508: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD50C:
    ctx->pc = 0x80BFD50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD50Cu)) return;
    // 80BFD50C: addi    r1, r1, 320
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(320);

label_80BFD510:
    ctx->pc = 0x80BFD510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD510u)) return;
    // 80BFD510: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD514:
    ctx->pc = 0x80BFD514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD514: stwu     r1, -16(r1)
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
label_80BFD518:
    ctx->pc = 0x80BFD518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD518: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD51C:
    ctx->pc = 0x80BFD51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD51C: stw     r0, 20(r1)
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
label_80BFD520:
    ctx->pc = 0x80BFD520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD520: stw     r31, 12(r1)
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
label_80BFD524:
    ctx->pc = 0x80BFD524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD524u)) return;
    // 80BFD524: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD528:
    ctx->pc = 0x80BFD528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD528: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD52C:
    ctx->pc = 0x80BFD52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD52C: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD530:
    ctx->pc = 0x80BFD530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD530u)) return;
    // 80BFD530: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80BFD534:
    ctx->pc = 0x80BFD534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD534u)) return;
    // 80BFD534: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD538:
    ctx->pc = 0x80BFD538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD538u)) return;
    // 80BFD538: bc    12, 2, 0x80BFD554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD554;
        }
    }

label_80BFD53C:
    ctx->pc = 0x80BFD53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD53C: bc    4, 0, 0x80BFD548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFD548;
        }
    }

label_80BFD540:
    ctx->pc = 0x80BFD540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD540: cmpwi   r0, 0
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

label_80BFD544:
    ctx->pc = 0x80BFD544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD544u)) return;
    // 80BFD544: b       0x80BFD574
    {
            goto label_80BFD574;
    }

label_80BFD548:
    ctx->pc = 0x80BFD548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD548: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD54C:
    ctx->pc = 0x80BFD54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD54Cu)) return;
    // 80BFD54C: bc    4, 0, 0x80BFD574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFD574;
        }
    }

label_80BFD550:
    ctx->pc = 0x80BFD550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD550: b       0x80BFD570
    {
            goto label_80BFD570;
    }

label_80BFD554:
    ctx->pc = 0x80BFD554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD554: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFD558:
    ctx->pc = 0x80BFD558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD558u)) return;
    // 80BFD558: bl      0x80BFD1F0
    {
            ctx->lr = 0x80BFD55Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFD1F0u;
                return;
            }
            goto label_80BFD1F0;
    }

label_80BFD55C:
    ctx->pc = 0x80BFD55Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD55Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD55C: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD560:
    ctx->pc = 0x80BFD560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD560: lbz     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD564:
    ctx->pc = 0x80BFD564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD564u)) return;
    // 80BFD564: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80BFD568:
    ctx->pc = 0x80BFD568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD568: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD56C:
    ctx->pc = 0x80BFD56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD56Cu)) return;
    // 80BFD56C: b       0x80BFD574
    {
            goto label_80BFD574;
    }

label_80BFD570:
    ctx->pc = 0x80BFD570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD570: bl      0x80BFD1EC
    {
            ctx->lr = 0x80BFD574u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFD1ECu;
                return;
            }
            goto label_80BFD1EC;
    }

label_80BFD574:
    ctx->pc = 0x80BFD574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD574: lwz     r31, 12(r1)
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
label_80BFD578:
    ctx->pc = 0x80BFD578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD578: lwz     r0, 20(r1)
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
label_80BFD57C:
    ctx->pc = 0x80BFD57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD57Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD57C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD580:
    ctx->pc = 0x80BFD580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD580u)) return;
    // 80BFD580: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD584:
    ctx->pc = 0x80BFD584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD584u)) return;
    // 80BFD584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD588:
    ctx->pc = 0x80BFD588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD588: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD58C:
    ctx->pc = 0x80BFD58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD58Cu)) return;
    // 80BFD58C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFD590:
    ctx->pc = 0x80BFD590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD590: stb     r0, 0(r4)
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
label_80BFD594:
    ctx->pc = 0x80BFD594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD594: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD598:
    ctx->pc = 0x80BFD598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD598u)) return;
    // 80BFD598: lis     r4, -32576
    ctx->gpr[4] = ((u32)(s32)(-32576) << 16);

label_80BFD59C:
    ctx->pc = 0x80BFD59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD59Cu)) return;
    // 80BFD59C: addi    r0, r4, -10988
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-10988);

label_80BFD5A0:
    ctx->pc = 0x80BFD5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD5A0: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD5A4:
    ctx->pc = 0x80BFD5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5A4u)) return;
    // 80BFD5A4: lis     r4, -32576
    ctx->gpr[4] = ((u32)(s32)(-32576) << 16);

label_80BFD5A8:
    ctx->pc = 0x80BFD5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5A8u)) return;
    // 80BFD5A8: addi    r0, r4, -11796
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-11796);

label_80BFD5AC:
    ctx->pc = 0x80BFD5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD5AC: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD5B0:
    ctx->pc = 0x80BFD5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5B0u)) return;
    // 80BFD5B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD5B4:
    ctx->pc = 0x80BFD5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD5B4: stwu     r1, -32(r1)
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
label_80BFD5B8:
    ctx->pc = 0x80BFD5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFD5B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD5BC:
    ctx->pc = 0x80BFD5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFD5BC: stw     r0, 36(r1)
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
label_80BFD5C0:
    ctx->pc = 0x80BFD5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD5C0: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD5C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD5C4:
    ctx->pc = 0x80BFD5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD5C4: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD5C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD5C8:
    ctx->pc = 0x80BFD5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD5C8: stfd     f29, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD5C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD5CC:
    ctx->pc = 0x80BFD5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5CCu)) return;
    // 80BFD5CC: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD5CCu)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80BFD5D0:
    ctx->pc = 0x80BFD5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5D0u)) return;
    // 80BFD5D0: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80BFD5D0u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80BFD5D4:
    ctx->pc = 0x80BFD5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5D4u)) return;
    // 80BFD5D4: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80BFD5D4u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80BFD5D8:
    ctx->pc = 0x80BFD5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5D8u)) return;
    // 80BFD5D8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFD5DC:
    ctx->pc = 0x80BFD5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5DCu)) return;
    // 80BFD5DC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BFD5E0:
    ctx->pc = 0x80BFD5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5E0u)) return;
    // 80BFD5E0: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80BFD5E4:
    ctx->pc = 0x80BFD5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5E4u)) return;
    // 80BFD5E4: addi    r5, r5, -10872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10872);

label_80BFD5E8:
    ctx->pc = 0x80BFD5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5E8u)) return;
    // 80BFD5E8: bl      0x8050FD60
    {
            ctx->lr = 0x80BFD5ECu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BFD5EC:
    ctx->pc = 0x80BFD5ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD5ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFD5EC: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD5F0:
    ctx->pc = 0x80BFD5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5F0u)) return;
    // 80BFD5F0: addi    r4, r4, 28672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28672);

label_80BFD5F4:
    ctx->pc = 0x80BFD5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD5F4: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD5F8:
    ctx->pc = 0x80BFD5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5F8u)) return;
    // 80BFD5F8: cmplwi  r3, 0x0000
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

label_80BFD5FC:
    ctx->pc = 0x80BFD5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD5FCu)) return;
    // 80BFD5FC: bc    12, 2, 0x80BFD610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD610;
        }
    }

label_80BFD600:
    ctx->pc = 0x80BFD600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD600: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD604:
    ctx->pc = 0x80BFD604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD604: stfs     f29, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD604u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD608:
    ctx->pc = 0x80BFD608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD608: stfs     f30, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD608u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD60C:
    ctx->pc = 0x80BFD60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFD60C: stfs     f31, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD60Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD610:
    ctx->pc = 0x80BFD610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD610: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD614:
    ctx->pc = 0x80BFD614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD614: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD618:
    ctx->pc = 0x80BFD618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD618: lfd     f29, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD618u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD61C:
    ctx->pc = 0x80BFD61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD61C: lwz     r0, 36(r1)
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
label_80BFD620:
    ctx->pc = 0x80BFD620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD620: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD624:
    ctx->pc = 0x80BFD624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD624u)) return;
    // 80BFD624: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFD628:
    ctx->pc = 0x80BFD628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD628u)) return;
    // 80BFD628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD62C:
    ctx->pc = 0x80BFD62Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD62Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFD62C: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFD630:
    ctx->pc = 0x80BFD630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD630u)) return;
    // 80BFD630: addi    r4, r4, 28672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28672);

label_80BFD634:
    ctx->pc = 0x80BFD634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD634: lwz     r4, 0(r4)
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
label_80BFD638:
    ctx->pc = 0x80BFD638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD638u)) return;
    // 80BFD638: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD63C:
    ctx->pc = 0x80BFD63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD63Cu)) return;
    // 80BFD63C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD640:
    ctx->pc = 0x80BFD640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD640: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD644:
    ctx->pc = 0x80BFD644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD644: stb     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD648:
    ctx->pc = 0x80BFD648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD648u)) return;
    // 80BFD648: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD64C:
    ctx->pc = 0x80BFD64Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD64Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD64C: stwu     r1, -16(r1)
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
label_80BFD650:
    ctx->pc = 0x80BFD650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD650: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD654:
    ctx->pc = 0x80BFD654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD654: stw     r0, 20(r1)
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
label_80BFD658:
    ctx->pc = 0x80BFD658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD658u)) return;
    // 80BFD658: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFD65C:
    ctx->pc = 0x80BFD65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD65Cu)) return;
    // 80BFD65C: addi    r3, r3, 28672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28672);

label_80BFD660:
    ctx->pc = 0x80BFD660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD660: lwz     r3, 0(r3)
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
label_80BFD664:
    ctx->pc = 0x80BFD664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD664u)) return;
    // 80BFD664: cmplwi  r3, 0x0000
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

label_80BFD668:
    ctx->pc = 0x80BFD668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD668u)) return;
    // 80BFD668: bc    12, 2, 0x80BFD680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD680;
        }
    }

label_80BFD66C:
    ctx->pc = 0x80BFD66Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD66Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD66C: bl      0x8050F9E0
    {
            ctx->lr = 0x80BFD670u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BFD670:
    ctx->pc = 0x80BFD670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFD670: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFD674:
    ctx->pc = 0x80BFD674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD674u)) return;
    // 80BFD674: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFD678:
    ctx->pc = 0x80BFD678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD678u)) return;
    // 80BFD678: addi    r3, r3, 28672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28672);

label_80BFD67C:
    ctx->pc = 0x80BFD67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFD67C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD680:
    ctx->pc = 0x80BFD680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD680: lwz     r0, 20(r1)
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
label_80BFD684:
    ctx->pc = 0x80BFD684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD684: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD688:
    ctx->pc = 0x80BFD688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD688u)) return;
    // 80BFD688: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD68C:
    ctx->pc = 0x80BFD68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD68Cu)) return;
    // 80BFD68C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD690:
    ctx->pc = 0x80BFD690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD690: stwu     r1, -16(r1)
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
label_80BFD694:
    ctx->pc = 0x80BFD694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD694: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD698:
    ctx->pc = 0x80BFD698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD698: stw     r0, 20(r1)
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
label_80BFD69C:
    ctx->pc = 0x80BFD69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD69Cu)) return;
    // 80BFD69C: bl      0x80014034
    {
            ctx->lr = 0x80BFD6A0u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80BFD6A0:
    ctx->pc = 0x80BFD6A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD6A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BFD6A0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD6A0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80BFD6A4:
    ctx->pc = 0x80BFD6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD6A4: lwz     r0, 20(r1)
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
label_80BFD6A8:
    ctx->pc = 0x80BFD6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD6A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD6AC:
    ctx->pc = 0x80BFD6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6ACu)) return;
    // 80BFD6AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD6B0:
    ctx->pc = 0x80BFD6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6B0u)) return;
    // 80BFD6B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD6B4:
    ctx->pc = 0x80BFD6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD6B4: stwu     r1, -16(r1)
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
label_80BFD6B8:
    ctx->pc = 0x80BFD6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD6B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD6BC:
    ctx->pc = 0x80BFD6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD6BC: stw     r0, 20(r1)
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
label_80BFD6C0:
    ctx->pc = 0x80BFD6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6C0u)) return;
    // 80BFD6C0: bl      0x80013948
    {
            ctx->lr = 0x80BFD6C4u;
            ctx->pc = 0x80013948u;
            return;
    }

label_80BFD6C4:
    ctx->pc = 0x80BFD6C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD6C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BFD6C4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD6C4u)) return;
    ppc_frsp(ctx, 1, 1);

label_80BFD6C8:
    ctx->pc = 0x80BFD6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD6C8: lwz     r0, 20(r1)
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
label_80BFD6CC:
    ctx->pc = 0x80BFD6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD6CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD6CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD6D0:
    ctx->pc = 0x80BFD6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6D0u)) return;
    // 80BFD6D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD6D4:
    ctx->pc = 0x80BFD6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6D4u)) return;
    // 80BFD6D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD6D8:
    ctx->pc = 0x80BFD6D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD6D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD6D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD6DC:
    ctx->pc = 0x80BFD6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFD6DC: stwu     r1, -32(r1)
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
label_80BFD6E0:
    ctx->pc = 0x80BFD6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD6E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD6E4:
    ctx->pc = 0x80BFD6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD6E4: stw     r0, 36(r1)
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
label_80BFD6E8:
    ctx->pc = 0x80BFD6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD6E8: stw     r31, 28(r1)
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
label_80BFD6EC:
    ctx->pc = 0x80BFD6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6ECu)) return;
    // 80BFD6EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD6F0:
    ctx->pc = 0x80BFD6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6F0u)) return;
    // 80BFD6F0: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD6F4:
    ctx->pc = 0x80BFD6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6F4u)) return;
    // 80BFD6F4: addi    r3, r3, 4344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4344);

label_80BFD6F8:
    ctx->pc = 0x80BFD6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD6F8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD6F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD6FC:
    ctx->pc = 0x80BFD6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD6FCu)) return;
    // 80BFD6FC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD6FCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80BFD700:
    ctx->pc = 0x80BFD700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD700u)) return;
    // 80BFD700: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD700u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80BFD704:
    ctx->pc = 0x80BFD704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD704u)) return;
    // 80BFD704: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD704u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80BFD708:
    ctx->pc = 0x80BFD708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD708u)) return;
    // 80BFD708: bl      0x80450D90
    {
            ctx->lr = 0x80BFD70Cu;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80BFD70C:
    ctx->pc = 0x80BFD70Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD70Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD70C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFD710:
    ctx->pc = 0x80BFD710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD710u)) return;
    // 80BFD710: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80BFD714:
    ctx->pc = 0x80BFD714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD714u)) return;
    // 80BFD714: bl      0x8060F4F8
    {
            ctx->lr = 0x80BFD718u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BFD718:
    ctx->pc = 0x80BFD718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD718: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BFD71C:
    ctx->pc = 0x80BFD71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD71Cu)) return;
    // 80BFD71C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80BFD720:
    ctx->pc = 0x80BFD720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD720u)) return;
    // 80BFD720: bl      0x8060F4F8
    {
            ctx->lr = 0x80BFD724u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BFD724:
    ctx->pc = 0x80BFD724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD724: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80BFD724u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80BFD728:
    ctx->pc = 0x80BFD728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD728u)) return;
    // 80BFD728: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFD72C:
    ctx->pc = 0x80BFD72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD72Cu)) return;
    // 80BFD72C: addi    r3, r3, 28608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28608);

label_80BFD730:
    ctx->pc = 0x80BFD730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD730: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD730u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD734:
    ctx->pc = 0x80BFD734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD734: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80BFD734u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80BFD738:
    ctx->pc = 0x80BFD738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD738: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD738u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD73C:
    ctx->pc = 0x80BFD73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD73C: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80BFD73Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80BFD740:
    ctx->pc = 0x80BFD740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD740: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD740u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD744:
    ctx->pc = 0x80BFD744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD744u)) return;
    // 80BFD744: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFD748u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFD748:
    ctx->pc = 0x80BFD748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    // 80BFD748: lis     r4, -27485
    ctx->gpr[4] = ((u32)(s32)(-27485) << 16);

label_80BFD74C:
    ctx->pc = 0x80BFD74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD74Cu)) return;
    // 80BFD74C: addi    r4, r4, 4368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4368);

label_80BFD750:
    ctx->pc = 0x80BFD750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80BFD750: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFD750u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD754:
    ctx->pc = 0x80BFD754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD754u)) return;
    // 80BFD754: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFD758:
    ctx->pc = 0x80BFD758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BFD758: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD75C:
    ctx->pc = 0x80BFD75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD75Cu)) return;
    // 80BFD75C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80BFD760:
    ctx->pc = 0x80BFD760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BFD760: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD764:
    ctx->pc = 0x80BFD764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BFD764: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD768:
    ctx->pc = 0x80BFD768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD768u)) return;
    // 80BFD768: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD768u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_80BFD76C:
    ctx->pc = 0x80BFD76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD76Cu)) return;
    // 80BFD76C: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD770:
    ctx->pc = 0x80BFD770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD770u)) return;
    // 80BFD770: addi    r3, r3, 4356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4356);

label_80BFD774:
    ctx->pc = 0x80BFD774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BFD774: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD774u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD778:
    ctx->pc = 0x80BFD778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD778u)) return;
    // 80BFD778: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD778u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_80BFD77C:
    ctx->pc = 0x80BFD77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD77Cu)) return;
    // 80BFD77C: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD780:
    ctx->pc = 0x80BFD780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD780u)) return;
    // 80BFD780: addi    r3, r3, 4352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4352);

label_80BFD784:
    ctx->pc = 0x80BFD784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD784: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD784u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD788:
    ctx->pc = 0x80BFD788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD788u)) return;
    // 80BFD788: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD788u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_80BFD78C:
    ctx->pc = 0x80BFD78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD78Cu)) return;
    // 80BFD78C: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD790:
    ctx->pc = 0x80BFD790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD790u)) return;
    // 80BFD790: addi    r3, r3, 4348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4348);

label_80BFD794:
    ctx->pc = 0x80BFD794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD794: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD794u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD798:
    ctx->pc = 0x80BFD798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD798u)) return;
    // 80BFD798: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD798u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFD79C:
    ctx->pc = 0x80BFD79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD79Cu)) return;
    // 80BFD79C: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFD7A0:
    ctx->pc = 0x80BFD7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7A0u)) return;
    // 80BFD7A0: addi    r3, r3, 28608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28608);

label_80BFD7A4:
    ctx->pc = 0x80BFD7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD7A4: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD7A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD7A8:
    ctx->pc = 0x80BFD7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD7A8: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD7A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD7AC:
    ctx->pc = 0x80BFD7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7ACu)) return;
    // 80BFD7AC: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD7B0:
    ctx->pc = 0x80BFD7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7B0u)) return;
    // 80BFD7B0: addi    r3, r3, 4360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4360);

label_80BFD7B4:
    ctx->pc = 0x80BFD7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD7B4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD7B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD7B8:
    ctx->pc = 0x80BFD7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7B8u)) return;
    // 80BFD7B8: bl      0x8060AC50
    {
            ctx->lr = 0x80BFD7BCu;
            ctx->pc = 0x8060AC50u;
            return;
    }

label_80BFD7BC:
    ctx->pc = 0x80BFD7BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD7BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFD7BC: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFD7C0:
    ctx->pc = 0x80BFD7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7C0u)) return;
    // 80BFD7C0: addi    r3, r3, 28608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28608);

label_80BFD7C4:
    ctx->pc = 0x80BFD7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD7C4: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD7C8:
    ctx->pc = 0x80BFD7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7C8u)) return;
    // 80BFD7C8: li      r5, 51
    ctx->gpr[5] = (u32)(s32)(51);

label_80BFD7CC:
    ctx->pc = 0x80BFD7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7CCu)) return;
    // 80BFD7CC: bl      0x8060ABEC
    {
            ctx->lr = 0x80BFD7D0u;
            ctx->pc = 0x8060ABECu;
            return;
    }

label_80BFD7D0:
    ctx->pc = 0x80BFD7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFD7D0: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD7D4:
    ctx->pc = 0x80BFD7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7D4u)) return;
    // 80BFD7D4: addi    r3, r3, 4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4364);

label_80BFD7D8:
    ctx->pc = 0x80BFD7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD7D8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD7D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD7DC:
    ctx->pc = 0x80BFD7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7DCu)) return;
    // 80BFD7DC: bl      0x8060AC50
    {
            ctx->lr = 0x80BFD7E0u;
            ctx->pc = 0x8060AC50u;
            return;
    }

label_80BFD7E0:
    ctx->pc = 0x80BFD7E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD7E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFD7E0: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD7E4:
    ctx->pc = 0x80BFD7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7E4u)) return;
    // 80BFD7E4: addi    r3, r3, 4364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4364);

label_80BFD7E8:
    ctx->pc = 0x80BFD7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD7E8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD7E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD7EC:
    ctx->pc = 0x80BFD7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7ECu)) return;
    // 80BFD7EC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD7ECu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80BFD7F0:
    ctx->pc = 0x80BFD7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7F0u)) return;
    // 80BFD7F0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD7F0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80BFD7F4:
    ctx->pc = 0x80BFD7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7F4u)) return;
    // 80BFD7F4: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD7F4u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80BFD7F8:
    ctx->pc = 0x80BFD7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD7F8u)) return;
    // 80BFD7F8: bl      0x80450D90
    {
            ctx->lr = 0x80BFD7FCu;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80BFD7FC:
    ctx->pc = 0x80BFD7FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD7FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD7FC: lwz     r31, 28(r1)
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
label_80BFD800:
    ctx->pc = 0x80BFD800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD800: lwz     r0, 36(r1)
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
label_80BFD804:
    ctx->pc = 0x80BFD804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD804: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD808:
    ctx->pc = 0x80BFD808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD808u)) return;
    // 80BFD808: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFD80C:
    ctx->pc = 0x80BFD80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD80Cu)) return;
    // 80BFD80C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD810:
    ctx->pc = 0x80BFD810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD810: stwu     r1, -32(r1)
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
label_80BFD814:
    ctx->pc = 0x80BFD814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD814: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD818:
    ctx->pc = 0x80BFD818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD818: stw     r0, 36(r1)
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
label_80BFD81C:
    ctx->pc = 0x80BFD81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD81C: stw     r31, 28(r1)
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
label_80BFD820:
    ctx->pc = 0x80BFD820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD820: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD824:
    ctx->pc = 0x80BFD824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD824: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD828:
    ctx->pc = 0x80BFD828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD828u)) return;
    // 80BFD828: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80BFD82C:
    ctx->pc = 0x80BFD82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD82Cu)) return;
    // 80BFD82C: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD830:
    ctx->pc = 0x80BFD830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD830u)) return;
    // 80BFD830: bc    12, 2, 0x80BFD874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD874;
        }
    }

label_80BFD834:
    ctx->pc = 0x80BFD834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD834: bc    4, 0, 0x80BFD844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFD844;
        }
    }

label_80BFD838:
    ctx->pc = 0x80BFD838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD838: cmpwi   r0, 0
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

label_80BFD83C:
    ctx->pc = 0x80BFD83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD83Cu)) return;
    // 80BFD83C: bc    4, 0, 0x80BFD850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFD850;
        }
    }

label_80BFD840:
    ctx->pc = 0x80BFD840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD840: b       0x80BFD944
    {
            goto label_80BFD944;
    }

label_80BFD844:
    ctx->pc = 0x80BFD844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD844: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD848:
    ctx->pc = 0x80BFD848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD848u)) return;
    // 80BFD848: bc    4, 0, 0x80BFD944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFD944;
        }
    }

label_80BFD84C:
    ctx->pc = 0x80BFD84Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD84Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD84C: b       0x80BFD8D4
    {
            goto label_80BFD8D4;
    }

label_80BFD850:
    ctx->pc = 0x80BFD850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD850: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD854:
    ctx->pc = 0x80BFD854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD854u)) return;
    // 80BFD854: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BFD858:
    ctx->pc = 0x80BFD858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD858: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD85C:
    ctx->pc = 0x80BFD85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD85C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD860:
    ctx->pc = 0x80BFD860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD860u)) return;
    // 80BFD860: cmplwi  r0, 0x0000
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

label_80BFD864:
    ctx->pc = 0x80BFD864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD864u)) return;
    // 80BFD864: bc    4, 2, 0x80BFD944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFD944;
        }
    }

label_80BFD868:
    ctx->pc = 0x80BFD868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD868: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80BFD86C:
    ctx->pc = 0x80BFD86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD86C: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD870:
    ctx->pc = 0x80BFD870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD870u)) return;
    // 80BFD870: b       0x80BFD944
    {
            goto label_80BFD944;
    }

label_80BFD874:
    ctx->pc = 0x80BFD874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD874: lbz     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD878:
    ctx->pc = 0x80BFD878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD878u)) return;
    // 80BFD878: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80BFD87C:
    ctx->pc = 0x80BFD87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD87C: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD880:
    ctx->pc = 0x80BFD880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD880: lbz     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD884:
    ctx->pc = 0x80BFD884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD884u)) return;
    // 80BFD884: rlwinm r0, r3, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000008u;
    }

label_80BFD888:
    ctx->pc = 0x80BFD888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD888u)) return;
    // 80BFD888: cmpwi   r0, 0
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

label_80BFD88C:
    ctx->pc = 0x80BFD88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD88Cu)) return;
    // 80BFD88C: bc    12, 2, 0x80BFD944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD944;
        }
    }

label_80BFD890:
    ctx->pc = 0x80BFD890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFD890: rlwinm r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_80BFD894:
    ctx->pc = 0x80BFD894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD894u)) return;
    // 80BFD894: cmpwi   r0, 0
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

label_80BFD898:
    ctx->pc = 0x80BFD898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD898u)) return;
    // 80BFD898: bc    12, 2, 0x80BFD944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFD944;
        }
    }

label_80BFD89C:
    ctx->pc = 0x80BFD89Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD89Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD89C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8A0:
    ctx->pc = 0x80BFD8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8A0u)) return;
    // 80BFD8A0: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFD8A4:
    ctx->pc = 0x80BFD8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8A4u)) return;
    // 80BFD8A4: bc    4, 1, 0x80BFD8BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFD8BC;
        }
    }

label_80BFD8A8:
    ctx->pc = 0x80BFD8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFD8A8: rlwinm r0, r0, 0, 29, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000007u;
    }

label_80BFD8AC:
    ctx->pc = 0x80BFD8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD8AC: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8B0:
    ctx->pc = 0x80BFD8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8B0u)) return;
    // 80BFD8B0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80BFD8B4:
    ctx->pc = 0x80BFD8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD8B4: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8B8:
    ctx->pc = 0x80BFD8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8B8u)) return;
    // 80BFD8B8: b       0x80BFD944
    {
            goto label_80BFD944;
    }

label_80BFD8BC:
    ctx->pc = 0x80BFD8BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD8BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFD8BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFD8C0:
    ctx->pc = 0x80BFD8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8C0u)) return;
    // 80BFD8C0: bl      0x80BFD6DC
    {
            ctx->lr = 0x80BFD8C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFD6DCu;
                return;
            }
            goto label_80BFD6DC;
    }

label_80BFD8C4:
    ctx->pc = 0x80BFD8C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD8C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD8C4: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8C8:
    ctx->pc = 0x80BFD8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8C8u)) return;
    // 80BFD8C8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80BFD8CC:
    ctx->pc = 0x80BFD8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD8CC: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8D0:
    ctx->pc = 0x80BFD8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8D0u)) return;
    // 80BFD8D0: b       0x80BFD944
    {
            goto label_80BFD944;
    }

label_80BFD8D4:
    ctx->pc = 0x80BFD8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFD8D4: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFD8D8u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFD8D8:
    ctx->pc = 0x80BFD8D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 27u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD8D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 27u : 1u;
    // 80BFD8D8: lis     r4, -27485
    ctx->gpr[4] = ((u32)(s32)(-27485) << 16);

label_80BFD8DC:
    ctx->pc = 0x80BFD8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8DCu)) return;
    // 80BFD8DC: addi    r4, r4, 4368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4368);

label_80BFD8E0:
    ctx->pc = 0x80BFD8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BFD8E0: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFD8E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8E4:
    ctx->pc = 0x80BFD8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8E4u)) return;
    // 80BFD8E4: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFD8E8:
    ctx->pc = 0x80BFD8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BFD8E8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8EC:
    ctx->pc = 0x80BFD8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8ECu)) return;
    // 80BFD8EC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80BFD8F0:
    ctx->pc = 0x80BFD8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BFD8F0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8F4:
    ctx->pc = 0x80BFD8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BFD8F4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD8F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD8F8:
    ctx->pc = 0x80BFD8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8F8u)) return;
    // 80BFD8F8: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD8F8u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_80BFD8FC:
    ctx->pc = 0x80BFD8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD8FCu)) return;
    // 80BFD8FC: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD900:
    ctx->pc = 0x80BFD900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD900u)) return;
    // 80BFD900: addi    r3, r3, 4356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4356);

label_80BFD904:
    ctx->pc = 0x80BFD904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFD904: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD904u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD908:
    ctx->pc = 0x80BFD908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD908u)) return;
    // 80BFD908: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD908u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_80BFD90C:
    ctx->pc = 0x80BFD90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD90Cu)) return;
    // 80BFD90C: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD910:
    ctx->pc = 0x80BFD910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD910u)) return;
    // 80BFD910: addi    r3, r3, 4380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4380);

label_80BFD914:
    ctx->pc = 0x80BFD914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFD914: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD914u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD918:
    ctx->pc = 0x80BFD918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD918u)) return;
    // 80BFD918: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD918u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_80BFD91C:
    ctx->pc = 0x80BFD91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD91Cu)) return;
    // 80BFD91C: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD920:
    ctx->pc = 0x80BFD920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD920u)) return;
    // 80BFD920: addi    r3, r3, 4376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4376);

label_80BFD924:
    ctx->pc = 0x80BFD924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD924: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD924u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BFD928:
    ctx->pc = 0x80BFD928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD928u)) return;
    // 80BFD928: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFD928u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFD92C:
    ctx->pc = 0x80BFD92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD92Cu)) return;
    // 80BFD92C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFD92Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BFD930:
    ctx->pc = 0x80BFD930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD930: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD934:
    ctx->pc = 0x80BFD934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD934: lwz     r0, 20(r1)
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
label_80BFD938:
    ctx->pc = 0x80BFD938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD938: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD93C:
    ctx->pc = 0x80BFD93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD93Cu)) return;
    // 80BFD93C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFD940:
    ctx->pc = 0x80BFD940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFD940: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD944:
    ctx->pc = 0x80BFD944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD944: lwz     r31, 28(r1)
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
label_80BFD948:
    ctx->pc = 0x80BFD948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD948: lwz     r0, 36(r1)
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
label_80BFD94C:
    ctx->pc = 0x80BFD94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD94C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD950:
    ctx->pc = 0x80BFD950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD950u)) return;
    // 80BFD950: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFD954:
    ctx->pc = 0x80BFD954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD954u)) return;
    // 80BFD954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD958:
    ctx->pc = 0x80BFD958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD958: stwu     r1, -16(r1)
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
label_80BFD95C:
    ctx->pc = 0x80BFD95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD95Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD95C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD960:
    ctx->pc = 0x80BFD960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFD960: stw     r0, 20(r1)
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
label_80BFD964:
    ctx->pc = 0x80BFD964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD964u)) return;
    // 80BFD964: bl      0x8050E95C
    {
            ctx->lr = 0x80BFD968u;
            ctx->pc = 0x8050E95Cu;
            return;
    }

label_80BFD968:
    ctx->pc = 0x80BFD968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD968: lwz     r0, 20(r1)
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
label_80BFD96C:
    ctx->pc = 0x80BFD96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFD96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD96C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD970:
    ctx->pc = 0x80BFD970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD970u)) return;
    // 80BFD970: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFD974:
    ctx->pc = 0x80BFD974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD974u)) return;
    // 80BFD974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFD978:
    ctx->pc = 0x80BFD978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFD978: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD97C:
    ctx->pc = 0x80BFD97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFD97C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD980:
    ctx->pc = 0x80BFD980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFD980: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD984:
    ctx->pc = 0x80BFD984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD984: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD984u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD988:
    ctx->pc = 0x80BFD988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFD988: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80BFD988u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD98C:
    ctx->pc = 0x80BFD98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFD98C: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD98Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD990:
    ctx->pc = 0x80BFD990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD990: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80BFD990u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD994:
    ctx->pc = 0x80BFD994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFD994: stfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD998:
    ctx->pc = 0x80BFD998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFD998: psq_st   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80BFD998u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD99C:
    ctx->pc = 0x80BFD99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFD99C: stfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD99Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9A0:
    ctx->pc = 0x80BFD9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFD9A0: psq_st   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD9A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80BFD9A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9A4:
    ctx->pc = 0x80BFD9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFD9A4: stfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD9A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9A8:
    ctx->pc = 0x80BFD9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFD9A8: psq_st   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD9A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80BFD9A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9AC:
    ctx->pc = 0x80BFD9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFD9AC: stfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFD9ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9B0:
    ctx->pc = 0x80BFD9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFD9B0: psq_st   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFD9B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80BFD9B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9B4:
    ctx->pc = 0x80BFD9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9B4u)) return;
    // 80BFD9B4: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80BFD9B8:
    ctx->pc = 0x80BFD9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9B8u)) return;
    // 80BFD9B8: bl      0x80006DD0
    {
            ctx->lr = 0x80BFD9BCu;
            ctx->pc = 0x80006DD0u;
            return;
    }

label_80BFD9BC:
    ctx->pc = 0x80BFD9BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFD9BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    // 80BFD9BC: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFD9C0:
    ctx->pc = 0x80BFD9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BFD9C0: lwz     r27, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9C4:
    ctx->pc = 0x80BFD9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9C4u)) return;
    // 80BFD9C4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80BFD9C8:
    ctx->pc = 0x80BFD9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9C8u)) return;
    // 80BFD9C8: lis     r3, -32576
    ctx->gpr[3] = ((u32)(s32)(-32576) << 16);

label_80BFD9CC:
    ctx->pc = 0x80BFD9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9CCu)) return;
    // 80BFD9CC: addi    r29, r3, -10224
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-10224);

label_80BFD9D0:
    ctx->pc = 0x80BFD9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9D0u)) return;
    // 80BFD9D0: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD9D4:
    ctx->pc = 0x80BFD9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9D4u)) return;
    // 80BFD9D4: addi    r3, r3, 4368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4368);

label_80BFD9D8:
    ctx->pc = 0x80BFD9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BFD9D8: lfd     f27, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD9D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9DC:
    ctx->pc = 0x80BFD9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9DCu)) return;
    // 80BFD9DC: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_80BFD9E0:
    ctx->pc = 0x80BFD9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9E0u)) return;
    // 80BFD9E0: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD9E4:
    ctx->pc = 0x80BFD9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9E4u)) return;
    // 80BFD9E4: addi    r3, r3, 4356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4356);

label_80BFD9E8:
    ctx->pc = 0x80BFD9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFD9E8: lfs     f28, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD9E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9EC:
    ctx->pc = 0x80BFD9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9ECu)) return;
    // 80BFD9EC: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD9F0:
    ctx->pc = 0x80BFD9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9F0u)) return;
    // 80BFD9F0: addi    r3, r3, 4384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4384);

label_80BFD9F4:
    ctx->pc = 0x80BFD9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFD9F4: lfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFD9F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFD9F8:
    ctx->pc = 0x80BFD9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9F8u)) return;
    // 80BFD9F8: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFD9FC:
    ctx->pc = 0x80BFD9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFD9FCu)) return;
    // 80BFD9FC: addi    r3, r3, 4388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4388);

label_80BFDA00:
    ctx->pc = 0x80BFDA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDA00: lfs     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA04:
    ctx->pc = 0x80BFDA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA04u)) return;
    // 80BFDA04: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFDA08:
    ctx->pc = 0x80BFDA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA08u)) return;
    // 80BFDA08: addi    r3, r3, 4392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4392);

label_80BFDA0C:
    ctx->pc = 0x80BFDA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDA0C: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA10:
    ctx->pc = 0x80BFDA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA10u)) return;
    // 80BFDA10: lis     r3, -27485
    ctx->gpr[3] = ((u32)(s32)(-27485) << 16);

label_80BFDA14:
    ctx->pc = 0x80BFDA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA14u)) return;
    // 80BFDA14: addi    r3, r3, 4396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4396);

label_80BFDA18:
    ctx->pc = 0x80BFDA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDA18: lfs     f26, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA1C:
    ctx->pc = 0x80BFDA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA1Cu)) return;
    // 80BFDA1C: b       0x80BFDB24
    {
            goto label_80BFDB24;
    }

label_80BFDA20:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFDA20: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFDA24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA24u)) return;
    // 80BFDA24: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BFDA28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA28u)) return;
    // 80BFDA28: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80BFDA2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA2Cu)) return;
    // 80BFDA2C: bl      0x8050EC24
    {
            ctx->lr = 0x80BFDA30u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_80BFDA30:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDA30: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFDA34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA34u)) return;
    // 80BFDA34: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFDA38u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFDA38:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDA38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BFDA38: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFDA3C:
    ctx->pc = 0x80BFDA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFDA3C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA40:
    ctx->pc = 0x80BFDA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFDA40: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA44:
    ctx->pc = 0x80BFDA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFDA44: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA48:
    ctx->pc = 0x80BFDA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA48u)) return;
    // 80BFDA48: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x80BFDA48u)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_80BFDA4C:
    ctx->pc = 0x80BFDA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA4Cu)) return;
    // 80BFDA4C: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDA4Cu)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_80BFDA50:
    ctx->pc = 0x80BFDA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA50u)) return;
    // 80BFDA50: fmuls   f0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDA50u)) return;
    ppc_fmuls(ctx, 0, 29, 0);

label_80BFDA54:
    ctx->pc = 0x80BFDA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA54u)) return;
    // 80BFDA54: fsubs   f1, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80BFDA54u)) return;
    ppc_fsubs(ctx, 1, 0, 30);

label_80BFDA58:
    ctx->pc = 0x80BFDA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDA58: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA58u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
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
label_80BFDA5C:
    ctx->pc = 0x80BFDA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA5Cu)) return;
    // 80BFDA5C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFDA5Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFDA60:
    ctx->pc = 0x80BFDA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDA60: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA64:
    ctx->pc = 0x80BFDA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDA64: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA68u)) return;
    // 80BFDA68: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFDA6Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFDA6C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDA6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BFDA6C: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFDA70:
    ctx->pc = 0x80BFDA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFDA70: stw     r0, 20(r1)
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
label_80BFDA74:
    ctx->pc = 0x80BFDA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFDA74: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA78:
    ctx->pc = 0x80BFDA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFDA78: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA7C:
    ctx->pc = 0x80BFDA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA7Cu)) return;
    // 80BFDA7C: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x80BFDA7Cu)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_80BFDA80:
    ctx->pc = 0x80BFDA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA80u)) return;
    // 80BFDA80: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDA80u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_80BFDA84:
    ctx->pc = 0x80BFDA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA84u)) return;
    // 80BFDA84: fmuls   f1, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDA84u)) return;
    ppc_fmuls(ctx, 1, 29, 0);

label_80BFDA88:
    ctx->pc = 0x80BFDA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFDA88: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA88u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
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
label_80BFDA8C:
    ctx->pc = 0x80BFDA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA8Cu)) return;
    // 80BFDA8C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFDA8Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFDA90:
    ctx->pc = 0x80BFDA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA90u)) return;
    // 80BFDA90: fadds   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDA90u)) return;
    ppc_fadds(ctx, 0, 31, 0);

label_80BFDA94:
    ctx->pc = 0x80BFDA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDA94: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA98:
    ctx->pc = 0x80BFDA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDA98: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDA98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDA9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDA9Cu)) return;
    // 80BFDA9C: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFDAA0u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFDAA0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80BFDAA0: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFDAA4:
    ctx->pc = 0x80BFDAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BFDAA4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAA8:
    ctx->pc = 0x80BFDAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BFDAA8: stw     r31, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAAC:
    ctx->pc = 0x80BFDAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFDAAC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDAACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAB0:
    ctx->pc = 0x80BFDAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAB0u)) return;
    // 80BFDAB0: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x80BFDAB0u)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_80BFDAB4:
    ctx->pc = 0x80BFDAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAB4u)) return;
    // 80BFDAB4: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDAB4u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_80BFDAB8:
    ctx->pc = 0x80BFDAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAB8u)) return;
    // 80BFDAB8: fmuls   f0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDAB8u)) return;
    ppc_fmuls(ctx, 0, 29, 0);

label_80BFDABC:
    ctx->pc = 0x80BFDABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDABCu)) return;
    // 80BFDABC: fsubs   f1, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80BFDABCu)) return;
    ppc_fsubs(ctx, 1, 0, 30);

label_80BFDAC0:
    ctx->pc = 0x80BFDAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFDAC0: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFDAC0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
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
label_80BFDAC4:
    ctx->pc = 0x80BFDAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAC4u)) return;
    // 80BFDAC4: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFDAC4u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80BFDAC8:
    ctx->pc = 0x80BFDAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFDAC8: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDACC:
    ctx->pc = 0x80BFDACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFDACC: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDACCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAD0u)) return;
    // 80BFDAD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFDAD4:
    ctx->pc = 0x80BFDAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFDAD4: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAD8:
    ctx->pc = 0x80BFDAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFDAD8: stb     r0, 0(r3)
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
label_80BFDADC:
    ctx->pc = 0x80BFDADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDADC: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAE0:
    ctx->pc = 0x80BFDAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDAE0: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAE4:
    ctx->pc = 0x80BFDAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDAE4: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAE8:
    ctx->pc = 0x80BFDAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDAE8: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAECu)) return;
    // 80BFDAEC: bl      0x8000DD2C
    {
            ctx->lr = 0x80BFDAF0u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80BFDAF0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BFDAF0: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80BFDAF4:
    ctx->pc = 0x80BFDAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFDAF4: stw     r0, 36(r1)
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
label_80BFDAF8:
    ctx->pc = 0x80BFDAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFDAF8: stw     r31, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDAFC:
    ctx->pc = 0x80BFDAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDAFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFDAFC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDAFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB00:
    ctx->pc = 0x80BFDB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB00u)) return;
    // 80BFDB00: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x80BFDB00u)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_80BFDB04:
    ctx->pc = 0x80BFDB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB04u)) return;
    // 80BFDB04: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB04u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_80BFDB08:
    ctx->pc = 0x80BFDB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB08u)) return;
    // 80BFDB08: fmuls   f0, f26, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB08u)) return;
    ppc_fmuls(ctx, 0, 26, 0);

label_80BFDB0C:
    ctx->pc = 0x80BFDB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB0Cu)) return;
    // 80BFDB0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BFDB10:
    ctx->pc = 0x80BFDB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDB10: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDB10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB14:
    ctx->pc = 0x80BFDB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDB14: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB18:
    ctx->pc = 0x80BFDB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDB18: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB1C:
    ctx->pc = 0x80BFDB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDB1C: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB20u)) return;
    // 80BFDB20: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80BFDB24:
    ctx->pc = 0x80BFDB24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDB24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDB24: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB28u)) return;
    // 80BFDB28: cmpw    r28, r0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BFDB2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB2Cu)) return;
    // 80BFDB2C: bc    12, 0, 0x80BFDA20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFDA20u;
                return;
            }
            goto label_80BFDA20;
        }
    }

label_80BFDB30:
    ctx->pc = 0x80BFDB30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDB30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80BFDB30: lis     r3, -32576
    ctx->gpr[3] = ((u32)(s32)(-32576) << 16);

label_80BFDB34:
    ctx->pc = 0x80BFDB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB34u)) return;
    // 80BFDB34: addi    r0, r3, -9896
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-9896);

label_80BFDB38:
    ctx->pc = 0x80BFDB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFDB38: stw     r0, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB3C:
    ctx->pc = 0x80BFDB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB3Cu)) return;
    // 80BFDB3C: lis     r3, -32576
    ctx->gpr[3] = ((u32)(s32)(-32576) << 16);

label_80BFDB40:
    ctx->pc = 0x80BFDB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB40u)) return;
    // 80BFDB40: addi    r0, r3, -10536
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-10536);

label_80BFDB44:
    ctx->pc = 0x80BFDB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDB44: stw     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB48:
    ctx->pc = 0x80BFDB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB48u)) return;
    // 80BFDB48: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80BFDB4C:
    ctx->pc = 0x80BFDB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB4Cu)) return;
    // 80BFDB4C: bl      0x80BFD958
    {
            ctx->lr = 0x80BFDB50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFD958u;
                return;
            }
            goto label_80BFD958;
    }

label_80BFDB50:
    ctx->pc = 0x80BFDB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFDB50: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80BFDB50u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB54:
    ctx->pc = 0x80BFDB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFDB54: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDB54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB58:
    ctx->pc = 0x80BFDB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFDB58: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80BFDB58u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB5C:
    ctx->pc = 0x80BFDB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFDB5C: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDB5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB60:
    ctx->pc = 0x80BFDB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFDB60: psq_l   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80BFDB60u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB64:
    ctx->pc = 0x80BFDB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFDB64: lfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDB64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB68:
    ctx->pc = 0x80BFDB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDB68: psq_l   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80BFDB68u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB6C:
    ctx->pc = 0x80BFDB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFDB6C: lfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDB6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB70:
    ctx->pc = 0x80BFDB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFDB70: psq_l   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80BFDB70u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB74:
    ctx->pc = 0x80BFDB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDB74: lfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDB74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB78:
    ctx->pc = 0x80BFDB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDB78: psq_l   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFDB78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x80BFDB78u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB7C:
    ctx->pc = 0x80BFDB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDB7C: lfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDB7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB80:
    ctx->pc = 0x80BFDB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB80u)) return;
    // 80BFDB80: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80BFDB84:
    ctx->pc = 0x80BFDB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB84u)) return;
    // 80BFDB84: bl      0x80006E1C
    {
            ctx->lr = 0x80BFDB88u;
            ctx->pc = 0x80006E1Cu;
            return;
    }

label_80BFDB88:
    ctx->pc = 0x80BFDB88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDB88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDB88: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB8C:
    ctx->pc = 0x80BFDB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFDB8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDB8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB90:
    ctx->pc = 0x80BFDB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB90u)) return;
    // 80BFDB90: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_80BFDB94:
    ctx->pc = 0x80BFDB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB94u)) return;
    // 80BFDB94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFDB98:
    ctx->pc = 0x80BFDB98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDB98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFDB98: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDB9C:
    ctx->pc = 0x80BFDB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFDB9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBA0:
    ctx->pc = 0x80BFDBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFDBA0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBA4:
    ctx->pc = 0x80BFDBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFDBA4: stfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDBA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBA8:
    ctx->pc = 0x80BFDBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFDBA8: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDBA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBAC:
    ctx->pc = 0x80BFDBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFDBAC: stfd     f29, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDBACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBB0:
    ctx->pc = 0x80BFDBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFDBB0: stw     r31, 20(r1)
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
label_80BFDBB4:
    ctx->pc = 0x80BFDBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBB4u)) return;
    // 80BFDBB4: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFDBB4u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80BFDBB8:
    ctx->pc = 0x80BFDBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBB8u)) return;
    // 80BFDBB8: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80BFDBB8u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80BFDBBC:
    ctx->pc = 0x80BFDBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBBCu)) return;
    // 80BFDBBC: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80BFDBBCu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80BFDBC0:
    ctx->pc = 0x80BFDBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBC0u)) return;
    // 80BFDBC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFDBC4:
    ctx->pc = 0x80BFDBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBC4u)) return;
    // 80BFDBC4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFDBC8:
    ctx->pc = 0x80BFDBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBC8u)) return;
    // 80BFDBC8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80BFDBCC:
    ctx->pc = 0x80BFDBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBCCu)) return;
    // 80BFDBCC: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80BFDBD0:
    ctx->pc = 0x80BFDBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBD0u)) return;
    // 80BFDBD0: addi    r5, r5, -9864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9864);

label_80BFDBD4:
    ctx->pc = 0x80BFDBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBD4u)) return;
    // 80BFDBD4: bl      0x8050FD60
    {
            ctx->lr = 0x80BFDBD8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BFDBD8:
    ctx->pc = 0x80BFDBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDBD8: cmplwi  r3, 0x0000
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

label_80BFDBDC:
    ctx->pc = 0x80BFDBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBDCu)) return;
    // 80BFDBDC: bc    12, 2, 0x80BFDC0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFDC0C;
        }
    }

label_80BFDBE0:
    ctx->pc = 0x80BFDBE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDBE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFDBE0: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBE4:
    ctx->pc = 0x80BFDBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFDBE4: stfs     f29, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFDBE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBE8:
    ctx->pc = 0x80BFDBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFDBE8: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBEC:
    ctx->pc = 0x80BFDBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDBEC: stfs     f30, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFDBECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBF0:
    ctx->pc = 0x80BFDBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFDBF0: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBF4:
    ctx->pc = 0x80BFDBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFDBF4: stfs     f31, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFDBF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBF8:
    ctx->pc = 0x80BFDBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDBF8: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDBFC:
    ctx->pc = 0x80BFDBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDBFC: stw     r31, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC00:
    ctx->pc = 0x80BFDC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC00u)) return;
    // 80BFDC00: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDC04:
    ctx->pc = 0x80BFDC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC04u)) return;
    // 80BFDC04: addi    r4, r4, 28680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28680);

label_80BFDC08:
    ctx->pc = 0x80BFDC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFDC08: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC0C:
    ctx->pc = 0x80BFDC0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFDC0C: lfd     f31, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDC0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC10:
    ctx->pc = 0x80BFDC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDC10: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDC10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC14:
    ctx->pc = 0x80BFDC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFDC14: lfd     f29, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFDC14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC18:
    ctx->pc = 0x80BFDC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFDC18: lwz     r31, 20(r1)
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
label_80BFDC1C:
    ctx->pc = 0x80BFDC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDC1C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC20:
    ctx->pc = 0x80BFDC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFDC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDC20: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC24:
    ctx->pc = 0x80BFDC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC24u)) return;
    // 80BFDC24: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80BFDC28:
    ctx->pc = 0x80BFDC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC28u)) return;
    // 80BFDC28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

label_80BFDC2C:
    ctx->pc = 0x80BFDC2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDC2C: stwu     r1, -16(r1)
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
label_80BFDC30:
    ctx->pc = 0x80BFDC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFDC30: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC34:
    ctx->pc = 0x80BFDC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFDC34: stw     r0, 20(r1)
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
label_80BFDC38:
    ctx->pc = 0x80BFDC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC38u)) return;
    // 80BFDC38: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFDC3C:
    ctx->pc = 0x80BFDC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC3Cu)) return;
    // 80BFDC3C: addi    r3, r3, 28680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28680);

label_80BFDC40:
    ctx->pc = 0x80BFDC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDC40: lwz     r3, 0(r3)
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
label_80BFDC44:
    ctx->pc = 0x80BFDC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC44u)) return;
    // 80BFDC44: cmplwi  r3, 0x0000
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

label_80BFDC48:
    ctx->pc = 0x80BFDC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC48u)) return;
    // 80BFDC48: bc    12, 2, 0x80BFDC60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFDC60;
        }
    }

label_80BFDC4C:
    ctx->pc = 0x80BFDC4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDC4C: bl      0x8050F9E0
    {
            ctx->lr = 0x80BFDC50u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BFDC50:
    ctx->pc = 0x80BFDC50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFDC50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFDC54:
    ctx->pc = 0x80BFDC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC54u)) return;
    // 80BFDC54: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFDC58:
    ctx->pc = 0x80BFDC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC58u)) return;
    // 80BFDC58: addi    r3, r3, 28680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28680);

label_80BFDC5C:
    ctx->pc = 0x80BFDC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFDC5C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC60:
    ctx->pc = 0x80BFDC60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDC60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDC60: lwz     r0, 20(r1)
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
label_80BFDC64:
    ctx->pc = 0x80BFDC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFDC64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDC64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDC68:
    ctx->pc = 0x80BFDC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC68u)) return;
    // 80BFDC68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFDC6C:
    ctx->pc = 0x80BFDC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDC6Cu)) return;
    // 80BFDC6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFCDC0;
        }
    }

    ctx->pc = 0x80BFDC70u;
    return;
return_dispatch_80BFCDC0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80BFCE04u: goto label_80BFCE04;
    case 0x80BFCE54u: goto label_80BFCE54;
    case 0x80BFCEA4u: goto label_80BFCEA4;
    case 0x80BFCEE8u: goto label_80BFCEE8;
    case 0x80BFCF10u: goto label_80BFCF10;
    case 0x80BFCF1Cu: goto label_80BFCF1C;
    case 0x80BFCF28u: goto label_80BFCF28;
    case 0x80BFCF34u: goto label_80BFCF34;
    case 0x80BFD038u: goto label_80BFD038;
    case 0x80BFD040u: goto label_80BFD040;
    case 0x80BFD06Cu: goto label_80BFD06C;
    case 0x80BFD094u: goto label_80BFD094;
    case 0x80BFD0BCu: goto label_80BFD0BC;
    case 0x80BFD0F0u: goto label_80BFD0F0;
    case 0x80BFD0FCu: goto label_80BFD0FC;
    case 0x80BFD114u: goto label_80BFD114;
    case 0x80BFD150u: goto label_80BFD150;
    case 0x80BFD15Cu: goto label_80BFD15C;
    case 0x80BFD174u: goto label_80BFD174;
    case 0x80BFD1B0u: goto label_80BFD1B0;
    case 0x80BFD1BCu: goto label_80BFD1BC;
    case 0x80BFD1D4u: goto label_80BFD1D4;
    case 0x80BFD27Cu: goto label_80BFD27C;
    case 0x80BFD34Cu: goto label_80BFD34C;
    case 0x80BFD388u: goto label_80BFD388;
    case 0x80BFD3A4u: goto label_80BFD3A4;
    case 0x80BFD3D4u: goto label_80BFD3D4;
    case 0x80BFD3F8u: goto label_80BFD3F8;
    case 0x80BFD418u: goto label_80BFD418;
    case 0x80BFD444u: goto label_80BFD444;
    case 0x80BFD470u: goto label_80BFD470;
    case 0x80BFD504u: goto label_80BFD504;
    case 0x80BFD55Cu: goto label_80BFD55C;
    case 0x80BFD574u: goto label_80BFD574;
    case 0x80BFD5ECu: goto label_80BFD5EC;
    case 0x80BFD670u: goto label_80BFD670;
    case 0x80BFD6A0u: goto label_80BFD6A0;
    case 0x80BFD6C4u: goto label_80BFD6C4;
    case 0x80BFD70Cu: goto label_80BFD70C;
    case 0x80BFD718u: goto label_80BFD718;
    case 0x80BFD724u: goto label_80BFD724;
    case 0x80BFD748u: goto label_80BFD748;
    case 0x80BFD7BCu: goto label_80BFD7BC;
    case 0x80BFD7D0u: goto label_80BFD7D0;
    case 0x80BFD7E0u: goto label_80BFD7E0;
    case 0x80BFD7FCu: goto label_80BFD7FC;
    case 0x80BFD8C4u: goto label_80BFD8C4;
    case 0x80BFD8D8u: goto label_80BFD8D8;
    case 0x80BFD968u: goto label_80BFD968;
    case 0x80BFD9BCu: goto label_80BFD9BC;
    case 0x80BFDA30u: goto label_80BFDA30;
    case 0x80BFDA38u: goto label_80BFDA38;
    case 0x80BFDA6Cu: goto label_80BFDA6C;
    case 0x80BFDAA0u: goto label_80BFDAA0;
    case 0x80BFDAF0u: goto label_80BFDAF0;
    case 0x80BFDB50u: goto label_80BFDB50;
    case 0x80BFDB88u: goto label_80BFDB88;
    case 0x80BFDBD8u: goto label_80BFDBD8;
    case 0x80BFDC50u: goto label_80BFDC50;
    default: return;
    }
}

