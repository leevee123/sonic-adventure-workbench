// DolRecomp output
#include "../generated.h"

void func_80D33080(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D33080[385] = {
        &&label_80D33080,
        &&label_80D33084,
        &&label_80D33088,
        &&label_80D3308C,
        &&label_80D33090,
        &&label_80D33094,
        &&label_80D33098,
        &&label_80D3309C,
        &&label_80D330A0,
        &&label_80D330A4,
        &&label_80D330A8,
        &&label_80D330AC,
        &&label_80D330B0,
        &&label_80D330B4,
        &&label_80D330B8,
        &&label_80D330BC,
        &&label_80D330C0,
        &&label_80D330C4,
        &&label_80D330C8,
        &&label_80D330CC,
        &&label_80D330D0,
        &&label_80D330D4,
        &&label_80D330D8,
        &&label_80D330DC,
        &&label_80D330E0,
        &&label_80D330E4,
        &&label_80D330E8,
        &&label_80D330EC,
        &&label_80D330F0,
        &&label_80D330F4,
        &&label_80D330F8,
        &&label_80D330FC,
        &&label_80D33100,
        &&label_80D33104,
        &&label_80D33108,
        &&label_80D3310C,
        &&label_80D33110,
        &&label_80D33114,
        &&label_80D33118,
        &&label_80D3311C,
        &&label_80D33120,
        &&label_80D33124,
        &&label_80D33128,
        &&label_80D3312C,
        &&label_80D33130,
        &&label_80D33134,
        &&label_80D33138,
        &&label_80D3313C,
        &&label_80D33140,
        &&label_80D33144,
        &&label_80D33148,
        &&label_80D3314C,
        &&label_80D33150,
        &&label_80D33154,
        &&label_80D33158,
        &&label_80D3315C,
        &&label_80D33160,
        &&label_80D33164,
        &&label_80D33168,
        &&label_80D3316C,
        &&label_80D33170,
        &&label_80D33174,
        &&label_80D33178,
        &&label_80D3317C,
        &&label_80D33180,
        &&label_80D33184,
        &&label_80D33188,
        &&label_80D3318C,
        &&label_80D33190,
        &&label_80D33194,
        &&label_80D33198,
        &&label_80D3319C,
        &&label_80D331A0,
        &&label_80D331A4,
        &&label_80D331A8,
        &&label_80D331AC,
        &&label_80D331B0,
        &&label_80D331B4,
        &&label_80D331B8,
        &&label_80D331BC,
        &&label_80D331C0,
        &&label_80D331C4,
        &&label_80D331C8,
        &&label_80D331CC,
        &&label_80D331D0,
        &&label_80D331D4,
        &&label_80D331D8,
        &&label_80D331DC,
        &&label_80D331E0,
        &&label_80D331E4,
        &&label_80D331E8,
        &&label_80D331EC,
        &&label_80D331F0,
        &&label_80D331F4,
        &&label_80D331F8,
        &&label_80D331FC,
        &&label_80D33200,
        &&label_80D33204,
        &&label_80D33208,
        &&label_80D3320C,
        &&label_80D33210,
        &&label_80D33214,
        &&label_80D33218,
        &&label_80D3321C,
        &&label_80D33220,
        &&label_80D33224,
        &&label_80D33228,
        &&label_80D3322C,
        &&label_80D33230,
        &&label_80D33234,
        &&label_80D33238,
        &&label_80D3323C,
        &&label_80D33240,
        &&label_80D33244,
        &&label_80D33248,
        &&label_80D3324C,
        &&label_80D33250,
        &&label_80D33254,
        &&label_80D33258,
        &&label_80D3325C,
        &&label_80D33260,
        &&label_80D33264,
        &&label_80D33268,
        &&label_80D3326C,
        &&label_80D33270,
        &&label_80D33274,
        &&label_80D33278,
        &&label_80D3327C,
        &&label_80D33280,
        &&label_80D33284,
        &&label_80D33288,
        &&label_80D3328C,
        &&label_80D33290,
        &&label_80D33294,
        &&label_80D33298,
        &&label_80D3329C,
        &&label_80D332A0,
        &&label_80D332A4,
        &&label_80D332A8,
        &&label_80D332AC,
        &&label_80D332B0,
        &&label_80D332B4,
        &&label_80D332B8,
        &&label_80D332BC,
        &&label_80D332C0,
        &&label_80D332C4,
        &&label_80D332C8,
        &&label_80D332CC,
        &&label_80D332D0,
        &&label_80D332D4,
        &&label_80D332D8,
        &&label_80D332DC,
        &&label_80D332E0,
        &&label_80D332E4,
        &&label_80D332E8,
        &&label_80D332EC,
        &&label_80D332F0,
        &&label_80D332F4,
        &&label_80D332F8,
        &&label_80D332FC,
        &&label_80D33300,
        &&label_80D33304,
        &&label_80D33308,
        &&label_80D3330C,
        &&label_80D33310,
        &&label_80D33314,
        &&label_80D33318,
        &&label_80D3331C,
        &&label_80D33320,
        &&label_80D33324,
        &&label_80D33328,
        &&label_80D3332C,
        &&label_80D33330,
        &&label_80D33334,
        &&label_80D33338,
        &&label_80D3333C,
        &&label_80D33340,
        &&label_80D33344,
        &&label_80D33348,
        &&label_80D3334C,
        &&label_80D33350,
        &&label_80D33354,
        &&label_80D33358,
        &&label_80D3335C,
        &&label_80D33360,
        &&label_80D33364,
        &&label_80D33368,
        &&label_80D3336C,
        &&label_80D33370,
        &&label_80D33374,
        &&label_80D33378,
        &&label_80D3337C,
        &&label_80D33380,
        &&label_80D33384,
        &&label_80D33388,
        &&label_80D3338C,
        &&label_80D33390,
        &&label_80D33394,
        &&label_80D33398,
        &&label_80D3339C,
        &&label_80D333A0,
        &&label_80D333A4,
        &&label_80D333A8,
        &&label_80D333AC,
        &&label_80D333B0,
        &&label_80D333B4,
        &&label_80D333B8,
        &&label_80D333BC,
        &&label_80D333C0,
        &&label_80D333C4,
        &&label_80D333C8,
        &&label_80D333CC,
        &&label_80D333D0,
        &&label_80D333D4,
        &&label_80D333D8,
        &&label_80D333DC,
        &&label_80D333E0,
        &&label_80D333E4,
        &&label_80D333E8,
        &&label_80D333EC,
        &&label_80D333F0,
        &&label_80D333F4,
        &&label_80D333F8,
        &&label_80D333FC,
        &&label_80D33400,
        &&label_80D33404,
        &&label_80D33408,
        &&label_80D3340C,
        &&label_80D33410,
        &&label_80D33414,
        &&label_80D33418,
        &&label_80D3341C,
        &&label_80D33420,
        &&label_80D33424,
        &&label_80D33428,
        &&label_80D3342C,
        &&label_80D33430,
        &&label_80D33434,
        &&label_80D33438,
        &&label_80D3343C,
        &&label_80D33440,
        &&label_80D33444,
        &&label_80D33448,
        &&label_80D3344C,
        &&label_80D33450,
        &&label_80D33454,
        &&label_80D33458,
        &&label_80D3345C,
        &&label_80D33460,
        &&label_80D33464,
        &&label_80D33468,
        &&label_80D3346C,
        &&label_80D33470,
        &&label_80D33474,
        &&label_80D33478,
        &&label_80D3347C,
        &&label_80D33480,
        &&label_80D33484,
        &&label_80D33488,
        &&label_80D3348C,
        &&label_80D33490,
        &&label_80D33494,
        &&label_80D33498,
        &&label_80D3349C,
        &&label_80D334A0,
        &&label_80D334A4,
        &&label_80D334A8,
        &&label_80D334AC,
        &&label_80D334B0,
        &&label_80D334B4,
        &&label_80D334B8,
        &&label_80D334BC,
        &&label_80D334C0,
        &&label_80D334C4,
        &&label_80D334C8,
        &&label_80D334CC,
        &&label_80D334D0,
        &&label_80D334D4,
        &&label_80D334D8,
        &&label_80D334DC,
        &&label_80D334E0,
        &&label_80D334E4,
        &&label_80D334E8,
        &&label_80D334EC,
        &&label_80D334F0,
        &&label_80D334F4,
        &&label_80D334F8,
        &&label_80D334FC,
        &&label_80D33500,
        &&label_80D33504,
        &&label_80D33508,
        &&label_80D3350C,
        &&label_80D33510,
        &&label_80D33514,
        &&label_80D33518,
        &&label_80D3351C,
        &&label_80D33520,
        &&label_80D33524,
        &&label_80D33528,
        &&label_80D3352C,
        &&label_80D33530,
        &&label_80D33534,
        &&label_80D33538,
        &&label_80D3353C,
        &&label_80D33540,
        &&label_80D33544,
        &&label_80D33548,
        &&label_80D3354C,
        &&label_80D33550,
        &&label_80D33554,
        &&label_80D33558,
        &&label_80D3355C,
        &&label_80D33560,
        &&label_80D33564,
        &&label_80D33568,
        &&label_80D3356C,
        &&label_80D33570,
        &&label_80D33574,
        &&label_80D33578,
        &&label_80D3357C,
        &&label_80D33580,
        &&label_80D33584,
        &&label_80D33588,
        &&label_80D3358C,
        &&label_80D33590,
        &&label_80D33594,
        &&label_80D33598,
        &&label_80D3359C,
        &&label_80D335A0,
        &&label_80D335A4,
        &&label_80D335A8,
        &&label_80D335AC,
        &&label_80D335B0,
        &&label_80D335B4,
        &&label_80D335B8,
        &&label_80D335BC,
        &&label_80D335C0,
        &&label_80D335C4,
        &&label_80D335C8,
        &&label_80D335CC,
        &&label_80D335D0,
        &&label_80D335D4,
        &&label_80D335D8,
        &&label_80D335DC,
        &&label_80D335E0,
        &&label_80D335E4,
        &&label_80D335E8,
        &&label_80D335EC,
        &&label_80D335F0,
        &&label_80D335F4,
        &&label_80D335F8,
        &&label_80D335FC,
        &&label_80D33600,
        &&label_80D33604,
        &&label_80D33608,
        &&label_80D3360C,
        &&label_80D33610,
        &&label_80D33614,
        &&label_80D33618,
        &&label_80D3361C,
        &&label_80D33620,
        &&label_80D33624,
        &&label_80D33628,
        &&label_80D3362C,
        &&label_80D33630,
        &&label_80D33634,
        &&label_80D33638,
        &&label_80D3363C,
        &&label_80D33640,
        &&label_80D33644,
        &&label_80D33648,
        &&label_80D3364C,
        &&label_80D33650,
        &&label_80D33654,
        &&label_80D33658,
        &&label_80D3365C,
        &&label_80D33660,
        &&label_80D33664,
        &&label_80D33668,
        &&label_80D3366C,
        &&label_80D33670,
        &&label_80D33674,
        &&label_80D33678,
        &&label_80D3367C,
        &&label_80D33680
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D33080u && pc <= 0x80D33680u && ((pc - 0x80D33080u) & 3u) == 0u)
            goto *pc_table_80D33080[(pc - 0x80D33080u) >> 2];
    }
    return;
label_80D33080:
    ctx->pc = 0x80D33080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D33080: stwu     r1, -16(r1)
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
label_80D33084:
    ctx->pc = 0x80D33084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33084: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33088:
    ctx->pc = 0x80D33088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D33088: stw     r0, 20(r1)
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
label_80D3308C:
    ctx->pc = 0x80D3308Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3308Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3308C: stw     r31, 12(r1)
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
label_80D33090:
    ctx->pc = 0x80D33090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33090u)) return;
    // 80D33090: cmpwi   r3, 2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D33094:
    ctx->pc = 0x80D33094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33094u)) return;
    // 80D33094: bc    12, 2, 0x80D33654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D33654;
        }
    }

label_80D33098:
    ctx->pc = 0x80D33098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33098: bc    4, 0, 0x80D330AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D330AC;
        }
    }

label_80D3309C:
    ctx->pc = 0x80D3309Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3309Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3309C: cmpwi   r3, 0
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

label_80D330A0:
    ctx->pc = 0x80D330A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330A0u)) return;
    // 80D330A0: bc    12, 2, 0x80D33670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D33670;
        }
    }

label_80D330A4:
    ctx->pc = 0x80D330A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D330A4: bc    4, 0, 0x80D330B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D330B4;
        }
    }

label_80D330A8:
    ctx->pc = 0x80D330A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D330A8: b       0x80D33670
    {
            goto label_80D33670;
    }

label_80D330AC:
    ctx->pc = 0x80D330ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D330AC: cmpwi   r3, 4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D330B0:
    ctx->pc = 0x80D330B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330B0u)) return;
    // 80D330B0: b       0x80D33670
    {
            goto label_80D33670;
    }

label_80D330B4:
    ctx->pc = 0x80D330B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D330B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D330B8:
    ctx->pc = 0x80D330B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330B8u)) return;
    // 80D330B8: bl      0x8045EC10
    {
            ctx->lr = 0x80D330BCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D330BC:
    ctx->pc = 0x80D330BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D330BC: bl      0x8045DE7C
    {
            ctx->lr = 0x80D330C0u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D330C0:
    ctx->pc = 0x80D330C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D330C0: bl      0x80460A60
    {
            ctx->lr = 0x80D330C4u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D330C4:
    ctx->pc = 0x80D330C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D330C4: bl      0x80460A24
    {
            ctx->lr = 0x80D330C8u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D330C8:
    ctx->pc = 0x80D330C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D330C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80D330C8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D330CC:
    ctx->pc = 0x80D330CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330CCu)) return;
    // 80D330CC: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80D330D0:
    ctx->pc = 0x80D330D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330D0u)) return;
    // 80D330D0: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80D330D4:
    ctx->pc = 0x80D330D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330D4u)) return;
    // 80D330D4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D330D8:
    ctx->pc = 0x80D330D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330D8u)) return;
    // 80D330D8: addi    r5, r5, -9104
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9104);

label_80D330DC:
    ctx->pc = 0x80D330DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D330DC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D330DCu)) return;
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
label_80D330E0:
    ctx->pc = 0x80D330E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330E0u)) return;
    // 80D330E0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D330E4:
    ctx->pc = 0x80D330E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330E4u)) return;
    // 80D330E4: addi    r5, r5, -9100
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9100);

label_80D330E8:
    ctx->pc = 0x80D330E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D330E8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D330E8u)) return;
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
label_80D330EC:
    ctx->pc = 0x80D330ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330ECu)) return;
    // 80D330EC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D330F0:
    ctx->pc = 0x80D330F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330F0u)) return;
    // 80D330F0: addi    r5, r5, -9096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9096);

label_80D330F4:
    ctx->pc = 0x80D330F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D330F4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D330F4u)) return;
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
label_80D330F8:
    ctx->pc = 0x80D330F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330F8u)) return;
    // 80D330F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D330FC:
    ctx->pc = 0x80D330FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D330FCu)) return;
    // 80D330FC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D33100:
    ctx->pc = 0x80D33100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33100u)) return;
    // 80D33100: addi    r6, r6, -1878
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1878);

label_80D33104:
    ctx->pc = 0x80D33104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33104u)) return;
    // 80D33104: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D33108:
    ctx->pc = 0x80D33108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33108u)) return;
    // 80D33108: bl      0x8045ED84
    {
            ctx->lr = 0x80D3310Cu;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D3310C:
    ctx->pc = 0x80D3310Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3310Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3310C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33110:
    ctx->pc = 0x80D33110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33110u)) return;
    // 80D33110: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33114u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33114:
    ctx->pc = 0x80D33114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33114: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D33118:
    ctx->pc = 0x80D33118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33118u)) return;
    // 80D33118: bl      0x80406090
    {
            ctx->lr = 0x80D3311Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D3311C:
    ctx->pc = 0x80D3311Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3311Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3311C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33120:
    ctx->pc = 0x80D33120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33120u)) return;
    // 80D33120: bl      0x8045F220
    {
            ctx->lr = 0x80D33124u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33124:
    ctx->pc = 0x80D33124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33124: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33128:
    ctx->pc = 0x80D33128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33128u)) return;
    // 80D33128: addi    r4, r4, -9092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9092);

label_80D3312C:
    ctx->pc = 0x80D3312Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3312Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3312C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3312Cu)) return;
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
label_80D33130:
    ctx->pc = 0x80D33130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33130u)) return;
    // 80D33130: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33134:
    ctx->pc = 0x80D33134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33134u)) return;
    // 80D33134: addi    r4, r4, -9100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9100);

label_80D33138:
    ctx->pc = 0x80D33138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33138: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33138u)) return;
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
label_80D3313C:
    ctx->pc = 0x80D3313Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3313Cu)) return;
    // 80D3313C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33140:
    ctx->pc = 0x80D33140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33140u)) return;
    // 80D33140: addi    r4, r4, -9088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9088);

label_80D33144:
    ctx->pc = 0x80D33144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33144: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33144u)) return;
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
label_80D33148:
    ctx->pc = 0x80D33148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33148u)) return;
    // 80D33148: bl      0x8045EF2C
    {
            ctx->lr = 0x80D3314Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D3314C:
    ctx->pc = 0x80D3314Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3314Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3314C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33150:
    ctx->pc = 0x80D33150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33150u)) return;
    // 80D33150: bl      0x8045F220
    {
            ctx->lr = 0x80D33154u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33154:
    ctx->pc = 0x80D33154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D33154: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33158:
    ctx->pc = 0x80D33158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33158u)) return;
    // 80D33158: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D3315C:
    ctx->pc = 0x80D3315Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3315Cu)) return;
    // 80D3315C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D33160:
    ctx->pc = 0x80D33160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33160u)) return;
    // 80D33160: bl      0x8045EEA8
    {
            ctx->lr = 0x80D33164u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D33164:
    ctx->pc = 0x80D33164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33164: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33168:
    ctx->pc = 0x80D33168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33168u)) return;
    // 80D33168: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3316C:
    ctx->pc = 0x80D3316Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3316Cu)) return;
    // 80D3316C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33170:
    ctx->pc = 0x80D33170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33170u)) return;
    // 80D33170: addi    r5, r5, -9084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9084);

label_80D33174:
    ctx->pc = 0x80D33174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33174: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33174u)) return;
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
label_80D33178:
    ctx->pc = 0x80D33178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33178u)) return;
    // 80D33178: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3317C:
    ctx->pc = 0x80D3317Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3317Cu)) return;
    // 80D3317C: addi    r5, r5, -9080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9080);

label_80D33180:
    ctx->pc = 0x80D33180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33180: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33180u)) return;
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
label_80D33184:
    ctx->pc = 0x80D33184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33184u)) return;
    // 80D33184: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33188:
    ctx->pc = 0x80D33188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33188u)) return;
    // 80D33188: addi    r5, r5, -9076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9076);

label_80D3318C:
    ctx->pc = 0x80D3318Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3318Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3318C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3318Cu)) return;
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
label_80D33190:
    ctx->pc = 0x80D33190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33190u)) return;
    // 80D33190: bl      0x8045C750
    {
            ctx->lr = 0x80D33194u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33194:
    ctx->pc = 0x80D33194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D33194: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33198:
    ctx->pc = 0x80D33198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33198u)) return;
    // 80D33198: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3319C:
    ctx->pc = 0x80D3319Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3319Cu)) return;
    // 80D3319C: li      r5, 2827
    ctx->gpr[5] = (u32)(s32)(2827);

label_80D331A0:
    ctx->pc = 0x80D331A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331A0u)) return;
    // 80D331A0: li      r6, 3982
    ctx->gpr[6] = (u32)(s32)(3982);

label_80D331A4:
    ctx->pc = 0x80D331A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331A4u)) return;
    // 80D331A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D331A8:
    ctx->pc = 0x80D331A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331A8u)) return;
    // 80D331A8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D331ACu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D331AC:
    ctx->pc = 0x80D331ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D331ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D331AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D331B0:
    ctx->pc = 0x80D331B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331B0u)) return;
    // 80D331B0: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80D331B4:
    ctx->pc = 0x80D331B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331B4u)) return;
    // 80D331B4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D331B8:
    ctx->pc = 0x80D331B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331B8u)) return;
    // 80D331B8: addi    r5, r5, -9072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9072);

label_80D331BC:
    ctx->pc = 0x80D331BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D331BC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D331BCu)) return;
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
label_80D331C0:
    ctx->pc = 0x80D331C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331C0u)) return;
    // 80D331C0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D331C4:
    ctx->pc = 0x80D331C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331C4u)) return;
    // 80D331C4: addi    r5, r5, -9068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9068);

label_80D331C8:
    ctx->pc = 0x80D331C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D331C8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D331C8u)) return;
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
label_80D331CC:
    ctx->pc = 0x80D331CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331CCu)) return;
    // 80D331CC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D331D0:
    ctx->pc = 0x80D331D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331D0u)) return;
    // 80D331D0: addi    r5, r5, -9064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9064);

label_80D331D4:
    ctx->pc = 0x80D331D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D331D4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D331D4u)) return;
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
label_80D331D8:
    ctx->pc = 0x80D331D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331D8u)) return;
    // 80D331D8: bl      0x8045C750
    {
            ctx->lr = 0x80D331DCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D331DC:
    ctx->pc = 0x80D331DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D331DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D331DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D331E0:
    ctx->pc = 0x80D331E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331E0u)) return;
    // 80D331E0: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D331E4:
    ctx->pc = 0x80D331E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331E4u)) return;
    // 80D331E4: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80D331E8:
    ctx->pc = 0x80D331E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331E8u)) return;
    // 80D331E8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D331EC:
    ctx->pc = 0x80D331ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331ECu)) return;
    // 80D331EC: addi    r6, r6, -7306
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7306);

label_80D331F0:
    ctx->pc = 0x80D331F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331F0u)) return;
    // 80D331F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D331F4:
    ctx->pc = 0x80D331F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331F4u)) return;
    // 80D331F4: bl      0x8045C7B4
    {
            ctx->lr = 0x80D331F8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D331F8:
    ctx->pc = 0x80D331F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D331F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D331F8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D331FC:
    ctx->pc = 0x80D331FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D331FCu)) return;
    // 80D331FC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D33200:
    ctx->pc = 0x80D33200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33200: lwz     r0, 0(r3)
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
label_80D33204:
    ctx->pc = 0x80D33204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33204u)) return;
    // 80D33204: cmpwi   r0, 0
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

label_80D33208:
    ctx->pc = 0x80D33208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33208u)) return;
    // 80D33208: bc    4, 2, 0x80D33220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D33220;
        }
    }

label_80D3320C:
    ctx->pc = 0x80D3320Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3320Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3320C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33210:
    ctx->pc = 0x80D33210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33210u)) return;
    // 80D33210: bl      0x8045F220
    {
            ctx->lr = 0x80D33214u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33214:
    ctx->pc = 0x80D33214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33214: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33218:
    ctx->pc = 0x80D33218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33218u)) return;
    // 80D33218: addi    r4, r4, -8268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8268);

label_80D3321C:
    ctx->pc = 0x80D3321Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3321Cu)) return;
    // 80D3321C: bl      0x8045C060
    {
            ctx->lr = 0x80D33220u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33220:
    ctx->pc = 0x80D33220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D33220: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33224:
    ctx->pc = 0x80D33224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33224u)) return;
    // 80D33224: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D33228:
    ctx->pc = 0x80D33228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33228: lwz     r0, 0(r3)
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
label_80D3322C:
    ctx->pc = 0x80D3322Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3322Cu)) return;
    // 80D3322C: cmpwi   r0, 1
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

label_80D33230:
    ctx->pc = 0x80D33230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33230u)) return;
    // 80D33230: bc    4, 2, 0x80D33248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D33248;
        }
    }

label_80D33234:
    ctx->pc = 0x80D33234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33234: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33238:
    ctx->pc = 0x80D33238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33238u)) return;
    // 80D33238: bl      0x8045F220
    {
            ctx->lr = 0x80D3323Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3323C:
    ctx->pc = 0x80D3323Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3323Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3323C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33240:
    ctx->pc = 0x80D33240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33240u)) return;
    // 80D33240: addi    r4, r4, -8244
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8244);

label_80D33244:
    ctx->pc = 0x80D33244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33244u)) return;
    // 80D33244: bl      0x8045C060
    {
            ctx->lr = 0x80D33248u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33248:
    ctx->pc = 0x80D33248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33248: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3324C:
    ctx->pc = 0x80D3324Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3324Cu)) return;
    // 80D3324C: bl      0x8045F220
    {
            ctx->lr = 0x80D33250u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33250:
    ctx->pc = 0x80D33250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33250: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33254:
    ctx->pc = 0x80D33254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33254u)) return;
    // 80D33254: addi    r4, r4, -8240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8240);

label_80D33258:
    ctx->pc = 0x80D33258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33258u)) return;
    // 80D33258: bl      0x8045C060
    {
            ctx->lr = 0x80D3325Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D3325C:
    ctx->pc = 0x80D3325Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3325Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3325C: li      r3, 1533
    ctx->gpr[3] = (u32)(s32)(1533);

label_80D33260:
    ctx->pc = 0x80D33260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33260u)) return;
    // 80D33260: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33264u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33264:
    ctx->pc = 0x80D33264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D33264: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33268:
    ctx->pc = 0x80D33268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33268u)) return;
    // 80D33268: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D3326C:
    ctx->pc = 0x80D3326Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3326Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3326C: lwz     r0, 0(r3)
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
label_80D33270:
    ctx->pc = 0x80D33270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33270u)) return;
    // 80D33270: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33274:
    ctx->pc = 0x80D33274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33274u)) return;
    // 80D33274: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D33278:
    ctx->pc = 0x80D33278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33278u)) return;
    // 80D33278: addi    r3, r3, -8296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8296);

label_80D3327C:
    ctx->pc = 0x80D3327Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3327Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3327C: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33280:
    ctx->pc = 0x80D33280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33280: lwz     r3, 0(r3)
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
label_80D33284:
    ctx->pc = 0x80D33284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33284u)) return;
    // 80D33284: bl      0x8045F6FC
    {
            ctx->lr = 0x80D33288u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D33288:
    ctx->pc = 0x80D33288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33288: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80D3328C:
    ctx->pc = 0x80D3328Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3328Cu)) return;
    // 80D3328C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33290u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33290:
    ctx->pc = 0x80D33290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D33290: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33294:
    ctx->pc = 0x80D33294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33294u)) return;
    // 80D33294: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D33298:
    ctx->pc = 0x80D33298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33298: lwz     r0, 0(r3)
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
label_80D3329C:
    ctx->pc = 0x80D3329Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3329Cu)) return;
    // 80D3329C: cmpwi   r0, 0
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

label_80D332A0:
    ctx->pc = 0x80D332A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332A0u)) return;
    // 80D332A0: bc    4, 2, 0x80D332B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D332B0;
        }
    }

label_80D332A4:
    ctx->pc = 0x80D332A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D332A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D332A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D332A8:
    ctx->pc = 0x80D332A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332A8u)) return;
    // 80D332A8: bl      0x8045F220
    {
            ctx->lr = 0x80D332ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D332AC:
    ctx->pc = 0x80D332ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D332ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D332AC: bl      0x8045C034
    {
            ctx->lr = 0x80D332B0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D332B0:
    ctx->pc = 0x80D332B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D332B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D332B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D332B4:
    ctx->pc = 0x80D332B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332B4u)) return;
    // 80D332B4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D332B8:
    ctx->pc = 0x80D332B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D332B8: lwz     r0, 0(r3)
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
label_80D332BC:
    ctx->pc = 0x80D332BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332BCu)) return;
    // 80D332BC: cmpwi   r0, 1
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

label_80D332C0:
    ctx->pc = 0x80D332C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332C0u)) return;
    // 80D332C0: bc    4, 2, 0x80D332D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D332D0;
        }
    }

label_80D332C4:
    ctx->pc = 0x80D332C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D332C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D332C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D332C8:
    ctx->pc = 0x80D332C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332C8u)) return;
    // 80D332C8: bl      0x8045F220
    {
            ctx->lr = 0x80D332CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D332CC:
    ctx->pc = 0x80D332CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D332CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D332CC: bl      0x8045C034
    {
            ctx->lr = 0x80D332D0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D332D0:
    ctx->pc = 0x80D332D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D332D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D332D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D332D4:
    ctx->pc = 0x80D332D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332D4u)) return;
    // 80D332D4: bl      0x8045F220
    {
            ctx->lr = 0x80D332D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D332D8:
    ctx->pc = 0x80D332D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D332D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D332D8: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D332DC:
    ctx->pc = 0x80D332DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332DCu)) return;
    // 80D332DC: addi    r4, r4, 12912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12912);

label_80D332E0:
    ctx->pc = 0x80D332E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332E0u)) return;
    // 80D332E0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D332E4:
    ctx->pc = 0x80D332E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332E4u)) return;
    // 80D332E4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D332E8:
    ctx->pc = 0x80D332E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332E8u)) return;
    // 80D332E8: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D332EC:
    ctx->pc = 0x80D332ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332ECu)) return;
    // 80D332EC: addi    r6, r6, -9060
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9060);

label_80D332F0:
    ctx->pc = 0x80D332F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D332F0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D332F0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D332F4:
    ctx->pc = 0x80D332F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332F4u)) return;
    // 80D332F4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D332F8:
    ctx->pc = 0x80D332F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332F8u)) return;
    // 80D332F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D332FC:
    ctx->pc = 0x80D332FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D332FCu)) return;
    // 80D332FC: bl      0x8045EBE4
    {
            ctx->lr = 0x80D33300u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D33300:
    ctx->pc = 0x80D33300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33300: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33304:
    ctx->pc = 0x80D33304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33304u)) return;
    // 80D33304: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33308u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33308:
    ctx->pc = 0x80D33308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33308: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3330C:
    ctx->pc = 0x80D3330Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3330Cu)) return;
    // 80D3330C: bl      0x8045F220
    {
            ctx->lr = 0x80D33310u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33310:
    ctx->pc = 0x80D33310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33310: bl      0x8045EB8C
    {
            ctx->lr = 0x80D33314u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D33314:
    ctx->pc = 0x80D33314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33314: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33318:
    ctx->pc = 0x80D33318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33318u)) return;
    // 80D33318: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3331C:
    ctx->pc = 0x80D3331Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3331Cu)) return;
    // 80D3331C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33320:
    ctx->pc = 0x80D33320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33320u)) return;
    // 80D33320: addi    r5, r5, -9056
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9056);

label_80D33324:
    ctx->pc = 0x80D33324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33324: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33324u)) return;
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
label_80D33328:
    ctx->pc = 0x80D33328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33328u)) return;
    // 80D33328: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3332C:
    ctx->pc = 0x80D3332Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3332Cu)) return;
    // 80D3332C: addi    r5, r5, -9052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9052);

label_80D33330:
    ctx->pc = 0x80D33330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33330: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33330u)) return;
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
label_80D33334:
    ctx->pc = 0x80D33334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33334u)) return;
    // 80D33334: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33338:
    ctx->pc = 0x80D33338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33338u)) return;
    // 80D33338: addi    r5, r5, -9048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9048);

label_80D3333C:
    ctx->pc = 0x80D3333Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3333Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3333C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3333Cu)) return;
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
label_80D33340:
    ctx->pc = 0x80D33340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33340u)) return;
    // 80D33340: bl      0x8045C750
    {
            ctx->lr = 0x80D33344u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33344:
    ctx->pc = 0x80D33344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33344: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33348:
    ctx->pc = 0x80D33348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33348u)) return;
    // 80D33348: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3334C:
    ctx->pc = 0x80D3334Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3334Cu)) return;
    // 80D3334C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D33350:
    ctx->pc = 0x80D33350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33350u)) return;
    // 80D33350: addi    r5, r5, -5196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5196);

label_80D33354:
    ctx->pc = 0x80D33354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33354u)) return;
    // 80D33354: li      r6, 32503
    ctx->gpr[6] = (u32)(s32)(32503);

label_80D33358:
    ctx->pc = 0x80D33358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33358u)) return;
    // 80D33358: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D3335C:
    ctx->pc = 0x80D3335Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3335Cu)) return;
    // 80D3335C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33360u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33360:
    ctx->pc = 0x80D33360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33360: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33364:
    ctx->pc = 0x80D33364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33364u)) return;
    // 80D33364: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D33368:
    ctx->pc = 0x80D33368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33368u)) return;
    // 80D33368: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3336C:
    ctx->pc = 0x80D3336Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3336Cu)) return;
    // 80D3336C: addi    r5, r5, -9044
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9044);

label_80D33370:
    ctx->pc = 0x80D33370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33370: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33370u)) return;
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
label_80D33374:
    ctx->pc = 0x80D33374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33374u)) return;
    // 80D33374: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33378:
    ctx->pc = 0x80D33378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33378u)) return;
    // 80D33378: addi    r5, r5, -9052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9052);

label_80D3337C:
    ctx->pc = 0x80D3337Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3337Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3337C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3337Cu)) return;
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
label_80D33380:
    ctx->pc = 0x80D33380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33380u)) return;
    // 80D33380: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33384:
    ctx->pc = 0x80D33384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33384u)) return;
    // 80D33384: addi    r5, r5, -9040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9040);

label_80D33388:
    ctx->pc = 0x80D33388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33388: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33388u)) return;
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
label_80D3338C:
    ctx->pc = 0x80D3338Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3338Cu)) return;
    // 80D3338C: bl      0x8045C750
    {
            ctx->lr = 0x80D33390u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33390:
    ctx->pc = 0x80D33390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33390: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33394:
    ctx->pc = 0x80D33394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33394u)) return;
    // 80D33394: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D33398:
    ctx->pc = 0x80D33398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33398u)) return;
    // 80D33398: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D3339C:
    ctx->pc = 0x80D3339Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3339Cu)) return;
    // 80D3339C: addi    r5, r5, -5196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5196);

label_80D333A0:
    ctx->pc = 0x80D333A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333A0u)) return;
    // 80D333A0: li      r6, 32759
    ctx->gpr[6] = (u32)(s32)(32759);

label_80D333A4:
    ctx->pc = 0x80D333A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333A4u)) return;
    // 80D333A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D333A8:
    ctx->pc = 0x80D333A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333A8u)) return;
    // 80D333A8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D333ACu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D333AC:
    ctx->pc = 0x80D333ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D333ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D333AC: li      r3, 1534
    ctx->gpr[3] = (u32)(s32)(1534);

label_80D333B0:
    ctx->pc = 0x80D333B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333B0u)) return;
    // 80D333B0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D333B4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D333B4:
    ctx->pc = 0x80D333B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D333B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D333B4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D333B8:
    ctx->pc = 0x80D333B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333B8u)) return;
    // 80D333B8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D333BC:
    ctx->pc = 0x80D333BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D333BC: lwz     r0, 0(r3)
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
label_80D333C0:
    ctx->pc = 0x80D333C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333C0u)) return;
    // 80D333C0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D333C4:
    ctx->pc = 0x80D333C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333C4u)) return;
    // 80D333C4: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D333C8:
    ctx->pc = 0x80D333C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333C8u)) return;
    // 80D333C8: addi    r3, r3, -8296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8296);

label_80D333CC:
    ctx->pc = 0x80D333CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D333CC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D333D0:
    ctx->pc = 0x80D333D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D333D0: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D333D4:
    ctx->pc = 0x80D333D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333D4u)) return;
    // 80D333D4: bl      0x8045F6FC
    {
            ctx->lr = 0x80D333D8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D333D8:
    ctx->pc = 0x80D333D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D333D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D333D8: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80D333DC:
    ctx->pc = 0x80D333DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333DCu)) return;
    // 80D333DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D333E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D333E0:
    ctx->pc = 0x80D333E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D333E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D333E0: bl      0x8045F32C
    {
            ctx->lr = 0x80D333E4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D333E4:
    ctx->pc = 0x80D333E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D333E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D333E4: bl      0x8045F300
    {
            ctx->lr = 0x80D333E8u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D333E8:
    ctx->pc = 0x80D333E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D333E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D333E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D333EC:
    ctx->pc = 0x80D333ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333ECu)) return;
    // 80D333EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D333F0:
    ctx->pc = 0x80D333F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333F0u)) return;
    // 80D333F0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D333F4:
    ctx->pc = 0x80D333F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333F4u)) return;
    // 80D333F4: addi    r5, r5, -9072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9072);

label_80D333F8:
    ctx->pc = 0x80D333F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D333F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D333F8u)) return;
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
label_80D333FC:
    ctx->pc = 0x80D333FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D333FCu)) return;
    // 80D333FC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33400:
    ctx->pc = 0x80D33400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33400u)) return;
    // 80D33400: addi    r5, r5, -9068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9068);

label_80D33404:
    ctx->pc = 0x80D33404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33404: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33404u)) return;
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
label_80D33408:
    ctx->pc = 0x80D33408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33408u)) return;
    // 80D33408: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3340C:
    ctx->pc = 0x80D3340Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3340Cu)) return;
    // 80D3340C: addi    r5, r5, -9064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9064);

label_80D33410:
    ctx->pc = 0x80D33410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33410: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33410u)) return;
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
label_80D33414:
    ctx->pc = 0x80D33414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33414u)) return;
    // 80D33414: bl      0x8045C750
    {
            ctx->lr = 0x80D33418u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33418:
    ctx->pc = 0x80D33418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33418: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3341C:
    ctx->pc = 0x80D3341Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3341Cu)) return;
    // 80D3341C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33420:
    ctx->pc = 0x80D33420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33420u)) return;
    // 80D33420: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80D33424:
    ctx->pc = 0x80D33424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33424u)) return;
    // 80D33424: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D33428:
    ctx->pc = 0x80D33428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33428u)) return;
    // 80D33428: addi    r6, r6, -7306
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7306);

label_80D3342C:
    ctx->pc = 0x80D3342Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3342Cu)) return;
    // 80D3342C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D33430:
    ctx->pc = 0x80D33430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33430u)) return;
    // 80D33430: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33434u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33434:
    ctx->pc = 0x80D33434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33434: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33438:
    ctx->pc = 0x80D33438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33438u)) return;
    // 80D33438: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D3343C:
    ctx->pc = 0x80D3343Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3343Cu)) return;
    // 80D3343C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33440:
    ctx->pc = 0x80D33440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33440u)) return;
    // 80D33440: addi    r5, r5, -9084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9084);

label_80D33444:
    ctx->pc = 0x80D33444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33444: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33444u)) return;
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
label_80D33448:
    ctx->pc = 0x80D33448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33448u)) return;
    // 80D33448: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3344C:
    ctx->pc = 0x80D3344Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3344Cu)) return;
    // 80D3344C: addi    r5, r5, -9080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9080);

label_80D33450:
    ctx->pc = 0x80D33450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33450: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33450u)) return;
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
label_80D33454:
    ctx->pc = 0x80D33454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33454u)) return;
    // 80D33454: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33458:
    ctx->pc = 0x80D33458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33458u)) return;
    // 80D33458: addi    r5, r5, -9076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9076);

label_80D3345C:
    ctx->pc = 0x80D3345Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3345Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3345C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3345Cu)) return;
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
label_80D33460:
    ctx->pc = 0x80D33460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33460u)) return;
    // 80D33460: bl      0x8045C750
    {
            ctx->lr = 0x80D33464u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33464:
    ctx->pc = 0x80D33464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D33464: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33468:
    ctx->pc = 0x80D33468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33468u)) return;
    // 80D33468: li      r4, 210
    ctx->gpr[4] = (u32)(s32)(210);

label_80D3346C:
    ctx->pc = 0x80D3346Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3346Cu)) return;
    // 80D3346C: li      r5, 2827
    ctx->gpr[5] = (u32)(s32)(2827);

label_80D33470:
    ctx->pc = 0x80D33470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33470u)) return;
    // 80D33470: li      r6, 3982
    ctx->gpr[6] = (u32)(s32)(3982);

label_80D33474:
    ctx->pc = 0x80D33474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33474u)) return;
    // 80D33474: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D33478:
    ctx->pc = 0x80D33478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33478u)) return;
    // 80D33478: bl      0x8045C7B4
    {
            ctx->lr = 0x80D3347Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D3347C:
    ctx->pc = 0x80D3347Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3347Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3347C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33480:
    ctx->pc = 0x80D33480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33480u)) return;
    // 80D33480: bl      0x8045F220
    {
            ctx->lr = 0x80D33484u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33484:
    ctx->pc = 0x80D33484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33484: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D33488:
    ctx->pc = 0x80D33488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33488u)) return;
    // 80D33488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3348C:
    ctx->pc = 0x80D3348Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3348Cu)) return;
    // 80D3348C: bl      0x8045F220
    {
            ctx->lr = 0x80D33490u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33490:
    ctx->pc = 0x80D33490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D33490: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D33494:
    ctx->pc = 0x80D33494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33494u)) return;
    // 80D33494: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33498:
    ctx->pc = 0x80D33498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33498u)) return;
    // 80D33498: addi    r5, r5, -9036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9036);

label_80D3349C:
    ctx->pc = 0x80D3349Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3349Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3349C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3349Cu)) return;
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
label_80D334A0:
    ctx->pc = 0x80D334A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334A0u)) return;
    // 80D334A0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D334A4:
    ctx->pc = 0x80D334A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334A4u)) return;
    // 80D334A4: addi    r5, r5, -9032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9032);

label_80D334A8:
    ctx->pc = 0x80D334A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D334A8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D334A8u)) return;
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
label_80D334AC:
    ctx->pc = 0x80D334ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334ACu)) return;
    // 80D334AC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D334ACu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D334B0:
    ctx->pc = 0x80D334B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334B0u)) return;
    // 80D334B0: bl      0x8045E734
    {
            ctx->lr = 0x80D334B4u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D334B4:
    ctx->pc = 0x80D334B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D334B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D334B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D334B8:
    ctx->pc = 0x80D334B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334B8u)) return;
    // 80D334B8: bl      0x8045F220
    {
            ctx->lr = 0x80D334BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D334BC:
    ctx->pc = 0x80D334BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D334BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D334BC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D334C0:
    ctx->pc = 0x80D334C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334C0u)) return;
    // 80D334C0: addi    r4, r4, -8232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8232);

label_80D334C4:
    ctx->pc = 0x80D334C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334C4u)) return;
    // 80D334C4: bl      0x8045C060
    {
            ctx->lr = 0x80D334C8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D334C8:
    ctx->pc = 0x80D334C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D334C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D334C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D334CC:
    ctx->pc = 0x80D334CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334CCu)) return;
    // 80D334CC: bl      0x8045F220
    {
            ctx->lr = 0x80D334D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D334D0:
    ctx->pc = 0x80D334D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D334D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D334D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D334D4:
    ctx->pc = 0x80D334D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334D4u)) return;
    // 80D334D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D334D8:
    ctx->pc = 0x80D334D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334D8u)) return;
    // 80D334D8: bl      0x8045F220
    {
            ctx->lr = 0x80D334DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D334DC:
    ctx->pc = 0x80D334DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D334DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D334DC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D334E0:
    ctx->pc = 0x80D334E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334E0u)) return;
    // 80D334E0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D334E4:
    ctx->pc = 0x80D334E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334E4u)) return;
    // 80D334E4: addi    r5, r5, -9036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9036);

label_80D334E8:
    ctx->pc = 0x80D334E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D334E8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D334E8u)) return;
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
label_80D334EC:
    ctx->pc = 0x80D334ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334ECu)) return;
    // 80D334EC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D334F0:
    ctx->pc = 0x80D334F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334F0u)) return;
    // 80D334F0: addi    r5, r5, -9032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9032);

label_80D334F4:
    ctx->pc = 0x80D334F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D334F4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D334F4u)) return;
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
label_80D334F8:
    ctx->pc = 0x80D334F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334F8u)) return;
    // 80D334F8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D334F8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D334FC:
    ctx->pc = 0x80D334FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D334FCu)) return;
    // 80D334FC: bl      0x8045E734
    {
            ctx->lr = 0x80D33500u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D33500:
    ctx->pc = 0x80D33500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33500: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D33504:
    ctx->pc = 0x80D33504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33504u)) return;
    // 80D33504: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33508u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33508:
    ctx->pc = 0x80D33508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33508: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3350C:
    ctx->pc = 0x80D3350Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3350Cu)) return;
    // 80D3350C: bl      0x8045F220
    {
            ctx->lr = 0x80D33510u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33510:
    ctx->pc = 0x80D33510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33510: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33514:
    ctx->pc = 0x80D33514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33514u)) return;
    // 80D33514: addi    r4, r4, -8228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8228);

label_80D33518:
    ctx->pc = 0x80D33518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33518u)) return;
    // 80D33518: bl      0x8045C060
    {
            ctx->lr = 0x80D3351Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D3351C:
    ctx->pc = 0x80D3351Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3351Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3351C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33520:
    ctx->pc = 0x80D33520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33520u)) return;
    // 80D33520: bl      0x8045F220
    {
            ctx->lr = 0x80D33524u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33524:
    ctx->pc = 0x80D33524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33524: bl      0x8045E760
    {
            ctx->lr = 0x80D33528u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D33528:
    ctx->pc = 0x80D33528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D33528: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D3352C:
    ctx->pc = 0x80D3352Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3352Cu)) return;
    // 80D3352C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D33530:
    ctx->pc = 0x80D33530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33530: lwz     r0, 0(r3)
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
label_80D33534:
    ctx->pc = 0x80D33534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33534u)) return;
    // 80D33534: cmpwi   r0, 0
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

label_80D33538:
    ctx->pc = 0x80D33538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33538u)) return;
    // 80D33538: bc    4, 2, 0x80D33550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D33550;
        }
    }

label_80D3353C:
    ctx->pc = 0x80D3353Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3353Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3353C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33540:
    ctx->pc = 0x80D33540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33540u)) return;
    // 80D33540: bl      0x8045F220
    {
            ctx->lr = 0x80D33544u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33544:
    ctx->pc = 0x80D33544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33544: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33548:
    ctx->pc = 0x80D33548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33548u)) return;
    // 80D33548: addi    r4, r4, -8224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8224);

label_80D3354C:
    ctx->pc = 0x80D3354Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3354Cu)) return;
    // 80D3354C: bl      0x8045C060
    {
            ctx->lr = 0x80D33550u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33550:
    ctx->pc = 0x80D33550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D33550: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33554:
    ctx->pc = 0x80D33554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33554u)) return;
    // 80D33554: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D33558:
    ctx->pc = 0x80D33558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33558: lwz     r0, 0(r3)
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
label_80D3355C:
    ctx->pc = 0x80D3355Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3355Cu)) return;
    // 80D3355C: cmpwi   r0, 1
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

label_80D33560:
    ctx->pc = 0x80D33560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33560u)) return;
    // 80D33560: bc    4, 2, 0x80D33578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D33578;
        }
    }

label_80D33564:
    ctx->pc = 0x80D33564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33564: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33568:
    ctx->pc = 0x80D33568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33568u)) return;
    // 80D33568: bl      0x8045F220
    {
            ctx->lr = 0x80D3356Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3356C:
    ctx->pc = 0x80D3356Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3356Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3356C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33570:
    ctx->pc = 0x80D33570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33570u)) return;
    // 80D33570: addi    r4, r4, -8212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8212);

label_80D33574:
    ctx->pc = 0x80D33574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33574u)) return;
    // 80D33574: bl      0x8045C060
    {
            ctx->lr = 0x80D33578u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33578:
    ctx->pc = 0x80D33578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33578: li      r3, 1535
    ctx->gpr[3] = (u32)(s32)(1535);

label_80D3357C:
    ctx->pc = 0x80D3357Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3357Cu)) return;
    // 80D3357C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33580u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33580:
    ctx->pc = 0x80D33580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D33580: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33584:
    ctx->pc = 0x80D33584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33584u)) return;
    // 80D33584: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D33588:
    ctx->pc = 0x80D33588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33588: lwz     r0, 0(r3)
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
label_80D3358C:
    ctx->pc = 0x80D3358Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3358Cu)) return;
    // 80D3358C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33590:
    ctx->pc = 0x80D33590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33590u)) return;
    // 80D33590: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D33594:
    ctx->pc = 0x80D33594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33594u)) return;
    // 80D33594: addi    r3, r3, -8296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8296);

label_80D33598:
    ctx->pc = 0x80D33598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33598: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3359C:
    ctx->pc = 0x80D3359Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3359Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3359C: lwz     r3, 8(r3)
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
label_80D335A0:
    ctx->pc = 0x80D335A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335A0u)) return;
    // 80D335A0: bl      0x8045F6FC
    {
            ctx->lr = 0x80D335A4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D335A4:
    ctx->pc = 0x80D335A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D335A4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D335A8:
    ctx->pc = 0x80D335A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335A8u)) return;
    // 80D335A8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D335ACu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D335AC:
    ctx->pc = 0x80D335ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D335AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D335B0:
    ctx->pc = 0x80D335B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335B0u)) return;
    // 80D335B0: bl      0x8045F220
    {
            ctx->lr = 0x80D335B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D335B4:
    ctx->pc = 0x80D335B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D335B4: bl      0x8045E760
    {
            ctx->lr = 0x80D335B8u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D335B8:
    ctx->pc = 0x80D335B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D335B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D335BC:
    ctx->pc = 0x80D335BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335BCu)) return;
    // 80D335BC: bl      0x8045F220
    {
            ctx->lr = 0x80D335C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D335C0:
    ctx->pc = 0x80D335C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D335C0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D335C4:
    ctx->pc = 0x80D335C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335C4u)) return;
    // 80D335C4: addi    r4, r4, -8208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8208);

label_80D335C8:
    ctx->pc = 0x80D335C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335C8u)) return;
    // 80D335C8: bl      0x8045C060
    {
            ctx->lr = 0x80D335CCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D335CC:
    ctx->pc = 0x80D335CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D335CC: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D335D0:
    ctx->pc = 0x80D335D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335D0u)) return;
    // 80D335D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D335D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D335D4:
    ctx->pc = 0x80D335D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D335D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D335D8:
    ctx->pc = 0x80D335D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335D8u)) return;
    // 80D335D8: bl      0x8045F220
    {
            ctx->lr = 0x80D335DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D335DC:
    ctx->pc = 0x80D335DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D335DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D335DC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D335E0:
    ctx->pc = 0x80D335E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335E0u)) return;
    // 80D335E0: addi    r4, r4, 2524
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2524);

label_80D335E4:
    ctx->pc = 0x80D335E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335E4u)) return;
    // 80D335E4: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D335E8:
    ctx->pc = 0x80D335E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335E8u)) return;
    // 80D335E8: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D335EC:
    ctx->pc = 0x80D335ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335ECu)) return;
    // 80D335EC: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D335F0:
    ctx->pc = 0x80D335F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335F0u)) return;
    // 80D335F0: addi    r6, r6, -9028
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9028);

label_80D335F4:
    ctx->pc = 0x80D335F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D335F4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D335F4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D335F8:
    ctx->pc = 0x80D335F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335F8u)) return;
    // 80D335F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D335FC:
    ctx->pc = 0x80D335FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D335FCu)) return;
    // 80D335FC: li      r7, 20
    ctx->gpr[7] = (u32)(s32)(20);

label_80D33600:
    ctx->pc = 0x80D33600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33600u)) return;
    // 80D33600: bl      0x8045EBE4
    {
            ctx->lr = 0x80D33604u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D33604:
    ctx->pc = 0x80D33604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33604: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33608:
    ctx->pc = 0x80D33608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33608u)) return;
    // 80D33608: bl      0x8045F220
    {
            ctx->lr = 0x80D3360Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3360C:
    ctx->pc = 0x80D3360Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3360Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3360C: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D33610:
    ctx->pc = 0x80D33610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33610u)) return;
    // 80D33610: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D33614:
    ctx->pc = 0x80D33614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33614u)) return;
    // 80D33614: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D33618:
    ctx->pc = 0x80D33618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33618u)) return;
    // 80D33618: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D3361C:
    ctx->pc = 0x80D3361Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3361Cu)) return;
    // 80D3361C: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D33620:
    ctx->pc = 0x80D33620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33620u)) return;
    // 80D33620: addi    r6, r6, -9060
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9060);

label_80D33624:
    ctx->pc = 0x80D33624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D33624: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D33624u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D33628:
    ctx->pc = 0x80D33628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33628u)) return;
    // 80D33628: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D3362C:
    ctx->pc = 0x80D3362Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3362Cu)) return;
    // 80D3362C: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80D33630:
    ctx->pc = 0x80D33630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33630u)) return;
    // 80D33630: bl      0x8045EBE4
    {
            ctx->lr = 0x80D33634u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D33634:
    ctx->pc = 0x80D33634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33634: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D33638:
    ctx->pc = 0x80D33638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33638u)) return;
    // 80D33638: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3363Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3363C:
    ctx->pc = 0x80D3363Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3363Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3363C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33640:
    ctx->pc = 0x80D33640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33640u)) return;
    // 80D33640: bl      0x8045F220
    {
            ctx->lr = 0x80D33644u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33644:
    ctx->pc = 0x80D33644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33644: bl      0x8045C034
    {
            ctx->lr = 0x80D33648u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D33648:
    ctx->pc = 0x80D33648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33648: bl      0x8045F300
    {
            ctx->lr = 0x80D3364Cu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D3364C:
    ctx->pc = 0x80D3364Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3364Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3364C: bl      0x8045BFF4
    {
            ctx->lr = 0x80D33650u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D33650:
    ctx->pc = 0x80D33650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33650: b       0x80D33670
    {
            goto label_80D33670;
    }

label_80D33654:
    ctx->pc = 0x80D33654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33654: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33658:
    ctx->pc = 0x80D33658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33658u)) return;
    // 80D33658: bl      0x8045F220
    {
            ctx->lr = 0x80D3365Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3365C:
    ctx->pc = 0x80D3365Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3365Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3365C: bl      0x8045EFD8
    {
            ctx->lr = 0x80D33660u;
            ctx->pc = 0x8045EFD8u;
            return;
    }

label_80D33660:
    ctx->pc = 0x80D33660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33660: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33664:
    ctx->pc = 0x80D33664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33664u)) return;
    // 80D33664: bl      0x8045ED54
    {
            ctx->lr = 0x80D33668u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D33668:
    ctx->pc = 0x80D33668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33668: bl      0x8045DE34
    {
            ctx->lr = 0x80D3366Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D3366C:
    ctx->pc = 0x80D3366Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3366Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3366C: bl      0x80460A80
    {
            ctx->lr = 0x80D33670u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D33670:
    ctx->pc = 0x80D33670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D33670: lwz     r31, 12(r1)
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
label_80D33674:
    ctx->pc = 0x80D33674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33674: lwz     r0, 20(r1)
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
label_80D33678:
    ctx->pc = 0x80D33678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D33678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33678: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3367C:
    ctx->pc = 0x80D3367Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3367Cu)) return;
    // 80D3367C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D33680:
    ctx->pc = 0x80D33680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33680u)) return;
    // 80D33680: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D33080;
        }
    }

    ctx->pc = 0x80D33684u;
    return;
return_dispatch_80D33080:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D330BCu: goto label_80D330BC;
    case 0x80D330C0u: goto label_80D330C0;
    case 0x80D330C4u: goto label_80D330C4;
    case 0x80D330C8u: goto label_80D330C8;
    case 0x80D3310Cu: goto label_80D3310C;
    case 0x80D33114u: goto label_80D33114;
    case 0x80D3311Cu: goto label_80D3311C;
    case 0x80D33124u: goto label_80D33124;
    case 0x80D3314Cu: goto label_80D3314C;
    case 0x80D33154u: goto label_80D33154;
    case 0x80D33164u: goto label_80D33164;
    case 0x80D33194u: goto label_80D33194;
    case 0x80D331ACu: goto label_80D331AC;
    case 0x80D331DCu: goto label_80D331DC;
    case 0x80D331F8u: goto label_80D331F8;
    case 0x80D33214u: goto label_80D33214;
    case 0x80D33220u: goto label_80D33220;
    case 0x80D3323Cu: goto label_80D3323C;
    case 0x80D33248u: goto label_80D33248;
    case 0x80D33250u: goto label_80D33250;
    case 0x80D3325Cu: goto label_80D3325C;
    case 0x80D33264u: goto label_80D33264;
    case 0x80D33288u: goto label_80D33288;
    case 0x80D33290u: goto label_80D33290;
    case 0x80D332ACu: goto label_80D332AC;
    case 0x80D332B0u: goto label_80D332B0;
    case 0x80D332CCu: goto label_80D332CC;
    case 0x80D332D0u: goto label_80D332D0;
    case 0x80D332D8u: goto label_80D332D8;
    case 0x80D33300u: goto label_80D33300;
    case 0x80D33308u: goto label_80D33308;
    case 0x80D33310u: goto label_80D33310;
    case 0x80D33314u: goto label_80D33314;
    case 0x80D33344u: goto label_80D33344;
    case 0x80D33360u: goto label_80D33360;
    case 0x80D33390u: goto label_80D33390;
    case 0x80D333ACu: goto label_80D333AC;
    case 0x80D333B4u: goto label_80D333B4;
    case 0x80D333D8u: goto label_80D333D8;
    case 0x80D333E0u: goto label_80D333E0;
    case 0x80D333E4u: goto label_80D333E4;
    case 0x80D333E8u: goto label_80D333E8;
    case 0x80D33418u: goto label_80D33418;
    case 0x80D33434u: goto label_80D33434;
    case 0x80D33464u: goto label_80D33464;
    case 0x80D3347Cu: goto label_80D3347C;
    case 0x80D33484u: goto label_80D33484;
    case 0x80D33490u: goto label_80D33490;
    case 0x80D334B4u: goto label_80D334B4;
    case 0x80D334BCu: goto label_80D334BC;
    case 0x80D334C8u: goto label_80D334C8;
    case 0x80D334D0u: goto label_80D334D0;
    case 0x80D334DCu: goto label_80D334DC;
    case 0x80D33500u: goto label_80D33500;
    case 0x80D33508u: goto label_80D33508;
    case 0x80D33510u: goto label_80D33510;
    case 0x80D3351Cu: goto label_80D3351C;
    case 0x80D33524u: goto label_80D33524;
    case 0x80D33528u: goto label_80D33528;
    case 0x80D33544u: goto label_80D33544;
    case 0x80D33550u: goto label_80D33550;
    case 0x80D3356Cu: goto label_80D3356C;
    case 0x80D33578u: goto label_80D33578;
    case 0x80D33580u: goto label_80D33580;
    case 0x80D335A4u: goto label_80D335A4;
    case 0x80D335ACu: goto label_80D335AC;
    case 0x80D335B4u: goto label_80D335B4;
    case 0x80D335B8u: goto label_80D335B8;
    case 0x80D335C0u: goto label_80D335C0;
    case 0x80D335CCu: goto label_80D335CC;
    case 0x80D335D4u: goto label_80D335D4;
    case 0x80D335DCu: goto label_80D335DC;
    case 0x80D33604u: goto label_80D33604;
    case 0x80D3360Cu: goto label_80D3360C;
    case 0x80D33634u: goto label_80D33634;
    case 0x80D3363Cu: goto label_80D3363C;
    case 0x80D33644u: goto label_80D33644;
    case 0x80D33648u: goto label_80D33648;
    case 0x80D3364Cu: goto label_80D3364C;
    case 0x80D33650u: goto label_80D33650;
    case 0x80D3365Cu: goto label_80D3365C;
    case 0x80D33660u: goto label_80D33660;
    case 0x80D33668u: goto label_80D33668;
    case 0x80D3366Cu: goto label_80D3366C;
    case 0x80D33670u: goto label_80D33670;
    default: return;
    }
}

