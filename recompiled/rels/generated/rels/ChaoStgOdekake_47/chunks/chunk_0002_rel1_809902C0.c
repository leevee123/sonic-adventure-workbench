// DolRecomp output
#include "../generated.h"

static void loop_80990E3C(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80990E3C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80990E3Cu;
            return;
        }
        ctx->downcount -= 6;
    }
    ctx->pc = 0x80990E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990E3C: lbz     r3, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E40u)) return;
    // 80990E40: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

    ctx->pc = 0x80990E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990E44: stb     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E48u)) return;
    // 80990E48: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E4Cu)) return;
    // 80990E4C: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x80990E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990E50: stbx    r4, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80990E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990E54: lbz     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E58u)) return;
    // 80990E58: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

    ctx->pc = 0x80990E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990E5C: lbz     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E60u)) return;
    // 80990E60: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E64u)) return;
    // 80990E64: cmpw    r3, r0
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

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E68u)) return;
    // 80990E68: bc    12, 0, 0x80990E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80990E3Cu;
                return;
            }
            goto label_80990E3C;
        }
    }

    ctx->pc = 0x80990E6Cu;
}

static void loop_80990EFC(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80990EFC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80990EFCu;
            return;
        }
        ctx->downcount -= 4;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EFCu)) return;
    // 80990EFC: add   r3, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    ctx->pc = 0x80990F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990F00: lbz     r0, 5(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    ctx->pc = 0x80990F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990F04: stb     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F08u)) return;
    // 80990F08: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    ctx->pc = 0x80990F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990F0C: lbz     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F10u)) return;
    // 80990F10: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F14u)) return;
    // 80990F14: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F18u)) return;
    // 80990F18: bc    12, 0, 0x80990EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80990EFCu;
                return;
            }
            goto label_80990EFC;
        }
    }

    ctx->pc = 0x80990F1Cu;
}

void func_809902C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_809902C0[1609] = {
        &&label_809902C0,
        &&label_809902C4,
        &&label_809902C8,
        &&label_809902CC,
        &&label_809902D0,
        &&label_809902D4,
        &&label_809902D8,
        &&label_809902DC,
        &&label_809902E0,
        &&label_809902E4,
        &&label_809902E8,
        &&label_809902EC,
        &&label_809902F0,
        &&label_809902F4,
        &&label_809902F8,
        &&label_809902FC,
        &&label_80990300,
        &&label_80990304,
        &&label_80990308,
        &&label_8099030C,
        &&label_80990310,
        &&label_80990314,
        &&label_80990318,
        &&label_8099031C,
        &&label_80990320,
        &&label_80990324,
        &&label_80990328,
        &&label_8099032C,
        &&label_80990330,
        &&label_80990334,
        &&label_80990338,
        &&label_8099033C,
        &&label_80990340,
        &&label_80990344,
        &&label_80990348,
        &&label_8099034C,
        &&label_80990350,
        &&label_80990354,
        &&label_80990358,
        &&label_8099035C,
        &&label_80990360,
        &&label_80990364,
        &&label_80990368,
        &&label_8099036C,
        &&label_80990370,
        &&label_80990374,
        &&label_80990378,
        &&label_8099037C,
        &&label_80990380,
        &&label_80990384,
        &&label_80990388,
        &&label_8099038C,
        &&label_80990390,
        &&label_80990394,
        &&label_80990398,
        &&label_8099039C,
        &&label_809903A0,
        &&label_809903A4,
        &&label_809903A8,
        &&label_809903AC,
        &&label_809903B0,
        &&label_809903B4,
        &&label_809903B8,
        &&label_809903BC,
        &&label_809903C0,
        &&label_809903C4,
        &&label_809903C8,
        &&label_809903CC,
        &&label_809903D0,
        &&label_809903D4,
        &&label_809903D8,
        &&label_809903DC,
        &&label_809903E0,
        &&label_809903E4,
        &&label_809903E8,
        &&label_809903EC,
        &&label_809903F0,
        &&label_809903F4,
        &&label_809903F8,
        &&label_809903FC,
        &&label_80990400,
        &&label_80990404,
        &&label_80990408,
        &&label_8099040C,
        &&label_80990410,
        &&label_80990414,
        &&label_80990418,
        &&label_8099041C,
        &&label_80990420,
        &&label_80990424,
        &&label_80990428,
        &&label_8099042C,
        &&label_80990430,
        &&label_80990434,
        &&label_80990438,
        &&label_8099043C,
        &&label_80990440,
        &&label_80990444,
        &&label_80990448,
        &&label_8099044C,
        &&label_80990450,
        &&label_80990454,
        &&label_80990458,
        &&label_8099045C,
        &&label_80990460,
        &&label_80990464,
        &&label_80990468,
        &&label_8099046C,
        &&label_80990470,
        &&label_80990474,
        &&label_80990478,
        &&label_8099047C,
        &&label_80990480,
        &&label_80990484,
        &&label_80990488,
        &&label_8099048C,
        &&label_80990490,
        &&label_80990494,
        &&label_80990498,
        &&label_8099049C,
        &&label_809904A0,
        &&label_809904A4,
        &&label_809904A8,
        &&label_809904AC,
        &&label_809904B0,
        &&label_809904B4,
        &&label_809904B8,
        &&label_809904BC,
        &&label_809904C0,
        &&label_809904C4,
        &&label_809904C8,
        &&label_809904CC,
        &&label_809904D0,
        &&label_809904D4,
        &&label_809904D8,
        &&label_809904DC,
        &&label_809904E0,
        &&label_809904E4,
        &&label_809904E8,
        &&label_809904EC,
        &&label_809904F0,
        &&label_809904F4,
        &&label_809904F8,
        &&label_809904FC,
        &&label_80990500,
        &&label_80990504,
        &&label_80990508,
        &&label_8099050C,
        &&label_80990510,
        &&label_80990514,
        &&label_80990518,
        &&label_8099051C,
        &&label_80990520,
        &&label_80990524,
        &&label_80990528,
        &&label_8099052C,
        &&label_80990530,
        &&label_80990534,
        &&label_80990538,
        &&label_8099053C,
        &&label_80990540,
        &&label_80990544,
        &&label_80990548,
        &&label_8099054C,
        &&label_80990550,
        &&label_80990554,
        &&label_80990558,
        &&label_8099055C,
        &&label_80990560,
        &&label_80990564,
        &&label_80990568,
        &&label_8099056C,
        &&label_80990570,
        &&label_80990574,
        &&label_80990578,
        &&label_8099057C,
        &&label_80990580,
        &&label_80990584,
        &&label_80990588,
        &&label_8099058C,
        &&label_80990590,
        &&label_80990594,
        &&label_80990598,
        &&label_8099059C,
        &&label_809905A0,
        &&label_809905A4,
        &&label_809905A8,
        &&label_809905AC,
        &&label_809905B0,
        &&label_809905B4,
        &&label_809905B8,
        &&label_809905BC,
        &&label_809905C0,
        &&label_809905C4,
        &&label_809905C8,
        &&label_809905CC,
        &&label_809905D0,
        &&label_809905D4,
        &&label_809905D8,
        &&label_809905DC,
        &&label_809905E0,
        &&label_809905E4,
        &&label_809905E8,
        &&label_809905EC,
        &&label_809905F0,
        &&label_809905F4,
        &&label_809905F8,
        &&label_809905FC,
        &&label_80990600,
        &&label_80990604,
        &&label_80990608,
        &&label_8099060C,
        &&label_80990610,
        &&label_80990614,
        &&label_80990618,
        &&label_8099061C,
        &&label_80990620,
        &&label_80990624,
        &&label_80990628,
        &&label_8099062C,
        &&label_80990630,
        &&label_80990634,
        &&label_80990638,
        &&label_8099063C,
        &&label_80990640,
        &&label_80990644,
        &&label_80990648,
        &&label_8099064C,
        &&label_80990650,
        &&label_80990654,
        &&label_80990658,
        &&label_8099065C,
        &&label_80990660,
        &&label_80990664,
        &&label_80990668,
        &&label_8099066C,
        &&label_80990670,
        &&label_80990674,
        &&label_80990678,
        &&label_8099067C,
        &&label_80990680,
        &&label_80990684,
        &&label_80990688,
        &&label_8099068C,
        &&label_80990690,
        &&label_80990694,
        &&label_80990698,
        &&label_8099069C,
        &&label_809906A0,
        &&label_809906A4,
        &&label_809906A8,
        &&label_809906AC,
        &&label_809906B0,
        &&label_809906B4,
        &&label_809906B8,
        &&label_809906BC,
        &&label_809906C0,
        &&label_809906C4,
        &&label_809906C8,
        &&label_809906CC,
        &&label_809906D0,
        &&label_809906D4,
        &&label_809906D8,
        &&label_809906DC,
        &&label_809906E0,
        &&label_809906E4,
        &&label_809906E8,
        &&label_809906EC,
        &&label_809906F0,
        &&label_809906F4,
        &&label_809906F8,
        &&label_809906FC,
        &&label_80990700,
        &&label_80990704,
        &&label_80990708,
        &&label_8099070C,
        &&label_80990710,
        &&label_80990714,
        &&label_80990718,
        &&label_8099071C,
        &&label_80990720,
        &&label_80990724,
        &&label_80990728,
        &&label_8099072C,
        &&label_80990730,
        &&label_80990734,
        &&label_80990738,
        &&label_8099073C,
        &&label_80990740,
        &&label_80990744,
        &&label_80990748,
        &&label_8099074C,
        &&label_80990750,
        &&label_80990754,
        &&label_80990758,
        &&label_8099075C,
        &&label_80990760,
        &&label_80990764,
        &&label_80990768,
        &&label_8099076C,
        &&label_80990770,
        &&label_80990774,
        &&label_80990778,
        &&label_8099077C,
        &&label_80990780,
        &&label_80990784,
        &&label_80990788,
        &&label_8099078C,
        &&label_80990790,
        &&label_80990794,
        &&label_80990798,
        &&label_8099079C,
        &&label_809907A0,
        &&label_809907A4,
        &&label_809907A8,
        &&label_809907AC,
        &&label_809907B0,
        &&label_809907B4,
        &&label_809907B8,
        &&label_809907BC,
        &&label_809907C0,
        &&label_809907C4,
        &&label_809907C8,
        &&label_809907CC,
        &&label_809907D0,
        &&label_809907D4,
        &&label_809907D8,
        &&label_809907DC,
        &&label_809907E0,
        &&label_809907E4,
        &&label_809907E8,
        &&label_809907EC,
        &&label_809907F0,
        &&label_809907F4,
        &&label_809907F8,
        &&label_809907FC,
        &&label_80990800,
        &&label_80990804,
        &&label_80990808,
        &&label_8099080C,
        &&label_80990810,
        &&label_80990814,
        &&label_80990818,
        &&label_8099081C,
        &&label_80990820,
        &&label_80990824,
        &&label_80990828,
        &&label_8099082C,
        &&label_80990830,
        &&label_80990834,
        &&label_80990838,
        &&label_8099083C,
        &&label_80990840,
        &&label_80990844,
        &&label_80990848,
        &&label_8099084C,
        &&label_80990850,
        &&label_80990854,
        &&label_80990858,
        &&label_8099085C,
        &&label_80990860,
        &&label_80990864,
        &&label_80990868,
        &&label_8099086C,
        &&label_80990870,
        &&label_80990874,
        &&label_80990878,
        &&label_8099087C,
        &&label_80990880,
        &&label_80990884,
        &&label_80990888,
        &&label_8099088C,
        &&label_80990890,
        &&label_80990894,
        &&label_80990898,
        &&label_8099089C,
        &&label_809908A0,
        &&label_809908A4,
        &&label_809908A8,
        &&label_809908AC,
        &&label_809908B0,
        &&label_809908B4,
        &&label_809908B8,
        &&label_809908BC,
        &&label_809908C0,
        &&label_809908C4,
        &&label_809908C8,
        &&label_809908CC,
        &&label_809908D0,
        &&label_809908D4,
        &&label_809908D8,
        &&label_809908DC,
        &&label_809908E0,
        &&label_809908E4,
        &&label_809908E8,
        &&label_809908EC,
        &&label_809908F0,
        &&label_809908F4,
        &&label_809908F8,
        &&label_809908FC,
        &&label_80990900,
        &&label_80990904,
        &&label_80990908,
        &&label_8099090C,
        &&label_80990910,
        &&label_80990914,
        &&label_80990918,
        &&label_8099091C,
        &&label_80990920,
        &&label_80990924,
        &&label_80990928,
        &&label_8099092C,
        &&label_80990930,
        &&label_80990934,
        &&label_80990938,
        &&label_8099093C,
        &&label_80990940,
        &&label_80990944,
        &&label_80990948,
        &&label_8099094C,
        &&label_80990950,
        &&label_80990954,
        &&label_80990958,
        &&label_8099095C,
        &&label_80990960,
        &&label_80990964,
        &&label_80990968,
        &&label_8099096C,
        &&label_80990970,
        &&label_80990974,
        &&label_80990978,
        &&label_8099097C,
        &&label_80990980,
        &&label_80990984,
        &&label_80990988,
        &&label_8099098C,
        &&label_80990990,
        &&label_80990994,
        &&label_80990998,
        &&label_8099099C,
        &&label_809909A0,
        &&label_809909A4,
        &&label_809909A8,
        &&label_809909AC,
        &&label_809909B0,
        &&label_809909B4,
        &&label_809909B8,
        &&label_809909BC,
        &&label_809909C0,
        &&label_809909C4,
        &&label_809909C8,
        &&label_809909CC,
        &&label_809909D0,
        &&label_809909D4,
        &&label_809909D8,
        &&label_809909DC,
        &&label_809909E0,
        &&label_809909E4,
        &&label_809909E8,
        &&label_809909EC,
        &&label_809909F0,
        &&label_809909F4,
        &&label_809909F8,
        &&label_809909FC,
        &&label_80990A00,
        &&label_80990A04,
        &&label_80990A08,
        &&label_80990A0C,
        &&label_80990A10,
        &&label_80990A14,
        &&label_80990A18,
        &&label_80990A1C,
        &&label_80990A20,
        &&label_80990A24,
        &&label_80990A28,
        &&label_80990A2C,
        &&label_80990A30,
        &&label_80990A34,
        &&label_80990A38,
        &&label_80990A3C,
        &&label_80990A40,
        &&label_80990A44,
        &&label_80990A48,
        &&label_80990A4C,
        &&label_80990A50,
        &&label_80990A54,
        &&label_80990A58,
        &&label_80990A5C,
        &&label_80990A60,
        &&label_80990A64,
        &&label_80990A68,
        &&label_80990A6C,
        &&label_80990A70,
        &&label_80990A74,
        &&label_80990A78,
        &&label_80990A7C,
        &&label_80990A80,
        &&label_80990A84,
        &&label_80990A88,
        &&label_80990A8C,
        &&label_80990A90,
        &&label_80990A94,
        &&label_80990A98,
        &&label_80990A9C,
        &&label_80990AA0,
        &&label_80990AA4,
        &&label_80990AA8,
        &&label_80990AAC,
        &&label_80990AB0,
        &&label_80990AB4,
        &&label_80990AB8,
        &&label_80990ABC,
        &&label_80990AC0,
        &&label_80990AC4,
        &&label_80990AC8,
        &&label_80990ACC,
        &&label_80990AD0,
        &&label_80990AD4,
        &&label_80990AD8,
        &&label_80990ADC,
        &&label_80990AE0,
        &&label_80990AE4,
        &&label_80990AE8,
        &&label_80990AEC,
        &&label_80990AF0,
        &&label_80990AF4,
        &&label_80990AF8,
        &&label_80990AFC,
        &&label_80990B00,
        &&label_80990B04,
        &&label_80990B08,
        &&label_80990B0C,
        &&label_80990B10,
        &&label_80990B14,
        &&label_80990B18,
        &&label_80990B1C,
        &&label_80990B20,
        &&label_80990B24,
        &&label_80990B28,
        &&label_80990B2C,
        &&label_80990B30,
        &&label_80990B34,
        &&label_80990B38,
        &&label_80990B3C,
        &&label_80990B40,
        &&label_80990B44,
        &&label_80990B48,
        &&label_80990B4C,
        &&label_80990B50,
        &&label_80990B54,
        &&label_80990B58,
        &&label_80990B5C,
        &&label_80990B60,
        &&label_80990B64,
        &&label_80990B68,
        &&label_80990B6C,
        &&label_80990B70,
        &&label_80990B74,
        &&label_80990B78,
        &&label_80990B7C,
        &&label_80990B80,
        &&label_80990B84,
        &&label_80990B88,
        &&label_80990B8C,
        &&label_80990B90,
        &&label_80990B94,
        &&label_80990B98,
        &&label_80990B9C,
        &&label_80990BA0,
        &&label_80990BA4,
        &&label_80990BA8,
        &&label_80990BAC,
        &&label_80990BB0,
        &&label_80990BB4,
        &&label_80990BB8,
        &&label_80990BBC,
        &&label_80990BC0,
        &&label_80990BC4,
        &&label_80990BC8,
        &&label_80990BCC,
        &&label_80990BD0,
        &&label_80990BD4,
        &&label_80990BD8,
        &&label_80990BDC,
        &&label_80990BE0,
        &&label_80990BE4,
        &&label_80990BE8,
        &&label_80990BEC,
        &&label_80990BF0,
        &&label_80990BF4,
        &&label_80990BF8,
        &&label_80990BFC,
        &&label_80990C00,
        &&label_80990C04,
        &&label_80990C08,
        &&label_80990C0C,
        &&label_80990C10,
        &&label_80990C14,
        &&label_80990C18,
        &&label_80990C1C,
        &&label_80990C20,
        &&label_80990C24,
        &&label_80990C28,
        &&label_80990C2C,
        &&label_80990C30,
        &&label_80990C34,
        &&label_80990C38,
        &&label_80990C3C,
        &&label_80990C40,
        &&label_80990C44,
        &&label_80990C48,
        &&label_80990C4C,
        &&label_80990C50,
        &&label_80990C54,
        &&label_80990C58,
        &&label_80990C5C,
        &&label_80990C60,
        &&label_80990C64,
        &&label_80990C68,
        &&label_80990C6C,
        &&label_80990C70,
        &&label_80990C74,
        &&label_80990C78,
        &&label_80990C7C,
        &&label_80990C80,
        &&label_80990C84,
        &&label_80990C88,
        &&label_80990C8C,
        &&label_80990C90,
        &&label_80990C94,
        &&label_80990C98,
        &&label_80990C9C,
        &&label_80990CA0,
        &&label_80990CA4,
        &&label_80990CA8,
        &&label_80990CAC,
        &&label_80990CB0,
        &&label_80990CB4,
        &&label_80990CB8,
        &&label_80990CBC,
        &&label_80990CC0,
        &&label_80990CC4,
        &&label_80990CC8,
        &&label_80990CCC,
        &&label_80990CD0,
        &&label_80990CD4,
        &&label_80990CD8,
        &&label_80990CDC,
        &&label_80990CE0,
        &&label_80990CE4,
        &&label_80990CE8,
        &&label_80990CEC,
        &&label_80990CF0,
        &&label_80990CF4,
        &&label_80990CF8,
        &&label_80990CFC,
        &&label_80990D00,
        &&label_80990D04,
        &&label_80990D08,
        &&label_80990D0C,
        &&label_80990D10,
        &&label_80990D14,
        &&label_80990D18,
        &&label_80990D1C,
        &&label_80990D20,
        &&label_80990D24,
        &&label_80990D28,
        &&label_80990D2C,
        &&label_80990D30,
        &&label_80990D34,
        &&label_80990D38,
        &&label_80990D3C,
        &&label_80990D40,
        &&label_80990D44,
        &&label_80990D48,
        &&label_80990D4C,
        &&label_80990D50,
        &&label_80990D54,
        &&label_80990D58,
        &&label_80990D5C,
        &&label_80990D60,
        &&label_80990D64,
        &&label_80990D68,
        &&label_80990D6C,
        &&label_80990D70,
        &&label_80990D74,
        &&label_80990D78,
        &&label_80990D7C,
        &&label_80990D80,
        &&label_80990D84,
        &&label_80990D88,
        &&label_80990D8C,
        &&label_80990D90,
        &&label_80990D94,
        &&label_80990D98,
        &&label_80990D9C,
        &&label_80990DA0,
        &&label_80990DA4,
        &&label_80990DA8,
        &&label_80990DAC,
        &&label_80990DB0,
        &&label_80990DB4,
        &&label_80990DB8,
        &&label_80990DBC,
        &&label_80990DC0,
        &&label_80990DC4,
        &&label_80990DC8,
        &&label_80990DCC,
        &&label_80990DD0,
        &&label_80990DD4,
        &&label_80990DD8,
        &&label_80990DDC,
        &&label_80990DE0,
        &&label_80990DE4,
        &&label_80990DE8,
        &&label_80990DEC,
        &&label_80990DF0,
        &&label_80990DF4,
        &&label_80990DF8,
        &&label_80990DFC,
        &&label_80990E00,
        &&label_80990E04,
        &&label_80990E08,
        &&label_80990E0C,
        &&label_80990E10,
        &&label_80990E14,
        &&label_80990E18,
        &&label_80990E1C,
        &&label_80990E20,
        &&label_80990E24,
        &&label_80990E28,
        &&label_80990E2C,
        &&label_80990E30,
        &&label_80990E34,
        &&label_80990E38,
        &&label_80990E3C,
        &&label_80990E40,
        &&label_80990E44,
        &&label_80990E48,
        &&label_80990E4C,
        &&label_80990E50,
        &&label_80990E54,
        &&label_80990E58,
        &&label_80990E5C,
        &&label_80990E60,
        &&label_80990E64,
        &&label_80990E68,
        &&label_80990E6C,
        &&label_80990E70,
        &&label_80990E74,
        &&label_80990E78,
        &&label_80990E7C,
        &&label_80990E80,
        &&label_80990E84,
        &&label_80990E88,
        &&label_80990E8C,
        &&label_80990E90,
        &&label_80990E94,
        &&label_80990E98,
        &&label_80990E9C,
        &&label_80990EA0,
        &&label_80990EA4,
        &&label_80990EA8,
        &&label_80990EAC,
        &&label_80990EB0,
        &&label_80990EB4,
        &&label_80990EB8,
        &&label_80990EBC,
        &&label_80990EC0,
        &&label_80990EC4,
        &&label_80990EC8,
        &&label_80990ECC,
        &&label_80990ED0,
        &&label_80990ED4,
        &&label_80990ED8,
        &&label_80990EDC,
        &&label_80990EE0,
        &&label_80990EE4,
        &&label_80990EE8,
        &&label_80990EEC,
        &&label_80990EF0,
        &&label_80990EF4,
        &&label_80990EF8,
        &&label_80990EFC,
        &&label_80990F00,
        &&label_80990F04,
        &&label_80990F08,
        &&label_80990F0C,
        &&label_80990F10,
        &&label_80990F14,
        &&label_80990F18,
        &&label_80990F1C,
        &&label_80990F20,
        &&label_80990F24,
        &&label_80990F28,
        &&label_80990F2C,
        &&label_80990F30,
        &&label_80990F34,
        &&label_80990F38,
        &&label_80990F3C,
        &&label_80990F40,
        &&label_80990F44,
        &&label_80990F48,
        &&label_80990F4C,
        &&label_80990F50,
        &&label_80990F54,
        &&label_80990F58,
        &&label_80990F5C,
        &&label_80990F60,
        &&label_80990F64,
        &&label_80990F68,
        &&label_80990F6C,
        &&label_80990F70,
        &&label_80990F74,
        &&label_80990F78,
        &&label_80990F7C,
        &&label_80990F80,
        &&label_80990F84,
        &&label_80990F88,
        &&label_80990F8C,
        &&label_80990F90,
        &&label_80990F94,
        &&label_80990F98,
        &&label_80990F9C,
        &&label_80990FA0,
        &&label_80990FA4,
        &&label_80990FA8,
        &&label_80990FAC,
        &&label_80990FB0,
        &&label_80990FB4,
        &&label_80990FB8,
        &&label_80990FBC,
        &&label_80990FC0,
        &&label_80990FC4,
        &&label_80990FC8,
        &&label_80990FCC,
        &&label_80990FD0,
        &&label_80990FD4,
        &&label_80990FD8,
        &&label_80990FDC,
        &&label_80990FE0,
        &&label_80990FE4,
        &&label_80990FE8,
        &&label_80990FEC,
        &&label_80990FF0,
        &&label_80990FF4,
        &&label_80990FF8,
        &&label_80990FFC,
        &&label_80991000,
        &&label_80991004,
        &&label_80991008,
        &&label_8099100C,
        &&label_80991010,
        &&label_80991014,
        &&label_80991018,
        &&label_8099101C,
        &&label_80991020,
        &&label_80991024,
        &&label_80991028,
        &&label_8099102C,
        &&label_80991030,
        &&label_80991034,
        &&label_80991038,
        &&label_8099103C,
        &&label_80991040,
        &&label_80991044,
        &&label_80991048,
        &&label_8099104C,
        &&label_80991050,
        &&label_80991054,
        &&label_80991058,
        &&label_8099105C,
        &&label_80991060,
        &&label_80991064,
        &&label_80991068,
        &&label_8099106C,
        &&label_80991070,
        &&label_80991074,
        &&label_80991078,
        &&label_8099107C,
        &&label_80991080,
        &&label_80991084,
        &&label_80991088,
        &&label_8099108C,
        &&label_80991090,
        &&label_80991094,
        &&label_80991098,
        &&label_8099109C,
        &&label_809910A0,
        &&label_809910A4,
        &&label_809910A8,
        &&label_809910AC,
        &&label_809910B0,
        &&label_809910B4,
        &&label_809910B8,
        &&label_809910BC,
        &&label_809910C0,
        &&label_809910C4,
        &&label_809910C8,
        &&label_809910CC,
        &&label_809910D0,
        &&label_809910D4,
        &&label_809910D8,
        &&label_809910DC,
        &&label_809910E0,
        &&label_809910E4,
        &&label_809910E8,
        &&label_809910EC,
        &&label_809910F0,
        &&label_809910F4,
        &&label_809910F8,
        &&label_809910FC,
        &&label_80991100,
        &&label_80991104,
        &&label_80991108,
        &&label_8099110C,
        &&label_80991110,
        &&label_80991114,
        &&label_80991118,
        &&label_8099111C,
        &&label_80991120,
        &&label_80991124,
        &&label_80991128,
        &&label_8099112C,
        &&label_80991130,
        &&label_80991134,
        &&label_80991138,
        &&label_8099113C,
        &&label_80991140,
        &&label_80991144,
        &&label_80991148,
        &&label_8099114C,
        &&label_80991150,
        &&label_80991154,
        &&label_80991158,
        &&label_8099115C,
        &&label_80991160,
        &&label_80991164,
        &&label_80991168,
        &&label_8099116C,
        &&label_80991170,
        &&label_80991174,
        &&label_80991178,
        &&label_8099117C,
        &&label_80991180,
        &&label_80991184,
        &&label_80991188,
        &&label_8099118C,
        &&label_80991190,
        &&label_80991194,
        &&label_80991198,
        &&label_8099119C,
        &&label_809911A0,
        &&label_809911A4,
        &&label_809911A8,
        &&label_809911AC,
        &&label_809911B0,
        &&label_809911B4,
        &&label_809911B8,
        &&label_809911BC,
        &&label_809911C0,
        &&label_809911C4,
        &&label_809911C8,
        &&label_809911CC,
        &&label_809911D0,
        &&label_809911D4,
        &&label_809911D8,
        &&label_809911DC,
        &&label_809911E0,
        &&label_809911E4,
        &&label_809911E8,
        &&label_809911EC,
        &&label_809911F0,
        &&label_809911F4,
        &&label_809911F8,
        &&label_809911FC,
        &&label_80991200,
        &&label_80991204,
        &&label_80991208,
        &&label_8099120C,
        &&label_80991210,
        &&label_80991214,
        &&label_80991218,
        &&label_8099121C,
        &&label_80991220,
        &&label_80991224,
        &&label_80991228,
        &&label_8099122C,
        &&label_80991230,
        &&label_80991234,
        &&label_80991238,
        &&label_8099123C,
        &&label_80991240,
        &&label_80991244,
        &&label_80991248,
        &&label_8099124C,
        &&label_80991250,
        &&label_80991254,
        &&label_80991258,
        &&label_8099125C,
        &&label_80991260,
        &&label_80991264,
        &&label_80991268,
        &&label_8099126C,
        &&label_80991270,
        &&label_80991274,
        &&label_80991278,
        &&label_8099127C,
        &&label_80991280,
        &&label_80991284,
        &&label_80991288,
        &&label_8099128C,
        &&label_80991290,
        &&label_80991294,
        &&label_80991298,
        &&label_8099129C,
        &&label_809912A0,
        &&label_809912A4,
        &&label_809912A8,
        &&label_809912AC,
        &&label_809912B0,
        &&label_809912B4,
        &&label_809912B8,
        &&label_809912BC,
        &&label_809912C0,
        &&label_809912C4,
        &&label_809912C8,
        &&label_809912CC,
        &&label_809912D0,
        &&label_809912D4,
        &&label_809912D8,
        &&label_809912DC,
        &&label_809912E0,
        &&label_809912E4,
        &&label_809912E8,
        &&label_809912EC,
        &&label_809912F0,
        &&label_809912F4,
        &&label_809912F8,
        &&label_809912FC,
        &&label_80991300,
        &&label_80991304,
        &&label_80991308,
        &&label_8099130C,
        &&label_80991310,
        &&label_80991314,
        &&label_80991318,
        &&label_8099131C,
        &&label_80991320,
        &&label_80991324,
        &&label_80991328,
        &&label_8099132C,
        &&label_80991330,
        &&label_80991334,
        &&label_80991338,
        &&label_8099133C,
        &&label_80991340,
        &&label_80991344,
        &&label_80991348,
        &&label_8099134C,
        &&label_80991350,
        &&label_80991354,
        &&label_80991358,
        &&label_8099135C,
        &&label_80991360,
        &&label_80991364,
        &&label_80991368,
        &&label_8099136C,
        &&label_80991370,
        &&label_80991374,
        &&label_80991378,
        &&label_8099137C,
        &&label_80991380,
        &&label_80991384,
        &&label_80991388,
        &&label_8099138C,
        &&label_80991390,
        &&label_80991394,
        &&label_80991398,
        &&label_8099139C,
        &&label_809913A0,
        &&label_809913A4,
        &&label_809913A8,
        &&label_809913AC,
        &&label_809913B0,
        &&label_809913B4,
        &&label_809913B8,
        &&label_809913BC,
        &&label_809913C0,
        &&label_809913C4,
        &&label_809913C8,
        &&label_809913CC,
        &&label_809913D0,
        &&label_809913D4,
        &&label_809913D8,
        &&label_809913DC,
        &&label_809913E0,
        &&label_809913E4,
        &&label_809913E8,
        &&label_809913EC,
        &&label_809913F0,
        &&label_809913F4,
        &&label_809913F8,
        &&label_809913FC,
        &&label_80991400,
        &&label_80991404,
        &&label_80991408,
        &&label_8099140C,
        &&label_80991410,
        &&label_80991414,
        &&label_80991418,
        &&label_8099141C,
        &&label_80991420,
        &&label_80991424,
        &&label_80991428,
        &&label_8099142C,
        &&label_80991430,
        &&label_80991434,
        &&label_80991438,
        &&label_8099143C,
        &&label_80991440,
        &&label_80991444,
        &&label_80991448,
        &&label_8099144C,
        &&label_80991450,
        &&label_80991454,
        &&label_80991458,
        &&label_8099145C,
        &&label_80991460,
        &&label_80991464,
        &&label_80991468,
        &&label_8099146C,
        &&label_80991470,
        &&label_80991474,
        &&label_80991478,
        &&label_8099147C,
        &&label_80991480,
        &&label_80991484,
        &&label_80991488,
        &&label_8099148C,
        &&label_80991490,
        &&label_80991494,
        &&label_80991498,
        &&label_8099149C,
        &&label_809914A0,
        &&label_809914A4,
        &&label_809914A8,
        &&label_809914AC,
        &&label_809914B0,
        &&label_809914B4,
        &&label_809914B8,
        &&label_809914BC,
        &&label_809914C0,
        &&label_809914C4,
        &&label_809914C8,
        &&label_809914CC,
        &&label_809914D0,
        &&label_809914D4,
        &&label_809914D8,
        &&label_809914DC,
        &&label_809914E0,
        &&label_809914E4,
        &&label_809914E8,
        &&label_809914EC,
        &&label_809914F0,
        &&label_809914F4,
        &&label_809914F8,
        &&label_809914FC,
        &&label_80991500,
        &&label_80991504,
        &&label_80991508,
        &&label_8099150C,
        &&label_80991510,
        &&label_80991514,
        &&label_80991518,
        &&label_8099151C,
        &&label_80991520,
        &&label_80991524,
        &&label_80991528,
        &&label_8099152C,
        &&label_80991530,
        &&label_80991534,
        &&label_80991538,
        &&label_8099153C,
        &&label_80991540,
        &&label_80991544,
        &&label_80991548,
        &&label_8099154C,
        &&label_80991550,
        &&label_80991554,
        &&label_80991558,
        &&label_8099155C,
        &&label_80991560,
        &&label_80991564,
        &&label_80991568,
        &&label_8099156C,
        &&label_80991570,
        &&label_80991574,
        &&label_80991578,
        &&label_8099157C,
        &&label_80991580,
        &&label_80991584,
        &&label_80991588,
        &&label_8099158C,
        &&label_80991590,
        &&label_80991594,
        &&label_80991598,
        &&label_8099159C,
        &&label_809915A0,
        &&label_809915A4,
        &&label_809915A8,
        &&label_809915AC,
        &&label_809915B0,
        &&label_809915B4,
        &&label_809915B8,
        &&label_809915BC,
        &&label_809915C0,
        &&label_809915C4,
        &&label_809915C8,
        &&label_809915CC,
        &&label_809915D0,
        &&label_809915D4,
        &&label_809915D8,
        &&label_809915DC,
        &&label_809915E0,
        &&label_809915E4,
        &&label_809915E8,
        &&label_809915EC,
        &&label_809915F0,
        &&label_809915F4,
        &&label_809915F8,
        &&label_809915FC,
        &&label_80991600,
        &&label_80991604,
        &&label_80991608,
        &&label_8099160C,
        &&label_80991610,
        &&label_80991614,
        &&label_80991618,
        &&label_8099161C,
        &&label_80991620,
        &&label_80991624,
        &&label_80991628,
        &&label_8099162C,
        &&label_80991630,
        &&label_80991634,
        &&label_80991638,
        &&label_8099163C,
        &&label_80991640,
        &&label_80991644,
        &&label_80991648,
        &&label_8099164C,
        &&label_80991650,
        &&label_80991654,
        &&label_80991658,
        &&label_8099165C,
        &&label_80991660,
        &&label_80991664,
        &&label_80991668,
        &&label_8099166C,
        &&label_80991670,
        &&label_80991674,
        &&label_80991678,
        &&label_8099167C,
        &&label_80991680,
        &&label_80991684,
        &&label_80991688,
        &&label_8099168C,
        &&label_80991690,
        &&label_80991694,
        &&label_80991698,
        &&label_8099169C,
        &&label_809916A0,
        &&label_809916A4,
        &&label_809916A8,
        &&label_809916AC,
        &&label_809916B0,
        &&label_809916B4,
        &&label_809916B8,
        &&label_809916BC,
        &&label_809916C0,
        &&label_809916C4,
        &&label_809916C8,
        &&label_809916CC,
        &&label_809916D0,
        &&label_809916D4,
        &&label_809916D8,
        &&label_809916DC,
        &&label_809916E0,
        &&label_809916E4,
        &&label_809916E8,
        &&label_809916EC,
        &&label_809916F0,
        &&label_809916F4,
        &&label_809916F8,
        &&label_809916FC,
        &&label_80991700,
        &&label_80991704,
        &&label_80991708,
        &&label_8099170C,
        &&label_80991710,
        &&label_80991714,
        &&label_80991718,
        &&label_8099171C,
        &&label_80991720,
        &&label_80991724,
        &&label_80991728,
        &&label_8099172C,
        &&label_80991730,
        &&label_80991734,
        &&label_80991738,
        &&label_8099173C,
        &&label_80991740,
        &&label_80991744,
        &&label_80991748,
        &&label_8099174C,
        &&label_80991750,
        &&label_80991754,
        &&label_80991758,
        &&label_8099175C,
        &&label_80991760,
        &&label_80991764,
        &&label_80991768,
        &&label_8099176C,
        &&label_80991770,
        &&label_80991774,
        &&label_80991778,
        &&label_8099177C,
        &&label_80991780,
        &&label_80991784,
        &&label_80991788,
        &&label_8099178C,
        &&label_80991790,
        &&label_80991794,
        &&label_80991798,
        &&label_8099179C,
        &&label_809917A0,
        &&label_809917A4,
        &&label_809917A8,
        &&label_809917AC,
        &&label_809917B0,
        &&label_809917B4,
        &&label_809917B8,
        &&label_809917BC,
        &&label_809917C0,
        &&label_809917C4,
        &&label_809917C8,
        &&label_809917CC,
        &&label_809917D0,
        &&label_809917D4,
        &&label_809917D8,
        &&label_809917DC,
        &&label_809917E0,
        &&label_809917E4,
        &&label_809917E8,
        &&label_809917EC,
        &&label_809917F0,
        &&label_809917F4,
        &&label_809917F8,
        &&label_809917FC,
        &&label_80991800,
        &&label_80991804,
        &&label_80991808,
        &&label_8099180C,
        &&label_80991810,
        &&label_80991814,
        &&label_80991818,
        &&label_8099181C,
        &&label_80991820,
        &&label_80991824,
        &&label_80991828,
        &&label_8099182C,
        &&label_80991830,
        &&label_80991834,
        &&label_80991838,
        &&label_8099183C,
        &&label_80991840,
        &&label_80991844,
        &&label_80991848,
        &&label_8099184C,
        &&label_80991850,
        &&label_80991854,
        &&label_80991858,
        &&label_8099185C,
        &&label_80991860,
        &&label_80991864,
        &&label_80991868,
        &&label_8099186C,
        &&label_80991870,
        &&label_80991874,
        &&label_80991878,
        &&label_8099187C,
        &&label_80991880,
        &&label_80991884,
        &&label_80991888,
        &&label_8099188C,
        &&label_80991890,
        &&label_80991894,
        &&label_80991898,
        &&label_8099189C,
        &&label_809918A0,
        &&label_809918A4,
        &&label_809918A8,
        &&label_809918AC,
        &&label_809918B0,
        &&label_809918B4,
        &&label_809918B8,
        &&label_809918BC,
        &&label_809918C0,
        &&label_809918C4,
        &&label_809918C8,
        &&label_809918CC,
        &&label_809918D0,
        &&label_809918D4,
        &&label_809918D8,
        &&label_809918DC,
        &&label_809918E0,
        &&label_809918E4,
        &&label_809918E8,
        &&label_809918EC,
        &&label_809918F0,
        &&label_809918F4,
        &&label_809918F8,
        &&label_809918FC,
        &&label_80991900,
        &&label_80991904,
        &&label_80991908,
        &&label_8099190C,
        &&label_80991910,
        &&label_80991914,
        &&label_80991918,
        &&label_8099191C,
        &&label_80991920,
        &&label_80991924,
        &&label_80991928,
        &&label_8099192C,
        &&label_80991930,
        &&label_80991934,
        &&label_80991938,
        &&label_8099193C,
        &&label_80991940,
        &&label_80991944,
        &&label_80991948,
        &&label_8099194C,
        &&label_80991950,
        &&label_80991954,
        &&label_80991958,
        &&label_8099195C,
        &&label_80991960,
        &&label_80991964,
        &&label_80991968,
        &&label_8099196C,
        &&label_80991970,
        &&label_80991974,
        &&label_80991978,
        &&label_8099197C,
        &&label_80991980,
        &&label_80991984,
        &&label_80991988,
        &&label_8099198C,
        &&label_80991990,
        &&label_80991994,
        &&label_80991998,
        &&label_8099199C,
        &&label_809919A0,
        &&label_809919A4,
        &&label_809919A8,
        &&label_809919AC,
        &&label_809919B0,
        &&label_809919B4,
        &&label_809919B8,
        &&label_809919BC,
        &&label_809919C0,
        &&label_809919C4,
        &&label_809919C8,
        &&label_809919CC,
        &&label_809919D0,
        &&label_809919D4,
        &&label_809919D8,
        &&label_809919DC,
        &&label_809919E0,
        &&label_809919E4,
        &&label_809919E8,
        &&label_809919EC,
        &&label_809919F0,
        &&label_809919F4,
        &&label_809919F8,
        &&label_809919FC,
        &&label_80991A00,
        &&label_80991A04,
        &&label_80991A08,
        &&label_80991A0C,
        &&label_80991A10,
        &&label_80991A14,
        &&label_80991A18,
        &&label_80991A1C,
        &&label_80991A20,
        &&label_80991A24,
        &&label_80991A28,
        &&label_80991A2C,
        &&label_80991A30,
        &&label_80991A34,
        &&label_80991A38,
        &&label_80991A3C,
        &&label_80991A40,
        &&label_80991A44,
        &&label_80991A48,
        &&label_80991A4C,
        &&label_80991A50,
        &&label_80991A54,
        &&label_80991A58,
        &&label_80991A5C,
        &&label_80991A60,
        &&label_80991A64,
        &&label_80991A68,
        &&label_80991A6C,
        &&label_80991A70,
        &&label_80991A74,
        &&label_80991A78,
        &&label_80991A7C,
        &&label_80991A80,
        &&label_80991A84,
        &&label_80991A88,
        &&label_80991A8C,
        &&label_80991A90,
        &&label_80991A94,
        &&label_80991A98,
        &&label_80991A9C,
        &&label_80991AA0,
        &&label_80991AA4,
        &&label_80991AA8,
        &&label_80991AAC,
        &&label_80991AB0,
        &&label_80991AB4,
        &&label_80991AB8,
        &&label_80991ABC,
        &&label_80991AC0,
        &&label_80991AC4,
        &&label_80991AC8,
        &&label_80991ACC,
        &&label_80991AD0,
        &&label_80991AD4,
        &&label_80991AD8,
        &&label_80991ADC,
        &&label_80991AE0,
        &&label_80991AE4,
        &&label_80991AE8,
        &&label_80991AEC,
        &&label_80991AF0,
        &&label_80991AF4,
        &&label_80991AF8,
        &&label_80991AFC,
        &&label_80991B00,
        &&label_80991B04,
        &&label_80991B08,
        &&label_80991B0C,
        &&label_80991B10,
        &&label_80991B14,
        &&label_80991B18,
        &&label_80991B1C,
        &&label_80991B20,
        &&label_80991B24,
        &&label_80991B28,
        &&label_80991B2C,
        &&label_80991B30,
        &&label_80991B34,
        &&label_80991B38,
        &&label_80991B3C,
        &&label_80991B40,
        &&label_80991B44,
        &&label_80991B48,
        &&label_80991B4C,
        &&label_80991B50,
        &&label_80991B54,
        &&label_80991B58,
        &&label_80991B5C,
        &&label_80991B60,
        &&label_80991B64,
        &&label_80991B68,
        &&label_80991B6C,
        &&label_80991B70,
        &&label_80991B74,
        &&label_80991B78,
        &&label_80991B7C,
        &&label_80991B80,
        &&label_80991B84,
        &&label_80991B88,
        &&label_80991B8C,
        &&label_80991B90,
        &&label_80991B94,
        &&label_80991B98,
        &&label_80991B9C,
        &&label_80991BA0,
        &&label_80991BA4,
        &&label_80991BA8,
        &&label_80991BAC,
        &&label_80991BB0,
        &&label_80991BB4,
        &&label_80991BB8,
        &&label_80991BBC,
        &&label_80991BC0,
        &&label_80991BC4,
        &&label_80991BC8,
        &&label_80991BCC,
        &&label_80991BD0,
        &&label_80991BD4,
        &&label_80991BD8,
        &&label_80991BDC,
        &&label_80991BE0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x809902C0u && pc <= 0x80991BE0u && ((pc - 0x809902C0u) & 3u) == 0u)
            goto *pc_table_809902C0[(pc - 0x809902C0u) >> 2];
    }
    return;
label_809902C0:
    ctx->pc = 0x809902C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809902C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809902C0: bc    12, 2, 0x80990314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990314;
        }
    }

label_809902C4:
    ctx->pc = 0x809902C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809902C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 809902C4: lwz     r4, 32(r3)
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
label_809902C8:
    ctx->pc = 0x809902C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 809902C8: lwz     r0, 176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809902CC:
    ctx->pc = 0x809902CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902CCu)) return;
    // 809902CC: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_809902D0:
    ctx->pc = 0x809902D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 809902D0: stw     r0, 176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809902D4:
    ctx->pc = 0x809902D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 809902D4: lwz     r4, 32(r3)
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
label_809902D8:
    ctx->pc = 0x809902D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809902D8: lwz     r0, 176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809902DC:
    ctx->pc = 0x809902DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902DCu)) return;
    // 809902DC: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_809902E0:
    ctx->pc = 0x809902E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809902E0: stw     r0, 176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809902E4:
    ctx->pc = 0x809902E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809902E4: lwz     r4, 32(r3)
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
label_809902E8:
    ctx->pc = 0x809902E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809902E8: lwz     r0, 176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809902EC:
    ctx->pc = 0x809902ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902ECu)) return;
    // 809902EC: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_809902F0:
    ctx->pc = 0x809902F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809902F0: stw     r0, 176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809902F4:
    ctx->pc = 0x809902F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809902F4: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809902F8:
    ctx->pc = 0x809902F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809902F8u)) return;
    // 809902F8: b       0x80990314
    {
            goto label_80990314;
    }

label_809902FC:
    ctx->pc = 0x809902FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809902FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809902FC: lbz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990300:
    ctx->pc = 0x80990300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990300u)) return;
    // 80990300: cmplwi  r0, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990304:
    ctx->pc = 0x80990304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990304u)) return;
    // 80990304: bc    4, 2, 0x80990314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990314;
        }
    }

label_80990308:
    ctx->pc = 0x80990308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990308: bl      0x8050F9E0
    {
            ctx->lr = 0x8099030Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_8099030C:
    ctx->pc = 0x8099030Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099030Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8099030C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990310:
    ctx->pc = 0x80990310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990310: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990314:
    ctx->pc = 0x80990314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990314: lbz     r0, 0(r31)
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
label_80990318:
    ctx->pc = 0x80990318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990318u)) return;
    // 80990318: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8099031C:
    ctx->pc = 0x8099031Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099031Cu)) return;
    // 8099031C: cmpwi   r0, 8
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990320:
    ctx->pc = 0x80990320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990320u)) return;
    // 80990320: bc    12, 2, 0x8099033C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8099033C;
        }
    }

label_80990324:
    ctx->pc = 0x80990324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990324: bc    4, 0, 0x80990338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990338;
        }
    }

label_80990328:
    ctx->pc = 0x80990328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990328: cmpwi   r0, 5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8099032C:
    ctx->pc = 0x8099032Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099032Cu)) return;
    // 8099032C: bc    4, 0, 0x80990338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990338;
        }
    }

label_80990330:
    ctx->pc = 0x80990330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990330: cmpwi   r0, 3
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

label_80990334:
    ctx->pc = 0x80990334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990334u)) return;
    // 80990334: bc    4, 0, 0x8099033C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099033C;
        }
    }

label_80990338:
    ctx->pc = 0x80990338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990338: bl      0x8098BBD8
    {
            ctx->lr = 0x8099033Cu;
            ctx->pc = 0x8098BBD8u;
            return;
    }

label_8099033C:
    ctx->pc = 0x8099033Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099033Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8099033C: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990340:
    ctx->pc = 0x80990340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990340u)) return;
    // 80990340: addi    r0, r3, 512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(512);

label_80990344:
    ctx->pc = 0x80990344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990344: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990348:
    ctx->pc = 0x80990348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990348: lbz     r0, 0(r31)
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
label_8099034C:
    ctx->pc = 0x8099034Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099034Cu)) return;
    // 8099034C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990350:
    ctx->pc = 0x80990350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990350u)) return;
    // 80990350: cmpwi   r0, 5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990354:
    ctx->pc = 0x80990354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990354u)) return;
    // 80990354: bc    4, 0, 0x80990374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990374;
        }
    }

label_80990358:
    ctx->pc = 0x80990358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990358: bl      0x8098BC3C
    {
            ctx->lr = 0x8099035Cu;
            ctx->pc = 0x8098BC3Cu;
            return;
    }

label_8099035C:
    ctx->pc = 0x8099035Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099035Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8099035C: cmpwi   r3, 0
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

label_80990360:
    ctx->pc = 0x80990360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990360u)) return;
    // 80990360: bc    12, 2, 0x80990374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990374;
        }
    }

label_80990364:
    ctx->pc = 0x80990364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990364: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80990368:
    ctx->pc = 0x80990368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990368: stb     r0, 0(r31)
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
label_8099036C:
    ctx->pc = 0x8099036Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099036Cu)) return;
    // 8099036C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990370:
    ctx->pc = 0x80990370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990370: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990374:
    ctx->pc = 0x80990374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990374: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80990378:
    ctx->pc = 0x80990378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990378u)) return;
    // 80990378: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_8099037C:
    ctx->pc = 0x8099037Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099037Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099037C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990380:
    ctx->pc = 0x80990380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990380u)) return;
    // 80990380: cmpwi   r0, 0
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

label_80990384:
    ctx->pc = 0x80990384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990384u)) return;
    // 80990384: bc    4, 2, 0x80990398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990398;
        }
    }

label_80990388:
    ctx->pc = 0x80990388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990388: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8099038C:
    ctx->pc = 0x8099038Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099038Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099038C: lwz     r12, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990390:
    ctx->pc = 0x80990390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990390: mtctr    r12
    ctx->ctr = ctx->gpr[12];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990394:
    ctx->pc = 0x80990394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990394u)) return;
    // 80990394: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80990398u;
            ctx->pc = target;
            return;
        }
    }

label_80990398:
    ctx->pc = 0x80990398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990398: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099039C:
    ctx->pc = 0x8099039Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099039Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8099039C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809903A0:
    ctx->pc = 0x809903A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809903A0: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809903A4:
    ctx->pc = 0x809903A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809903A4: lwz     r0, 52(r1)
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
label_809903A8:
    ctx->pc = 0x809903A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809903A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809903A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809903AC:
    ctx->pc = 0x809903ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903ACu)) return;
    // 809903AC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_809903B0:
    ctx->pc = 0x809903B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903B0u)) return;
    // 809903B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809903B4:
    ctx->pc = 0x809903B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809903B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809903B4: stwu     r1, -16(r1)
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
label_809903B8:
    ctx->pc = 0x809903B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809903B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809903BC:
    ctx->pc = 0x809903BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809903BC: stw     r0, 20(r1)
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
label_809903C0:
    ctx->pc = 0x809903C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903C0u)) return;
    // 809903C0: lis     r3, -32615
    ctx->gpr[3] = ((u32)(s32)(-32615) << 16);

label_809903C4:
    ctx->pc = 0x809903C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903C4u)) return;
    // 809903C4: addi    r3, r3, 996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(996);

label_809903C8:
    ctx->pc = 0x809903C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903C8u)) return;
    // 809903C8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_809903CC:
    ctx->pc = 0x809903CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903CCu)) return;
    // 809903CC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_809903D0:
    ctx->pc = 0x809903D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903D0u)) return;
    // 809903D0: bl      0x80420AC4
    {
            ctx->lr = 0x809903D4u;
            ctx->pc = 0x80420AC4u;
            return;
    }

label_809903D4:
    ctx->pc = 0x809903D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809903D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809903D4: lwz     r0, 20(r1)
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
label_809903D8:
    ctx->pc = 0x809903D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809903D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809903D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809903DC:
    ctx->pc = 0x809903DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903DCu)) return;
    // 809903DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809903E0:
    ctx->pc = 0x809903E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903E0u)) return;
    // 809903E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809903E4:
    ctx->pc = 0x809903E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809903E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809903E4: stwu     r1, -16(r1)
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
label_809903E8:
    ctx->pc = 0x809903E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809903E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809903EC:
    ctx->pc = 0x809903ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809903EC: stw     r0, 20(r1)
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
label_809903F0:
    ctx->pc = 0x809903F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809903F0: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809903F4:
    ctx->pc = 0x809903F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903F4u)) return;
    // 809903F4: cmplwi  r0, 0x0000
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

label_809903F8:
    ctx->pc = 0x809903F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809903F8u)) return;
    // 809903F8: bc    4, 2, 0x8099044C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099044C;
        }
    }

label_809903FC:
    ctx->pc = 0x809903FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809903FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 809903FC: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990400:
    ctx->pc = 0x80990400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990400u)) return;
    // 80990400: addi    r3, r3, -18352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18352);

label_80990404:
    ctx->pc = 0x80990404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80990404: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80990404u)) return;
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
label_80990408:
    ctx->pc = 0x80990408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990408u)) return;
    // 80990408: lis     r3, -28672
    ctx->gpr[3] = ((u32)(s32)(-28672) << 16);

label_8099040C:
    ctx->pc = 0x8099040Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099040Cu)) return;
    // 8099040C: addi    r3, r3, 732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(732);

label_80990410:
    ctx->pc = 0x80990410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80990410: lwz     r4, 0(r3)
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
label_80990414:
    ctx->pc = 0x80990414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80990414: stfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990414u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990418:
    ctx->pc = 0x80990418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80990418: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990418u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099041C:
    ctx->pc = 0x8099041Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099041Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8099041C: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x8099041Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990420:
    ctx->pc = 0x80990420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80990420: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990420u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990424:
    ctx->pc = 0x80990424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80990424: stfs     f0, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990424u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990428:
    ctx->pc = 0x80990428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990428u)) return;
    // 80990428: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099042C:
    ctx->pc = 0x8099042Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099042Cu)) return;
    // 8099042C: addi    r3, r3, -18348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18348);

label_80990430:
    ctx->pc = 0x80990430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990430: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80990430u)) return;
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
label_80990434:
    ctx->pc = 0x80990434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990434: stfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990434u)) return;
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
label_80990438:
    ctx->pc = 0x80990438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990438u)) return;
    // 80990438: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8099043C:
    ctx->pc = 0x8099043Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099043Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099043C: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990440:
    ctx->pc = 0x80990440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990440: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990444:
    ctx->pc = 0x80990444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990444u)) return;
    // 80990444: li      r3, 12743
    ctx->gpr[3] = (u32)(s32)(12743);

label_80990448:
    ctx->pc = 0x80990448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990448u)) return;
    // 80990448: bl      0x80427910
    {
            ctx->lr = 0x8099044Cu;
            ctx->pc = 0x80427910u;
            return;
    }

label_8099044C:
    ctx->pc = 0x8099044Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099044Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099044C: lwz     r0, 20(r1)
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
label_80990450:
    ctx->pc = 0x80990450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990450: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990454:
    ctx->pc = 0x80990454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990454u)) return;
    // 80990454: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80990458:
    ctx->pc = 0x80990458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990458u)) return;
    // 80990458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_8099045C:
    ctx->pc = 0x8099045Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099045Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099045C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990460:
    ctx->pc = 0x80990460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990460: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990464:
    ctx->pc = 0x80990464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990464: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990468:
    ctx->pc = 0x80990468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990468: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099046C:
    ctx->pc = 0x8099046Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099046Cu)) return;
    // 8099046C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80990470:
    ctx->pc = 0x80990470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990470u)) return;
    // 80990470: bl      0x80406038
    {
            ctx->lr = 0x80990474u;
            ctx->pc = 0x80406038u;
            return;
    }

label_80990474:
    ctx->pc = 0x80990474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80990474: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990478:
    ctx->pc = 0x80990478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990478u)) return;
    // 80990478: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_8099047C:
    ctx->pc = 0x8099047Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099047Cu)) return;
    // 8099047C: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80990480:
    ctx->pc = 0x80990480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990480u)) return;
    // 80990480: addi    r4, r4, -32700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32700);

label_80990484:
    ctx->pc = 0x80990484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990484u)) return;
    // 80990484: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80990488:
    ctx->pc = 0x80990488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990488u)) return;
    // 80990488: bl      0x80941A9C
    {
            ctx->lr = 0x8099048Cu;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_8099048C:
    ctx->pc = 0x8099048Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099048Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8099048C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990490:
    ctx->pc = 0x80990490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990490u)) return;
    // 80990490: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_80990494:
    ctx->pc = 0x80990494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990494u)) return;
    // 80990494: addi    r3, r3, 14
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14);

label_80990498:
    ctx->pc = 0x80990498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990498u)) return;
    // 80990498: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_8099049C:
    ctx->pc = 0x8099049Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099049Cu)) return;
    // 8099049C: addi    r4, r4, -31928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31928);

label_809904A0:
    ctx->pc = 0x809904A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904A0u)) return;
    // 809904A0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_809904A4:
    ctx->pc = 0x809904A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904A4u)) return;
    // 809904A4: bl      0x80941A9C
    {
            ctx->lr = 0x809904A8u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_809904A8:
    ctx->pc = 0x809904A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809904A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809904A8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_809904AC:
    ctx->pc = 0x809904ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904ACu)) return;
    // 809904AC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_809904B0:
    ctx->pc = 0x809904B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809904B0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809904B4:
    ctx->pc = 0x809904B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904B4u)) return;
    // 809904B4: cmpwi   r0, 0
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

label_809904B8:
    ctx->pc = 0x809904B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904B8u)) return;
    // 809904B8: bc    12, 2, 0x809904C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809904C8;
        }
    }

label_809904BC:
    ctx->pc = 0x809904BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809904BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809904BC: bc    12, 0, 0x809904E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809904E8;
        }
    }

label_809904C0:
    ctx->pc = 0x809904C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809904C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809904C0: cmpwi   r0, 5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809904C4:
    ctx->pc = 0x809904C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904C4u)) return;
    // 809904C4: b       0x809904E8
    {
            goto label_809904E8;
    }

label_809904C8:
    ctx->pc = 0x809904C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809904C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 809904C8: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809904CC:
    ctx->pc = 0x809904CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904CCu)) return;
    // 809904CC: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_809904D0:
    ctx->pc = 0x809904D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904D0u)) return;
    // 809904D0: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_809904D4:
    ctx->pc = 0x809904D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904D4u)) return;
    // 809904D4: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_809904D8:
    ctx->pc = 0x809904D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904D8u)) return;
    // 809904D8: addi    r4, r4, -10912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10912);

label_809904DC:
    ctx->pc = 0x809904DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904DCu)) return;
    // 809904DC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_809904E0:
    ctx->pc = 0x809904E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904E0u)) return;
    // 809904E0: bl      0x80941A9C
    {
            ctx->lr = 0x809904E4u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_809904E4:
    ctx->pc = 0x809904E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809904E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809904E4: b       0x80990504
    {
            goto label_80990504;
    }

label_809904E8:
    ctx->pc = 0x809904E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809904E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 809904E8: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809904EC:
    ctx->pc = 0x809904ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904ECu)) return;
    // 809904EC: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_809904F0:
    ctx->pc = 0x809904F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904F0u)) return;
    // 809904F0: addi    r3, r3, 47
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(47);

label_809904F4:
    ctx->pc = 0x809904F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904F4u)) return;
    // 809904F4: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_809904F8:
    ctx->pc = 0x809904F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904F8u)) return;
    // 809904F8: addi    r4, r4, -10912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10912);

label_809904FC:
    ctx->pc = 0x809904FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809904FCu)) return;
    // 809904FC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80990500:
    ctx->pc = 0x80990500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990500u)) return;
    // 80990500: bl      0x80941A9C
    {
            ctx->lr = 0x80990504u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80990504:
    ctx->pc = 0x80990504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80990504: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80990508:
    ctx->pc = 0x80990508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990508u)) return;
    // 80990508: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_8099050C:
    ctx->pc = 0x8099050Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099050Cu)) return;
    // 8099050C: addi    r4, r4, -18344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18344);

label_80990510:
    ctx->pc = 0x80990510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990510: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990510u)) return;
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
label_80990514:
    ctx->pc = 0x80990514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990514u)) return;
    // 80990514: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80990518:
    ctx->pc = 0x80990518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990518u)) return;
    // 80990518: addi    r4, r4, -18340
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18340);

label_8099051C:
    ctx->pc = 0x8099051Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099051Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099051C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8099051Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80990520:
    ctx->pc = 0x80990520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990520u)) return;
    // 80990520: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80990520u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80990524:
    ctx->pc = 0x80990524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990524u)) return;
    // 80990524: bl      0x80034C30
    {
            ctx->lr = 0x80990528u;
            ctx->pc = 0x80034C30u;
            return;
    }

label_80990528:
    ctx->pc = 0x80990528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990528: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8099052C:
    ctx->pc = 0x8099052Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099052Cu)) return;
    // 8099052C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80990530:
    ctx->pc = 0x80990530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990530u)) return;
    // 80990530: bl      0x80034C4C
    {
            ctx->lr = 0x80990534u;
            ctx->pc = 0x80034C4Cu;
            return;
    }

label_80990534:
    ctx->pc = 0x80990534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990534: bl      0x80405C38
    {
            ctx->lr = 0x80990538u;
            ctx->pc = 0x80405C38u;
            return;
    }

label_80990538:
    ctx->pc = 0x80990538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990538: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_8099053C:
    ctx->pc = 0x8099053Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099053Cu)) return;
    // 8099053C: bl      0x80406090
    {
            ctx->lr = 0x80990540u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80990540:
    ctx->pc = 0x80990540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990540: bl      0x80941B60
    {
            ctx->lr = 0x80990544u;
            ctx->pc = 0x80941B60u;
            return;
    }

label_80990544:
    ctx->pc = 0x80990544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80990544: lis     r3, -32615
    ctx->gpr[3] = ((u32)(s32)(-32615) << 16);

label_80990548:
    ctx->pc = 0x80990548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990548u)) return;
    // 80990548: addi    r0, r3, 1596
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1596);

label_8099054C:
    ctx->pc = 0x8099054Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099054Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8099054C: stw     r0, 16(r31)
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
label_80990550:
    ctx->pc = 0x80990550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990550u)) return;
    // 80990550: lis     r3, -32615
    ctx->gpr[3] = ((u32)(s32)(-32615) << 16);

label_80990554:
    ctx->pc = 0x80990554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990554u)) return;
    // 80990554: addi    r0, r3, 1592
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1592);

label_80990558:
    ctx->pc = 0x80990558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990558: stw     r0, 20(r31)
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
label_8099055C:
    ctx->pc = 0x8099055Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099055Cu)) return;
    // 8099055C: lis     r3, -32615
    ctx->gpr[3] = ((u32)(s32)(-32615) << 16);

label_80990560:
    ctx->pc = 0x80990560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990560u)) return;
    // 80990560: addi    r0, r3, 1532
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1532);

label_80990564:
    ctx->pc = 0x80990564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990564: stw     r0, 24(r31)
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
label_80990568:
    ctx->pc = 0x80990568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990568u)) return;
    // 80990568: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_8099056C:
    ctx->pc = 0x8099056Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099056Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099056C: lwz     r3, 32(r31)
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
label_80990570:
    ctx->pc = 0x80990570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990570: stb     r0, 3(r3)
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
label_80990574:
    ctx->pc = 0x80990574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990574u)) return;
    // 80990574: bl      0x8094038C
    {
            ctx->lr = 0x80990578u;
            ctx->pc = 0x8094038Cu;
            return;
    }

label_80990578:
    ctx->pc = 0x80990578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990578: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099057C:
    ctx->pc = 0x8099057Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099057Cu)) return;
    // 8099057C: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_80990580:
    ctx->pc = 0x80990580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990580u)) return;
    // 80990580: addi    r3, r3, 70
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(70);

label_80990584:
    ctx->pc = 0x80990584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990584u)) return;
    // 80990584: bl      0x809311DC
    {
            ctx->lr = 0x80990588u;
            ctx->pc = 0x809311DCu;
            return;
    }

label_80990588:
    ctx->pc = 0x80990588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990588: bl      0x80932A24
    {
            ctx->lr = 0x8099058Cu;
            ctx->pc = 0x80932A24u;
            return;
    }

label_8099058C:
    ctx->pc = 0x8099058Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099058Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8099058C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80990590:
    ctx->pc = 0x80990590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990590u)) return;
    // 80990590: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80990594:
    ctx->pc = 0x80990594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990594u)) return;
    // 80990594: bl      0x80933AF8
    {
            ctx->lr = 0x80990598u;
            ctx->pc = 0x80933AF8u;
            return;
    }

label_80990598:
    ctx->pc = 0x80990598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990598: bl      0x80934C94
    {
            ctx->lr = 0x8099059Cu;
            ctx->pc = 0x80934C94u;
            return;
    }

label_8099059C:
    ctx->pc = 0x8099059Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099059Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099059C: bl      0x80936148
    {
            ctx->lr = 0x809905A0u;
            ctx->pc = 0x80936148u;
            return;
    }

label_809905A0:
    ctx->pc = 0x809905A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809905A0: bl      0x80917AA0
    {
            ctx->lr = 0x809905A4u;
            ctx->pc = 0x80917AA0u;
            return;
    }

label_809905A4:
    ctx->pc = 0x809905A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809905A4: bl      0x80917BA4
    {
            ctx->lr = 0x809905A8u;
            ctx->pc = 0x80917BA4u;
            return;
    }

label_809905A8:
    ctx->pc = 0x809905A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809905A8: bl      0x809903B4
    {
            ctx->lr = 0x809905ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x809903B4u;
                return;
            }
            goto label_809903B4;
    }

label_809905AC:
    ctx->pc = 0x809905ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809905AC: bl      0x8098BF14
    {
            ctx->lr = 0x809905B0u;
            ctx->pc = 0x8098BF14u;
            return;
    }

label_809905B0:
    ctx->pc = 0x809905B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809905B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_809905B4:
    ctx->pc = 0x809905B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905B4u)) return;
    // 809905B4: lis     r3, -27822
    ctx->gpr[3] = ((u32)(s32)(-27822) << 16);

label_809905B8:
    ctx->pc = 0x809905B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905B8u)) return;
    // 809905B8: addi    r3, r3, -26724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26724);

label_809905BC:
    ctx->pc = 0x809905BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809905BC: stw     r0, 0(r3)
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
label_809905C0:
    ctx->pc = 0x809905C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905C0u)) return;
    // 809905C0: bl      0x80924EA4
    {
            ctx->lr = 0x809905C4u;
            ctx->pc = 0x80924EA4u;
            return;
    }

label_809905C4:
    ctx->pc = 0x809905C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 809905C4: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_809905C8:
    ctx->pc = 0x809905C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905C8u)) return;
    // 809905C8: addi    r4, r4, -10208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10208);

label_809905CC:
    ctx->pc = 0x809905CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809905CC: stw     r3, 0(r4)
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
label_809905D0:
    ctx->pc = 0x809905D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905D0u)) return;
    // 809905D0: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809905D4:
    ctx->pc = 0x809905D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905D4u)) return;
    // 809905D4: addi    r3, r3, -10912
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10912);

label_809905D8:
    ctx->pc = 0x809905D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905D8u)) return;
    // 809905D8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_809905DC:
    ctx->pc = 0x809905DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905DCu)) return;
    // 809905DC: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_809905E0:
    ctx->pc = 0x809905E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905E0u)) return;
    // 809905E0: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_809905E4:
    ctx->pc = 0x809905E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905E4u)) return;
    // 809905E4: bl      0x8096C694
    {
            ctx->lr = 0x809905E8u;
            ctx->pc = 0x8096C694u;
            return;
    }

label_809905E8:
    ctx->pc = 0x809905E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809905E8: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809905EC:
    ctx->pc = 0x809905ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809905EC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809905F0:
    ctx->pc = 0x809905F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809905F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809905F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809905F4:
    ctx->pc = 0x809905F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905F4u)) return;
    // 809905F4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_809905F8:
    ctx->pc = 0x809905F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809905F8u)) return;
    // 809905F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809905FC:
    ctx->pc = 0x809905FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809905FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809905FC: stwu     r1, -16(r1)
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
label_80990600:
    ctx->pc = 0x80990600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990600: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990604:
    ctx->pc = 0x80990604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990604: stw     r0, 20(r1)
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
label_80990608:
    ctx->pc = 0x80990608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990608u)) return;
    // 80990608: bl      0x80406038
    {
            ctx->lr = 0x8099060Cu;
            ctx->pc = 0x80406038u;
            return;
    }

label_8099060C:
    ctx->pc = 0x8099060Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099060Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099060C: bl      0x80405F58
    {
            ctx->lr = 0x80990610u;
            ctx->pc = 0x80405F58u;
            return;
    }

label_80990610:
    ctx->pc = 0x80990610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990610: bl      0x809360E8
    {
            ctx->lr = 0x80990614u;
            ctx->pc = 0x809360E8u;
            return;
    }

label_80990614:
    ctx->pc = 0x80990614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990614: bl      0x80934BC8
    {
            ctx->lr = 0x80990618u;
            ctx->pc = 0x80934BC8u;
            return;
    }

label_80990618:
    ctx->pc = 0x80990618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990618: bl      0x80932998
    {
            ctx->lr = 0x8099061Cu;
            ctx->pc = 0x80932998u;
            return;
    }

label_8099061C:
    ctx->pc = 0x8099061Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099061Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099061C: bl      0x80931198
    {
            ctx->lr = 0x80990620u;
            ctx->pc = 0x80931198u;
            return;
    }

label_80990620:
    ctx->pc = 0x80990620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990620: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990624:
    ctx->pc = 0x80990624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990624u)) return;
    // 80990624: bl      0x80941A00
    {
            ctx->lr = 0x80990628u;
            ctx->pc = 0x80941A00u;
            return;
    }

label_80990628:
    ctx->pc = 0x80990628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990628: lwz     r0, 20(r1)
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
label_8099062C:
    ctx->pc = 0x8099062Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8099062Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099062C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990630:
    ctx->pc = 0x80990630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990630u)) return;
    // 80990630: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80990634:
    ctx->pc = 0x80990634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990634u)) return;
    // 80990634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990638:
    ctx->pc = 0x80990638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990638: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_8099063C:
    ctx->pc = 0x8099063Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099063Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8099063C: stwu     r1, -16(r1)
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
label_80990640:
    ctx->pc = 0x80990640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80990640: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990644:
    ctx->pc = 0x80990644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80990644: stw     r0, 20(r1)
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
label_80990648:
    ctx->pc = 0x80990648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990648u)) return;
    // 80990648: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_8099064C:
    ctx->pc = 0x8099064Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099064Cu)) return;
    // 8099064C: addi    r3, r3, -14944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80990650:
    ctx->pc = 0x80990650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80990650: lwz     r4, 0(r3)
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
label_80990654:
    ctx->pc = 0x80990654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990654u)) return;
    // 80990654: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990658:
    ctx->pc = 0x80990658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990658u)) return;
    // 80990658: addi    r3, r3, -18352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18352);

label_8099065C:
    ctx->pc = 0x8099065Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099065Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8099065C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x8099065Cu)) return;
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
label_80990660:
    ctx->pc = 0x80990660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990660: stfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990660u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990664:
    ctx->pc = 0x80990664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990664u)) return;
    // 80990664: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990668:
    ctx->pc = 0x80990668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990668u)) return;
    // 80990668: addi    r3, r3, -18340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18340);

label_8099066C:
    ctx->pc = 0x8099066Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099066Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099066C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x8099066Cu)) return;
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
label_80990670:
    ctx->pc = 0x80990670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990670: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990670u)) return;
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
label_80990674:
    ctx->pc = 0x80990674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990674: stfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80990674u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990678:
    ctx->pc = 0x80990678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990678u)) return;
    // 80990678: bl      0x804753B4
    {
            ctx->lr = 0x8099067Cu;
            ctx->pc = 0x804753B4u;
            return;
    }

label_8099067C:
    ctx->pc = 0x8099067Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099067Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8099067C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990680:
    ctx->pc = 0x80990680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990680u)) return;
    // 80990680: addi    r3, r3, -10208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10208);

label_80990684:
    ctx->pc = 0x80990684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990684: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990688:
    ctx->pc = 0x80990688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990688u)) return;
    // 80990688: cmpwi   r0, 0
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

label_8099068C:
    ctx->pc = 0x8099068Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099068Cu)) return;
    // 8099068C: bc    12, 2, 0x80990768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990768;
        }
    }

label_80990690:
    ctx->pc = 0x80990690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990690: bl      0x80930E48
    {
            ctx->lr = 0x80990694u;
            ctx->pc = 0x80930E48u;
            return;
    }

label_80990694:
    ctx->pc = 0x80990694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990694: subfic  r3, r3, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80990698:
    ctx->pc = 0x80990698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990698u)) return;
    // 80990698: bl      0x80023D2C
    {
            ctx->lr = 0x8099069Cu;
            ctx->pc = 0x80023D2Cu;
            return;
    }

label_8099069C:
    ctx->pc = 0x8099069Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099069Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8099069C: cmpwi   r3, 0
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

label_809906A0:
    ctx->pc = 0x809906A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906A0u)) return;
    // 809906A0: bc    12, 2, 0x809906B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809906B4;
        }
    }

label_809906A4:
    ctx->pc = 0x809906A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809906A4: bc    4, 0, 0x80990730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990730;
        }
    }

label_809906A8:
    ctx->pc = 0x809906A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809906A8: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809906AC:
    ctx->pc = 0x809906ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906ACu)) return;
    // 809906AC: bc    4, 0, 0x80990768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990768;
        }
    }

label_809906B0:
    ctx->pc = 0x809906B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809906B0: b       0x80990730
    {
            goto label_80990730;
    }

label_809906B4:
    ctx->pc = 0x809906B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809906B4: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809906B8:
    ctx->pc = 0x809906B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906B8u)) return;
    // 809906B8: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_809906BC:
    ctx->pc = 0x809906BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906BCu)) return;
    // 809906BC: addi    r3, r3, 93
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(93);

label_809906C0:
    ctx->pc = 0x809906C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906C0u)) return;
    // 809906C0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_809906C4:
    ctx->pc = 0x809906C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906C4u)) return;
    // 809906C4: bl      0x8003D8B8
    {
            ctx->lr = 0x809906C8u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_809906C8:
    ctx->pc = 0x809906C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809906C8: bl      0x8092501C
    {
            ctx->lr = 0x809906CCu;
            ctx->pc = 0x8092501Cu;
            return;
    }

label_809906CC:
    ctx->pc = 0x809906CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809906CC: bl      0x80924338
    {
            ctx->lr = 0x809906D0u;
            ctx->pc = 0x80924338u;
            return;
    }

label_809906D0:
    ctx->pc = 0x809906D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809906D0: cmpwi   r3, 0
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

label_809906D4:
    ctx->pc = 0x809906D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906D4u)) return;
    // 809906D4: bc    12, 2, 0x809906F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809906F4;
        }
    }

label_809906D8:
    ctx->pc = 0x809906D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809906D8: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809906DC:
    ctx->pc = 0x809906DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906DCu)) return;
    // 809906DC: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_809906E0:
    ctx->pc = 0x809906E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906E0u)) return;
    // 809906E0: addi    r3, r3, 117
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(117);

label_809906E4:
    ctx->pc = 0x809906E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906E4u)) return;
    // 809906E4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_809906E8:
    ctx->pc = 0x809906E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906E8u)) return;
    // 809906E8: bl      0x8003D8B8
    {
            ctx->lr = 0x809906ECu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_809906EC:
    ctx->pc = 0x809906ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809906EC: bl      0x80924FEC
    {
            ctx->lr = 0x809906F0u;
            ctx->pc = 0x80924FECu;
            return;
    }

label_809906F0:
    ctx->pc = 0x809906F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809906F0: b       0x8099071C
    {
            goto label_8099071C;
    }

label_809906F4:
    ctx->pc = 0x809906F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809906F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809906F4: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809906F8:
    ctx->pc = 0x809906F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906F8u)) return;
    // 809906F8: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_809906FC:
    ctx->pc = 0x809906FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809906FCu)) return;
    // 809906FC: addi    r3, r3, 135
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(135);

label_80990700:
    ctx->pc = 0x80990700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990700u)) return;
    // 80990700: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80990704:
    ctx->pc = 0x80990704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990704u)) return;
    // 80990704: bl      0x8003D8B8
    {
            ctx->lr = 0x80990708u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80990708:
    ctx->pc = 0x80990708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990708: bl      0x8092501C
    {
            ctx->lr = 0x8099070Cu;
            ctx->pc = 0x8092501Cu;
            return;
    }

label_8099070C:
    ctx->pc = 0x8099070Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099070Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8099070C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990710:
    ctx->pc = 0x80990710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990710u)) return;
    // 80990710: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80990714:
    ctx->pc = 0x80990714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990714u)) return;
    // 80990714: addi    r5, r5, -14304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14304);

label_80990718:
    ctx->pc = 0x80990718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990718u)) return;
    // 80990718: bl      0x80003100
    {
            ctx->lr = 0x8099071Cu;
            ctx->pc = 0x80003100u;
            return;
    }

label_8099071C:
    ctx->pc = 0x8099071Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099071Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8099071C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990720:
    ctx->pc = 0x80990720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990720u)) return;
    // 80990720: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990724:
    ctx->pc = 0x80990724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990724u)) return;
    // 80990724: addi    r3, r3, -10208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10208);

label_80990728:
    ctx->pc = 0x80990728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990728: stw     r0, 0(r3)
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
label_8099072C:
    ctx->pc = 0x8099072Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099072Cu)) return;
    // 8099072C: b       0x80990768
    {
            goto label_80990768;
    }

label_80990730:
    ctx->pc = 0x80990730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990730: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990734:
    ctx->pc = 0x80990734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990734u)) return;
    // 80990734: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_80990738:
    ctx->pc = 0x80990738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990738u)) return;
    // 80990738: addi    r3, r3, 153
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(153);

label_8099073C:
    ctx->pc = 0x8099073Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099073Cu)) return;
    // 8099073C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80990740:
    ctx->pc = 0x80990740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990740u)) return;
    // 80990740: bl      0x8003D8B8
    {
            ctx->lr = 0x80990744u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80990744:
    ctx->pc = 0x80990744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990744: bl      0x8092501C
    {
            ctx->lr = 0x80990748u;
            ctx->pc = 0x8092501Cu;
            return;
    }

label_80990748:
    ctx->pc = 0x80990748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990748: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8099074C:
    ctx->pc = 0x8099074Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099074Cu)) return;
    // 8099074C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80990750:
    ctx->pc = 0x80990750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990750u)) return;
    // 80990750: addi    r5, r5, -14304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14304);

label_80990754:
    ctx->pc = 0x80990754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990754u)) return;
    // 80990754: bl      0x80003100
    {
            ctx->lr = 0x80990758u;
            ctx->pc = 0x80003100u;
            return;
    }

label_80990758:
    ctx->pc = 0x80990758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990758: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8099075C:
    ctx->pc = 0x8099075Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099075Cu)) return;
    // 8099075C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990760:
    ctx->pc = 0x80990760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990760u)) return;
    // 80990760: addi    r3, r3, -10208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10208);

label_80990764:
    ctx->pc = 0x80990764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990764: stw     r0, 0(r3)
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
label_80990768:
    ctx->pc = 0x80990768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990768: lwz     r0, 20(r1)
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
label_8099076C:
    ctx->pc = 0x8099076Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8099076Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099076C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990770:
    ctx->pc = 0x80990770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990770u)) return;
    // 80990770: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80990774:
    ctx->pc = 0x80990774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990774u)) return;
    // 80990774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990778:
    ctx->pc = 0x80990778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990778: stwu     r1, -16(r1)
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
label_8099077C:
    ctx->pc = 0x8099077Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099077Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8099077C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990780:
    ctx->pc = 0x80990780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990780: stw     r0, 20(r1)
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
label_80990784:
    ctx->pc = 0x80990784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990784u)) return;
    // 80990784: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990788:
    ctx->pc = 0x80990788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990788u)) return;
    // 80990788: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_8099078C:
    ctx->pc = 0x8099078Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099078Cu)) return;
    // 8099078C: addi    r3, r3, 179
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(179);

label_80990790:
    ctx->pc = 0x80990790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990790u)) return;
    // 80990790: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80990794:
    ctx->pc = 0x80990794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990794u)) return;
    // 80990794: bl      0x8003D8B8
    {
            ctx->lr = 0x80990798u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80990798:
    ctx->pc = 0x80990798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990798: bl      0x8092531C
    {
            ctx->lr = 0x8099079Cu;
            ctx->pc = 0x8092531Cu;
            return;
    }

label_8099079C:
    ctx->pc = 0x8099079Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099079Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099079C: bl      0x80968F00
    {
            ctx->lr = 0x809907A0u;
            ctx->pc = 0x80968F00u;
            return;
    }

label_809907A0:
    ctx->pc = 0x809907A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809907A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809907A0: bl      0x804753C4
    {
            ctx->lr = 0x809907A4u;
            ctx->pc = 0x804753C4u;
            return;
    }

label_809907A4:
    ctx->pc = 0x809907A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809907A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809907A4: lwz     r0, 20(r1)
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
label_809907A8:
    ctx->pc = 0x809907A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809907A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809907A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809907AC:
    ctx->pc = 0x809907ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907ACu)) return;
    // 809907AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809907B0:
    ctx->pc = 0x809907B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907B0u)) return;
    // 809907B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809907B4:
    ctx->pc = 0x809907B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809907B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809907B4: stwu     r1, -16(r1)
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
label_809907B8:
    ctx->pc = 0x809907B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809907B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809907BC:
    ctx->pc = 0x809907BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809907BC: stw     r0, 20(r1)
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
label_809907C0:
    ctx->pc = 0x809907C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907C0u)) return;
    // 809907C0: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809907C4:
    ctx->pc = 0x809907C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907C4u)) return;
    // 809907C4: addi    r3, r3, -10864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10864);

label_809907C8:
    ctx->pc = 0x809907C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907C8u)) return;
    // 809907C8: addi    r3, r3, 202
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(202);

label_809907CC:
    ctx->pc = 0x809907CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907CCu)) return;
    // 809907CC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_809907D0:
    ctx->pc = 0x809907D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907D0u)) return;
    // 809907D0: bl      0x8003D8B8
    {
            ctx->lr = 0x809907D4u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_809907D4:
    ctx->pc = 0x809907D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809907D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809907D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_809907D8:
    ctx->pc = 0x809907D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907D8u)) return;
    // 809907D8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_809907DC:
    ctx->pc = 0x809907DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907DCu)) return;
    // 809907DC: lis     r5, -32615
    ctx->gpr[5] = ((u32)(s32)(-32615) << 16);

label_809907E0:
    ctx->pc = 0x809907E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907E0u)) return;
    // 809907E0: addi    r5, r5, 1116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1116);

label_809907E4:
    ctx->pc = 0x809907E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907E4u)) return;
    // 809907E4: bl      0x8050FD60
    {
            ctx->lr = 0x809907E8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_809907E8:
    ctx->pc = 0x809907E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809907E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809907E8: bl      0x80968F28
    {
            ctx->lr = 0x809907ECu;
            ctx->pc = 0x80968F28u;
            return;
    }

label_809907EC:
    ctx->pc = 0x809907ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809907ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809907EC: bl      0x80925348
    {
            ctx->lr = 0x809907F0u;
            ctx->pc = 0x80925348u;
            return;
    }

label_809907F0:
    ctx->pc = 0x809907F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809907F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809907F0: lwz     r0, 20(r1)
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
label_809907F4:
    ctx->pc = 0x809907F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809907F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809907F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809907F8:
    ctx->pc = 0x809907F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907F8u)) return;
    // 809907F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809907FC:
    ctx->pc = 0x809907FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809907FCu)) return;
    // 809907FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990800:
    ctx->pc = 0x80990800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80990800: stwu     r1, -16(r1)
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
label_80990804:
    ctx->pc = 0x80990804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990804: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990808:
    ctx->pc = 0x80990808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990808: stw     r0, 20(r1)
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
label_8099080C:
    ctx->pc = 0x8099080Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099080Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099080C: stw     r31, 12(r1)
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
label_80990810:
    ctx->pc = 0x80990810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990810: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990814:
    ctx->pc = 0x80990814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990814u)) return;
    // 80990814: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80990818:
    ctx->pc = 0x80990818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990818: lwz     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099081C:
    ctx->pc = 0x8099081Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099081Cu)) return;
    // 8099081C: cmplwi  r31, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990820:
    ctx->pc = 0x80990820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990820u)) return;
    // 80990820: bc    4, 2, 0x809908B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809908B0;
        }
    }

label_80990824:
    ctx->pc = 0x80990824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990824: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990828:
    ctx->pc = 0x80990828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990828u)) return;
    // 80990828: li      r4, 28
    ctx->gpr[4] = (u32)(s32)(28);

label_8099082C:
    ctx->pc = 0x8099082Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099082Cu)) return;
    // 8099082C: bl      0x8050EEC0
    {
            ctx->lr = 0x80990830u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80990830:
    ctx->pc = 0x80990830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990830: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80990834:
    ctx->pc = 0x80990834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990834: stw     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990838:
    ctx->pc = 0x80990838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990838u)) return;
    // 80990838: bl      0x80925838
    {
            ctx->lr = 0x8099083Cu;
            ctx->pc = 0x80925838u;
            return;
    }

label_8099083C:
    ctx->pc = 0x8099083Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099083Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8099083C: stw     r3, 0(r31)
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
label_80990840:
    ctx->pc = 0x80990840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990840u)) return;
    // 80990840: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80990844:
    ctx->pc = 0x80990844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990844: stb     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990848:
    ctx->pc = 0x80990848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990848u)) return;
    // 80990848: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8099084C:
    ctx->pc = 0x8099084Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099084Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099084C: stb     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990850:
    ctx->pc = 0x80990850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990850u)) return;
    // 80990850: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_80990854:
    ctx->pc = 0x80990854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990854: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990858:
    ctx->pc = 0x80990858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990858u)) return;
    // 80990858: addi    r4, r4, 18
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18);

label_8099085C:
    ctx->pc = 0x8099085Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099085Cu)) return;
    // 8099085C: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80990860:
    ctx->pc = 0x80990860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990860u)) return;
    // 80990860: bl      0x800031E8
    {
            ctx->lr = 0x80990864u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80990864:
    ctx->pc = 0x80990864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990864: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990868:
    ctx->pc = 0x80990868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990868: stb     r0, 11(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099086C:
    ctx->pc = 0x8099086Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099086Cu)) return;
    // 8099086C: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_80990870:
    ctx->pc = 0x80990870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990870u)) return;
    // 80990870: bl      0x8000F1B8
    {
            ctx->lr = 0x80990874u;
            ctx->pc = 0x8000F1B8u;
            return;
    }

label_80990874:
    ctx->pc = 0x80990874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80990874: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80990878:
    ctx->pc = 0x80990878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80990878: stb     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099087C:
    ctx->pc = 0x8099087Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099087Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8099087C: stb     r0, 15(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990880:
    ctx->pc = 0x80990880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990880u)) return;
    // 80990880: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80990884:
    ctx->pc = 0x80990884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80990884: sth     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990888:
    ctx->pc = 0x80990888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990888u)) return;
    // 80990888: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_8099088C:
    ctx->pc = 0x8099088Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099088Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8099088C: sth     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990890:
    ctx->pc = 0x80990890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990890u)) return;
    // 80990890: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80990894:
    ctx->pc = 0x80990894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990894: sth     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990898:
    ctx->pc = 0x80990898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990898u)) return;
    // 80990898: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8099089C:
    ctx->pc = 0x8099089Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099089Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099089C: sth     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809908A0:
    ctx->pc = 0x809908A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809908A0: sth     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809908A4:
    ctx->pc = 0x809908A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908A4u)) return;
    // 809908A4: lis     r3, -32615
    ctx->gpr[3] = ((u32)(s32)(-32615) << 16);

label_809908A8:
    ctx->pc = 0x809908A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908A8u)) return;
    // 809908A8: addi    r0, r3, 2292
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2292);

label_809908AC:
    ctx->pc = 0x809908ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 809908AC: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809908B0:
    ctx->pc = 0x809908B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809908B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809908B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_809908B4:
    ctx->pc = 0x809908B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908B4u)) return;
    // 809908B4: bl      0x80990978
    {
            ctx->lr = 0x809908B8u;
            goto label_80990978;
    }

label_809908B8:
    ctx->pc = 0x809908B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809908B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809908B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_809908BC:
    ctx->pc = 0x809908BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908BCu)) return;
    // 809908BC: bl      0x80990F8C
    {
            ctx->lr = 0x809908C0u;
            goto label_80990F8C;
    }

label_809908C0:
    ctx->pc = 0x809908C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809908C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809908C0: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809908C4:
    ctx->pc = 0x809908C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908C4u)) return;
    // 809908C4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_809908C8:
    ctx->pc = 0x809908C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908C8u)) return;
    // 809908C8: cmpwi   r0, 0
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

label_809908CC:
    ctx->pc = 0x809908CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908CCu)) return;
    // 809908CC: bc    4, 2, 0x809908DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809908DC;
        }
    }

label_809908D0:
    ctx->pc = 0x809908D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809908D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809908D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_809908D4:
    ctx->pc = 0x809908D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908D4u)) return;
    // 809908D4: bl      0x8098BDC8
    {
            ctx->lr = 0x809908D8u;
            ctx->pc = 0x8098BDC8u;
            return;
    }

label_809908D8:
    ctx->pc = 0x809908D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809908D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809908D8: bl      0x8098BCEC
    {
            ctx->lr = 0x809908DCu;
            ctx->pc = 0x8098BCECu;
            return;
    }

label_809908DC:
    ctx->pc = 0x809908DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809908DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809908DC: lwz     r31, 12(r1)
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
label_809908E0:
    ctx->pc = 0x809908E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809908E0: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809908E4:
    ctx->pc = 0x809908E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809908E4: lwz     r0, 20(r1)
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
label_809908E8:
    ctx->pc = 0x809908E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809908E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809908E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809908EC:
    ctx->pc = 0x809908ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908ECu)) return;
    // 809908EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809908F0:
    ctx->pc = 0x809908F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908F0u)) return;
    // 809908F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809908F4:
    ctx->pc = 0x809908F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809908F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809908F4: stwu     r1, -16(r1)
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
label_809908F8:
    ctx->pc = 0x809908F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809908F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809908FC:
    ctx->pc = 0x809908FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809908FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809908FC: stw     r0, 20(r1)
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
label_80990900:
    ctx->pc = 0x80990900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990900: stw     r31, 12(r1)
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
label_80990904:
    ctx->pc = 0x80990904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990904u)) return;
    // 80990904: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80990908:
    ctx->pc = 0x80990908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990908: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099090C:
    ctx->pc = 0x8099090Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099090Cu)) return;
    // 8099090C: cmplwi  r3, 0x0000
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

label_80990910:
    ctx->pc = 0x80990910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990910u)) return;
    // 80990910: bc    12, 2, 0x80990920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990920;
        }
    }

label_80990914:
    ctx->pc = 0x80990914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990914: bl      0x8050ED40
    {
            ctx->lr = 0x80990918u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80990918:
    ctx->pc = 0x80990918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990918: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8099091C:
    ctx->pc = 0x8099091Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099091Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8099091C: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990920:
    ctx->pc = 0x80990920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990920: lwz     r31, 12(r1)
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
label_80990924:
    ctx->pc = 0x80990924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990924: lwz     r0, 20(r1)
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
label_80990928:
    ctx->pc = 0x80990928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990928: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099092C:
    ctx->pc = 0x8099092Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099092Cu)) return;
    // 8099092C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80990930:
    ctx->pc = 0x80990930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990930u)) return;
    // 80990930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990934:
    ctx->pc = 0x80990934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990934: stwu     r1, -16(r1)
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
label_80990938:
    ctx->pc = 0x80990938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990938: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099093C:
    ctx->pc = 0x8099093Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099093Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8099093C: stw     r0, 20(r1)
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
label_80990940:
    ctx->pc = 0x80990940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990940u)) return;
    // 80990940: bl      0x80990978
    {
            ctx->lr = 0x80990944u;
            goto label_80990978;
    }

label_80990944:
    ctx->pc = 0x80990944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990944: lwz     r0, 20(r1)
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
label_80990948:
    ctx->pc = 0x80990948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990948: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099094C:
    ctx->pc = 0x8099094Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099094Cu)) return;
    // 8099094C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80990950:
    ctx->pc = 0x80990950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990950u)) return;
    // 80990950: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990954:
    ctx->pc = 0x80990954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990954: stwu     r1, -16(r1)
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
label_80990958:
    ctx->pc = 0x80990958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990958: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099095C:
    ctx->pc = 0x8099095Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099095Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8099095C: stw     r0, 20(r1)
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
label_80990960:
    ctx->pc = 0x80990960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990960u)) return;
    // 80990960: bl      0x80990F8C
    {
            ctx->lr = 0x80990964u;
            goto label_80990F8C;
    }

label_80990964:
    ctx->pc = 0x80990964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990964: lwz     r0, 20(r1)
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
label_80990968:
    ctx->pc = 0x80990968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990968: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099096C:
    ctx->pc = 0x8099096Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099096Cu)) return;
    // 8099096C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80990970:
    ctx->pc = 0x80990970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990970u)) return;
    // 80990970: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990974:
    ctx->pc = 0x80990974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990978:
    ctx->pc = 0x80990978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80990978: stwu     r1, -32(r1)
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
label_8099097C:
    ctx->pc = 0x8099097Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099097Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8099097C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990980:
    ctx->pc = 0x80990980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80990980: stw     r0, 36(r1)
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
label_80990984:
    ctx->pc = 0x80990984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990984: stw     r31, 28(r1)
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
label_80990988:
    ctx->pc = 0x80990988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990988: stw     r30, 24(r1)
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
label_8099098C:
    ctx->pc = 0x8099098Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099098Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099098C: stw     r29, 20(r1)
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
label_80990990:
    ctx->pc = 0x80990990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990990u)) return;
    // 80990990: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80990994:
    ctx->pc = 0x80990994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990994: lbz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990998:
    ctx->pc = 0x80990998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990998u)) return;
    // 80990998: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8099099C:
    ctx->pc = 0x8099099Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099099Cu)) return;
    // 8099099C: cmpwi   r0, 0
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

label_809909A0:
    ctx->pc = 0x809909A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909A0u)) return;
    // 809909A0: bc    12, 2, 0x80990F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990F70;
        }
    }

label_809909A4:
    ctx->pc = 0x809909A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809909A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809909A4: lha     r3, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809909A8:
    ctx->pc = 0x809909A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909A8u)) return;
    // 809909A8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_809909AC:
    ctx->pc = 0x809909ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809909AC: sth     r0, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809909B0:
    ctx->pc = 0x809909B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909B0u)) return;
    // 809909B0: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809909B4:
    ctx->pc = 0x809909B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909B4u)) return;
    // 809909B4: cmpwi   r0, 40
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809909B8:
    ctx->pc = 0x809909B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909B8u)) return;
    // 809909B8: bc    4, 2, 0x809909C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809909C4;
        }
    }

label_809909BC:
    ctx->pc = 0x809909BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809909BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809909BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809909C0:
    ctx->pc = 0x809909C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 809909C0: sth     r0, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809909C4:
    ctx->pc = 0x809909C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809909C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809909C4: lha     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809909C8:
    ctx->pc = 0x809909C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909C8u)) return;
    // 809909C8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_809909CC:
    ctx->pc = 0x809909CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809909CC: sth     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809909D0:
    ctx->pc = 0x809909D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909D0u)) return;
    // 809909D0: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809909D4:
    ctx->pc = 0x809909D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909D4u)) return;
    // 809909D4: cmpwi   r0, 40
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809909D8:
    ctx->pc = 0x809909D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909D8u)) return;
    // 809909D8: bc    4, 2, 0x809909E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809909E4;
        }
    }

label_809909DC:
    ctx->pc = 0x809909DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809909DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809909DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809909E0:
    ctx->pc = 0x809909E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 809909E0: sth     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809909E4:
    ctx->pc = 0x809909E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809909E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 809909E4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_809909E8:
    ctx->pc = 0x809909E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909E8u)) return;
    // 809909E8: addi    r3, r3, 3472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3472);

label_809909EC:
    ctx->pc = 0x809909ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809909EC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809909F0:
    ctx->pc = 0x809909F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909F0u)) return;
    // 809909F0: rlwinm r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
    }

label_809909F4:
    ctx->pc = 0x809909F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909F4u)) return;
    // 809909F4: cmplwi  r0, 0x0000
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

label_809909F8:
    ctx->pc = 0x809909F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809909F8u)) return;
    // 809909F8: bc    12, 2, 0x80990A68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990A68;
        }
    }

label_809909FC:
    ctx->pc = 0x809909FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809909FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809909FC: lha     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A00:
    ctx->pc = 0x80990A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A00u)) return;
    // 80990A00: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990A04:
    ctx->pc = 0x80990A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A04u)) return;
    // 80990A04: bc    4, 0, 0x80990A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990A2C;
        }
    }

label_80990A08:
    ctx->pc = 0x80990A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990A08: lha     r3, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A0C:
    ctx->pc = 0x80990A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A0Cu)) return;
    // 80990A0C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80990A10:
    ctx->pc = 0x80990A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990A10: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A14:
    ctx->pc = 0x80990A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A14u)) return;
    // 80990A14: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80990A18:
    ctx->pc = 0x80990A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A18u)) return;
    // 80990A18: cmpwi   r0, 0
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

label_80990A1C:
    ctx->pc = 0x80990A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A1Cu)) return;
    // 80990A1C: bc    4, 0, 0x80990A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990A4C;
        }
    }

label_80990A20:
    ctx->pc = 0x80990A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990A20: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_80990A24:
    ctx->pc = 0x80990A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990A24: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A28:
    ctx->pc = 0x80990A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A28u)) return;
    // 80990A28: b       0x80990A4C
    {
            goto label_80990A4C;
    }

label_80990A2C:
    ctx->pc = 0x80990A2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990A2C: lha     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A30:
    ctx->pc = 0x80990A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A30u)) return;
    // 80990A30: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80990A34:
    ctx->pc = 0x80990A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990A34: sth     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A38:
    ctx->pc = 0x80990A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A38u)) return;
    // 80990A38: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80990A3C:
    ctx->pc = 0x80990A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A3Cu)) return;
    // 80990A3C: cmpwi   r0, 0
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

label_80990A40:
    ctx->pc = 0x80990A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A40u)) return;
    // 80990A40: bc    4, 0, 0x80990A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990A4C;
        }
    }

label_80990A44:
    ctx->pc = 0x80990A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990A44: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80990A48:
    ctx->pc = 0x80990A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990A48: sth     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A4C:
    ctx->pc = 0x80990A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80990A4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990A50:
    ctx->pc = 0x80990A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990A50: sth     r0, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A54:
    ctx->pc = 0x80990A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A54u)) return;
    // 80990A54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990A58:
    ctx->pc = 0x80990A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A58u)) return;
    // 80990A58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990A5C:
    ctx->pc = 0x80990A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A5Cu)) return;
    // 80990A5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990A60:
    ctx->pc = 0x80990A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A60u)) return;
    // 80990A60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990A64:
    ctx->pc = 0x80990A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A64u)) return;
    // 80990A64: bl      0x8050A480
    {
            ctx->lr = 0x80990A68u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990A68:
    ctx->pc = 0x80990A68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80990A68: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80990A6C:
    ctx->pc = 0x80990A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A6Cu)) return;
    // 80990A6C: addi    r3, r3, 3472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3472);

label_80990A70:
    ctx->pc = 0x80990A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990A70: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A74:
    ctx->pc = 0x80990A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A74u)) return;
    // 80990A74: rlwinm r0, r0, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000020u;
    }

label_80990A78:
    ctx->pc = 0x80990A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A78u)) return;
    // 80990A78: cmplwi  r0, 0x0000
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

label_80990A7C:
    ctx->pc = 0x80990A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A7Cu)) return;
    // 80990A7C: bc    12, 2, 0x80990AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990AEC;
        }
    }

label_80990A80:
    ctx->pc = 0x80990A80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990A80: lha     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A84:
    ctx->pc = 0x80990A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A84u)) return;
    // 80990A84: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990A88:
    ctx->pc = 0x80990A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A88u)) return;
    // 80990A88: bc    4, 0, 0x80990AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990AB0;
        }
    }

label_80990A8C:
    ctx->pc = 0x80990A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990A8C: lha     r3, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A90:
    ctx->pc = 0x80990A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A90u)) return;
    // 80990A90: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80990A94:
    ctx->pc = 0x80990A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990A94: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990A98:
    ctx->pc = 0x80990A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A98u)) return;
    // 80990A98: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80990A9C:
    ctx->pc = 0x80990A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990A9Cu)) return;
    // 80990A9C: cmpwi   r0, 15
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990AA0:
    ctx->pc = 0x80990AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AA0u)) return;
    // 80990AA0: bc    4, 2, 0x80990AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990AD0;
        }
    }

label_80990AA4:
    ctx->pc = 0x80990AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990AA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990AA8:
    ctx->pc = 0x80990AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990AA8: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990AAC:
    ctx->pc = 0x80990AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AACu)) return;
    // 80990AAC: b       0x80990AD0
    {
            goto label_80990AD0;
    }

label_80990AB0:
    ctx->pc = 0x80990AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990AB0: lha     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990AB4:
    ctx->pc = 0x80990AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AB4u)) return;
    // 80990AB4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80990AB8:
    ctx->pc = 0x80990AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990AB8: sth     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990ABC:
    ctx->pc = 0x80990ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990ABCu)) return;
    // 80990ABC: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80990AC0:
    ctx->pc = 0x80990AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AC0u)) return;
    // 80990AC0: cmpwi   r0, 3
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

label_80990AC4:
    ctx->pc = 0x80990AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AC4u)) return;
    // 80990AC4: bc    4, 2, 0x80990AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990AD0;
        }
    }

label_80990AC8:
    ctx->pc = 0x80990AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990AC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990ACC:
    ctx->pc = 0x80990ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990ACC: sth     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990AD0:
    ctx->pc = 0x80990AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80990AD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990AD4:
    ctx->pc = 0x80990AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990AD4: sth     r0, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990AD8:
    ctx->pc = 0x80990AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AD8u)) return;
    // 80990AD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990ADC:
    ctx->pc = 0x80990ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990ADCu)) return;
    // 80990ADC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990AE0:
    ctx->pc = 0x80990AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AE0u)) return;
    // 80990AE0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990AE4:
    ctx->pc = 0x80990AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AE4u)) return;
    // 80990AE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990AE8:
    ctx->pc = 0x80990AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AE8u)) return;
    // 80990AE8: bl      0x8050A480
    {
            ctx->lr = 0x80990AECu;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990AEC:
    ctx->pc = 0x80990AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80990AEC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80990AF0:
    ctx->pc = 0x80990AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AF0u)) return;
    // 80990AF0: addi    r3, r3, 3472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3472);

label_80990AF4:
    ctx->pc = 0x80990AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990AF4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990AF8:
    ctx->pc = 0x80990AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AF8u)) return;
    // 80990AF8: rlwinm r0, r0, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000040u;
    }

label_80990AFC:
    ctx->pc = 0x80990AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990AFCu)) return;
    // 80990AFC: cmplwi  r0, 0x0000
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

label_80990B00:
    ctx->pc = 0x80990B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B00u)) return;
    // 80990B00: bc    12, 2, 0x80990B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990B60;
        }
    }

label_80990B04:
    ctx->pc = 0x80990B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990B04: lha     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B08:
    ctx->pc = 0x80990B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B08u)) return;
    // 80990B08: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80990B0C:
    ctx->pc = 0x80990B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990B0C: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B10:
    ctx->pc = 0x80990B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B10u)) return;
    // 80990B10: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80990B14:
    ctx->pc = 0x80990B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B14u)) return;
    // 80990B14: cmpwi   r0, 0
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

label_80990B18:
    ctx->pc = 0x80990B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B18u)) return;
    // 80990B18: bc    4, 0, 0x80990B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990B24;
        }
    }

label_80990B1C:
    ctx->pc = 0x80990B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990B1C: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_80990B20:
    ctx->pc = 0x80990B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990B20: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B24:
    ctx->pc = 0x80990B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990B24: lha     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B28:
    ctx->pc = 0x80990B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B28u)) return;
    // 80990B28: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990B2C:
    ctx->pc = 0x80990B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B2Cu)) return;
    // 80990B2C: bc    4, 2, 0x80990B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990B44;
        }
    }

label_80990B30:
    ctx->pc = 0x80990B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990B30: lha     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B34:
    ctx->pc = 0x80990B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B34u)) return;
    // 80990B34: cmpwi   r0, 0
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

label_80990B38:
    ctx->pc = 0x80990B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B38u)) return;
    // 80990B38: bc    12, 2, 0x80990B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990B44;
        }
    }

label_80990B3C:
    ctx->pc = 0x80990B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990B3C: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_80990B40:
    ctx->pc = 0x80990B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990B40: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B44:
    ctx->pc = 0x80990B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80990B44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990B48:
    ctx->pc = 0x80990B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990B48: sth     r0, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B4C:
    ctx->pc = 0x80990B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B4Cu)) return;
    // 80990B4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990B50:
    ctx->pc = 0x80990B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B50u)) return;
    // 80990B50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990B54:
    ctx->pc = 0x80990B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B54u)) return;
    // 80990B54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990B58:
    ctx->pc = 0x80990B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B58u)) return;
    // 80990B58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990B5C:
    ctx->pc = 0x80990B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B5Cu)) return;
    // 80990B5C: bl      0x8050A480
    {
            ctx->lr = 0x80990B60u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990B60:
    ctx->pc = 0x80990B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80990B60: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80990B64:
    ctx->pc = 0x80990B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B64u)) return;
    // 80990B64: addi    r3, r3, 3472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3472);

label_80990B68:
    ctx->pc = 0x80990B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990B68: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B6C:
    ctx->pc = 0x80990B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B6Cu)) return;
    // 80990B6C: rlwinm r0, r0, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
    }

label_80990B70:
    ctx->pc = 0x80990B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B70u)) return;
    // 80990B70: cmplwi  r0, 0x0000
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

label_80990B74:
    ctx->pc = 0x80990B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B74u)) return;
    // 80990B74: bc    12, 2, 0x80990BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990BD4;
        }
    }

label_80990B78:
    ctx->pc = 0x80990B78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990B78: lha     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B7C:
    ctx->pc = 0x80990B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B7Cu)) return;
    // 80990B7C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80990B80:
    ctx->pc = 0x80990B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990B80: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B84:
    ctx->pc = 0x80990B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B84u)) return;
    // 80990B84: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80990B88:
    ctx->pc = 0x80990B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B88u)) return;
    // 80990B88: cmpwi   r0, 18
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990B8C:
    ctx->pc = 0x80990B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B8Cu)) return;
    // 80990B8C: bc    4, 2, 0x80990B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990B98;
        }
    }

label_80990B90:
    ctx->pc = 0x80990B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990B90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990B94:
    ctx->pc = 0x80990B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990B94: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B98:
    ctx->pc = 0x80990B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990B98: lha     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990B9C:
    ctx->pc = 0x80990B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990B9Cu)) return;
    // 80990B9C: cmpwi   r0, 17
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990BA0:
    ctx->pc = 0x80990BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BA0u)) return;
    // 80990BA0: bc    4, 2, 0x80990BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990BB8;
        }
    }

label_80990BA4:
    ctx->pc = 0x80990BA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990BA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990BA4: lha     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990BA8:
    ctx->pc = 0x80990BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BA8u)) return;
    // 80990BA8: cmpwi   r0, 0
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

label_80990BAC:
    ctx->pc = 0x80990BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BACu)) return;
    // 80990BAC: bc    12, 2, 0x80990BB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990BB8;
        }
    }

label_80990BB0:
    ctx->pc = 0x80990BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990BB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990BB4:
    ctx->pc = 0x80990BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990BB4: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990BB8:
    ctx->pc = 0x80990BB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990BB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80990BB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990BBC:
    ctx->pc = 0x80990BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990BBC: sth     r0, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990BC0:
    ctx->pc = 0x80990BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BC0u)) return;
    // 80990BC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990BC4:
    ctx->pc = 0x80990BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BC4u)) return;
    // 80990BC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990BC8:
    ctx->pc = 0x80990BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BC8u)) return;
    // 80990BC8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990BCC:
    ctx->pc = 0x80990BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BCCu)) return;
    // 80990BCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990BD0:
    ctx->pc = 0x80990BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BD0u)) return;
    // 80990BD0: bl      0x8050A480
    {
            ctx->lr = 0x80990BD4u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990BD4:
    ctx->pc = 0x80990BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80990BD4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80990BD8:
    ctx->pc = 0x80990BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BD8u)) return;
    // 80990BD8: addi    r3, r3, 3472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3472);

label_80990BDC:
    ctx->pc = 0x80990BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990BDC: lwz     r3, 0(r3)
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
label_80990BE0:
    ctx->pc = 0x80990BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BE0u)) return;
    // 80990BE0: rlwinm r0, r3, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000004u;
    }

label_80990BE4:
    ctx->pc = 0x80990BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BE4u)) return;
    // 80990BE4: cmplwi  r0, 0x0000
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

label_80990BE8:
    ctx->pc = 0x80990BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BE8u)) return;
    // 80990BE8: bc    12, 2, 0x80990EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990EB4;
        }
    }

label_80990BEC:
    ctx->pc = 0x80990BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990BEC: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80990BF0:
    ctx->pc = 0x80990BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990BF0: lha     r5, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990BF4:
    ctx->pc = 0x80990BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BF4u)) return;
    // 80990BF4: cmpwi   r5, 16
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990BF8:
    ctx->pc = 0x80990BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990BF8u)) return;
    // 80990BF8: bc    4, 0, 0x80990D28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990D28;
        }
    }

label_80990BFC:
    ctx->pc = 0x80990BFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990BFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990BFC: lha     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C00:
    ctx->pc = 0x80990C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C00u)) return;
    // 80990C00: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_80990C04:
    ctx->pc = 0x80990C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C04u)) return;
    // 80990C04: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990C08:
    ctx->pc = 0x80990C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C08u)) return;
    // 80990C08: addi    r0, r3, -18336
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-18336);

label_80990C0C:
    ctx->pc = 0x80990C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C0Cu)) return;
    // 80990C0C: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80990C10:
    ctx->pc = 0x80990C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990C10: lbzx    r5, r3, r5
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[5];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C14:
    ctx->pc = 0x80990C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C14u)) return;
    // 80990C14: cmpwi   r5, 240
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990C18:
    ctx->pc = 0x80990C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C18u)) return;
    // 80990C18: bc    12, 2, 0x80990CD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990CD4;
        }
    }

label_80990C1C:
    ctx->pc = 0x80990C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990C1C: bc    4, 0, 0x80990C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990C28;
        }
    }

label_80990C20:
    ctx->pc = 0x80990C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990C20: cmpwi   r5, 239
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(239);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990C24:
    ctx->pc = 0x80990C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C24u)) return;
    // 80990C24: bc    4, 0, 0x80990C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990C68;
        }
    }

label_80990C28:
    ctx->pc = 0x80990C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990C28: lbz     r4, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C2C:
    ctx->pc = 0x80990C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C2Cu)) return;
    // 80990C2C: extsb r3, r4
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80990C30:
    ctx->pc = 0x80990C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C30u)) return;
    // 80990C30: cmpwi   r3, 7
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990C34:
    ctx->pc = 0x80990C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C34u)) return;
    // 80990C34: bc    4, 0, 0x80990E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990E74;
        }
    }

label_80990C38:
    ctx->pc = 0x80990C38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80990C38: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_80990C3C:
    ctx->pc = 0x80990C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80990C3C: stb     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C40:
    ctx->pc = 0x80990C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C40u)) return;
    // 80990C40: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80990C44:
    ctx->pc = 0x80990C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990C44: stb     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C48:
    ctx->pc = 0x80990C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990C48: lbz     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C4C:
    ctx->pc = 0x80990C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C4Cu)) return;
    // 80990C4C: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990C50:
    ctx->pc = 0x80990C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990C50: lbz     r4, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C54:
    ctx->pc = 0x80990C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C54u)) return;
    // 80990C54: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80990C58:
    ctx->pc = 0x80990C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C58u)) return;
    // 80990C58: cmpw    r3, r0
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

label_80990C5C:
    ctx->pc = 0x80990C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C5Cu)) return;
    // 80990C5C: bc    4, 0, 0x80990E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990E74;
        }
    }

label_80990C60:
    ctx->pc = 0x80990C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990C60: stb     r4, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C64:
    ctx->pc = 0x80990C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C64u)) return;
    // 80990C64: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990C68:
    ctx->pc = 0x80990C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990C68: lbz     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C6C:
    ctx->pc = 0x80990C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C6Cu)) return;
    // 80990C6C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990C70:
    ctx->pc = 0x80990C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C70u)) return;
    // 80990C70: cmpwi   r0, 0
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

label_80990C74:
    ctx->pc = 0x80990C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C74u)) return;
    // 80990C74: bc    4, 1, 0x80990E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990E74;
        }
    }

label_80990C78:
    ctx->pc = 0x80990C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990C78: add   r4, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80990C7C:
    ctx->pc = 0x80990C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990C7C: lbz     r5, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990C80:
    ctx->pc = 0x80990C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C80u)) return;
    // 80990C80: addi    r0, r5, -165
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-165);

label_80990C84:
    ctx->pc = 0x80990C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C84u)) return;
    // 80990C84: cmplwi  r0, 0x0035
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0035u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990C88:
    ctx->pc = 0x80990C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C88u)) return;
    // 80990C88: bc    12, 1, 0x80990CCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990CCC;
        }
    }

label_80990C8C:
    ctx->pc = 0x80990C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80990C8C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990C90:
    ctx->pc = 0x80990C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C90u)) return;
    // 80990C90: addi    r3, r3, -10580
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10580);

label_80990C94:
    ctx->pc = 0x80990C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C94u)) return;
    // 80990C94: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80990C98:
    ctx->pc = 0x80990C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990C98: lwzx    r0, r3, r0
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
label_80990C9C:
    ctx->pc = 0x80990C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990C9C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990CA0:
    ctx->pc = 0x80990CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CA0u)) return;
    // 80990CA0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80990CA4:
    ctx->pc = 0x80990CA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990CA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990CA4: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80990CA8:
    ctx->pc = 0x80990CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CA8u)) return;
    // 80990CA8: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80990CAC:
    ctx->pc = 0x80990CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990CAC: stb     r0, 3(r4)
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
label_80990CB0:
    ctx->pc = 0x80990CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CB0u)) return;
    // 80990CB0: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990CB4:
    ctx->pc = 0x80990CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990CB4: li      r0, 196
    ctx->gpr[0] = (u32)(s32)(196);

label_80990CB8:
    ctx->pc = 0x80990CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990CB8: stb     r0, 3(r4)
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
label_80990CBC:
    ctx->pc = 0x80990CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CBCu)) return;
    // 80990CBC: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990CC0:
    ctx->pc = 0x80990CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990CC0: li      r0, 254
    ctx->gpr[0] = (u32)(s32)(254);

label_80990CC4:
    ctx->pc = 0x80990CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990CC4: stb     r0, 3(r4)
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
label_80990CC8:
    ctx->pc = 0x80990CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CC8u)) return;
    // 80990CC8: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990CCC:
    ctx->pc = 0x80990CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990CCC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80990CD0:
    ctx->pc = 0x80990CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CD0u)) return;
    // 80990CD0: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990CD4:
    ctx->pc = 0x80990CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990CD4: lbz     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990CD8:
    ctx->pc = 0x80990CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CD8u)) return;
    // 80990CD8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990CDC:
    ctx->pc = 0x80990CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CDCu)) return;
    // 80990CDC: cmpwi   r0, 0
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

label_80990CE0:
    ctx->pc = 0x80990CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CE0u)) return;
    // 80990CE0: bc    4, 1, 0x80990E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990E74;
        }
    }

label_80990CE4:
    ctx->pc = 0x80990CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990CE4: add   r4, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80990CE8:
    ctx->pc = 0x80990CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990CE8: lbz     r5, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990CEC:
    ctx->pc = 0x80990CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CECu)) return;
    // 80990CEC: addi    r0, r5, -206
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-206);

label_80990CF0:
    ctx->pc = 0x80990CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CF0u)) return;
    // 80990CF0: cmplwi  r0, 0x000C
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990CF4:
    ctx->pc = 0x80990CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CF4u)) return;
    // 80990CF4: bc    12, 1, 0x80990D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990D20;
        }
    }

label_80990CF8:
    ctx->pc = 0x80990CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80990CF8: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990CFC:
    ctx->pc = 0x80990CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990CFCu)) return;
    // 80990CFC: addi    r3, r3, -10632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10632);

label_80990D00:
    ctx->pc = 0x80990D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D00u)) return;
    // 80990D00: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80990D04:
    ctx->pc = 0x80990D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990D04: lwzx    r0, r3, r0
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
label_80990D08:
    ctx->pc = 0x80990D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990D08: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D0C:
    ctx->pc = 0x80990D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D0Cu)) return;
    // 80990D0C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80990D10:
    ctx->pc = 0x80990D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990D10: addi    r0, r5, 2
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(2);

label_80990D14:
    ctx->pc = 0x80990D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D14u)) return;
    // 80990D14: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80990D18:
    ctx->pc = 0x80990D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990D18: stb     r0, 3(r4)
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
label_80990D1C:
    ctx->pc = 0x80990D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D1Cu)) return;
    // 80990D1C: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990D20:
    ctx->pc = 0x80990D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990D20: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80990D24:
    ctx->pc = 0x80990D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D24u)) return;
    // 80990D24: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990D28:
    ctx->pc = 0x80990D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990D28: lha     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D2C:
    ctx->pc = 0x80990D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D2Cu)) return;
    // 80990D2C: cmpwi   r0, 1
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

label_80990D30:
    ctx->pc = 0x80990D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D30u)) return;
    // 80990D30: bc    4, 2, 0x80990DD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990DD4;
        }
    }

label_80990D34:
    ctx->pc = 0x80990D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990D34: b       0x80990D44
    {
            goto label_80990D44;
    }

label_80990D38:
    ctx->pc = 0x80990D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990D38: lbz     r3, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D3Cu)) return;
    // 80990D3C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80990D40:
    ctx->pc = 0x80990D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990D40: stb     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D44:
    ctx->pc = 0x80990D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990D44: lbz     r5, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D48u)) return;
    // 80990D48: extsb r3, r5
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80990D4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D4Cu)) return;
    // 80990D4C: cmpwi   r3, 0
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

label_80990D50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D50u)) return;
    // 80990D50: bc    4, 1, 0x80990D64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990D64;
        }
    }

label_80990D54:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990D54: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_80990D58:
    ctx->pc = 0x80990D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990D58: lbzx    r0, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D5Cu)) return;
    // 80990D5C: cmplwi  r0, 0x005F
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x005Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990D60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D60u)) return;
    // 80990D60: bc    12, 2, 0x80990D38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80990D38u;
                return;
            }
            goto label_80990D38;
        }
    }

label_80990D64:
    ctx->pc = 0x80990D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80990D64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990D68:
    ctx->pc = 0x80990D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D68u)) return;
    // 80990D68: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_80990D6C:
    ctx->pc = 0x80990D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D6Cu)) return;
    // 80990D6C: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80990D70:
    ctx->pc = 0x80990D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990D70: stb     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D74:
    ctx->pc = 0x80990D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990D74: lbz     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D78:
    ctx->pc = 0x80990D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D78u)) return;
    // 80990D78: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990D7C:
    ctx->pc = 0x80990D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D7Cu)) return;
    // 80990D7C: cmpwi   r0, 0
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

label_80990D80:
    ctx->pc = 0x80990D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D80u)) return;
    // 80990D80: bc    4, 2, 0x80990D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990D90;
        }
    }

label_80990D84:
    ctx->pc = 0x80990D84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990D84: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80990D88:
    ctx->pc = 0x80990D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990D88: stb     r0, 13(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D8C:
    ctx->pc = 0x80990D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D8Cu)) return;
    // 80990D8C: b       0x80990DC8
    {
            goto label_80990DC8;
    }

label_80990D90:
    ctx->pc = 0x80990D90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990D90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80990D90: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80990D94:
    ctx->pc = 0x80990D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990D94: stb     r0, 13(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D98:
    ctx->pc = 0x80990D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990D98: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990D9C:
    ctx->pc = 0x80990D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990D9Cu)) return;
    // 80990D9C: addi    r29, r3, 18
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(18);

label_80990DA0:
    ctx->pc = 0x80990DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DA0u)) return;
    // 80990DA0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80990DA4:
    ctx->pc = 0x80990DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DA4u)) return;
    // 80990DA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990DA8:
    ctx->pc = 0x80990DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DA8u)) return;
    // 80990DA8: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80990DAC:
    ctx->pc = 0x80990DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DACu)) return;
    // 80990DAC: bl      0x80003100
    {
            ctx->lr = 0x80990DB0u;
            ctx->pc = 0x80003100u;
            return;
    }

label_80990DB0:
    ctx->pc = 0x80990DB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990DB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990DB0: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_80990DB4:
    ctx->pc = 0x80990DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DB4u)) return;
    // 80990DB4: bl      0x8000F1B8
    {
            ctx->lr = 0x80990DB8u;
            ctx->pc = 0x8000F1B8u;
            return;
    }

label_80990DB8:
    ctx->pc = 0x80990DB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990DB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990DB8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80990DBC:
    ctx->pc = 0x80990DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DBCu)) return;
    // 80990DBC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80990DC0:
    ctx->pc = 0x80990DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DC0u)) return;
    // 80990DC0: addi    r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4);

label_80990DC4:
    ctx->pc = 0x80990DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DC4u)) return;
    // 80990DC4: bl      0x800031E8
    {
            ctx->lr = 0x80990DC8u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80990DC8:
    ctx->pc = 0x80990DC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990DC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990DC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990DCC:
    ctx->pc = 0x80990DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990DCC: stb     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990DD0:
    ctx->pc = 0x80990DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DD0u)) return;
    // 80990DD0: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990DD4:
    ctx->pc = 0x80990DD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990DD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990DD4: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990DD8:
    ctx->pc = 0x80990DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DD8u)) return;
    // 80990DD8: bc    4, 2, 0x80990DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990DF0;
        }
    }

label_80990DDC:
    ctx->pc = 0x80990DDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990DDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990DDC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80990DE0:
    ctx->pc = 0x80990DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990DE0: stb     r0, 13(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990DE4:
    ctx->pc = 0x80990DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DE4u)) return;
    // 80990DE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990DE8:
    ctx->pc = 0x80990DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990DE8: stb     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990DEC:
    ctx->pc = 0x80990DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DECu)) return;
    // 80990DEC: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990DF0:
    ctx->pc = 0x80990DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990DF0: cmpwi   r5, 16
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990DF4:
    ctx->pc = 0x80990DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DF4u)) return;
    // 80990DF4: bc    4, 2, 0x80990E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990E1C;
        }
    }

label_80990DF8:
    ctx->pc = 0x80990DF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990DF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990DF8: lbz     r3, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990DFC:
    ctx->pc = 0x80990DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990DFCu)) return;
    // 80990DFC: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80990E00:
    ctx->pc = 0x80990E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E00u)) return;
    // 80990E00: cmpwi   r0, 0
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

label_80990E04:
    ctx->pc = 0x80990E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E04u)) return;
    // 80990E04: bc    4, 1, 0x80990E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990E74;
        }
    }

label_80990E08:
    ctx->pc = 0x80990E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990E08: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80990E0C:
    ctx->pc = 0x80990E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990E0C: stb     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E10:
    ctx->pc = 0x80990E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E10u)) return;
    // 80990E10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990E14:
    ctx->pc = 0x80990E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990E14: sth     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E18:
    ctx->pc = 0x80990E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E18u)) return;
    // 80990E18: b       0x80990E74
    {
            goto label_80990E74;
    }

label_80990E1C:
    ctx->pc = 0x80990E1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990E1C: lbz     r3, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E20:
    ctx->pc = 0x80990E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E20u)) return;
    // 80990E20: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80990E24:
    ctx->pc = 0x80990E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E24u)) return;
    // 80990E24: cmpwi   r0, 7
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

label_80990E28:
    ctx->pc = 0x80990E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E28u)) return;
    // 80990E28: bc    4, 0, 0x80990E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990E74;
        }
    }

label_80990E2C:
    ctx->pc = 0x80990E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990E2C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80990E30:
    ctx->pc = 0x80990E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990E30: stb     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E34:
    ctx->pc = 0x80990E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E34u)) return;
    // 80990E34: li      r4, 95
    ctx->gpr[4] = (u32)(s32)(95);

label_80990E38:
    ctx->pc = 0x80990E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E38u)) return;
    // 80990E38: b       0x80990E54
    {
            goto label_80990E54;
    }

label_80990E3C:
    loop_80990E3C(ctx);
    if (ctx->pc == 0x80990E6Cu) goto label_80990E6C;
    return;
label_80990E40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E40u)) return;
    // 80990E40: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80990E44:
    ctx->pc = 0x80990E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990E44: stb     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E48u)) return;
    // 80990E48: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80990E4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E4Cu)) return;
    // 80990E4C: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_80990E50:
    ctx->pc = 0x80990E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990E50: stbx    r4, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E54:
    ctx->pc = 0x80990E54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990E54: lbz     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E58u)) return;
    // 80990E58: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990E5C:
    ctx->pc = 0x80990E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990E5C: lbz     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E60u)) return;
    // 80990E60: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990E64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E64u)) return;
    // 80990E64: cmpw    r3, r0
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

label_80990E68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E68u)) return;
    // 80990E68: bc    12, 0, 0x80990E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80990E3Cu;
                return;
            }
            goto label_80990E3C;
        }
    }

label_80990E6C:
    ctx->pc = 0x80990E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990E6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80990E70:
    ctx->pc = 0x80990E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990E70: sth     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990E74:
    ctx->pc = 0x80990E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990E74: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990E78:
    ctx->pc = 0x80990E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E78u)) return;
    // 80990E78: bc    12, 2, 0x80990E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990E94;
        }
    }

label_80990E7C:
    ctx->pc = 0x80990E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990E7C: li      r3, 607
    ctx->gpr[3] = (u32)(s32)(607);

label_80990E80:
    ctx->pc = 0x80990E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E80u)) return;
    // 80990E80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990E84:
    ctx->pc = 0x80990E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E84u)) return;
    // 80990E84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990E88:
    ctx->pc = 0x80990E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E88u)) return;
    // 80990E88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990E8C:
    ctx->pc = 0x80990E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E8Cu)) return;
    // 80990E8C: bl      0x8050A480
    {
            ctx->lr = 0x80990E90u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990E90:
    ctx->pc = 0x80990E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990E90: b       0x80990F70
    {
            goto label_80990F70;
    }

label_80990E94:
    ctx->pc = 0x80990E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990E94: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80990E98:
    ctx->pc = 0x80990E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990E98u)) return;
    // 80990E98: bl      0x80509D58
    {
            ctx->lr = 0x80990E9Cu;
            ctx->pc = 0x80509D58u;
            return;
    }

label_80990E9C:
    ctx->pc = 0x80990E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990E9C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80990EA0:
    ctx->pc = 0x80990EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EA0u)) return;
    // 80990EA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990EA4:
    ctx->pc = 0x80990EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EA4u)) return;
    // 80990EA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990EA8:
    ctx->pc = 0x80990EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EA8u)) return;
    // 80990EA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990EAC:
    ctx->pc = 0x80990EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EACu)) return;
    // 80990EAC: bl      0x8050A480
    {
            ctx->lr = 0x80990EB0u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990EB0:
    ctx->pc = 0x80990EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990EB0: b       0x80990F70
    {
            goto label_80990F70;
    }

label_80990EB4:
    ctx->pc = 0x80990EB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990EB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990EB4: rlwinm r0, r3, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000002u;
    }

label_80990EB8:
    ctx->pc = 0x80990EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EB8u)) return;
    // 80990EB8: cmplwi  r0, 0x0000
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

label_80990EBC:
    ctx->pc = 0x80990EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EBCu)) return;
    // 80990EBC: bc    12, 2, 0x80990F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990F54;
        }
    }

label_80990EC0:
    ctx->pc = 0x80990EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990EC0: lbz     r3, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990EC4:
    ctx->pc = 0x80990EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EC4u)) return;
    // 80990EC4: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80990EC8:
    ctx->pc = 0x80990EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EC8u)) return;
    // 80990EC8: cmpwi   r0, 0
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

label_80990ECC:
    ctx->pc = 0x80990ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990ECCu)) return;
    // 80990ECC: bc    4, 1, 0x80990ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990ED8;
        }
    }

label_80990ED0:
    ctx->pc = 0x80990ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990ED0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80990ED4:
    ctx->pc = 0x80990ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990ED4: stb     r0, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990ED8:
    ctx->pc = 0x80990ED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990ED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990ED8: lbz     r3, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990EDC:
    ctx->pc = 0x80990EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EDCu)) return;
    // 80990EDC: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80990EE0:
    ctx->pc = 0x80990EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EE0u)) return;
    // 80990EE0: cmpwi   r0, 0
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

label_80990EE4:
    ctx->pc = 0x80990EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EE4u)) return;
    // 80990EE4: bc    4, 1, 0x80990F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80990F34;
        }
    }

label_80990EE8:
    ctx->pc = 0x80990EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990EE8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80990EEC:
    ctx->pc = 0x80990EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990EEC: stb     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990EF0:
    ctx->pc = 0x80990EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990EF0: lbz     r4, 14(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(14);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990EF4:
    ctx->pc = 0x80990EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EF4u)) return;
    // 80990EF4: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80990EF8:
    ctx->pc = 0x80990EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990EF8u)) return;
    // 80990EF8: b       0x80990F0C
    {
            goto label_80990F0C;
    }

label_80990EFC:
    loop_80990EFC(ctx);
    if (ctx->pc == 0x80990F1Cu) goto label_80990F1C;
    return;
label_80990F00:
    ctx->pc = 0x80990F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990F00: lbz     r0, 5(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F04:
    ctx->pc = 0x80990F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80990F04: stb     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F08:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F08u)) return;
    // 80990F08: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80990F0C:
    ctx->pc = 0x80990F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990F0C: lbz     r0, 15(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F10u)) return;
    // 80990F10: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990F14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F14u)) return;
    // 80990F14: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80990F18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F18u)) return;
    // 80990F18: bc    12, 0, 0x80990EFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80990EFCu;
                return;
            }
            goto label_80990EFC;
        }
    }

label_80990F1C:
    ctx->pc = 0x80990F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990F1C: li      r3, 610
    ctx->gpr[3] = (u32)(s32)(610);

label_80990F20:
    ctx->pc = 0x80990F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F20u)) return;
    // 80990F20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990F24:
    ctx->pc = 0x80990F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F24u)) return;
    // 80990F24: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990F28:
    ctx->pc = 0x80990F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F28u)) return;
    // 80990F28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990F2C:
    ctx->pc = 0x80990F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F2Cu)) return;
    // 80990F2C: bl      0x8050A480
    {
            ctx->lr = 0x80990F30u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990F30:
    ctx->pc = 0x80990F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990F30: b       0x80990F70
    {
            goto label_80990F70;
    }

label_80990F34:
    ctx->pc = 0x80990F34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80990F34: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80990F38:
    ctx->pc = 0x80990F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F38u)) return;
    // 80990F38: bl      0x80509D58
    {
            ctx->lr = 0x80990F3Cu;
            ctx->pc = 0x80509D58u;
            return;
    }

label_80990F3C:
    ctx->pc = 0x80990F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990F3C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80990F40:
    ctx->pc = 0x80990F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F40u)) return;
    // 80990F40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990F44:
    ctx->pc = 0x80990F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F44u)) return;
    // 80990F44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990F48:
    ctx->pc = 0x80990F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F48u)) return;
    // 80990F48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990F4C:
    ctx->pc = 0x80990F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F4Cu)) return;
    // 80990F4C: bl      0x8050A480
    {
            ctx->lr = 0x80990F50u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_80990F50:
    ctx->pc = 0x80990F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990F50: b       0x80990F70
    {
            goto label_80990F70;
    }

label_80990F54:
    ctx->pc = 0x80990F54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990F54: rlwinm r0, r3, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000008u;
    }

label_80990F58:
    ctx->pc = 0x80990F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F58u)) return;
    // 80990F58: cmplwi  r0, 0x0000
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

label_80990F5C:
    ctx->pc = 0x80990F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F5Cu)) return;
    // 80990F5C: bc    12, 2, 0x80990F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80990F70;
        }
    }

label_80990F60:
    ctx->pc = 0x80990F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80990F60: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80990F64:
    ctx->pc = 0x80990F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990F64: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F68:
    ctx->pc = 0x80990F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F68u)) return;
    // 80990F68: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80990F6C:
    ctx->pc = 0x80990F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80990F6C: sth     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F70:
    ctx->pc = 0x80990F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80990F70: lwz     r31, 28(r1)
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
label_80990F74:
    ctx->pc = 0x80990F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80990F74: lwz     r30, 24(r1)
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
label_80990F78:
    ctx->pc = 0x80990F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80990F78: lwz     r29, 20(r1)
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
label_80990F7C:
    ctx->pc = 0x80990F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990F7C: lwz     r0, 36(r1)
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
label_80990F80:
    ctx->pc = 0x80990F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80990F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990F80: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F84:
    ctx->pc = 0x80990F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F84u)) return;
    // 80990F84: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80990F88:
    ctx->pc = 0x80990F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F88u)) return;
    // 80990F88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80990F8C:
    ctx->pc = 0x80990F8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990F8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80990F8C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F90:
    ctx->pc = 0x80990F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990F90: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F94:
    ctx->pc = 0x80990F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80990F94: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990F98:
    ctx->pc = 0x80990F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F98u)) return;
    // 80990F98: addi    r11, r1, 112
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(112);

label_80990F9C:
    ctx->pc = 0x80990F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990F9Cu)) return;
    // 80990F9C: bl      0x80006DC4
    {
            ctx->lr = 0x80990FA0u;
            ctx->pc = 0x80006DC4u;
            return;
    }

label_80990FA0:
    ctx->pc = 0x80990FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990FA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80990FA4:
    ctx->pc = 0x80990FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80990FA4: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80990FA8:
    ctx->pc = 0x80990FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FA8u)) return;
    // 80990FA8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80990FAC:
    ctx->pc = 0x80990FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FACu)) return;
    // 80990FAC: cmpwi   r0, 0
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

label_80990FB0:
    ctx->pc = 0x80990FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FB0u)) return;
    // 80990FB0: bc    12, 2, 0x8099160C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8099160C;
        }
    }

label_80990FB4:
    ctx->pc = 0x80990FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990FB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80990FB8:
    ctx->pc = 0x80990FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FB8u)) return;
    // 80990FB8: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80990FBC:
    ctx->pc = 0x80990FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FBCu)) return;
    // 80990FBC: bl      0x8060F4F8
    {
            ctx->lr = 0x80990FC0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80990FC0:
    ctx->pc = 0x80990FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80990FC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990FC4:
    ctx->pc = 0x80990FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FC4u)) return;
    // 80990FC4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80990FC8:
    ctx->pc = 0x80990FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FC8u)) return;
    // 80990FC8: bl      0x8060F4F8
    {
            ctx->lr = 0x80990FCCu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80990FCC:
    ctx->pc = 0x80990FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990FCC: bl      0x80969FB8
    {
            ctx->lr = 0x80990FD0u;
            ctx->pc = 0x80969FB8u;
            return;
    }

label_80990FD0:
    ctx->pc = 0x80990FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80990FD0: bl      0x80968ED8
    {
            ctx->lr = 0x80990FD4u;
            ctx->pc = 0x80968ED8u;
            return;
    }

label_80990FD4:
    ctx->pc = 0x80990FD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990FD4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80990FD8:
    ctx->pc = 0x80990FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FD8u)) return;
    // 80990FD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80990FDC:
    ctx->pc = 0x80990FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FDCu)) return;
    // 80990FDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80990FE0:
    ctx->pc = 0x80990FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FE0u)) return;
    // 80990FE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80990FE4:
    ctx->pc = 0x80990FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FE4u)) return;
    // 80990FE4: bl      0x8004F360
    {
            ctx->lr = 0x80990FE8u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80990FE8:
    ctx->pc = 0x80990FE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80990FE8: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80990FEC:
    ctx->pc = 0x80990FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FECu)) return;
    // 80990FEC: addi    r3, r3, -18080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18080);

label_80990FF0:
    ctx->pc = 0x80990FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FF0u)) return;
    // 80990FF0: li      r4, 48
    ctx->gpr[4] = (u32)(s32)(48);

label_80990FF4:
    ctx->pc = 0x80990FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FF4u)) return;
    // 80990FF4: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80990FF8:
    ctx->pc = 0x80990FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80990FF8u)) return;
    // 80990FF8: bl      0x80969B08
    {
            ctx->lr = 0x80990FFCu;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80990FFC:
    ctx->pc = 0x80990FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80990FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80990FFC: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991000:
    ctx->pc = 0x80991000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991000u)) return;
    // 80991000: addi    r3, r3, -17312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17312);

label_80991004:
    ctx->pc = 0x80991004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991004u)) return;
    // 80991004: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80991008:
    ctx->pc = 0x80991008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991008u)) return;
    // 80991008: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8099100C:
    ctx->pc = 0x8099100Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099100Cu)) return;
    // 8099100C: li      r6, 20
    ctx->gpr[6] = (u32)(s32)(20);

label_80991010:
    ctx->pc = 0x80991010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991010u)) return;
    // 80991010: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80991014:
    ctx->pc = 0x80991014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991014u)) return;
    // 80991014: bl      0x80969530
    {
            ctx->lr = 0x80991018u;
            ctx->pc = 0x80969530u;
            return;
    }

label_80991018:
    ctx->pc = 0x80991018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80991018: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099101C:
    ctx->pc = 0x8099101Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099101Cu)) return;
    // 8099101C: addi    r3, r3, -17248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17248);

label_80991020:
    ctx->pc = 0x80991020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991020u)) return;
    // 80991020: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80991024:
    ctx->pc = 0x80991024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991024u)) return;
    // 80991024: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80991028:
    ctx->pc = 0x80991028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991028u)) return;
    // 80991028: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8099102C:
    ctx->pc = 0x8099102Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099102Cu)) return;
    // 8099102C: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80991030:
    ctx->pc = 0x80991030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991030u)) return;
    // 80991030: bl      0x80969530
    {
            ctx->lr = 0x80991034u;
            ctx->pc = 0x80969530u;
            return;
    }

label_80991034:
    ctx->pc = 0x80991034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80991034: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991038:
    ctx->pc = 0x80991038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991038u)) return;
    // 80991038: addi    r3, r3, -17216
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17216);

label_8099103C:
    ctx->pc = 0x8099103Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099103Cu)) return;
    // 8099103C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80991040:
    ctx->pc = 0x80991040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991040u)) return;
    // 80991040: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80991044:
    ctx->pc = 0x80991044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991044u)) return;
    // 80991044: li      r6, 16
    ctx->gpr[6] = (u32)(s32)(16);

label_80991048:
    ctx->pc = 0x80991048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991048u)) return;
    // 80991048: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_8099104C:
    ctx->pc = 0x8099104Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099104Cu)) return;
    // 8099104C: bl      0x80969530
    {
            ctx->lr = 0x80991050u;
            ctx->pc = 0x80969530u;
            return;
    }

label_80991050:
    ctx->pc = 0x80991050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991050: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80991054:
    ctx->pc = 0x80991054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991054u)) return;
    // 80991054: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80991058:
    ctx->pc = 0x80991058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991058: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099105C:
    ctx->pc = 0x8099105Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099105Cu)) return;
    // 8099105C: cmpwi   r0, 0
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

label_80991060:
    ctx->pc = 0x80991060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991060u)) return;
    // 80991060: bc    4, 2, 0x8099107C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099107C;
        }
    }

label_80991064:
    ctx->pc = 0x80991064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991064: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80991068:
    ctx->pc = 0x80991068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991068u)) return;
    // 80991068: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8099106C:
    ctx->pc = 0x8099106Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099106Cu)) return;
    // 8099106C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80991070:
    ctx->pc = 0x80991070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991070u)) return;
    // 80991070: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80991074:
    ctx->pc = 0x80991074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991074u)) return;
    // 80991074: bl      0x8004F360
    {
            ctx->lr = 0x80991078u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80991078:
    ctx->pc = 0x80991078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991078: b       0x80991090
    {
            goto label_80991090;
    }

label_8099107C:
    ctx->pc = 0x8099107Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099107Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8099107C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80991080:
    ctx->pc = 0x80991080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991080u)) return;
    // 80991080: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80991084:
    ctx->pc = 0x80991084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991084u)) return;
    // 80991084: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80991088:
    ctx->pc = 0x80991088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991088u)) return;
    // 80991088: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8099108C:
    ctx->pc = 0x8099108Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099108Cu)) return;
    // 8099108C: bl      0x8004F360
    {
            ctx->lr = 0x80991090u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80991090:
    ctx->pc = 0x80991090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991090: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991094:
    ctx->pc = 0x80991094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991094u)) return;
    // 80991094: addi    r3, r3, -17200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17200);

label_80991098:
    ctx->pc = 0x80991098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991098u)) return;
    // 80991098: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8099109C:
    ctx->pc = 0x8099109Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099109Cu)) return;
    // 8099109C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_809910A0:
    ctx->pc = 0x809910A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910A0u)) return;
    // 809910A0: bl      0x80969B08
    {
            ctx->lr = 0x809910A4u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_809910A4:
    ctx->pc = 0x809910A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809910A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809910A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_809910A8:
    ctx->pc = 0x809910A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910A8u)) return;
    // 809910A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_809910AC:
    ctx->pc = 0x809910ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910ACu)) return;
    // 809910AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_809910B0:
    ctx->pc = 0x809910B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910B0u)) return;
    // 809910B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_809910B4:
    ctx->pc = 0x809910B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910B4u)) return;
    // 809910B4: bl      0x8004F360
    {
            ctx->lr = 0x809910B8u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_809910B8:
    ctx->pc = 0x809910B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809910B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809910B8: lha     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809910BC:
    ctx->pc = 0x809910BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910BCu)) return;
    // 809910BC: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809910C0:
    ctx->pc = 0x809910C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910C0u)) return;
    // 809910C0: bc    4, 0, 0x80991130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991130;
        }
    }

label_809910C4:
    ctx->pc = 0x809910C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809910C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809910C4: lha     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809910C8:
    ctx->pc = 0x809910C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910C8u)) return;
    // 809910C8: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809910CC:
    ctx->pc = 0x809910CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910CCu)) return;
    // 809910CC: bc    4, 0, 0x80991130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991130;
        }
    }

label_809910D0:
    ctx->pc = 0x809910D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 28u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809910D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 28u : 3u;
    // 809910D0: mulli   r3, r0, 22
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)22);

label_809910D4:
    ctx->pc = 0x809910D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910D4u)) return;
    // 809910D4: addi    r0, r3, 57
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(57);

label_809910D8:
    ctx->pc = 0x809910D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910D8u)) return;
    // 809910D8: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809910DC:
    ctx->pc = 0x809910DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 809910DC: sth     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809910E0:
    ctx->pc = 0x809910E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910E0u)) return;
    // 809910E0: addi    r0, r3, 21
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(21);

label_809910E4:
    ctx->pc = 0x809910E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910E4u)) return;
    // 809910E4: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809910E8:
    ctx->pc = 0x809910E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 809910E8: sth     r0, 58(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809910EC:
    ctx->pc = 0x809910ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 809910EC: lha     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809910F0:
    ctx->pc = 0x809910F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x809910F0u)) return;
    // 809910F0: mulli   r3, r0, 22
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)22);

label_809910F4:
    ctx->pc = 0x809910F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910F4u)) return;
    // 809910F4: addi    r0, r3, 76
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(76);

label_809910F8:
    ctx->pc = 0x809910F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910F8u)) return;
    // 809910F8: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809910FC:
    ctx->pc = 0x809910FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809910FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 809910FC: sth     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991100:
    ctx->pc = 0x80991100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991100u)) return;
    // 80991100: addi    r0, r3, 21
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(21);

label_80991104:
    ctx->pc = 0x80991104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991104u)) return;
    // 80991104: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991108:
    ctx->pc = 0x80991108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80991108: sth     r0, 62(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099110C:
    ctx->pc = 0x8099110Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099110Cu)) return;
    // 8099110C: li      r0, 1160
    ctx->gpr[0] = (u32)(s32)(1160);

label_80991110:
    ctx->pc = 0x80991110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80991110: sth     r0, 66(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991114:
    ctx->pc = 0x80991114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991114: sth     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991118:
    ctx->pc = 0x80991118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991118u)) return;
    // 80991118: li      r0, 1416
    ctx->gpr[0] = (u32)(s32)(1416);

label_8099111C:
    ctx->pc = 0x8099111Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099111Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099111C: sth     r0, 70(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991120:
    ctx->pc = 0x80991120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991120: sth     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991124:
    ctx->pc = 0x80991124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991124u)) return;
    // 80991124: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80991128:
    ctx->pc = 0x80991128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991128u)) return;
    // 80991128: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8099112C:
    ctx->pc = 0x8099112Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099112Cu)) return;
    // 8099112C: bl      0x80969D84
    {
            ctx->lr = 0x80991130u;
            ctx->pc = 0x80969D84u;
            return;
    }

label_80991130:
    ctx->pc = 0x80991130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991130: lha     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991134:
    ctx->pc = 0x80991134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991134u)) return;
    // 80991134: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991138:
    ctx->pc = 0x80991138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991138u)) return;
    // 80991138: bc    4, 0, 0x8099116C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099116C;
        }
    }

label_8099113C:
    ctx->pc = 0x8099113Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099113Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099113C: lha     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991140:
    ctx->pc = 0x80991140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991140u)) return;
    // 80991140: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991144:
    ctx->pc = 0x80991144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991144u)) return;
    // 80991144: bc    4, 2, 0x8099116C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099116C;
        }
    }

label_80991148:
    ctx->pc = 0x80991148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991148: lha     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099114C:
    ctx->pc = 0x8099114Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099114Cu)) return;
    // 8099114C: cmpwi   r0, 0
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

label_80991150:
    ctx->pc = 0x80991150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991150u)) return;
    // 80991150: bc    4, 2, 0x8099116C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099116C;
        }
    }

label_80991154:
    ctx->pc = 0x80991154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991154: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991158:
    ctx->pc = 0x80991158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991158u)) return;
    // 80991158: addi    r3, r3, -17088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17088);

label_8099115C:
    ctx->pc = 0x8099115Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099115Cu)) return;
    // 8099115C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80991160:
    ctx->pc = 0x80991160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991160u)) return;
    // 80991160: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80991164:
    ctx->pc = 0x80991164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991164u)) return;
    // 80991164: bl      0x80969B08
    {
            ctx->lr = 0x80991168u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80991168:
    ctx->pc = 0x80991168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991168: b       0x80991180
    {
            goto label_80991180;
    }

label_8099116C:
    ctx->pc = 0x8099116Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099116Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8099116C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991170:
    ctx->pc = 0x80991170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991170u)) return;
    // 80991170: addi    r3, r3, -17152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17152);

label_80991174:
    ctx->pc = 0x80991174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991174u)) return;
    // 80991174: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80991178:
    ctx->pc = 0x80991178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991178u)) return;
    // 80991178: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8099117C:
    ctx->pc = 0x8099117Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099117Cu)) return;
    // 8099117C: bl      0x80969B08
    {
            ctx->lr = 0x80991180u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80991180:
    ctx->pc = 0x80991180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991180: lha     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991184:
    ctx->pc = 0x80991184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991184u)) return;
    // 80991184: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991188:
    ctx->pc = 0x80991188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991188u)) return;
    // 80991188: bc    4, 0, 0x809911BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809911BC;
        }
    }

label_8099118C:
    ctx->pc = 0x8099118Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099118Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099118C: lha     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991190:
    ctx->pc = 0x80991190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991190u)) return;
    // 80991190: cmpwi   r0, 17
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991194:
    ctx->pc = 0x80991194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991194u)) return;
    // 80991194: bc    4, 2, 0x809911BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809911BC;
        }
    }

label_80991198:
    ctx->pc = 0x80991198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991198: lha     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099119C:
    ctx->pc = 0x8099119Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099119Cu)) return;
    // 8099119C: cmpwi   r0, 0
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

label_809911A0:
    ctx->pc = 0x809911A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911A0u)) return;
    // 809911A0: bc    4, 2, 0x809911BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809911BC;
        }
    }

label_809911A4:
    ctx->pc = 0x809911A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809911A4: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809911A8:
    ctx->pc = 0x809911A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911A8u)) return;
    // 809911A8: addi    r3, r3, -16960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16960);

label_809911AC:
    ctx->pc = 0x809911ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911ACu)) return;
    // 809911AC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_809911B0:
    ctx->pc = 0x809911B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911B0u)) return;
    // 809911B0: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_809911B4:
    ctx->pc = 0x809911B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911B4u)) return;
    // 809911B4: bl      0x80969B08
    {
            ctx->lr = 0x809911B8u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_809911B8:
    ctx->pc = 0x809911B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809911B8: b       0x809911D0
    {
            goto label_809911D0;
    }

label_809911BC:
    ctx->pc = 0x809911BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809911BC: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809911C0:
    ctx->pc = 0x809911C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911C0u)) return;
    // 809911C0: addi    r3, r3, -17024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17024);

label_809911C4:
    ctx->pc = 0x809911C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911C4u)) return;
    // 809911C4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_809911C8:
    ctx->pc = 0x809911C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911C8u)) return;
    // 809911C8: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_809911CC:
    ctx->pc = 0x809911CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911CCu)) return;
    // 809911CC: bl      0x80969B08
    {
            ctx->lr = 0x809911D0u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_809911D0:
    ctx->pc = 0x809911D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809911D0: lha     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809911D4:
    ctx->pc = 0x809911D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911D4u)) return;
    // 809911D4: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809911D8:
    ctx->pc = 0x809911D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911D8u)) return;
    // 809911D8: bc    4, 0, 0x80991214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991214;
        }
    }

label_809911DC:
    ctx->pc = 0x809911DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809911DC: lha     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809911E0:
    ctx->pc = 0x809911E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911E0u)) return;
    // 809911E0: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809911E4:
    ctx->pc = 0x809911E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911E4u)) return;
    // 809911E4: bc    12, 2, 0x809911F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809911F0;
        }
    }

label_809911E8:
    ctx->pc = 0x809911E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809911E8: cmpwi   r0, 17
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809911EC:
    ctx->pc = 0x809911ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911ECu)) return;
    // 809911EC: bc    4, 2, 0x80991214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991214;
        }
    }

label_809911F0:
    ctx->pc = 0x809911F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809911F0: lha     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809911F4:
    ctx->pc = 0x809911F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911F4u)) return;
    // 809911F4: cmpwi   r0, 1
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

label_809911F8:
    ctx->pc = 0x809911F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809911F8u)) return;
    // 809911F8: bc    4, 2, 0x80991214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991214;
        }
    }

label_809911FC:
    ctx->pc = 0x809911FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809911FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809911FC: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991200:
    ctx->pc = 0x80991200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991200u)) return;
    // 80991200: addi    r3, r3, -16832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16832);

label_80991204:
    ctx->pc = 0x80991204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991204u)) return;
    // 80991204: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80991208:
    ctx->pc = 0x80991208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991208u)) return;
    // 80991208: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8099120C:
    ctx->pc = 0x8099120Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099120Cu)) return;
    // 8099120C: bl      0x80969B08
    {
            ctx->lr = 0x80991210u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80991210:
    ctx->pc = 0x80991210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991210: b       0x80991228
    {
            goto label_80991228;
    }

label_80991214:
    ctx->pc = 0x80991214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991214: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991218:
    ctx->pc = 0x80991218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991218u)) return;
    // 80991218: addi    r3, r3, -16896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16896);

label_8099121C:
    ctx->pc = 0x8099121Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099121Cu)) return;
    // 8099121C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80991220:
    ctx->pc = 0x80991220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991220u)) return;
    // 80991220: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80991224:
    ctx->pc = 0x80991224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991224u)) return;
    // 80991224: bl      0x80969B08
    {
            ctx->lr = 0x80991228u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80991228:
    ctx->pc = 0x80991228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991228: lha     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099122C:
    ctx->pc = 0x8099122Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099122Cu)) return;
    // 8099122C: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991230:
    ctx->pc = 0x80991230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991230u)) return;
    // 80991230: bc    4, 0, 0x8099126C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099126C;
        }
    }

label_80991234:
    ctx->pc = 0x80991234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991234: lha     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991238:
    ctx->pc = 0x80991238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991238u)) return;
    // 80991238: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8099123C:
    ctx->pc = 0x8099123Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099123Cu)) return;
    // 8099123C: bc    12, 2, 0x80991248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80991248;
        }
    }

label_80991240:
    ctx->pc = 0x80991240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80991240: cmpwi   r0, 17
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991244:
    ctx->pc = 0x80991244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991244u)) return;
    // 80991244: bc    4, 2, 0x8099126C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099126C;
        }
    }

label_80991248:
    ctx->pc = 0x80991248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991248: lha     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099124C:
    ctx->pc = 0x8099124Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099124Cu)) return;
    // 8099124C: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991250:
    ctx->pc = 0x80991250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991250u)) return;
    // 80991250: bc    4, 2, 0x8099126C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099126C;
        }
    }

label_80991254:
    ctx->pc = 0x80991254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991254: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991258:
    ctx->pc = 0x80991258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991258u)) return;
    // 80991258: addi    r3, r3, -16704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16704);

label_8099125C:
    ctx->pc = 0x8099125Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099125Cu)) return;
    // 8099125C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80991260:
    ctx->pc = 0x80991260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991260u)) return;
    // 80991260: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80991264:
    ctx->pc = 0x80991264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991264u)) return;
    // 80991264: bl      0x80969B08
    {
            ctx->lr = 0x80991268u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80991268:
    ctx->pc = 0x80991268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991268: b       0x80991280
    {
            goto label_80991280;
    }

label_8099126C:
    ctx->pc = 0x8099126Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099126Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8099126C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991270:
    ctx->pc = 0x80991270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991270u)) return;
    // 80991270: addi    r3, r3, -16768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16768);

label_80991274:
    ctx->pc = 0x80991274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991274u)) return;
    // 80991274: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80991278:
    ctx->pc = 0x80991278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991278u)) return;
    // 80991278: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8099127C:
    ctx->pc = 0x8099127Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099127Cu)) return;
    // 8099127C: bl      0x80969B08
    {
            ctx->lr = 0x80991280u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80991280:
    ctx->pc = 0x80991280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991280: bl      0x80968ED8
    {
            ctx->lr = 0x80991284u;
            ctx->pc = 0x80968ED8u;
            return;
    }

label_80991284:
    ctx->pc = 0x80991284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991284: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80991288:
    ctx->pc = 0x80991288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991288u)) return;
    // 80991288: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_8099128C:
    ctx->pc = 0x8099128Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099128Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099128C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991290:
    ctx->pc = 0x80991290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991290u)) return;
    // 80991290: cmpwi   r0, 0
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

label_80991294:
    ctx->pc = 0x80991294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991294u)) return;
    // 80991294: bc    4, 2, 0x809912B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809912B0;
        }
    }

label_80991298:
    ctx->pc = 0x80991298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991298: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_8099129C:
    ctx->pc = 0x8099129Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099129Cu)) return;
    // 8099129C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_809912A0:
    ctx->pc = 0x809912A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912A0u)) return;
    // 809912A0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_809912A4:
    ctx->pc = 0x809912A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912A4u)) return;
    // 809912A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_809912A8:
    ctx->pc = 0x809912A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912A8u)) return;
    // 809912A8: bl      0x8004F360
    {
            ctx->lr = 0x809912ACu;
            ctx->pc = 0x8004F360u;
            return;
    }

label_809912AC:
    ctx->pc = 0x809912ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809912ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809912AC: b       0x809912C4
    {
            goto label_809912C4;
    }

label_809912B0:
    ctx->pc = 0x809912B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809912B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809912B0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_809912B4:
    ctx->pc = 0x809912B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912B4u)) return;
    // 809912B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_809912B8:
    ctx->pc = 0x809912B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912B8u)) return;
    // 809912B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_809912BC:
    ctx->pc = 0x809912BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912BCu)) return;
    // 809912BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_809912C0:
    ctx->pc = 0x809912C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912C0u)) return;
    // 809912C0: bl      0x8004F360
    {
            ctx->lr = 0x809912C4u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_809912C4:
    ctx->pc = 0x809912C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809912C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809912C4: lha     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809912C8:
    ctx->pc = 0x809912C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912C8u)) return;
    // 809912C8: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809912CC:
    ctx->pc = 0x809912CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912CCu)) return;
    // 809912CC: bc    4, 0, 0x80991308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991308;
        }
    }

label_809912D0:
    ctx->pc = 0x809912D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809912D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809912D0: lha     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809912D4:
    ctx->pc = 0x809912D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912D4u)) return;
    // 809912D4: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809912D8:
    ctx->pc = 0x809912D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912D8u)) return;
    // 809912D8: bc    12, 2, 0x809912E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809912E4;
        }
    }

label_809912DC:
    ctx->pc = 0x809912DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809912DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809912DC: cmpwi   r0, 17
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809912E0:
    ctx->pc = 0x809912E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912E0u)) return;
    // 809912E0: bc    4, 2, 0x80991308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991308;
        }
    }

label_809912E4:
    ctx->pc = 0x809912E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809912E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809912E4: lha     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809912E8:
    ctx->pc = 0x809912E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912E8u)) return;
    // 809912E8: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809912EC:
    ctx->pc = 0x809912ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912ECu)) return;
    // 809912EC: bc    4, 2, 0x80991308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991308;
        }
    }

label_809912F0:
    ctx->pc = 0x809912F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809912F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 809912F0: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809912F4:
    ctx->pc = 0x809912F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912F4u)) return;
    // 809912F4: addi    r3, r3, -16656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16656);

label_809912F8:
    ctx->pc = 0x809912F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912F8u)) return;
    // 809912F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_809912FC:
    ctx->pc = 0x809912FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809912FCu)) return;
    // 809912FC: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80991300:
    ctx->pc = 0x80991300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991300u)) return;
    // 80991300: bl      0x80969B08
    {
            ctx->lr = 0x80991304u;
            ctx->pc = 0x80969B08u;
            return;
    }

label_80991304:
    ctx->pc = 0x80991304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991304: b       0x8099131C
    {
            goto label_8099131C;
    }

label_80991308:
    ctx->pc = 0x80991308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991308: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099130C:
    ctx->pc = 0x8099130Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099130Cu)) return;
    // 8099130C: addi    r3, r3, -16720
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16720);

label_80991310:
    ctx->pc = 0x80991310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991310u)) return;
    // 80991310: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80991314:
    ctx->pc = 0x80991314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991314u)) return;
    // 80991314: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_80991318:
    ctx->pc = 0x80991318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991318u)) return;
    // 80991318: bl      0x80969B08
    {
            ctx->lr = 0x8099131Cu;
            ctx->pc = 0x80969B08u;
            return;
    }

label_8099131C:
    ctx->pc = 0x8099131Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099131Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8099131C: lis     r3, -27846
    ctx->gpr[3] = ((u32)(s32)(-27846) << 16);

label_80991320:
    ctx->pc = 0x80991320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991320u)) return;
    // 80991320: addi    r3, r3, -32700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32700);

label_80991324:
    ctx->pc = 0x80991324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991324u)) return;
    // 80991324: bl      0x8060F594
    {
            ctx->lr = 0x80991328u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80991328:
    ctx->pc = 0x80991328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991328: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8099132C:
    ctx->pc = 0x8099132Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099132Cu)) return;
    // 8099132C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80991330:
    ctx->pc = 0x80991330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991330u)) return;
    // 80991330: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80991334:
    ctx->pc = 0x80991334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991334u)) return;
    // 80991334: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80991338:
    ctx->pc = 0x80991338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991338u)) return;
    // 80991338: bl      0x8004F360
    {
            ctx->lr = 0x8099133Cu;
            ctx->pc = 0x8004F360u;
            return;
    }

label_8099133C:
    ctx->pc = 0x8099133Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099133Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8099133C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80991340:
    ctx->pc = 0x80991340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991340u)) return;
    // 80991340: li      r27, 76
    ctx->gpr[27] = (u32)(s32)(76);

label_80991344:
    ctx->pc = 0x80991344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991344u)) return;
    // 80991344: li      r26, 98
    ctx->gpr[26] = (u32)(s32)(98);

label_80991348:
    ctx->pc = 0x80991348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991348u)) return;
    // 80991348: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099134C:
    ctx->pc = 0x8099134Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099134Cu)) return;
    // 8099134C: addi    r25, r3, -18336
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(-18336);

label_80991350:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80991350: extsh r0, r27
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[27];
    }

label_80991354:
    ctx->pc = 0x80991354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991354: sth     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991358:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991358u)) return;
    // 80991358: extsh r0, r26
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[26];
    }

label_8099135C:
    ctx->pc = 0x8099135Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099135Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099135C: sth     r0, 46(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991360:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991360u)) return;
    // 80991360: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80991364:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991364u)) return;
    // 80991364: li      r30, 57
    ctx->gpr[30] = (u32)(s32)(57);

label_80991368:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991368u)) return;
    // 80991368: li      r29, 79
    ctx->gpr[29] = (u32)(s32)(79);

label_8099136C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099136Cu)) return;
    // 8099136C: or   r28, r25, r25
    {
        ctx->gpr[28] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80991370:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80991370: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80991374:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991374u)) return;
    // 80991374: extsh r0, r30
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_80991378:
    ctx->pc = 0x80991378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991378: sth     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099137C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099137Cu)) return;
    // 8099137C: extsh r0, r29
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_80991380:
    ctx->pc = 0x80991380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991380: sth     r0, 42(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991384:
    ctx->pc = 0x80991384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991384: lbz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991388:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991388u)) return;
    // 80991388: cmpwi   r3, 0
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

label_8099138C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099138Cu)) return;
    // 8099138C: bc    4, 1, 0x809913A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809913A0;
        }
    }

label_80991390:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80991390: cmpwi   r3, 95
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(95);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991394:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991394u)) return;
    // 80991394: bc    12, 2, 0x809913A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809913A0;
        }
    }

label_80991398:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80991398: cmpwi   r3, 255
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8099139C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099139Cu)) return;
    // 8099139C: bc    12, 0, 0x809913B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809913B8;
        }
    }

label_809913A0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809913A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 809913A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809913A4:
    ctx->pc = 0x809913A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809913A4: sth     r0, 54(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809913A8:
    ctx->pc = 0x809913A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809913A8: sth     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809913AC:
    ctx->pc = 0x809913ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809913AC: sth     r0, 50(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809913B0:
    ctx->pc = 0x809913B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809913B0: sth     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809913B4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913B4u)) return;
    // 809913B4: b       0x80991430
    {
            goto label_80991430;
    }

label_809913B8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809913B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809913B8: cmpwi   r3, 96
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809913BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913BCu)) return;
    // 809913BC: bc    12, 0, 0x809913C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809913C4;
        }
    }

label_809913C0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809913C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809913C0: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_809913C4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 37u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809913C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 37u : 1u;
    // 809913C4: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_809913C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913C8u)) return;
    // 809913C8: lis     r3, -19946
    ctx->gpr[3] = ((u32)(s32)(-19946) << 16);

label_809913CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913CCu)) return;
    // 809913CC: addi    r0, r3, 17097
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17097);

label_809913D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x809913D0u)) return;
    // 809913D0: mulhw   r0, r0, r6
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_809913D4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913D4u)) return;
    // 809913D4: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_809913D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913D8u)) return;
    // 809913D8: srawi r0, r5, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_809913DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913DCu)) return;
    // 809913DC: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_809913E0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913E0u)) return;
    // 809913E0: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_809913E4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x809913E4u)) return;
    // 809913E4: mulli   r0, r0, 23
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)23);

label_809913E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913E8u)) return;
    // 809913E8: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_809913EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x809913ECu)) return;
    // 809913EC: mulli   r3, r0, 176
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)176);

label_809913F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913F0u)) return;
    // 809913F0: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_809913F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913F4u)) return;
    // 809913F4: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809913F8:
    ctx->pc = 0x809913F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 809913F8: sth     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809913FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809913FCu)) return;
    // 809913FC: addi    r0, r3, 168
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(168);

label_80991400:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991400u)) return;
    // 80991400: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991404:
    ctx->pc = 0x80991404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80991404: sth     r0, 50(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991408:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991408u)) return;
    // 80991408: srawi r0, r5, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8099140C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099140Cu)) return;
    // 8099140C: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_80991410:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991410u)) return;
    // 80991410: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80991414:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80991414u)) return;
    // 80991414: mulli   r3, r0, 352
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)352);

label_80991418:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991418u)) return;
    // 80991418: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_8099141C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099141Cu)) return;
    // 8099141C: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991420:
    ctx->pc = 0x80991420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991420: sth     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991424:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991424u)) return;
    // 80991424: addi    r0, r3, 336
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(336);

label_80991428:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991428u)) return;
    // 80991428: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8099142C:
    ctx->pc = 0x8099142Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099142Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8099142C: sth     r0, 54(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991430:
    ctx->pc = 0x80991430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991430: lha     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991434:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991434u)) return;
    // 80991434: cmpw    r24, r0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991438:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991438u)) return;
    // 80991438: bc    4, 2, 0x80991450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991450;
        }
    }

label_8099143C:
    ctx->pc = 0x8099143Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099143Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099143C: lha     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991440:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991440u)) return;
    // 80991440: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991444:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991444u)) return;
    // 80991444: bc    4, 2, 0x80991450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991450;
        }
    }

label_80991448:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80991448: lis     r3, -1
    ctx->gpr[3] = ((u32)(s32)(-1) << 16);

label_8099144C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099144Cu)) return;
    // 8099144C: addi    r4, r3, 255
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(255);

label_80991450:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80991450: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_80991454:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991454u)) return;
    // 80991454: bl      0x80969D84
    {
            ctx->lr = 0x80991458u;
            ctx->pc = 0x80969D84u;
            return;
    }

label_80991458:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80991458: addi    r30, r30, 22
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(22);

label_8099145C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099145Cu)) return;
    // 8099145C: addi    r29, r29, 22
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(22);

label_80991460:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991460u)) return;
    // 80991460: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80991464:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991464u)) return;
    // 80991464: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_80991468:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991468u)) return;
    // 80991468: cmpwi   r23, 16
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8099146C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099146Cu)) return;
    // 8099146C: bc    12, 0, 0x80991370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80991370u;
                return;
            }
            goto label_80991370;
        }
    }

label_80991470:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80991470: addi    r27, r27, 22
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(22);

label_80991474:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991474u)) return;
    // 80991474: addi    r26, r26, 22
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(22);

label_80991478:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991478u)) return;
    // 80991478: addi    r25, r25, 16
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(16);

label_8099147C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099147Cu)) return;
    // 8099147C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80991480:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991480u)) return;
    // 80991480: cmpwi   r24, 15
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991484:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991484u)) return;
    // 80991484: bc    12, 0, 0x80991350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80991350u;
                return;
            }
            goto label_80991350;
        }
    }

label_80991488:
    ctx->pc = 0x80991488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80991488: li      r0, 131
    ctx->gpr[0] = (u32)(s32)(131);

label_8099148C:
    ctx->pc = 0x8099148Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099148Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099148C: sth     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991490:
    ctx->pc = 0x80991490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991490u)) return;
    // 80991490: li      r0, 153
    ctx->gpr[0] = (u32)(s32)(153);

label_80991494:
    ctx->pc = 0x80991494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991494: sth     r0, 30(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991498:
    ctx->pc = 0x80991498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991498u)) return;
    // 80991498: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_8099149C:
    ctx->pc = 0x8099149Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099149Cu)) return;
    // 8099149C: li      r25, 433
    ctx->gpr[25] = (u32)(s32)(433);

label_809914A0:
    ctx->pc = 0x809914A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914A0u)) return;
    // 809914A0: b       0x8099157C
    {
            goto label_8099157C;
    }

label_809914A4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809914A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 809914A4: extsh r3, r25
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[25];
    }

label_809914A8:
    ctx->pc = 0x809914A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809914A8: sth     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809914AC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914ACu)) return;
    // 809914AC: addi    r0, r3, 22
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22);

label_809914B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914B0u)) return;
    // 809914B0: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809914B4:
    ctx->pc = 0x809914B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809914B4: sth     r0, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809914B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914B8u)) return;
    // 809914B8: addi    r0, r23, 4
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(4);

label_809914BC:
    ctx->pc = 0x809914BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809914BC: lbzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809914C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914C0u)) return;
    // 809914C0: cmpwi   r3, 0
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

label_809914C4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914C4u)) return;
    // 809914C4: bc    4, 1, 0x809914D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809914D8;
        }
    }

label_809914C8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809914C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809914C8: cmpwi   r3, 95
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(95);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809914CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914CCu)) return;
    // 809914CC: bc    12, 2, 0x809914D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809914D8;
        }
    }

label_809914D0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809914D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809914D0: cmpwi   r3, 255
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809914D4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914D4u)) return;
    // 809914D4: bc    12, 0, 0x809914F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809914F0;
        }
    }

label_809914D8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809914D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 809914D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809914DC:
    ctx->pc = 0x809914DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809914DC: sth     r0, 38(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809914E0:
    ctx->pc = 0x809914E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809914E0: sth     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809914E4:
    ctx->pc = 0x809914E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809914E4: sth     r0, 34(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809914E8:
    ctx->pc = 0x809914E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809914E8: sth     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809914EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914ECu)) return;
    // 809914EC: b       0x80991568
    {
            goto label_80991568;
    }

label_809914F0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809914F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809914F0: cmpwi   r3, 96
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809914F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809914F4u)) return;
    // 809914F4: bc    12, 0, 0x809914FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809914FC;
        }
    }

label_809914F8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809914F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809914F8: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_809914FC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 37u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809914FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 37u : 1u;
    // 809914FC: addi    r5, r3, -1
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-1);

label_80991500:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991500u)) return;
    // 80991500: lis     r3, -19946
    ctx->gpr[3] = ((u32)(s32)(-19946) << 16);

label_80991504:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991504u)) return;
    // 80991504: addi    r0, r3, 17097
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17097);

label_80991508:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80991508u)) return;
    // 80991508: mulhw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_8099150C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099150Cu)) return;
    // 8099150C: add   r4, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80991510:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991510u)) return;
    // 80991510: srawi r0, r4, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80991514:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991514u)) return;
    // 80991514: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_80991518:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991518u)) return;
    // 80991518: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8099151C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8099151Cu)) return;
    // 8099151C: mulli   r0, r0, 23
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)23);

label_80991520:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991520u)) return;
    // 80991520: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80991524:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80991524u)) return;
    // 80991524: mulli   r3, r0, 176
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)176);

label_80991528:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991528u)) return;
    // 80991528: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_8099152C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099152Cu)) return;
    // 8099152C: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991530:
    ctx->pc = 0x80991530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80991530: sth     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991534:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991534u)) return;
    // 80991534: addi    r0, r3, 168
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(168);

label_80991538:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991538u)) return;
    // 80991538: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8099153C:
    ctx->pc = 0x8099153Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099153Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8099153C: sth     r0, 34(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991540:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991540u)) return;
    // 80991540: srawi r0, r4, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80991544:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991544u)) return;
    // 80991544: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_80991548:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991548u)) return;
    // 80991548: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8099154C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8099154Cu)) return;
    // 8099154C: mulli   r3, r0, 352
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)352);

label_80991550:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991550u)) return;
    // 80991550: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_80991554:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991554u)) return;
    // 80991554: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991558:
    ctx->pc = 0x80991558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991558: sth     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099155C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099155Cu)) return;
    // 8099155C: addi    r0, r3, 336
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(336);

label_80991560:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991560u)) return;
    // 80991560: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991564:
    ctx->pc = 0x80991564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80991564: sth     r0, 38(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991568:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991568: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_8099156C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099156Cu)) return;
    // 8099156C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80991570:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991570u)) return;
    // 80991570: bl      0x80969D84
    {
            ctx->lr = 0x80991574u;
            ctx->pc = 0x80969D84u;
            return;
    }

label_80991574:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80991574: addi    r25, r25, 22
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(22);

label_80991578:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991578u)) return;
    // 80991578: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_8099157C:
    ctx->pc = 0x8099157Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099157Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099157C: lbz     r0, 15(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991580:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991580u)) return;
    // 80991580: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80991584:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991584u)) return;
    // 80991584: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991588:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991588u)) return;
    // 80991588: bc    12, 0, 0x809914A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x809914A4u;
                return;
            }
            goto label_809914A4;
        }
    }

label_8099158C:
    ctx->pc = 0x8099158Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099158Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099158C: lha     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991590:
    ctx->pc = 0x80991590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991590u)) return;
    // 80991590: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80991594:
    ctx->pc = 0x80991594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991594u)) return;
    // 80991594: bc    4, 0, 0x80991608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991608;
        }
    }

label_80991598:
    ctx->pc = 0x80991598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991598: bl      0x80968ED8
    {
            ctx->lr = 0x8099159Cu;
            ctx->pc = 0x80968ED8u;
            return;
    }

label_8099159C:
    ctx->pc = 0x8099159Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099159Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8099159C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_809915A0:
    ctx->pc = 0x809915A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915A0u)) return;
    // 809915A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_809915A4:
    ctx->pc = 0x809915A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915A4u)) return;
    // 809915A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_809915A8:
    ctx->pc = 0x809915A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915A8u)) return;
    // 809915A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_809915AC:
    ctx->pc = 0x809915ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915ACu)) return;
    // 809915AC: bl      0x8004F360
    {
            ctx->lr = 0x809915B0u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_809915B0:
    ctx->pc = 0x809915B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809915B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 809915B0: lbz     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915B4:
    ctx->pc = 0x809915B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915B4u)) return;
    // 809915B4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_809915B8:
    ctx->pc = 0x809915B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x809915B8u)) return;
    // 809915B8: mulli   r3, r0, 22
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)22);

label_809915BC:
    ctx->pc = 0x809915BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915BCu)) return;
    // 809915BC: addi    r0, r3, 431
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(431);

label_809915C0:
    ctx->pc = 0x809915C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915C0u)) return;
    // 809915C0: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809915C4:
    ctx->pc = 0x809915C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 809915C4: sth     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915C8:
    ctx->pc = 0x809915C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915C8u)) return;
    // 809915C8: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_809915CC:
    ctx->pc = 0x809915CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915CCu)) return;
    // 809915CC: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_809915D0:
    ctx->pc = 0x809915D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 809915D0: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915D4:
    ctx->pc = 0x809915D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915D4u)) return;
    // 809915D4: li      r0, 130
    ctx->gpr[0] = (u32)(s32)(130);

label_809915D8:
    ctx->pc = 0x809915D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 809915D8: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915DC:
    ctx->pc = 0x809915DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915DCu)) return;
    // 809915DC: li      r0, 156
    ctx->gpr[0] = (u32)(s32)(156);

label_809915E0:
    ctx->pc = 0x809915E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 809915E0: sth     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915E4:
    ctx->pc = 0x809915E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915E4u)) return;
    // 809915E4: li      r0, 1160
    ctx->gpr[0] = (u32)(s32)(1160);

label_809915E8:
    ctx->pc = 0x809915E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809915E8: sth     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915EC:
    ctx->pc = 0x809915ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809915EC: sth     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915F0:
    ctx->pc = 0x809915F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915F0u)) return;
    // 809915F0: li      r0, 1416
    ctx->gpr[0] = (u32)(s32)(1416);

label_809915F4:
    ctx->pc = 0x809915F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809915F4: sth     r0, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915F8:
    ctx->pc = 0x809915F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809915F8: sth     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809915FC:
    ctx->pc = 0x809915FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809915FCu)) return;
    // 809915FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80991600:
    ctx->pc = 0x80991600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991600u)) return;
    // 80991600: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80991604:
    ctx->pc = 0x80991604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991604u)) return;
    // 80991604: bl      0x80969D84
    {
            ctx->lr = 0x80991608u;
            ctx->pc = 0x80969D84u;
            return;
    }

label_80991608:
    ctx->pc = 0x80991608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991608: bl      0x80969FB4
    {
            ctx->lr = 0x8099160Cu;
            ctx->pc = 0x80969FB4u;
            return;
    }

label_8099160C:
    ctx->pc = 0x8099160Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099160Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8099160C: addi    r11, r1, 112
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(112);

label_80991610:
    ctx->pc = 0x80991610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991610u)) return;
    // 80991610: bl      0x80006E10
    {
            ctx->lr = 0x80991614u;
            ctx->pc = 0x80006E10u;
            return;
    }

label_80991614:
    ctx->pc = 0x80991614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991614: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991618:
    ctx->pc = 0x80991618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80991618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991618: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099161C:
    ctx->pc = 0x8099161Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099161Cu)) return;
    // 8099161C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80991620:
    ctx->pc = 0x80991620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991620u)) return;
    // 80991620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991624:
    ctx->pc = 0x80991624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991624: lbz     r3, 13(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991628:
    ctx->pc = 0x80991628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991628u)) return;
    // 80991628: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8099162C:
    ctx->pc = 0x8099162Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099162Cu)) return;
    // 8099162C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991630:
    ctx->pc = 0x80991630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80991630: stwu     r1, -16(r1)
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
label_80991634:
    ctx->pc = 0x80991634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80991634: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991638:
    ctx->pc = 0x80991638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80991638: stw     r0, 20(r1)
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
label_8099163C:
    ctx->pc = 0x8099163Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099163Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8099163C: stw     r31, 12(r1)
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
label_80991640:
    ctx->pc = 0x80991640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991640u)) return;
    // 80991640: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80991644:
    ctx->pc = 0x80991644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991644u)) return;
    // 80991644: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80991648:
    ctx->pc = 0x80991648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80991648: stb     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099164C:
    ctx->pc = 0x8099164Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099164Cu)) return;
    // 8099164C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80991650:
    ctx->pc = 0x80991650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991650: stb     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991654:
    ctx->pc = 0x80991654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991654u)) return;
    // 80991654: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_80991658:
    ctx->pc = 0x80991658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991658: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099165C:
    ctx->pc = 0x8099165Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099165Cu)) return;
    // 8099165C: addi    r4, r4, 18
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18);

label_80991660:
    ctx->pc = 0x80991660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991660u)) return;
    // 80991660: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80991664:
    ctx->pc = 0x80991664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991664u)) return;
    // 80991664: bl      0x800031E8
    {
            ctx->lr = 0x80991668u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80991668:
    ctx->pc = 0x80991668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80991668: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8099166C:
    ctx->pc = 0x8099166Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099166Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099166C: stb     r0, 11(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991670:
    ctx->pc = 0x80991670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991670u)) return;
    // 80991670: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_80991674:
    ctx->pc = 0x80991674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991674u)) return;
    // 80991674: bl      0x8000F1B8
    {
            ctx->lr = 0x80991678u;
            ctx->pc = 0x8000F1B8u;
            return;
    }

label_80991678:
    ctx->pc = 0x80991678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80991678: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8099167C:
    ctx->pc = 0x8099167Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099167Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8099167C: stb     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991680:
    ctx->pc = 0x80991680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80991680: stb     r0, 15(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991684:
    ctx->pc = 0x80991684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991684u)) return;
    // 80991684: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80991688:
    ctx->pc = 0x80991688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80991688: sth     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099168C:
    ctx->pc = 0x8099168Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099168Cu)) return;
    // 8099168C: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80991690:
    ctx->pc = 0x80991690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80991690: sth     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991694:
    ctx->pc = 0x80991694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991694u)) return;
    // 80991694: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80991698:
    ctx->pc = 0x80991698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80991698: sth     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099169C:
    ctx->pc = 0x8099169Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099169Cu)) return;
    // 8099169C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809916A0:
    ctx->pc = 0x809916A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809916A0: sth     r0, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809916A4:
    ctx->pc = 0x809916A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809916A4: sth     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809916A8:
    ctx->pc = 0x809916A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809916A8: lwz     r31, 12(r1)
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
label_809916AC:
    ctx->pc = 0x809916ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809916AC: lwz     r0, 20(r1)
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
label_809916B0:
    ctx->pc = 0x809916B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809916B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809916B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809916B4:
    ctx->pc = 0x809916B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916B4u)) return;
    // 809916B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809916B8:
    ctx->pc = 0x809916B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916B8u)) return;
    // 809916B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809916BC:
    ctx->pc = 0x809916BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809916BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 809916BC: stwu     r1, -16(r1)
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
label_809916C0:
    ctx->pc = 0x809916C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809916C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809916C4:
    ctx->pc = 0x809916C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809916C4: stw     r0, 20(r1)
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
label_809916C8:
    ctx->pc = 0x809916C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809916C8: stw     r31, 12(r1)
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
label_809916CC:
    ctx->pc = 0x809916CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916CCu)) return;
    // 809916CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_809916D0:
    ctx->pc = 0x809916D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916D0u)) return;
    // 809916D0: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_809916D4:
    ctx->pc = 0x809916D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809916D4: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809916D8:
    ctx->pc = 0x809916D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916D8u)) return;
    // 809916D8: addi    r4, r4, 18
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18);

label_809916DC:
    ctx->pc = 0x809916DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916DCu)) return;
    // 809916DC: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_809916E0:
    ctx->pc = 0x809916E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916E0u)) return;
    // 809916E0: bl      0x800031E8
    {
            ctx->lr = 0x809916E4u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_809916E4:
    ctx->pc = 0x809916E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809916E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 809916E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809916E8:
    ctx->pc = 0x809916E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809916E8: stb     r0, 11(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809916EC:
    ctx->pc = 0x809916ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809916EC: lwz     r31, 12(r1)
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
label_809916F0:
    ctx->pc = 0x809916F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809916F0: lwz     r0, 20(r1)
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
label_809916F4:
    ctx->pc = 0x809916F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809916F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809916F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809916F8:
    ctx->pc = 0x809916F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916F8u)) return;
    // 809916F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809916FC:
    ctx->pc = 0x809916FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809916FCu)) return;
    // 809916FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991700:
    ctx->pc = 0x80991700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80991700: stwu     r1, -16(r1)
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
label_80991704:
    ctx->pc = 0x80991704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80991704: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991708:
    ctx->pc = 0x80991708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80991708: stw     r0, 20(r1)
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
label_8099170C:
    ctx->pc = 0x8099170Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099170Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8099170C: stw     r31, 12(r1)
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
label_80991710:
    ctx->pc = 0x80991710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80991710: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991714:
    ctx->pc = 0x80991714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991714u)) return;
    // 80991714: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80991718:
    ctx->pc = 0x80991718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991718: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099171C:
    ctx->pc = 0x8099171Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099171Cu)) return;
    // 8099171C: addi    r31, r3, 18
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(18);

label_80991720:
    ctx->pc = 0x80991720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991720u)) return;
    // 80991720: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80991724:
    ctx->pc = 0x80991724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991724u)) return;
    // 80991724: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80991728:
    ctx->pc = 0x80991728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991728u)) return;
    // 80991728: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_8099172C:
    ctx->pc = 0x8099172Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099172Cu)) return;
    // 8099172C: bl      0x80003100
    {
            ctx->lr = 0x80991730u;
            ctx->pc = 0x80003100u;
            return;
    }

label_80991730:
    ctx->pc = 0x80991730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80991730: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_80991734:
    ctx->pc = 0x80991734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991734u)) return;
    // 80991734: bl      0x8000F1B8
    {
            ctx->lr = 0x80991738u;
            ctx->pc = 0x8000F1B8u;
            return;
    }

label_80991738:
    ctx->pc = 0x80991738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80991738: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8099173C:
    ctx->pc = 0x8099173Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099173Cu)) return;
    // 8099173C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80991740:
    ctx->pc = 0x80991740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991740u)) return;
    // 80991740: addi    r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4);

label_80991744:
    ctx->pc = 0x80991744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991744u)) return;
    // 80991744: bl      0x800031E8
    {
            ctx->lr = 0x80991748u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80991748:
    ctx->pc = 0x80991748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991748: lwz     r31, 12(r1)
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
label_8099174C:
    ctx->pc = 0x8099174Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099174Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099174C: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991750:
    ctx->pc = 0x80991750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991750: lwz     r0, 20(r1)
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
label_80991754:
    ctx->pc = 0x80991754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80991754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991754: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991758:
    ctx->pc = 0x80991758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991758u)) return;
    // 80991758: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8099175C:
    ctx->pc = 0x8099175Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099175Cu)) return;
    // 8099175C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991760:
    ctx->pc = 0x80991760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991760: lwz     r3, 0(r3)
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
label_80991764:
    ctx->pc = 0x80991764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991764u)) return;
    // 80991764: addi    r3, r3, 18
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18);

label_80991768:
    ctx->pc = 0x80991768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991768u)) return;
    // 80991768: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_8099176C:
    ctx->pc = 0x8099176Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099176Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099176C: stwu     r1, -16(r1)
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
label_80991770:
    ctx->pc = 0x80991770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991770: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991774:
    ctx->pc = 0x80991774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991774: stw     r0, 20(r1)
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
label_80991778:
    ctx->pc = 0x80991778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991778: stw     r31, 12(r1)
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
label_8099177C:
    ctx->pc = 0x8099177Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099177Cu)) return;
    // 8099177C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80991780:
    ctx->pc = 0x80991780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991780u)) return;
    // 80991780: bl      0x80925838
    {
            ctx->lr = 0x80991784u;
            ctx->pc = 0x80925838u;
            return;
    }

label_80991784:
    ctx->pc = 0x80991784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991784: stw     r3, 0(r31)
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
label_80991788:
    ctx->pc = 0x80991788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991788: lwz     r31, 12(r1)
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
label_8099178C:
    ctx->pc = 0x8099178Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099178Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099178C: lwz     r0, 20(r1)
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
label_80991790:
    ctx->pc = 0x80991790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80991790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991790: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991794:
    ctx->pc = 0x80991794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991794u)) return;
    // 80991794: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80991798:
    ctx->pc = 0x80991798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991798u)) return;
    // 80991798: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_8099179C:
    ctx->pc = 0x8099179Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099179Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8099179C: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809917A0:
    ctx->pc = 0x809917A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917A0u)) return;
    // 809917A0: bc    4, 1, 0x809917B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_809917B4;
        }
    }

label_809917A4:
    ctx->pc = 0x809917A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809917A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809917A4: cmpwi   r4, 95
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(95);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809917A8:
    ctx->pc = 0x809917A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917A8u)) return;
    // 809917A8: bc    12, 2, 0x809917B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809917B4;
        }
    }

label_809917AC:
    ctx->pc = 0x809917ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809917ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809917AC: cmpwi   r4, 255
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809917B0:
    ctx->pc = 0x809917B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917B0u)) return;
    // 809917B0: bc    12, 0, 0x809917CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809917CC;
        }
    }

label_809917B4:
    ctx->pc = 0x809917B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809917B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 809917B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_809917B8:
    ctx->pc = 0x809917B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809917B8: sth     r0, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809917BC:
    ctx->pc = 0x809917BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809917BC: sth     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809917C0:
    ctx->pc = 0x809917C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809917C0: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809917C4:
    ctx->pc = 0x809917C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809917C4: sth     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809917C8:
    ctx->pc = 0x809917C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917C8u)) return;
    // 809917C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809917CC:
    ctx->pc = 0x809917CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809917CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809917CC: cmpwi   r4, 96
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_809917D0:
    ctx->pc = 0x809917D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917D0u)) return;
    // 809917D0: bc    12, 0, 0x809917D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809917D8;
        }
    }

label_809917D4:
    ctx->pc = 0x809917D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809917D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 809917D4: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_809917D8:
    ctx->pc = 0x809917D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 40u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809917D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 40u : 1u;
    // 809917D8: addi    r6, r4, -1
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1);

label_809917DC:
    ctx->pc = 0x809917DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917DCu)) return;
    // 809917DC: lis     r4, -19946
    ctx->gpr[4] = ((u32)(s32)(-19946) << 16);

label_809917E0:
    ctx->pc = 0x809917E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917E0u)) return;
    // 809917E0: addi    r0, r4, 17097
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(17097);

label_809917E4:
    ctx->pc = 0x809917E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x809917E4u)) return;
    // 809917E4: mulhw   r0, r0, r6
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_809917E8:
    ctx->pc = 0x809917E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917E8u)) return;
    // 809917E8: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_809917EC:
    ctx->pc = 0x809917ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917ECu)) return;
    // 809917EC: srawi r0, r5, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_809917F0:
    ctx->pc = 0x809917F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917F0u)) return;
    // 809917F0: rlwinm r4, r0, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_809917F4:
    ctx->pc = 0x809917F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917F4u)) return;
    // 809917F4: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_809917F8:
    ctx->pc = 0x809917F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x809917F8u)) return;
    // 809917F8: mulli   r0, r0, 23
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)23);

label_809917FC:
    ctx->pc = 0x809917FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809917FCu)) return;
    // 809917FC: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80991800:
    ctx->pc = 0x80991800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80991800u)) return;
    // 80991800: mulli   r4, r0, 176
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)176);

label_80991804:
    ctx->pc = 0x80991804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991804u)) return;
    // 80991804: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_80991808:
    ctx->pc = 0x80991808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991808u)) return;
    // 80991808: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8099180C:
    ctx->pc = 0x8099180Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099180Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8099180C: sth     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991810:
    ctx->pc = 0x80991810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80991810: lha     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991814:
    ctx->pc = 0x80991814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991814u)) return;
    // 80991814: addi    r0, r4, 168
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(168);

label_80991818:
    ctx->pc = 0x80991818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991818u)) return;
    // 80991818: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8099181C:
    ctx->pc = 0x8099181Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099181Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8099181C: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991820:
    ctx->pc = 0x80991820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991820u)) return;
    // 80991820: srawi r0, r5, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80991824:
    ctx->pc = 0x80991824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991824u)) return;
    // 80991824: rlwinm r4, r0, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_80991828:
    ctx->pc = 0x80991828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991828u)) return;
    // 80991828: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8099182C:
    ctx->pc = 0x8099182Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x8099182Cu)) return;
    // 8099182C: mulli   r4, r0, 352
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)352);

label_80991830:
    ctx->pc = 0x80991830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991830u)) return;
    // 80991830: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_80991834:
    ctx->pc = 0x80991834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991834u)) return;
    // 80991834: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991838:
    ctx->pc = 0x80991838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991838: sth     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099183C:
    ctx->pc = 0x8099183Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099183Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099183C: lha     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991840:
    ctx->pc = 0x80991840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991840u)) return;
    // 80991840: addi    r0, r4, 336
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(336);

label_80991844:
    ctx->pc = 0x80991844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991844u)) return;
    // 80991844: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80991848:
    ctx->pc = 0x80991848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80991848: sth     r0, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099184C:
    ctx->pc = 0x8099184Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099184Cu)) return;
    // 8099184C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991850:
    ctx->pc = 0x80991850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80991850: stwu     r1, -16(r1)
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
label_80991854:
    ctx->pc = 0x80991854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80991854: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991858:
    ctx->pc = 0x80991858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991858: stw     r0, 20(r1)
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
label_8099185C:
    ctx->pc = 0x8099185Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099185Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099185C: stw     r31, 12(r1)
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
label_80991860:
    ctx->pc = 0x80991860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991860u)) return;
    // 80991860: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80991864:
    ctx->pc = 0x80991864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991864u)) return;
    // 80991864: addi    r4, r4, -10200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10200);

label_80991868:
    ctx->pc = 0x80991868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991868: lwz     r4, 0(r4)
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
label_8099186C:
    ctx->pc = 0x8099186Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099186Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8099186C: lwz     r31, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991870:
    ctx->pc = 0x80991870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991870u)) return;
    // 80991870: bl      0x8093116C
    {
            ctx->lr = 0x80991874u;
            ctx->pc = 0x8093116Cu;
            return;
    }

label_80991874:
    ctx->pc = 0x80991874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80991874: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80991878:
    ctx->pc = 0x80991878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991878: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099187C:
    ctx->pc = 0x8099187Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099187Cu)) return;
    // 8099187C: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_80991880:
    ctx->pc = 0x80991880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991880u)) return;
    // 80991880: addi    r5, r5, -5392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5392);

label_80991884:
    ctx->pc = 0x80991884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991884: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991888:
    ctx->pc = 0x80991888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991888u)) return;
    // 80991888: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8099188C:
    ctx->pc = 0x8099188Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099188Cu)) return;
    // 8099188C: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80991890:
    ctx->pc = 0x80991890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991890u)) return;
    // 80991890: bl      0x80972038
    {
            ctx->lr = 0x80991894u;
            ctx->pc = 0x80972038u;
            return;
    }

label_80991894:
    ctx->pc = 0x80991894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991894: lwz     r31, 12(r1)
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
label_80991898:
    ctx->pc = 0x80991898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991898: lwz     r0, 20(r1)
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
label_8099189C:
    ctx->pc = 0x8099189Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8099189Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099189C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809918A0:
    ctx->pc = 0x809918A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918A0u)) return;
    // 809918A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809918A4:
    ctx->pc = 0x809918A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918A4u)) return;
    // 809918A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809918A8:
    ctx->pc = 0x809918A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809918A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 809918A8: stwu     r1, -16(r1)
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
label_809918AC:
    ctx->pc = 0x809918ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809918AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809918B0:
    ctx->pc = 0x809918B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809918B0: stw     r0, 20(r1)
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
label_809918B4:
    ctx->pc = 0x809918B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918B4u)) return;
    // 809918B4: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809918B8:
    ctx->pc = 0x809918B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918B8u)) return;
    // 809918B8: addi    r3, r3, -10200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10200);

label_809918BC:
    ctx->pc = 0x809918BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 809918BC: lwz     r3, 0(r3)
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
label_809918C0:
    ctx->pc = 0x809918C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809918C0: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809918C4:
    ctx->pc = 0x809918C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809918C4: lwz     r3, 0(r3)
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
label_809918C8:
    ctx->pc = 0x809918C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918C8u)) return;
    // 809918C8: bl      0x809720D4
    {
            ctx->lr = 0x809918CCu;
            ctx->pc = 0x809720D4u;
            return;
    }

label_809918CC:
    ctx->pc = 0x809918CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809918CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809918CC: lwz     r0, 20(r1)
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
label_809918D0:
    ctx->pc = 0x809918D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809918D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809918D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809918D4:
    ctx->pc = 0x809918D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918D4u)) return;
    // 809918D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809918D8:
    ctx->pc = 0x809918D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918D8u)) return;
    // 809918D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809918DC:
    ctx->pc = 0x809918DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809918DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809918DC: stwu     r1, -16(r1)
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
label_809918E0:
    ctx->pc = 0x809918E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809918E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809918E4:
    ctx->pc = 0x809918E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809918E4: stw     r0, 20(r1)
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
label_809918E8:
    ctx->pc = 0x809918E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918E8u)) return;
    // 809918E8: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_809918EC:
    ctx->pc = 0x809918ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918ECu)) return;
    // 809918EC: addi    r3, r3, -10200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10200);

label_809918F0:
    ctx->pc = 0x809918F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809918F0: lwz     r3, 0(r3)
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
label_809918F4:
    ctx->pc = 0x809918F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809918F4u)) return;
    // 809918F4: bl      0x8050F9E0
    {
            ctx->lr = 0x809918F8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_809918F8:
    ctx->pc = 0x809918F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809918F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809918F8: lwz     r0, 20(r1)
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
label_809918FC:
    ctx->pc = 0x809918FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809918FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809918FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991900:
    ctx->pc = 0x80991900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991900u)) return;
    // 80991900: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80991904:
    ctx->pc = 0x80991904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991904u)) return;
    // 80991904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991908:
    ctx->pc = 0x80991908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80991908: stwu     r1, -16(r1)
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
label_8099190C:
    ctx->pc = 0x8099190Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099190Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8099190C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991910:
    ctx->pc = 0x80991910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991910: stw     r0, 20(r1)
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
label_80991914:
    ctx->pc = 0x80991914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991914: stw     r31, 12(r1)
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
label_80991918:
    ctx->pc = 0x80991918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991918u)) return;
    // 80991918: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8099191C:
    ctx->pc = 0x8099191Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099191Cu)) return;
    // 8099191C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80991920:
    ctx->pc = 0x80991920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991920u)) return;
    // 80991920: lis     r5, -32615
    ctx->gpr[5] = ((u32)(s32)(-32615) << 16);

label_80991924:
    ctx->pc = 0x80991924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991924u)) return;
    // 80991924: addi    r5, r5, 6636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6636);

label_80991928:
    ctx->pc = 0x80991928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991928u)) return;
    // 80991928: bl      0x8050FD60
    {
            ctx->lr = 0x8099192Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_8099192C:
    ctx->pc = 0x8099192Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099192Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8099192C: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80991930:
    ctx->pc = 0x80991930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991930u)) return;
    // 80991930: addi    r5, r4, -10200
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10200);

label_80991934:
    ctx->pc = 0x80991934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80991934: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991938:
    ctx->pc = 0x80991938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991938u)) return;
    // 80991938: lis     r4, -32615
    ctx->gpr[4] = ((u32)(s32)(-32615) << 16);

label_8099193C:
    ctx->pc = 0x8099193Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099193Cu)) return;
    // 8099193C: addi    r0, r4, 7084
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(7084);

label_80991940:
    ctx->pc = 0x80991940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80991940: stw     r0, 24(r3)
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
label_80991944:
    ctx->pc = 0x80991944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991944u)) return;
    // 80991944: lis     r3, -32615
    ctx->gpr[3] = ((u32)(s32)(-32615) << 16);

label_80991948:
    ctx->pc = 0x80991948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991948u)) return;
    // 80991948: addi    r0, r3, 6868
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(6868);

label_8099194C:
    ctx->pc = 0x8099194Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099194Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099194C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991950:
    ctx->pc = 0x80991950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991950: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991954:
    ctx->pc = 0x80991954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991954u)) return;
    // 80991954: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991958:
    ctx->pc = 0x80991958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991958u)) return;
    // 80991958: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8099195C:
    ctx->pc = 0x8099195Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099195Cu)) return;
    // 8099195C: bl      0x8050EEC0
    {
            ctx->lr = 0x80991960u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80991960:
    ctx->pc = 0x80991960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80991960: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80991964:
    ctx->pc = 0x80991964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991964u)) return;
    // 80991964: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991968:
    ctx->pc = 0x80991968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991968u)) return;
    // 80991968: addi    r3, r3, -10200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10200);

label_8099196C:
    ctx->pc = 0x8099196Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099196Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099196C: lwz     r3, 0(r3)
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
label_80991970:
    ctx->pc = 0x80991970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991970: stw     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991974:
    ctx->pc = 0x80991974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991974u)) return;
    // 80991974: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991978:
    ctx->pc = 0x80991978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991978u)) return;
    // 80991978: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_8099197C:
    ctx->pc = 0x8099197Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099197Cu)) return;
    // 8099197C: bl      0x8050EEC0
    {
            ctx->lr = 0x80991980u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80991980:
    ctx->pc = 0x80991980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991980: stw     r3, 0(r31)
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
label_80991984:
    ctx->pc = 0x80991984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80991984: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991988:
    ctx->pc = 0x80991988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991988u)) return;
    // 80991988: bl      0x80972220
    {
            ctx->lr = 0x8099198Cu;
            ctx->pc = 0x80972220u;
            return;
    }

label_8099198C:
    ctx->pc = 0x8099198Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099198Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8099198C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991990:
    ctx->pc = 0x80991990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991990u)) return;
    // 80991990: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80991994:
    ctx->pc = 0x80991994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991994u)) return;
    // 80991994: addi    r4, r4, -16640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16640);

label_80991998:
    ctx->pc = 0x80991998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80991998: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80991998u)) return;
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
label_8099199C:
    ctx->pc = 0x8099199Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099199Cu)) return;
    // 8099199C: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_809919A0:
    ctx->pc = 0x809919A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919A0u)) return;
    // 809919A0: addi    r4, r4, -16636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16636);

label_809919A4:
    ctx->pc = 0x809919A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809919A4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x809919A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_809919A8:
    ctx->pc = 0x809919A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919A8u)) return;
    // 809919A8: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_809919AC:
    ctx->pc = 0x809919ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919ACu)) return;
    // 809919AC: addi    r4, r4, -16632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16632);

label_809919B0:
    ctx->pc = 0x809919B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809919B0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x809919B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_809919B4:
    ctx->pc = 0x809919B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919B4u)) return;
    // 809919B4: bl      0x80972174
    {
            ctx->lr = 0x809919B8u;
            ctx->pc = 0x80972174u;
            return;
    }

label_809919B8:
    ctx->pc = 0x809919B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809919B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809919B8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809919BC:
    ctx->pc = 0x809919BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919BCu)) return;
    // 809919BC: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_809919C0:
    ctx->pc = 0x809919C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919C0u)) return;
    // 809919C0: addi    r4, r4, -16628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16628);

label_809919C4:
    ctx->pc = 0x809919C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809919C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x809919C4u)) return;
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
label_809919C8:
    ctx->pc = 0x809919C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919C8u)) return;
    // 809919C8: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_809919CC:
    ctx->pc = 0x809919CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919CCu)) return;
    // 809919CC: addi    r4, r4, -16624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16624);

label_809919D0:
    ctx->pc = 0x809919D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809919D0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x809919D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_809919D4:
    ctx->pc = 0x809919D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919D4u)) return;
    // 809919D4: bl      0x80972168
    {
            ctx->lr = 0x809919D8u;
            ctx->pc = 0x80972168u;
            return;
    }

label_809919D8:
    ctx->pc = 0x809919D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809919D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809919D8: lwz     r31, 12(r1)
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
label_809919DC:
    ctx->pc = 0x809919DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809919DC: lwz     r0, 20(r1)
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
label_809919E0:
    ctx->pc = 0x809919E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809919E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809919E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809919E4:
    ctx->pc = 0x809919E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919E4u)) return;
    // 809919E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809919E8:
    ctx->pc = 0x809919E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919E8u)) return;
    // 809919E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_809919EC:
    ctx->pc = 0x809919ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809919ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 809919EC: stwu     r1, -16(r1)
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
label_809919F0:
    ctx->pc = 0x809919F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809919F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809919F4:
    ctx->pc = 0x809919F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809919F4: stw     r0, 20(r1)
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
label_809919F8:
    ctx->pc = 0x809919F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809919F8: stw     r31, 12(r1)
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
label_809919FC:
    ctx->pc = 0x809919FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809919FCu)) return;
    // 809919FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80991A00:
    ctx->pc = 0x80991A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991A00: lwz     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991A04:
    ctx->pc = 0x80991A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80991A04: lwz     r3, 0(r3)
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
label_80991A08:
    ctx->pc = 0x80991A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A08u)) return;
    // 80991A08: bl      0x80971F90
    {
            ctx->lr = 0x80991A0Cu;
            ctx->pc = 0x80971F90u;
            return;
    }

label_80991A0C:
    ctx->pc = 0x80991A0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80991A0C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80991A10:
    ctx->pc = 0x80991A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A10u)) return;
    // 80991A10: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80991A14:
    ctx->pc = 0x80991A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991A14: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991A18:
    ctx->pc = 0x80991A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A18u)) return;
    // 80991A18: cmpwi   r0, 0
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

label_80991A1C:
    ctx->pc = 0x80991A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A1Cu)) return;
    // 80991A1C: bc    4, 2, 0x80991AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991AC0;
        }
    }

label_80991A20:
    ctx->pc = 0x80991A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991A20: lwz     r31, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991A24:
    ctx->pc = 0x80991A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A24u)) return;
    // 80991A24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80991A28:
    ctx->pc = 0x80991A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A28u)) return;
    // 80991A28: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80991A2C:
    ctx->pc = 0x80991A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A2Cu)) return;
    // 80991A2C: bl      0x8060F4F8
    {
            ctx->lr = 0x80991A30u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991A30:
    ctx->pc = 0x80991A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991A30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991A34:
    ctx->pc = 0x80991A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A34u)) return;
    // 80991A34: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80991A38:
    ctx->pc = 0x80991A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A38u)) return;
    // 80991A38: bl      0x8060F4F8
    {
            ctx->lr = 0x80991A3Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991A3C:
    ctx->pc = 0x80991A3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991A3C: bl      0x809691B8
    {
            ctx->lr = 0x80991A40u;
            ctx->pc = 0x809691B8u;
            return;
    }

label_80991A40:
    ctx->pc = 0x80991A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80991A40: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991A44:
    ctx->pc = 0x80991A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A44u)) return;
    // 80991A44: addi    r3, r3, -16640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16640);

label_80991A48:
    ctx->pc = 0x80991A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80991A48: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991A48u)) return;
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
label_80991A4C:
    ctx->pc = 0x80991A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A4Cu)) return;
    // 80991A4C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991A50:
    ctx->pc = 0x80991A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A50u)) return;
    // 80991A50: addi    r3, r3, -16628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16628);

label_80991A54:
    ctx->pc = 0x80991A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80991A54: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991A54u)) return;
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
label_80991A58:
    ctx->pc = 0x80991A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A58u)) return;
    // 80991A58: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991A5C:
    ctx->pc = 0x80991A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A5Cu)) return;
    // 80991A5C: addi    r3, r3, -16636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16636);

label_80991A60:
    ctx->pc = 0x80991A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80991A60: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991A60u)) return;
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
label_80991A64:
    ctx->pc = 0x80991A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A64u)) return;
    // 80991A64: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991A68:
    ctx->pc = 0x80991A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A68u)) return;
    // 80991A68: addi    r3, r3, -16620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16620);

label_80991A6C:
    ctx->pc = 0x80991A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991A6C: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991A6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80991A70:
    ctx->pc = 0x80991A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A70u)) return;
    // 80991A70: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991A74:
    ctx->pc = 0x80991A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A74u)) return;
    // 80991A74: addi    r3, r3, -16632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16632);

label_80991A78:
    ctx->pc = 0x80991A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991A78: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991A78u)) return;
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
label_80991A7C:
    ctx->pc = 0x80991A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A7Cu)) return;
    // 80991A7C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80991A80:
    ctx->pc = 0x80991A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A80u)) return;
    // 80991A80: bl      0x809690D4
    {
            ctx->lr = 0x80991A84u;
            ctx->pc = 0x809690D4u;
            return;
    }

label_80991A84:
    ctx->pc = 0x80991A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991A84: bl      0x809691B4
    {
            ctx->lr = 0x80991A88u;
            ctx->pc = 0x809691B4u;
            return;
    }

label_80991A88:
    ctx->pc = 0x80991A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991A88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80991A8C:
    ctx->pc = 0x80991A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A8Cu)) return;
    // 80991A8C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80991A90:
    ctx->pc = 0x80991A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A90u)) return;
    // 80991A90: bl      0x8060F4F8
    {
            ctx->lr = 0x80991A94u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991A94:
    ctx->pc = 0x80991A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991A94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991A98:
    ctx->pc = 0x80991A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A98u)) return;
    // 80991A98: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80991A9C:
    ctx->pc = 0x80991A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991A9Cu)) return;
    // 80991A9C: bl      0x8060F4F8
    {
            ctx->lr = 0x80991AA0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991AA0:
    ctx->pc = 0x80991AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80991AA0: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991AA4:
    ctx->pc = 0x80991AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AA4u)) return;
    // 80991AA4: bl      0x80971F34
    {
            ctx->lr = 0x80991AA8u;
            ctx->pc = 0x80971F34u;
            return;
    }

label_80991AA8:
    ctx->pc = 0x80991AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991AA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80991AAC:
    ctx->pc = 0x80991AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AACu)) return;
    // 80991AAC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80991AB0:
    ctx->pc = 0x80991AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AB0u)) return;
    // 80991AB0: bl      0x8060F4F8
    {
            ctx->lr = 0x80991AB4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991AB4:
    ctx->pc = 0x80991AB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991AB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991AB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991AB8:
    ctx->pc = 0x80991AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AB8u)) return;
    // 80991AB8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80991ABC:
    ctx->pc = 0x80991ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991ABCu)) return;
    // 80991ABC: bl      0x8060F4F8
    {
            ctx->lr = 0x80991AC0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991AC0:
    ctx->pc = 0x80991AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991AC0: lwz     r31, 12(r1)
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
label_80991AC4:
    ctx->pc = 0x80991AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991AC4: lwz     r0, 20(r1)
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
label_80991AC8:
    ctx->pc = 0x80991AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80991AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991AC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991ACC:
    ctx->pc = 0x80991ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991ACCu)) return;
    // 80991ACC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80991AD0:
    ctx->pc = 0x80991AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AD0u)) return;
    // 80991AD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991AD4:
    ctx->pc = 0x80991AD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991AD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80991AD4: stwu     r1, -16(r1)
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
label_80991AD8:
    ctx->pc = 0x80991AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80991AD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991ADC:
    ctx->pc = 0x80991ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991ADC: stw     r0, 20(r1)
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
label_80991AE0:
    ctx->pc = 0x80991AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991AE0: stw     r31, 12(r1)
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
label_80991AE4:
    ctx->pc = 0x80991AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AE4u)) return;
    // 80991AE4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80991AE8:
    ctx->pc = 0x80991AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AE8u)) return;
    // 80991AE8: addi    r4, r4, 4120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4120);

label_80991AEC:
    ctx->pc = 0x80991AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991AEC: lwz     r0, 0(r4)
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
label_80991AF0:
    ctx->pc = 0x80991AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AF0u)) return;
    // 80991AF0: cmpwi   r0, 0
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

label_80991AF4:
    ctx->pc = 0x80991AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AF4u)) return;
    // 80991AF4: bc    4, 2, 0x80991B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80991B98;
        }
    }

label_80991AF8:
    ctx->pc = 0x80991AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991AF8: lwz     r31, 44(r3)
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
label_80991AFC:
    ctx->pc = 0x80991AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991AFCu)) return;
    // 80991AFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80991B00:
    ctx->pc = 0x80991B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B00u)) return;
    // 80991B00: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80991B04:
    ctx->pc = 0x80991B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B04u)) return;
    // 80991B04: bl      0x8060F4F8
    {
            ctx->lr = 0x80991B08u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991B08:
    ctx->pc = 0x80991B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991B08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991B0C:
    ctx->pc = 0x80991B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B0Cu)) return;
    // 80991B0C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80991B10:
    ctx->pc = 0x80991B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B10u)) return;
    // 80991B10: bl      0x8060F4F8
    {
            ctx->lr = 0x80991B14u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991B14:
    ctx->pc = 0x80991B14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991B14: bl      0x809691B8
    {
            ctx->lr = 0x80991B18u;
            ctx->pc = 0x809691B8u;
            return;
    }

label_80991B18:
    ctx->pc = 0x80991B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80991B18: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991B1C:
    ctx->pc = 0x80991B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B1Cu)) return;
    // 80991B1C: addi    r3, r3, -16640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16640);

label_80991B20:
    ctx->pc = 0x80991B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80991B20: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991B20u)) return;
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
label_80991B24:
    ctx->pc = 0x80991B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B24u)) return;
    // 80991B24: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991B28:
    ctx->pc = 0x80991B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B28u)) return;
    // 80991B28: addi    r3, r3, -16628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16628);

label_80991B2C:
    ctx->pc = 0x80991B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80991B2C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991B2Cu)) return;
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
label_80991B30:
    ctx->pc = 0x80991B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B30u)) return;
    // 80991B30: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991B34:
    ctx->pc = 0x80991B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B34u)) return;
    // 80991B34: addi    r3, r3, -16636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16636);

label_80991B38:
    ctx->pc = 0x80991B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80991B38: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991B38u)) return;
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
label_80991B3C:
    ctx->pc = 0x80991B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B3Cu)) return;
    // 80991B3C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991B40:
    ctx->pc = 0x80991B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B40u)) return;
    // 80991B40: addi    r3, r3, -16620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16620);

label_80991B44:
    ctx->pc = 0x80991B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991B44: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991B44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80991B48:
    ctx->pc = 0x80991B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B48u)) return;
    // 80991B48: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80991B4C:
    ctx->pc = 0x80991B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B4Cu)) return;
    // 80991B4C: addi    r3, r3, -16632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16632);

label_80991B50:
    ctx->pc = 0x80991B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991B50: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80991B50u)) return;
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
label_80991B54:
    ctx->pc = 0x80991B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B54u)) return;
    // 80991B54: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80991B58:
    ctx->pc = 0x80991B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B58u)) return;
    // 80991B58: bl      0x809690D4
    {
            ctx->lr = 0x80991B5Cu;
            ctx->pc = 0x809690D4u;
            return;
    }

label_80991B5C:
    ctx->pc = 0x80991B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80991B5C: bl      0x809691B4
    {
            ctx->lr = 0x80991B60u;
            ctx->pc = 0x809691B4u;
            return;
    }

label_80991B60:
    ctx->pc = 0x80991B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991B60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80991B64:
    ctx->pc = 0x80991B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B64u)) return;
    // 80991B64: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80991B68:
    ctx->pc = 0x80991B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B68u)) return;
    // 80991B68: bl      0x8060F4F8
    {
            ctx->lr = 0x80991B6Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991B6C:
    ctx->pc = 0x80991B6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991B6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991B70:
    ctx->pc = 0x80991B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B70u)) return;
    // 80991B70: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80991B74:
    ctx->pc = 0x80991B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B74u)) return;
    // 80991B74: bl      0x8060F4F8
    {
            ctx->lr = 0x80991B78u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991B78:
    ctx->pc = 0x80991B78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80991B78: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991B7C:
    ctx->pc = 0x80991B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B7Cu)) return;
    // 80991B7C: bl      0x80971F34
    {
            ctx->lr = 0x80991B80u;
            ctx->pc = 0x80971F34u;
            return;
    }

label_80991B80:
    ctx->pc = 0x80991B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991B80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80991B84:
    ctx->pc = 0x80991B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B84u)) return;
    // 80991B84: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80991B88:
    ctx->pc = 0x80991B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B88u)) return;
    // 80991B88: bl      0x8060F4F8
    {
            ctx->lr = 0x80991B8Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991B8C:
    ctx->pc = 0x80991B8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80991B8C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80991B90:
    ctx->pc = 0x80991B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B90u)) return;
    // 80991B90: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80991B94:
    ctx->pc = 0x80991B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B94u)) return;
    // 80991B94: bl      0x8060F4F8
    {
            ctx->lr = 0x80991B98u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80991B98:
    ctx->pc = 0x80991B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991B98: lwz     r31, 12(r1)
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
label_80991B9C:
    ctx->pc = 0x80991B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991B9C: lwz     r0, 20(r1)
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
label_80991BA0:
    ctx->pc = 0x80991BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80991BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991BA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991BA4:
    ctx->pc = 0x80991BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BA4u)) return;
    // 80991BA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80991BA8:
    ctx->pc = 0x80991BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BA8u)) return;
    // 80991BA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

label_80991BAC:
    ctx->pc = 0x80991BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80991BAC: stwu     r1, -16(r1)
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
label_80991BB0:
    ctx->pc = 0x80991BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991BB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991BB4:
    ctx->pc = 0x80991BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991BB4: stw     r0, 20(r1)
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
label_80991BB8:
    ctx->pc = 0x80991BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80991BB8: stw     r31, 12(r1)
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
label_80991BBC:
    ctx->pc = 0x80991BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991BBC: lwz     r31, 44(r3)
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
label_80991BC0:
    ctx->pc = 0x80991BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80991BC0: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991BC4:
    ctx->pc = 0x80991BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BC4u)) return;
    // 80991BC4: bl      0x80972184
    {
            ctx->lr = 0x80991BC8u;
            ctx->pc = 0x80972184u;
            return;
    }

label_80991BC8:
    ctx->pc = 0x80991BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80991BC8: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991BCC:
    ctx->pc = 0x80991BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BCCu)) return;
    // 80991BCC: bl      0x8050ED40
    {
            ctx->lr = 0x80991BD0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80991BD0:
    ctx->pc = 0x80991BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80991BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80991BD0: lwz     r31, 12(r1)
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
label_80991BD4:
    ctx->pc = 0x80991BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80991BD4: lwz     r0, 20(r1)
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
label_80991BD8:
    ctx->pc = 0x80991BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80991BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80991BD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80991BDC:
    ctx->pc = 0x80991BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BDCu)) return;
    // 80991BDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80991BE0:
    ctx->pc = 0x80991BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80991BE0u)) return;
    // 80991BE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_809902C0;
        }
    }

    ctx->pc = 0x80991BE4u;
    return;
return_dispatch_809902C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8099030Cu: goto label_8099030C;
    case 0x8099033Cu: goto label_8099033C;
    case 0x8099035Cu: goto label_8099035C;
    case 0x80990398u: goto label_80990398;
    case 0x809903D4u: goto label_809903D4;
    case 0x8099044Cu: goto label_8099044C;
    case 0x80990474u: goto label_80990474;
    case 0x8099048Cu: goto label_8099048C;
    case 0x809904A8u: goto label_809904A8;
    case 0x809904E4u: goto label_809904E4;
    case 0x80990504u: goto label_80990504;
    case 0x80990528u: goto label_80990528;
    case 0x80990534u: goto label_80990534;
    case 0x80990538u: goto label_80990538;
    case 0x80990540u: goto label_80990540;
    case 0x80990544u: goto label_80990544;
    case 0x80990578u: goto label_80990578;
    case 0x80990588u: goto label_80990588;
    case 0x8099058Cu: goto label_8099058C;
    case 0x80990598u: goto label_80990598;
    case 0x8099059Cu: goto label_8099059C;
    case 0x809905A0u: goto label_809905A0;
    case 0x809905A4u: goto label_809905A4;
    case 0x809905A8u: goto label_809905A8;
    case 0x809905ACu: goto label_809905AC;
    case 0x809905B0u: goto label_809905B0;
    case 0x809905C4u: goto label_809905C4;
    case 0x809905E8u: goto label_809905E8;
    case 0x8099060Cu: goto label_8099060C;
    case 0x80990610u: goto label_80990610;
    case 0x80990614u: goto label_80990614;
    case 0x80990618u: goto label_80990618;
    case 0x8099061Cu: goto label_8099061C;
    case 0x80990620u: goto label_80990620;
    case 0x80990628u: goto label_80990628;
    case 0x8099067Cu: goto label_8099067C;
    case 0x80990694u: goto label_80990694;
    case 0x8099069Cu: goto label_8099069C;
    case 0x809906C8u: goto label_809906C8;
    case 0x809906CCu: goto label_809906CC;
    case 0x809906D0u: goto label_809906D0;
    case 0x809906ECu: goto label_809906EC;
    case 0x809906F0u: goto label_809906F0;
    case 0x80990708u: goto label_80990708;
    case 0x8099070Cu: goto label_8099070C;
    case 0x8099071Cu: goto label_8099071C;
    case 0x80990744u: goto label_80990744;
    case 0x80990748u: goto label_80990748;
    case 0x80990758u: goto label_80990758;
    case 0x80990798u: goto label_80990798;
    case 0x8099079Cu: goto label_8099079C;
    case 0x809907A0u: goto label_809907A0;
    case 0x809907A4u: goto label_809907A4;
    case 0x809907D4u: goto label_809907D4;
    case 0x809907E8u: goto label_809907E8;
    case 0x809907ECu: goto label_809907EC;
    case 0x809907F0u: goto label_809907F0;
    case 0x80990830u: goto label_80990830;
    case 0x8099083Cu: goto label_8099083C;
    case 0x80990864u: goto label_80990864;
    case 0x80990874u: goto label_80990874;
    case 0x809908B8u: goto label_809908B8;
    case 0x809908C0u: goto label_809908C0;
    case 0x809908D8u: goto label_809908D8;
    case 0x809908DCu: goto label_809908DC;
    case 0x80990918u: goto label_80990918;
    case 0x80990944u: goto label_80990944;
    case 0x80990964u: goto label_80990964;
    case 0x80990A68u: goto label_80990A68;
    case 0x80990AECu: goto label_80990AEC;
    case 0x80990B60u: goto label_80990B60;
    case 0x80990BD4u: goto label_80990BD4;
    case 0x80990DB0u: goto label_80990DB0;
    case 0x80990DB8u: goto label_80990DB8;
    case 0x80990DC8u: goto label_80990DC8;
    case 0x80990E90u: goto label_80990E90;
    case 0x80990E9Cu: goto label_80990E9C;
    case 0x80990EB0u: goto label_80990EB0;
    case 0x80990F30u: goto label_80990F30;
    case 0x80990F3Cu: goto label_80990F3C;
    case 0x80990F50u: goto label_80990F50;
    case 0x80990FA0u: goto label_80990FA0;
    case 0x80990FC0u: goto label_80990FC0;
    case 0x80990FCCu: goto label_80990FCC;
    case 0x80990FD0u: goto label_80990FD0;
    case 0x80990FD4u: goto label_80990FD4;
    case 0x80990FE8u: goto label_80990FE8;
    case 0x80990FFCu: goto label_80990FFC;
    case 0x80991018u: goto label_80991018;
    case 0x80991034u: goto label_80991034;
    case 0x80991050u: goto label_80991050;
    case 0x80991078u: goto label_80991078;
    case 0x80991090u: goto label_80991090;
    case 0x809910A4u: goto label_809910A4;
    case 0x809910B8u: goto label_809910B8;
    case 0x80991130u: goto label_80991130;
    case 0x80991168u: goto label_80991168;
    case 0x80991180u: goto label_80991180;
    case 0x809911B8u: goto label_809911B8;
    case 0x809911D0u: goto label_809911D0;
    case 0x80991210u: goto label_80991210;
    case 0x80991228u: goto label_80991228;
    case 0x80991268u: goto label_80991268;
    case 0x80991280u: goto label_80991280;
    case 0x80991284u: goto label_80991284;
    case 0x809912ACu: goto label_809912AC;
    case 0x809912C4u: goto label_809912C4;
    case 0x80991304u: goto label_80991304;
    case 0x8099131Cu: goto label_8099131C;
    case 0x80991328u: goto label_80991328;
    case 0x8099133Cu: goto label_8099133C;
    case 0x80991458u: goto label_80991458;
    case 0x80991574u: goto label_80991574;
    case 0x8099159Cu: goto label_8099159C;
    case 0x809915B0u: goto label_809915B0;
    case 0x80991608u: goto label_80991608;
    case 0x8099160Cu: goto label_8099160C;
    case 0x80991614u: goto label_80991614;
    case 0x80991668u: goto label_80991668;
    case 0x80991678u: goto label_80991678;
    case 0x809916E4u: goto label_809916E4;
    case 0x80991730u: goto label_80991730;
    case 0x80991738u: goto label_80991738;
    case 0x80991748u: goto label_80991748;
    case 0x80991784u: goto label_80991784;
    case 0x80991874u: goto label_80991874;
    case 0x80991894u: goto label_80991894;
    case 0x809918CCu: goto label_809918CC;
    case 0x809918F8u: goto label_809918F8;
    case 0x8099192Cu: goto label_8099192C;
    case 0x80991960u: goto label_80991960;
    case 0x80991980u: goto label_80991980;
    case 0x8099198Cu: goto label_8099198C;
    case 0x809919B8u: goto label_809919B8;
    case 0x809919D8u: goto label_809919D8;
    case 0x80991A0Cu: goto label_80991A0C;
    case 0x80991A30u: goto label_80991A30;
    case 0x80991A3Cu: goto label_80991A3C;
    case 0x80991A40u: goto label_80991A40;
    case 0x80991A84u: goto label_80991A84;
    case 0x80991A88u: goto label_80991A88;
    case 0x80991A94u: goto label_80991A94;
    case 0x80991AA0u: goto label_80991AA0;
    case 0x80991AA8u: goto label_80991AA8;
    case 0x80991AB4u: goto label_80991AB4;
    case 0x80991AC0u: goto label_80991AC0;
    case 0x80991B08u: goto label_80991B08;
    case 0x80991B14u: goto label_80991B14;
    case 0x80991B18u: goto label_80991B18;
    case 0x80991B5Cu: goto label_80991B5C;
    case 0x80991B60u: goto label_80991B60;
    case 0x80991B6Cu: goto label_80991B6C;
    case 0x80991B78u: goto label_80991B78;
    case 0x80991B80u: goto label_80991B80;
    case 0x80991B8Cu: goto label_80991B8C;
    case 0x80991B98u: goto label_80991B98;
    case 0x80991BC8u: goto label_80991BC8;
    case 0x80991BD0u: goto label_80991BD0;
    default: return;
    }
}

