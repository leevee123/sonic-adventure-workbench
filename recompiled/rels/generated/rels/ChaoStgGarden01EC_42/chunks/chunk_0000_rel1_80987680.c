// DolRecomp output
#include "../generated.h"

static void loop_80987718(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80987718:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80987718u;
            return;
        }
        ctx->downcount -= 5;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987718u)) return;
    // 80987718: addi    r5, r5, -4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4);

    ctx->pc = 0x8098771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098771Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8098771C: lha     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987720u)) return;
    // 80987720: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987724u)) return;
    // 80987724: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

    ctx->pc = 0x80987728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80987728: sth     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098772Cu)) return;
    // 8098772C: cmplw   r5, r3
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987730u)) return;
    // 80987730: bc    4, 2, 0x80987718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80987718u;
                return;
            }
            goto label_80987718;
        }
    }

    ctx->pc = 0x80987734u;
}

void func_80987680(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80987680[315] = {
        &&label_80987680,
        &&label_80987684,
        &&label_80987688,
        &&label_8098768C,
        &&label_80987690,
        &&label_80987694,
        &&label_80987698,
        &&label_8098769C,
        &&label_809876A0,
        &&label_809876A4,
        &&label_809876A8,
        &&label_809876AC,
        &&label_809876B0,
        &&label_809876B4,
        &&label_809876B8,
        &&label_809876BC,
        &&label_809876C0,
        &&label_809876C4,
        &&label_809876C8,
        &&label_809876CC,
        &&label_809876D0,
        &&label_809876D4,
        &&label_809876D8,
        &&label_809876DC,
        &&label_809876E0,
        &&label_809876E4,
        &&label_809876E8,
        &&label_809876EC,
        &&label_809876F0,
        &&label_809876F4,
        &&label_809876F8,
        &&label_809876FC,
        &&label_80987700,
        &&label_80987704,
        &&label_80987708,
        &&label_8098770C,
        &&label_80987710,
        &&label_80987714,
        &&label_80987718,
        &&label_8098771C,
        &&label_80987720,
        &&label_80987724,
        &&label_80987728,
        &&label_8098772C,
        &&label_80987730,
        &&label_80987734,
        &&label_80987738,
        &&label_8098773C,
        &&label_80987740,
        &&label_80987744,
        &&label_80987748,
        &&label_8098774C,
        &&label_80987750,
        &&label_80987754,
        &&label_80987758,
        &&label_8098775C,
        &&label_80987760,
        &&label_80987764,
        &&label_80987768,
        &&label_8098776C,
        &&label_80987770,
        &&label_80987774,
        &&label_80987778,
        &&label_8098777C,
        &&label_80987780,
        &&label_80987784,
        &&label_80987788,
        &&label_8098778C,
        &&label_80987790,
        &&label_80987794,
        &&label_80987798,
        &&label_8098779C,
        &&label_809877A0,
        &&label_809877A4,
        &&label_809877A8,
        &&label_809877AC,
        &&label_809877B0,
        &&label_809877B4,
        &&label_809877B8,
        &&label_809877BC,
        &&label_809877C0,
        &&label_809877C4,
        &&label_809877C8,
        &&label_809877CC,
        &&label_809877D0,
        &&label_809877D4,
        &&label_809877D8,
        &&label_809877DC,
        &&label_809877E0,
        &&label_809877E4,
        &&label_809877E8,
        &&label_809877EC,
        &&label_809877F0,
        &&label_809877F4,
        &&label_809877F8,
        &&label_809877FC,
        &&label_80987800,
        &&label_80987804,
        &&label_80987808,
        &&label_8098780C,
        &&label_80987810,
        &&label_80987814,
        &&label_80987818,
        &&label_8098781C,
        &&label_80987820,
        &&label_80987824,
        &&label_80987828,
        &&label_8098782C,
        &&label_80987830,
        &&label_80987834,
        &&label_80987838,
        &&label_8098783C,
        &&label_80987840,
        &&label_80987844,
        &&label_80987848,
        &&label_8098784C,
        &&label_80987850,
        &&label_80987854,
        &&label_80987858,
        &&label_8098785C,
        &&label_80987860,
        &&label_80987864,
        &&label_80987868,
        &&label_8098786C,
        &&label_80987870,
        &&label_80987874,
        &&label_80987878,
        &&label_8098787C,
        &&label_80987880,
        &&label_80987884,
        &&label_80987888,
        &&label_8098788C,
        &&label_80987890,
        &&label_80987894,
        &&label_80987898,
        &&label_8098789C,
        &&label_809878A0,
        &&label_809878A4,
        &&label_809878A8,
        &&label_809878AC,
        &&label_809878B0,
        &&label_809878B4,
        &&label_809878B8,
        &&label_809878BC,
        &&label_809878C0,
        &&label_809878C4,
        &&label_809878C8,
        &&label_809878CC,
        &&label_809878D0,
        &&label_809878D4,
        &&label_809878D8,
        &&label_809878DC,
        &&label_809878E0,
        &&label_809878E4,
        &&label_809878E8,
        &&label_809878EC,
        &&label_809878F0,
        &&label_809878F4,
        &&label_809878F8,
        &&label_809878FC,
        &&label_80987900,
        &&label_80987904,
        &&label_80987908,
        &&label_8098790C,
        &&label_80987910,
        &&label_80987914,
        &&label_80987918,
        &&label_8098791C,
        &&label_80987920,
        &&label_80987924,
        &&label_80987928,
        &&label_8098792C,
        &&label_80987930,
        &&label_80987934,
        &&label_80987938,
        &&label_8098793C,
        &&label_80987940,
        &&label_80987944,
        &&label_80987948,
        &&label_8098794C,
        &&label_80987950,
        &&label_80987954,
        &&label_80987958,
        &&label_8098795C,
        &&label_80987960,
        &&label_80987964,
        &&label_80987968,
        &&label_8098796C,
        &&label_80987970,
        &&label_80987974,
        &&label_80987978,
        &&label_8098797C,
        &&label_80987980,
        &&label_80987984,
        &&label_80987988,
        &&label_8098798C,
        &&label_80987990,
        &&label_80987994,
        &&label_80987998,
        &&label_8098799C,
        &&label_809879A0,
        &&label_809879A4,
        &&label_809879A8,
        &&label_809879AC,
        &&label_809879B0,
        &&label_809879B4,
        &&label_809879B8,
        &&label_809879BC,
        &&label_809879C0,
        &&label_809879C4,
        &&label_809879C8,
        &&label_809879CC,
        &&label_809879D0,
        &&label_809879D4,
        &&label_809879D8,
        &&label_809879DC,
        &&label_809879E0,
        &&label_809879E4,
        &&label_809879E8,
        &&label_809879EC,
        &&label_809879F0,
        &&label_809879F4,
        &&label_809879F8,
        &&label_809879FC,
        &&label_80987A00,
        &&label_80987A04,
        &&label_80987A08,
        &&label_80987A0C,
        &&label_80987A10,
        &&label_80987A14,
        &&label_80987A18,
        &&label_80987A1C,
        &&label_80987A20,
        &&label_80987A24,
        &&label_80987A28,
        &&label_80987A2C,
        &&label_80987A30,
        &&label_80987A34,
        &&label_80987A38,
        &&label_80987A3C,
        &&label_80987A40,
        &&label_80987A44,
        &&label_80987A48,
        &&label_80987A4C,
        &&label_80987A50,
        &&label_80987A54,
        &&label_80987A58,
        &&label_80987A5C,
        &&label_80987A60,
        &&label_80987A64,
        &&label_80987A68,
        &&label_80987A6C,
        &&label_80987A70,
        &&label_80987A74,
        &&label_80987A78,
        &&label_80987A7C,
        &&label_80987A80,
        &&label_80987A84,
        &&label_80987A88,
        &&label_80987A8C,
        &&label_80987A90,
        &&label_80987A94,
        &&label_80987A98,
        &&label_80987A9C,
        &&label_80987AA0,
        &&label_80987AA4,
        &&label_80987AA8,
        &&label_80987AAC,
        &&label_80987AB0,
        &&label_80987AB4,
        &&label_80987AB8,
        &&label_80987ABC,
        &&label_80987AC0,
        &&label_80987AC4,
        &&label_80987AC8,
        &&label_80987ACC,
        &&label_80987AD0,
        &&label_80987AD4,
        &&label_80987AD8,
        &&label_80987ADC,
        &&label_80987AE0,
        &&label_80987AE4,
        &&label_80987AE8,
        &&label_80987AEC,
        &&label_80987AF0,
        &&label_80987AF4,
        &&label_80987AF8,
        &&label_80987AFC,
        &&label_80987B00,
        &&label_80987B04,
        &&label_80987B08,
        &&label_80987B0C,
        &&label_80987B10,
        &&label_80987B14,
        &&label_80987B18,
        &&label_80987B1C,
        &&label_80987B20,
        &&label_80987B24,
        &&label_80987B28,
        &&label_80987B2C,
        &&label_80987B30,
        &&label_80987B34,
        &&label_80987B38,
        &&label_80987B3C,
        &&label_80987B40,
        &&label_80987B44,
        &&label_80987B48,
        &&label_80987B4C,
        &&label_80987B50,
        &&label_80987B54,
        &&label_80987B58,
        &&label_80987B5C,
        &&label_80987B60,
        &&label_80987B64,
        &&label_80987B68
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80987680u && pc <= 0x80987B68u && ((pc - 0x80987680u) & 3u) == 0u)
            goto *pc_table_80987680[(pc - 0x80987680u) >> 2];
    }
    return;
label_80987680:
    ctx->pc = 0x80987680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80987680: stwu     r1, -32(r1)
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
label_80987684:
    ctx->pc = 0x80987684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80987684: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987688:
    ctx->pc = 0x80987688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80987688: stw     r0, 36(r1)
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
label_8098768C:
    ctx->pc = 0x8098768Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098768Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8098768C: stw     r31, 28(r1)
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
label_80987690:
    ctx->pc = 0x80987690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80987690: lwz     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987694:
    ctx->pc = 0x80987694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80987694: lwz     r3, 4(r31)
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
label_80987698:
    ctx->pc = 0x80987698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987698u)) return;
    // 80987698: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8098769C:
    ctx->pc = 0x8098769Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098769Cu)) return;
    // 8098769C: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_809876A0:
    ctx->pc = 0x809876A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 809876A0: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809876A4:
    ctx->pc = 0x809876A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876A4u)) return;
    // 809876A4: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_809876A8:
    ctx->pc = 0x809876A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876A8u)) return;
    // 809876A8: addi    r3, r3, -21000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21000);

label_809876AC:
    ctx->pc = 0x809876ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 809876AC: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x809876ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809876B0:
    ctx->pc = 0x809876B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876B0u)) return;
    // 809876B0: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_809876B4:
    ctx->pc = 0x809876B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876B4u)) return;
    // 809876B4: addi    r3, r3, -20992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20992);

label_809876B8:
    ctx->pc = 0x809876B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 809876B8: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x809876B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809876BC:
    ctx->pc = 0x809876BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876BCu)) return;
    // 809876BC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_809876C0:
    ctx->pc = 0x809876C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809876C0: stw     r0, 12(r1)
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
label_809876C4:
    ctx->pc = 0x809876C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876C4u)) return;
    // 809876C4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_809876C8:
    ctx->pc = 0x809876C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809876C8: stw     r0, 8(r1)
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
label_809876CC:
    ctx->pc = 0x809876CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809876CC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x809876CCu)) return;
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
label_809876D0:
    ctx->pc = 0x809876D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876D0u)) return;
    // 809876D0: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x809876D0u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_809876D4:
    ctx->pc = 0x809876D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876D4u)) return;
    // 809876D4: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x809876D4u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_809876D8:
    ctx->pc = 0x809876D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876D8u)) return;
    // 809876D8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x809876D8u)) return;
    ppc_frsp(ctx, 1, 1);

label_809876DC:
    ctx->pc = 0x809876DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876DCu)) return;
    // 809876DC: bl      0x80987B48
    {
            ctx->lr = 0x809876E0u;
            goto label_80987B48;
    }

label_809876E0:
    ctx->pc = 0x809876E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809876E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 809876E0: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_809876E4:
    ctx->pc = 0x809876E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876E4u)) return;
    // 809876E4: addi    r3, r3, -21008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21008);

label_809876E8:
    ctx->pc = 0x809876E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 809876E8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x809876E8u)) return;
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
label_809876EC:
    ctx->pc = 0x809876ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876ECu)) return;
    // 809876EC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x809876ECu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_809876F0:
    ctx->pc = 0x809876F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876F0u)) return;
    // 809876F0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x809876F0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_809876F4:
    ctx->pc = 0x809876F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809876F4: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x809876F4u)) return;
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
label_809876F8:
    ctx->pc = 0x809876F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809876F8: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809876FC:
    ctx->pc = 0x809876FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809876FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809876FC: lwz     r0, 0(r31)
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
label_80987700:
    ctx->pc = 0x80987700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987700u)) return;
    // 80987700: subf   r4, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80987704:
    ctx->pc = 0x80987704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987704: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987708:
    ctx->pc = 0x80987708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987708u)) return;
    // 80987708: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_8098770C:
    ctx->pc = 0x8098770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098770Cu)) return;
    // 8098770C: addi    r3, r3, -28244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28244);

label_80987710:
    ctx->pc = 0x80987710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987710u)) return;
    // 80987710: addi    r5, r3, 2088
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(2088);

label_80987714:
    ctx->pc = 0x80987714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987714u)) return;
    // 80987714: b       0x8098772C
    {
            goto label_8098772C;
    }

label_80987718:
    loop_80987718(ctx);
    if (ctx->pc == 0x80987734u) goto label_80987734;
    return;
label_8098771C:
    ctx->pc = 0x8098771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098771Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8098771C: lha     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987720:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987720u)) return;
    // 80987720: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80987724:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987724u)) return;
    // 80987724: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80987728:
    ctx->pc = 0x80987728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80987728: sth     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8098772C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098772Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8098772C: cmplw   r5, r3
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80987730:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987730u)) return;
    // 80987730: bc    4, 2, 0x80987718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80987718u;
                return;
            }
            goto label_80987718;
        }
    }

label_80987734:
    ctx->pc = 0x80987734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987734: lwz     r31, 28(r1)
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
label_80987738:
    ctx->pc = 0x80987738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987738: lwz     r0, 36(r1)
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
label_8098773C:
    ctx->pc = 0x8098773Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8098773Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098773C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987740:
    ctx->pc = 0x80987740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987740u)) return;
    // 80987740: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80987744:
    ctx->pc = 0x80987744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987744u)) return;
    // 80987744: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

label_80987748:
    ctx->pc = 0x80987748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80987748: stwu     r1, -16(r1)
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
label_8098774C:
    ctx->pc = 0x8098774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098774Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8098774C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987750:
    ctx->pc = 0x80987750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987750: stw     r0, 20(r1)
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
label_80987754:
    ctx->pc = 0x80987754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987754u)) return;
    // 80987754: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80987758:
    ctx->pc = 0x80987758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987758u)) return;
    // 80987758: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8098775C:
    ctx->pc = 0x8098775Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098775Cu)) return;
    // 8098775C: lis     r5, -32616
    ctx->gpr[5] = ((u32)(s32)(-32616) << 16);

label_80987760:
    ctx->pc = 0x80987760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987760u)) return;
    // 80987760: addi    r5, r5, 30336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30336);

label_80987764:
    ctx->pc = 0x80987764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987764u)) return;
    // 80987764: bl      0x8050FD60
    {
            ctx->lr = 0x80987768u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80987768:
    ctx->pc = 0x80987768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987768: lwz     r0, 20(r1)
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
label_8098776C:
    ctx->pc = 0x8098776Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8098776Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098776C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987770:
    ctx->pc = 0x80987770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987770u)) return;
    // 80987770: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987774:
    ctx->pc = 0x80987774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987774u)) return;
    // 80987774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

label_80987778:
    ctx->pc = 0x80987778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987778: stwu     r1, -16(r1)
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
label_8098777C:
    ctx->pc = 0x8098777Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098777Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8098777C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987780:
    ctx->pc = 0x80987780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987780: stw     r0, 20(r1)
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
label_80987784:
    ctx->pc = 0x80987784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987784u)) return;
    // 80987784: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987788:
    ctx->pc = 0x80987788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987788u)) return;
    // 80987788: addi    r3, r3, -20896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20896);

label_8098778C:
    ctx->pc = 0x8098778Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098778Cu)) return;
    // 8098778C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80987790:
    ctx->pc = 0x80987790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987790u)) return;
    // 80987790: bl      0x8003D8B8
    {
            ctx->lr = 0x80987794u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80987794:
    ctx->pc = 0x80987794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987794: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987798:
    ctx->pc = 0x80987798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987798u)) return;
    // 80987798: addi    r3, r3, -20864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20864);

label_8098779C:
    ctx->pc = 0x8098779Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098779Cu)) return;
    // 8098779C: bl      0x809325E8
    {
            ctx->lr = 0x809877A0u;
            ctx->pc = 0x809325E8u;
            return;
    }

label_809877A0:
    ctx->pc = 0x809877A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809877A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 809877A0: lis     r4, -27778
    ctx->gpr[4] = ((u32)(s32)(-27778) << 16);

label_809877A4:
    ctx->pc = 0x809877A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877A4u)) return;
    // 809877A4: addi    r4, r4, -416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-416);

label_809877A8:
    ctx->pc = 0x809877A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809877A8: stw     r3, 0(r4)
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
label_809877AC:
    ctx->pc = 0x809877ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877ACu)) return;
    // 809877AC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_809877B0:
    ctx->pc = 0x809877B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877B0u)) return;
    // 809877B0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_809877B4:
    ctx->pc = 0x809877B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877B4u)) return;
    // 809877B4: lis     r5, -32616
    ctx->gpr[5] = ((u32)(s32)(-32616) << 16);

label_809877B8:
    ctx->pc = 0x809877B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877B8u)) return;
    // 809877B8: addi    r5, r5, 30960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30960);

label_809877BC:
    ctx->pc = 0x809877BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877BCu)) return;
    // 809877BC: bl      0x8050FD60
    {
            ctx->lr = 0x809877C0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_809877C0:
    ctx->pc = 0x809877C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809877C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 809877C0: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_809877C4:
    ctx->pc = 0x809877C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877C4u)) return;
    // 809877C4: addi    r3, r3, -472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-472);

label_809877C8:
    ctx->pc = 0x809877C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877C8u)) return;
    // 809877C8: bl      0x80480218
    {
            ctx->lr = 0x809877CCu;
            ctx->pc = 0x80480218u;
            return;
    }

label_809877CC:
    ctx->pc = 0x809877CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809877CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 809877CC: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_809877D0:
    ctx->pc = 0x809877D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877D0u)) return;
    // 809877D0: addi    r3, r3, -20848
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20848);

label_809877D4:
    ctx->pc = 0x809877D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877D4u)) return;
    // 809877D4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_809877D8:
    ctx->pc = 0x809877D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877D8u)) return;
    // 809877D8: bl      0x8003D8B8
    {
            ctx->lr = 0x809877DCu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_809877DC:
    ctx->pc = 0x809877DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809877DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809877DC: lwz     r0, 20(r1)
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
label_809877E0:
    ctx->pc = 0x809877E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809877E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809877E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809877E4:
    ctx->pc = 0x809877E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877E4u)) return;
    // 809877E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809877E8:
    ctx->pc = 0x809877E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877E8u)) return;
    // 809877E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

label_809877EC:
    ctx->pc = 0x809877ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809877ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809877EC: stwu     r1, -16(r1)
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
label_809877F0:
    ctx->pc = 0x809877F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809877F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809877F4:
    ctx->pc = 0x809877F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809877F4: stw     r0, 20(r1)
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
label_809877F8:
    ctx->pc = 0x809877F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877F8u)) return;
    // 809877F8: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_809877FC:
    ctx->pc = 0x809877FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809877FCu)) return;
    // 809877FC: addi    r3, r3, -20816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20816);

label_80987800:
    ctx->pc = 0x80987800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987800u)) return;
    // 80987800: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80987804:
    ctx->pc = 0x80987804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987804u)) return;
    // 80987804: bl      0x8003D8B8
    {
            ctx->lr = 0x80987808u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80987808:
    ctx->pc = 0x80987808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987808: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_8098780C:
    ctx->pc = 0x8098780Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098780Cu)) return;
    // 8098780C: addi    r3, r3, -416
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-416);

label_80987810:
    ctx->pc = 0x80987810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987810: lwz     r3, 0(r3)
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
label_80987814:
    ctx->pc = 0x80987814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987814u)) return;
    // 80987814: bl      0x8093259C
    {
            ctx->lr = 0x80987818u;
            ctx->pc = 0x8093259Cu;
            return;
    }

label_80987818:
    ctx->pc = 0x80987818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987818: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_8098781C:
    ctx->pc = 0x8098781Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098781Cu)) return;
    // 8098781C: addi    r3, r3, -20784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20784);

label_80987820:
    ctx->pc = 0x80987820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987820u)) return;
    // 80987820: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80987824:
    ctx->pc = 0x80987824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987824u)) return;
    // 80987824: bl      0x8003D8B8
    {
            ctx->lr = 0x80987828u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80987828:
    ctx->pc = 0x80987828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987828: lwz     r0, 20(r1)
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
label_8098782C:
    ctx->pc = 0x8098782Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8098782Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098782C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987830:
    ctx->pc = 0x80987830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987830u)) return;
    // 80987830: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987834:
    ctx->pc = 0x80987834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987834u)) return;
    // 80987834: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

label_80987838:
    ctx->pc = 0x80987838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987838: stwu     r1, -16(r1)
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
label_8098783C:
    ctx->pc = 0x8098783Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098783Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098783C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987840:
    ctx->pc = 0x80987840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987840: stw     r0, 20(r1)
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
label_80987844:
    ctx->pc = 0x80987844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987844u)) return;
    // 80987844: bl      0x8050E95C
    {
            ctx->lr = 0x80987848u;
            ctx->pc = 0x8050E95Cu;
            return;
    }

label_80987848:
    ctx->pc = 0x80987848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80987848: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_8098784C:
    ctx->pc = 0x8098784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098784Cu)) return;
    // 8098784C: addi    r3, r3, -14944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80987850:
    ctx->pc = 0x80987850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987850: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987854:
    ctx->pc = 0x80987854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987854: lfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80987854u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80987858:
    ctx->pc = 0x80987858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987858u)) return;
    // 80987858: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_8098785C:
    ctx->pc = 0x8098785Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098785Cu)) return;
    // 8098785C: addi    r3, r3, -20984
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20984);

label_80987860:
    ctx->pc = 0x80987860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987860: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987860u)) return;
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
label_80987864:
    ctx->pc = 0x80987864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987864u)) return;
    // 80987864: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80987864u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80987868:
    ctx->pc = 0x80987868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987868u)) return;
    // 80987868: bc    4, 0, 0x8098789C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8098789C;
        }
    }

label_8098786C:
    ctx->pc = 0x8098786Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098786Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 8098786C: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987870:
    ctx->pc = 0x80987870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987870u)) return;
    // 80987870: addi    r3, r3, -20980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20980);

label_80987874:
    ctx->pc = 0x80987874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80987874: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987874u)) return;
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
label_80987878:
    ctx->pc = 0x80987878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80987878: stfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80987878u)) return;
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
label_8098787C:
    ctx->pc = 0x8098787Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098787Cu)) return;
    // 8098787C: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987880:
    ctx->pc = 0x80987880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987880u)) return;
    // 80987880: addi    r3, r3, -20976
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20976);

label_80987884:
    ctx->pc = 0x80987884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987884: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987884u)) return;
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
label_80987888:
    ctx->pc = 0x80987888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987888: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80987888u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8098788C:
    ctx->pc = 0x8098788Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098788Cu)) return;
    // 8098788C: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987890:
    ctx->pc = 0x80987890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987890u)) return;
    // 80987890: addi    r3, r3, -20972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20972);

label_80987894:
    ctx->pc = 0x80987894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987894: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987894u)) return;
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
label_80987898:
    ctx->pc = 0x80987898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80987898: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80987898u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8098789C:
    ctx->pc = 0x8098789Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098789Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8098789C: lwz     r0, 20(r1)
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
label_809878A0:
    ctx->pc = 0x809878A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809878A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809878A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809878A4:
    ctx->pc = 0x809878A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878A4u)) return;
    // 809878A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809878A8:
    ctx->pc = 0x809878A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878A8u)) return;
    // 809878A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

label_809878AC:
    ctx->pc = 0x809878ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809878AC: stwu     r1, -16(r1)
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
label_809878B0:
    ctx->pc = 0x809878B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809878B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809878B4:
    ctx->pc = 0x809878B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809878B4: stw     r0, 20(r1)
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
label_809878B8:
    ctx->pc = 0x809878B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878B8u)) return;
    // 809878B8: bl      0x80406038
    {
            ctx->lr = 0x809878BCu;
            ctx->pc = 0x80406038u;
            return;
    }

label_809878BC:
    ctx->pc = 0x809878BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809878BC: bl      0x80405F58
    {
            ctx->lr = 0x809878C0u;
            ctx->pc = 0x80405F58u;
            return;
    }

label_809878C0:
    ctx->pc = 0x809878C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809878C0: bl      0x8097886C
    {
            ctx->lr = 0x809878C4u;
            ctx->pc = 0x8097886Cu;
            return;
    }

label_809878C4:
    ctx->pc = 0x809878C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809878C4: bl      0x80931198
    {
            ctx->lr = 0x809878C8u;
            ctx->pc = 0x80931198u;
            return;
    }

label_809878C8:
    ctx->pc = 0x809878C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809878C8: bl      0x8097D258
    {
            ctx->lr = 0x809878CCu;
            ctx->pc = 0x8097D258u;
            return;
    }

label_809878CC:
    ctx->pc = 0x809878CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809878CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_809878D0:
    ctx->pc = 0x809878D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878D0u)) return;
    // 809878D0: bl      0x80941A00
    {
            ctx->lr = 0x809878D4u;
            ctx->pc = 0x80941A00u;
            return;
    }

label_809878D4:
    ctx->pc = 0x809878D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809878D4: bl      0x80932998
    {
            ctx->lr = 0x809878D8u;
            ctx->pc = 0x80932998u;
            return;
    }

label_809878D8:
    ctx->pc = 0x809878D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809878D8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_809878DC:
    ctx->pc = 0x809878DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878DCu)) return;
    // 809878DC: bl      0x8093232C
    {
            ctx->lr = 0x809878E0u;
            ctx->pc = 0x8093232Cu;
            return;
    }

label_809878E0:
    ctx->pc = 0x809878E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809878E0: lwz     r0, 20(r1)
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
label_809878E4:
    ctx->pc = 0x809878E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809878E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809878E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809878E8:
    ctx->pc = 0x809878E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878E8u)) return;
    // 809878E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809878EC:
    ctx->pc = 0x809878ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878ECu)) return;
    // 809878EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

label_809878F0:
    ctx->pc = 0x809878F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809878F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809878F0: stwu     r1, -32(r1)
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
label_809878F4:
    ctx->pc = 0x809878F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809878F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809878F8:
    ctx->pc = 0x809878F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809878F8: stw     r0, 36(r1)
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
label_809878FC:
    ctx->pc = 0x809878FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809878FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809878FC: stw     r31, 28(r1)
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
label_80987900:
    ctx->pc = 0x80987900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987900u)) return;
    // 80987900: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80987904:
    ctx->pc = 0x80987904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987904u)) return;
    // 80987904: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80987908:
    ctx->pc = 0x80987908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987908u)) return;
    // 80987908: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_8098790C:
    ctx->pc = 0x8098790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098790Cu)) return;
    // 8098790C: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80987910:
    ctx->pc = 0x80987910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987910u)) return;
    // 80987910: bl      0x8060F71C
    {
            ctx->lr = 0x80987914u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80987914:
    ctx->pc = 0x80987914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80987914: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80987918:
    ctx->pc = 0x80987918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987918u)) return;
    // 80987918: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8098791C:
    ctx->pc = 0x8098791Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098791Cu)) return;
    // 8098791C: addi    r3, r3, -25468
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25468);

label_80987920:
    ctx->pc = 0x80987920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987920: stb     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987924:
    ctx->pc = 0x80987924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987924u)) return;
    // 80987924: bl      0x80917AA0
    {
            ctx->lr = 0x80987928u;
            ctx->pc = 0x80917AA0u;
            return;
    }

label_80987928:
    ctx->pc = 0x80987928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987928: bl      0x80917BFC
    {
            ctx->lr = 0x8098792Cu;
            ctx->pc = 0x80917BFCu;
            return;
    }

label_8098792C:
    ctx->pc = 0x8098792Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098792Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8098792C: bl      0x80932A24
    {
            ctx->lr = 0x80987930u;
            ctx->pc = 0x80932A24u;
            return;
    }

label_80987930:
    ctx->pc = 0x80987930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987930: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987934:
    ctx->pc = 0x80987934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987934u)) return;
    // 80987934: addi    r3, r3, -20752
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20752);

label_80987938:
    ctx->pc = 0x80987938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987938u)) return;
    // 80987938: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_8098793C:
    ctx->pc = 0x8098793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098793Cu)) return;
    // 8098793C: addi    r4, r4, -32700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32700);

label_80987940:
    ctx->pc = 0x80987940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987940u)) return;
    // 80987940: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987944:
    ctx->pc = 0x80987944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987944u)) return;
    // 80987944: bl      0x80941A9C
    {
            ctx->lr = 0x80987948u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987948:
    ctx->pc = 0x80987948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987948: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_8098794C:
    ctx->pc = 0x8098794Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098794Cu)) return;
    // 8098794C: addi    r3, r3, -20736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20736);

label_80987950:
    ctx->pc = 0x80987950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987950u)) return;
    // 80987950: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987954:
    ctx->pc = 0x80987954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987954u)) return;
    // 80987954: addi    r4, r4, -28564
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28564);

label_80987958:
    ctx->pc = 0x80987958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987958u)) return;
    // 80987958: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8098795C:
    ctx->pc = 0x8098795Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098795Cu)) return;
    // 8098795C: bl      0x80941A9C
    {
            ctx->lr = 0x80987960u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987960:
    ctx->pc = 0x80987960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987960: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987964:
    ctx->pc = 0x80987964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987964u)) return;
    // 80987964: addi    r3, r3, -20724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20724);

label_80987968:
    ctx->pc = 0x80987968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987968u)) return;
    // 80987968: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_8098796C:
    ctx->pc = 0x8098796Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098796Cu)) return;
    // 8098796C: addi    r4, r4, -31928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31928);

label_80987970:
    ctx->pc = 0x80987970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987970u)) return;
    // 80987970: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987974:
    ctx->pc = 0x80987974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987974u)) return;
    // 80987974: bl      0x80941A9C
    {
            ctx->lr = 0x80987978u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987978:
    ctx->pc = 0x80987978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987978: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_8098797C:
    ctx->pc = 0x8098797Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098797Cu)) return;
    // 8098797C: addi    r3, r3, -20712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20712);

label_80987980:
    ctx->pc = 0x80987980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987980u)) return;
    // 80987980: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987984:
    ctx->pc = 0x80987984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987984u)) return;
    // 80987984: addi    r4, r4, -30468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30468);

label_80987988:
    ctx->pc = 0x80987988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987988u)) return;
    // 80987988: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8098798C:
    ctx->pc = 0x8098798Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098798Cu)) return;
    // 8098798C: bl      0x80941A9C
    {
            ctx->lr = 0x80987990u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987990:
    ctx->pc = 0x80987990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987990: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987994:
    ctx->pc = 0x80987994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987994u)) return;
    // 80987994: addi    r3, r3, -20704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20704);

label_80987998:
    ctx->pc = 0x80987998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987998u)) return;
    // 80987998: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_8098799C:
    ctx->pc = 0x8098799Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098799Cu)) return;
    // 8098799C: addi    r4, r4, -30148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30148);

label_809879A0:
    ctx->pc = 0x809879A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879A0u)) return;
    // 809879A0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_809879A4:
    ctx->pc = 0x809879A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879A4u)) return;
    // 809879A4: bl      0x80941A9C
    {
            ctx->lr = 0x809879A8u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_809879A8:
    ctx->pc = 0x809879A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809879A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 809879A8: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_809879AC:
    ctx->pc = 0x809879ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879ACu)) return;
    // 809879AC: addi    r3, r3, -20688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20688);

label_809879B0:
    ctx->pc = 0x809879B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879B0u)) return;
    // 809879B0: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_809879B4:
    ctx->pc = 0x809879B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879B4u)) return;
    // 809879B4: addi    r4, r4, -28572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28572);

label_809879B8:
    ctx->pc = 0x809879B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879B8u)) return;
    // 809879B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_809879BC:
    ctx->pc = 0x809879BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879BCu)) return;
    // 809879BC: bl      0x80941A9C
    {
            ctx->lr = 0x809879C0u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_809879C0:
    ctx->pc = 0x809879C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809879C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809879C0: bl      0x8097D2B8
    {
            ctx->lr = 0x809879C4u;
            ctx->pc = 0x8097D2B8u;
            return;
    }

label_809879C4:
    ctx->pc = 0x809879C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809879C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809879C4: bl      0x8097D330
    {
            ctx->lr = 0x809879C8u;
            ctx->pc = 0x8097D330u;
            return;
    }

label_809879C8:
    ctx->pc = 0x809879C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809879C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809879C8: bl      0x80941B60
    {
            ctx->lr = 0x809879CCu;
            ctx->pc = 0x80941B60u;
            return;
    }

label_809879CC:
    ctx->pc = 0x809879CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809879CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809879CC: bl      0x80918A88
    {
            ctx->lr = 0x809879D0u;
            ctx->pc = 0x80918A88u;
            return;
    }

label_809879D0:
    ctx->pc = 0x809879D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809879D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809879D0: bl      0x809246C8
    {
            ctx->lr = 0x809879D4u;
            ctx->pc = 0x809246C8u;
            return;
    }

label_809879D4:
    ctx->pc = 0x809879D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809879D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 809879D4: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_809879D8:
    ctx->pc = 0x809879D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879D8u)) return;
    // 809879D8: addi    r4, r3, -20968
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-20968);

label_809879DC:
    ctx->pc = 0x809879DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809879DC: lwz     r3, 0(r4)
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
label_809879E0:
    ctx->pc = 0x809879E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809879E0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809879E4:
    ctx->pc = 0x809879E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809879E4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809879E8:
    ctx->pc = 0x809879E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809879E8: stw     r0, 12(r1)
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
label_809879EC:
    ctx->pc = 0x809879ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809879EC: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809879F0:
    ctx->pc = 0x809879F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809879F0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809879F4:
    ctx->pc = 0x809879F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879F4u)) return;
    // 809879F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_809879F8:
    ctx->pc = 0x809879F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879F8u)) return;
    // 809879F8: li      r4, 28672
    ctx->gpr[4] = (u32)(s32)(28672);

label_809879FC:
    ctx->pc = 0x809879FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809879FCu)) return;
    // 809879FC: bl      0x809465C8
    {
            ctx->lr = 0x80987A00u;
            ctx->pc = 0x809465C8u;
            return;
    }

label_80987A00:
    ctx->pc = 0x80987A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80987A00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80987A04:
    ctx->pc = 0x80987A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A04u)) return;
    // 80987A04: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80987A08:
    ctx->pc = 0x80987A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A08u)) return;
    // 80987A08: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A0C:
    ctx->pc = 0x80987A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A0Cu)) return;
    // 80987A0C: addi    r5, r5, -20980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20980);

label_80987A10:
    ctx->pc = 0x80987A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80987A10: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A14:
    ctx->pc = 0x80987A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A14u)) return;
    // 80987A14: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A18:
    ctx->pc = 0x80987A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A18u)) return;
    // 80987A18: addi    r5, r5, -20956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20956);

label_80987A1C:
    ctx->pc = 0x80987A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987A1C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A1Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A20:
    ctx->pc = 0x80987A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A20u)) return;
    // 80987A20: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A24:
    ctx->pc = 0x80987A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A24u)) return;
    // 80987A24: addi    r5, r5, -20952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20952);

label_80987A28:
    ctx->pc = 0x80987A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987A28: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A28u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A2C:
    ctx->pc = 0x80987A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A2Cu)) return;
    // 80987A2C: li      r5, 22747
    ctx->gpr[5] = (u32)(s32)(22747);

label_80987A30:
    ctx->pc = 0x80987A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A30u)) return;
    // 80987A30: bl      0x80971064
    {
            ctx->lr = 0x80987A34u;
            ctx->pc = 0x80971064u;
            return;
    }

label_80987A34:
    ctx->pc = 0x80987A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80987A34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80987A38:
    ctx->pc = 0x80987A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A38u)) return;
    // 80987A38: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80987A3C:
    ctx->pc = 0x80987A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A3Cu)) return;
    // 80987A3C: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A40:
    ctx->pc = 0x80987A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A40u)) return;
    // 80987A40: addi    r5, r5, -20948
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20948);

label_80987A44:
    ctx->pc = 0x80987A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80987A44: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A48:
    ctx->pc = 0x80987A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A48u)) return;
    // 80987A48: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A4C:
    ctx->pc = 0x80987A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A4Cu)) return;
    // 80987A4C: addi    r5, r5, -20944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20944);

label_80987A50:
    ctx->pc = 0x80987A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987A50: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A50u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A54:
    ctx->pc = 0x80987A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A54u)) return;
    // 80987A54: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A58:
    ctx->pc = 0x80987A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A58u)) return;
    // 80987A58: addi    r5, r5, -20940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20940);

label_80987A5C:
    ctx->pc = 0x80987A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987A5C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A5Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A60:
    ctx->pc = 0x80987A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A60u)) return;
    // 80987A60: li      r5, 21467
    ctx->gpr[5] = (u32)(s32)(21467);

label_80987A64:
    ctx->pc = 0x80987A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A64u)) return;
    // 80987A64: bl      0x80971064
    {
            ctx->lr = 0x80987A68u;
            ctx->pc = 0x80971064u;
            return;
    }

label_80987A68:
    ctx->pc = 0x80987A68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987A68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80987A68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80987A6C:
    ctx->pc = 0x80987A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A6Cu)) return;
    // 80987A6C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80987A70:
    ctx->pc = 0x80987A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A70u)) return;
    // 80987A70: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A74:
    ctx->pc = 0x80987A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A74u)) return;
    // 80987A74: addi    r5, r5, -20936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20936);

label_80987A78:
    ctx->pc = 0x80987A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80987A78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A7C:
    ctx->pc = 0x80987A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A7Cu)) return;
    // 80987A7C: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A80:
    ctx->pc = 0x80987A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A80u)) return;
    // 80987A80: addi    r5, r5, -20932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20932);

label_80987A84:
    ctx->pc = 0x80987A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987A84: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A88:
    ctx->pc = 0x80987A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A88u)) return;
    // 80987A88: lis     r5, -27781
    ctx->gpr[5] = ((u32)(s32)(-27781) << 16);

label_80987A8C:
    ctx->pc = 0x80987A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A8Cu)) return;
    // 80987A8C: addi    r5, r5, -20928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20928);

label_80987A90:
    ctx->pc = 0x80987A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987A90: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987A90u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80987A94:
    ctx->pc = 0x80987A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A94u)) return;
    // 80987A94: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_80987A98:
    ctx->pc = 0x80987A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987A98u)) return;
    // 80987A98: bl      0x80971064
    {
            ctx->lr = 0x80987A9Cu;
            ctx->pc = 0x80971064u;
            return;
    }

label_80987A9C:
    ctx->pc = 0x80987A9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987A9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987A9C: bl      0x809188F0
    {
            ctx->lr = 0x80987AA0u;
            ctx->pc = 0x809188F0u;
            return;
    }

label_80987AA0:
    ctx->pc = 0x80987AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987AA0: bl      0x80923514
    {
            ctx->lr = 0x80987AA4u;
            ctx->pc = 0x80923514u;
            return;
    }

label_80987AA4:
    ctx->pc = 0x80987AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987AA4: bl      0x80987748
    {
            ctx->lr = 0x80987AA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80987748u;
                return;
            }
            goto label_80987748;
    }

label_80987AA8:
    ctx->pc = 0x80987AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987AA8: bl      0x80973A94
    {
            ctx->lr = 0x80987AACu;
            ctx->pc = 0x80973A94u;
            return;
    }

label_80987AAC:
    ctx->pc = 0x80987AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987AAC: bl      0x80970E68
    {
            ctx->lr = 0x80987AB0u;
            ctx->pc = 0x80970E68u;
            return;
    }

label_80987AB0:
    ctx->pc = 0x80987AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80987AB0: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987AB4:
    ctx->pc = 0x80987AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AB4u)) return;
    // 80987AB4: addi    r3, r3, -20924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20924);

label_80987AB8:
    ctx->pc = 0x80987AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80987AB8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987AB8u)) return;
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
label_80987ABC:
    ctx->pc = 0x80987ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987ABCu)) return;
    // 80987ABC: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987AC0:
    ctx->pc = 0x80987AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AC0u)) return;
    // 80987AC0: addi    r3, r3, -20920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20920);

label_80987AC4:
    ctx->pc = 0x80987AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987AC4: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987AC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80987AC8:
    ctx->pc = 0x80987AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AC8u)) return;
    // 80987AC8: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987ACC:
    ctx->pc = 0x80987ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987ACCu)) return;
    // 80987ACC: addi    r3, r3, -20916
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20916);

label_80987AD0:
    ctx->pc = 0x80987AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987AD0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987AD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80987AD4:
    ctx->pc = 0x80987AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AD4u)) return;
    // 80987AD4: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80987AD4u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80987AD8:
    ctx->pc = 0x80987AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AD8u)) return;
    // 80987AD8: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80987AD8u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80987ADC:
    ctx->pc = 0x80987ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987ADCu)) return;
    // 80987ADC: bl      0x80978880
    {
            ctx->lr = 0x80987AE0u;
            ctx->pc = 0x80978880u;
            return;
    }

label_80987AE0:
    ctx->pc = 0x80987AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987AE0: bl      0x80405C38
    {
            ctx->lr = 0x80987AE4u;
            ctx->pc = 0x80405C38u;
            return;
    }

label_80987AE4:
    ctx->pc = 0x80987AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987AE4: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80987AE8:
    ctx->pc = 0x80987AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AE8u)) return;
    // 80987AE8: bl      0x80406090
    {
            ctx->lr = 0x80987AECu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80987AEC:
    ctx->pc = 0x80987AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80987AEC: lis     r3, -32616
    ctx->gpr[3] = ((u32)(s32)(-32616) << 16);

label_80987AF0:
    ctx->pc = 0x80987AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AF0u)) return;
    // 80987AF0: addi    r0, r3, 30776
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30776);

label_80987AF4:
    ctx->pc = 0x80987AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80987AF4: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987AF8:
    ctx->pc = 0x80987AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AF8u)) return;
    // 80987AF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80987AFC:
    ctx->pc = 0x80987AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80987AFC: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B00:
    ctx->pc = 0x80987B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B00u)) return;
    // 80987B00: lis     r3, -32616
    ctx->gpr[3] = ((u32)(s32)(-32616) << 16);

label_80987B04:
    ctx->pc = 0x80987B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B04u)) return;
    // 80987B04: addi    r0, r3, 30892
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30892);

label_80987B08:
    ctx->pc = 0x80987B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80987B08: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B0C:
    ctx->pc = 0x80987B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B0Cu)) return;
    // 80987B0C: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987B10:
    ctx->pc = 0x80987B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B10u)) return;
    // 80987B10: addi    r3, r3, -20912
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20912);

label_80987B14:
    ctx->pc = 0x80987B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80987B14: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987B14u)) return;
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
label_80987B18:
    ctx->pc = 0x80987B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B18u)) return;
    // 80987B18: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80987B1C:
    ctx->pc = 0x80987B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B1Cu)) return;
    // 80987B1C: addi    r4, r3, -25500
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80987B20:
    ctx->pc = 0x80987B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80987B20: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80987B20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B24:
    ctx->pc = 0x80987B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B24u)) return;
    // 80987B24: lis     r3, -27781
    ctx->gpr[3] = ((u32)(s32)(-27781) << 16);

label_80987B28:
    ctx->pc = 0x80987B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B28u)) return;
    // 80987B28: addi    r3, r3, -20908
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20908);

label_80987B2C:
    ctx->pc = 0x80987B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80987B2C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987B2Cu)) return;
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
label_80987B30:
    ctx->pc = 0x80987B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987B30: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x80987B30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B34:
    ctx->pc = 0x80987B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987B34: lwz     r31, 28(r1)
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
label_80987B38:
    ctx->pc = 0x80987B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987B38: lwz     r0, 36(r1)
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
label_80987B3C:
    ctx->pc = 0x80987B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987B3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B40:
    ctx->pc = 0x80987B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B40u)) return;
    // 80987B40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80987B44:
    ctx->pc = 0x80987B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B44u)) return;
    // 80987B44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

label_80987B48:
    ctx->pc = 0x80987B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987B48: stwu     r1, -16(r1)
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
label_80987B4C:
    ctx->pc = 0x80987B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987B4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B50:
    ctx->pc = 0x80987B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987B50: stw     r0, 20(r1)
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
label_80987B54:
    ctx->pc = 0x80987B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B54u)) return;
    // 80987B54: bl      0x80014034
    {
            ctx->lr = 0x80987B58u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80987B58:
    ctx->pc = 0x80987B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987B58: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80987B58u)) return;
    ppc_frsp(ctx, 1, 1);

label_80987B5C:
    ctx->pc = 0x80987B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987B5C: lwz     r0, 20(r1)
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
label_80987B60:
    ctx->pc = 0x80987B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987B60: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B64:
    ctx->pc = 0x80987B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B64u)) return;
    // 80987B64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987B68:
    ctx->pc = 0x80987B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B68u)) return;
    // 80987B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987680;
        }
    }

    ctx->pc = 0x80987B6Cu;
    return;
return_dispatch_80987680:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x809876E0u: goto label_809876E0;
    case 0x80987768u: goto label_80987768;
    case 0x80987794u: goto label_80987794;
    case 0x809877A0u: goto label_809877A0;
    case 0x809877C0u: goto label_809877C0;
    case 0x809877CCu: goto label_809877CC;
    case 0x809877DCu: goto label_809877DC;
    case 0x80987808u: goto label_80987808;
    case 0x80987818u: goto label_80987818;
    case 0x80987828u: goto label_80987828;
    case 0x80987848u: goto label_80987848;
    case 0x809878BCu: goto label_809878BC;
    case 0x809878C0u: goto label_809878C0;
    case 0x809878C4u: goto label_809878C4;
    case 0x809878C8u: goto label_809878C8;
    case 0x809878CCu: goto label_809878CC;
    case 0x809878D4u: goto label_809878D4;
    case 0x809878D8u: goto label_809878D8;
    case 0x809878E0u: goto label_809878E0;
    case 0x80987914u: goto label_80987914;
    case 0x80987928u: goto label_80987928;
    case 0x8098792Cu: goto label_8098792C;
    case 0x80987930u: goto label_80987930;
    case 0x80987948u: goto label_80987948;
    case 0x80987960u: goto label_80987960;
    case 0x80987978u: goto label_80987978;
    case 0x80987990u: goto label_80987990;
    case 0x809879A8u: goto label_809879A8;
    case 0x809879C0u: goto label_809879C0;
    case 0x809879C4u: goto label_809879C4;
    case 0x809879C8u: goto label_809879C8;
    case 0x809879CCu: goto label_809879CC;
    case 0x809879D0u: goto label_809879D0;
    case 0x809879D4u: goto label_809879D4;
    case 0x80987A00u: goto label_80987A00;
    case 0x80987A34u: goto label_80987A34;
    case 0x80987A68u: goto label_80987A68;
    case 0x80987A9Cu: goto label_80987A9C;
    case 0x80987AA0u: goto label_80987AA0;
    case 0x80987AA4u: goto label_80987AA4;
    case 0x80987AA8u: goto label_80987AA8;
    case 0x80987AACu: goto label_80987AAC;
    case 0x80987AB0u: goto label_80987AB0;
    case 0x80987AE0u: goto label_80987AE0;
    case 0x80987AE4u: goto label_80987AE4;
    case 0x80987AECu: goto label_80987AEC;
    case 0x80987B58u: goto label_80987B58;
    default: return;
    }
}

