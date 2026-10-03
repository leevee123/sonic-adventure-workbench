// DolRecomp output
#include "../generated.h"

void func_80D33900(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D33900[559] = {
        &&label_80D33900,
        &&label_80D33904,
        &&label_80D33908,
        &&label_80D3390C,
        &&label_80D33910,
        &&label_80D33914,
        &&label_80D33918,
        &&label_80D3391C,
        &&label_80D33920,
        &&label_80D33924,
        &&label_80D33928,
        &&label_80D3392C,
        &&label_80D33930,
        &&label_80D33934,
        &&label_80D33938,
        &&label_80D3393C,
        &&label_80D33940,
        &&label_80D33944,
        &&label_80D33948,
        &&label_80D3394C,
        &&label_80D33950,
        &&label_80D33954,
        &&label_80D33958,
        &&label_80D3395C,
        &&label_80D33960,
        &&label_80D33964,
        &&label_80D33968,
        &&label_80D3396C,
        &&label_80D33970,
        &&label_80D33974,
        &&label_80D33978,
        &&label_80D3397C,
        &&label_80D33980,
        &&label_80D33984,
        &&label_80D33988,
        &&label_80D3398C,
        &&label_80D33990,
        &&label_80D33994,
        &&label_80D33998,
        &&label_80D3399C,
        &&label_80D339A0,
        &&label_80D339A4,
        &&label_80D339A8,
        &&label_80D339AC,
        &&label_80D339B0,
        &&label_80D339B4,
        &&label_80D339B8,
        &&label_80D339BC,
        &&label_80D339C0,
        &&label_80D339C4,
        &&label_80D339C8,
        &&label_80D339CC,
        &&label_80D339D0,
        &&label_80D339D4,
        &&label_80D339D8,
        &&label_80D339DC,
        &&label_80D339E0,
        &&label_80D339E4,
        &&label_80D339E8,
        &&label_80D339EC,
        &&label_80D339F0,
        &&label_80D339F4,
        &&label_80D339F8,
        &&label_80D339FC,
        &&label_80D33A00,
        &&label_80D33A04,
        &&label_80D33A08,
        &&label_80D33A0C,
        &&label_80D33A10,
        &&label_80D33A14,
        &&label_80D33A18,
        &&label_80D33A1C,
        &&label_80D33A20,
        &&label_80D33A24,
        &&label_80D33A28,
        &&label_80D33A2C,
        &&label_80D33A30,
        &&label_80D33A34,
        &&label_80D33A38,
        &&label_80D33A3C,
        &&label_80D33A40,
        &&label_80D33A44,
        &&label_80D33A48,
        &&label_80D33A4C,
        &&label_80D33A50,
        &&label_80D33A54,
        &&label_80D33A58,
        &&label_80D33A5C,
        &&label_80D33A60,
        &&label_80D33A64,
        &&label_80D33A68,
        &&label_80D33A6C,
        &&label_80D33A70,
        &&label_80D33A74,
        &&label_80D33A78,
        &&label_80D33A7C,
        &&label_80D33A80,
        &&label_80D33A84,
        &&label_80D33A88,
        &&label_80D33A8C,
        &&label_80D33A90,
        &&label_80D33A94,
        &&label_80D33A98,
        &&label_80D33A9C,
        &&label_80D33AA0,
        &&label_80D33AA4,
        &&label_80D33AA8,
        &&label_80D33AAC,
        &&label_80D33AB0,
        &&label_80D33AB4,
        &&label_80D33AB8,
        &&label_80D33ABC,
        &&label_80D33AC0,
        &&label_80D33AC4,
        &&label_80D33AC8,
        &&label_80D33ACC,
        &&label_80D33AD0,
        &&label_80D33AD4,
        &&label_80D33AD8,
        &&label_80D33ADC,
        &&label_80D33AE0,
        &&label_80D33AE4,
        &&label_80D33AE8,
        &&label_80D33AEC,
        &&label_80D33AF0,
        &&label_80D33AF4,
        &&label_80D33AF8,
        &&label_80D33AFC,
        &&label_80D33B00,
        &&label_80D33B04,
        &&label_80D33B08,
        &&label_80D33B0C,
        &&label_80D33B10,
        &&label_80D33B14,
        &&label_80D33B18,
        &&label_80D33B1C,
        &&label_80D33B20,
        &&label_80D33B24,
        &&label_80D33B28,
        &&label_80D33B2C,
        &&label_80D33B30,
        &&label_80D33B34,
        &&label_80D33B38,
        &&label_80D33B3C,
        &&label_80D33B40,
        &&label_80D33B44,
        &&label_80D33B48,
        &&label_80D33B4C,
        &&label_80D33B50,
        &&label_80D33B54,
        &&label_80D33B58,
        &&label_80D33B5C,
        &&label_80D33B60,
        &&label_80D33B64,
        &&label_80D33B68,
        &&label_80D33B6C,
        &&label_80D33B70,
        &&label_80D33B74,
        &&label_80D33B78,
        &&label_80D33B7C,
        &&label_80D33B80,
        &&label_80D33B84,
        &&label_80D33B88,
        &&label_80D33B8C,
        &&label_80D33B90,
        &&label_80D33B94,
        &&label_80D33B98,
        &&label_80D33B9C,
        &&label_80D33BA0,
        &&label_80D33BA4,
        &&label_80D33BA8,
        &&label_80D33BAC,
        &&label_80D33BB0,
        &&label_80D33BB4,
        &&label_80D33BB8,
        &&label_80D33BBC,
        &&label_80D33BC0,
        &&label_80D33BC4,
        &&label_80D33BC8,
        &&label_80D33BCC,
        &&label_80D33BD0,
        &&label_80D33BD4,
        &&label_80D33BD8,
        &&label_80D33BDC,
        &&label_80D33BE0,
        &&label_80D33BE4,
        &&label_80D33BE8,
        &&label_80D33BEC,
        &&label_80D33BF0,
        &&label_80D33BF4,
        &&label_80D33BF8,
        &&label_80D33BFC,
        &&label_80D33C00,
        &&label_80D33C04,
        &&label_80D33C08,
        &&label_80D33C0C,
        &&label_80D33C10,
        &&label_80D33C14,
        &&label_80D33C18,
        &&label_80D33C1C,
        &&label_80D33C20,
        &&label_80D33C24,
        &&label_80D33C28,
        &&label_80D33C2C,
        &&label_80D33C30,
        &&label_80D33C34,
        &&label_80D33C38,
        &&label_80D33C3C,
        &&label_80D33C40,
        &&label_80D33C44,
        &&label_80D33C48,
        &&label_80D33C4C,
        &&label_80D33C50,
        &&label_80D33C54,
        &&label_80D33C58,
        &&label_80D33C5C,
        &&label_80D33C60,
        &&label_80D33C64,
        &&label_80D33C68,
        &&label_80D33C6C,
        &&label_80D33C70,
        &&label_80D33C74,
        &&label_80D33C78,
        &&label_80D33C7C,
        &&label_80D33C80,
        &&label_80D33C84,
        &&label_80D33C88,
        &&label_80D33C8C,
        &&label_80D33C90,
        &&label_80D33C94,
        &&label_80D33C98,
        &&label_80D33C9C,
        &&label_80D33CA0,
        &&label_80D33CA4,
        &&label_80D33CA8,
        &&label_80D33CAC,
        &&label_80D33CB0,
        &&label_80D33CB4,
        &&label_80D33CB8,
        &&label_80D33CBC,
        &&label_80D33CC0,
        &&label_80D33CC4,
        &&label_80D33CC8,
        &&label_80D33CCC,
        &&label_80D33CD0,
        &&label_80D33CD4,
        &&label_80D33CD8,
        &&label_80D33CDC,
        &&label_80D33CE0,
        &&label_80D33CE4,
        &&label_80D33CE8,
        &&label_80D33CEC,
        &&label_80D33CF0,
        &&label_80D33CF4,
        &&label_80D33CF8,
        &&label_80D33CFC,
        &&label_80D33D00,
        &&label_80D33D04,
        &&label_80D33D08,
        &&label_80D33D0C,
        &&label_80D33D10,
        &&label_80D33D14,
        &&label_80D33D18,
        &&label_80D33D1C,
        &&label_80D33D20,
        &&label_80D33D24,
        &&label_80D33D28,
        &&label_80D33D2C,
        &&label_80D33D30,
        &&label_80D33D34,
        &&label_80D33D38,
        &&label_80D33D3C,
        &&label_80D33D40,
        &&label_80D33D44,
        &&label_80D33D48,
        &&label_80D33D4C,
        &&label_80D33D50,
        &&label_80D33D54,
        &&label_80D33D58,
        &&label_80D33D5C,
        &&label_80D33D60,
        &&label_80D33D64,
        &&label_80D33D68,
        &&label_80D33D6C,
        &&label_80D33D70,
        &&label_80D33D74,
        &&label_80D33D78,
        &&label_80D33D7C,
        &&label_80D33D80,
        &&label_80D33D84,
        &&label_80D33D88,
        &&label_80D33D8C,
        &&label_80D33D90,
        &&label_80D33D94,
        &&label_80D33D98,
        &&label_80D33D9C,
        &&label_80D33DA0,
        &&label_80D33DA4,
        &&label_80D33DA8,
        &&label_80D33DAC,
        &&label_80D33DB0,
        &&label_80D33DB4,
        &&label_80D33DB8,
        &&label_80D33DBC,
        &&label_80D33DC0,
        &&label_80D33DC4,
        &&label_80D33DC8,
        &&label_80D33DCC,
        &&label_80D33DD0,
        &&label_80D33DD4,
        &&label_80D33DD8,
        &&label_80D33DDC,
        &&label_80D33DE0,
        &&label_80D33DE4,
        &&label_80D33DE8,
        &&label_80D33DEC,
        &&label_80D33DF0,
        &&label_80D33DF4,
        &&label_80D33DF8,
        &&label_80D33DFC,
        &&label_80D33E00,
        &&label_80D33E04,
        &&label_80D33E08,
        &&label_80D33E0C,
        &&label_80D33E10,
        &&label_80D33E14,
        &&label_80D33E18,
        &&label_80D33E1C,
        &&label_80D33E20,
        &&label_80D33E24,
        &&label_80D33E28,
        &&label_80D33E2C,
        &&label_80D33E30,
        &&label_80D33E34,
        &&label_80D33E38,
        &&label_80D33E3C,
        &&label_80D33E40,
        &&label_80D33E44,
        &&label_80D33E48,
        &&label_80D33E4C,
        &&label_80D33E50,
        &&label_80D33E54,
        &&label_80D33E58,
        &&label_80D33E5C,
        &&label_80D33E60,
        &&label_80D33E64,
        &&label_80D33E68,
        &&label_80D33E6C,
        &&label_80D33E70,
        &&label_80D33E74,
        &&label_80D33E78,
        &&label_80D33E7C,
        &&label_80D33E80,
        &&label_80D33E84,
        &&label_80D33E88,
        &&label_80D33E8C,
        &&label_80D33E90,
        &&label_80D33E94,
        &&label_80D33E98,
        &&label_80D33E9C,
        &&label_80D33EA0,
        &&label_80D33EA4,
        &&label_80D33EA8,
        &&label_80D33EAC,
        &&label_80D33EB0,
        &&label_80D33EB4,
        &&label_80D33EB8,
        &&label_80D33EBC,
        &&label_80D33EC0,
        &&label_80D33EC4,
        &&label_80D33EC8,
        &&label_80D33ECC,
        &&label_80D33ED0,
        &&label_80D33ED4,
        &&label_80D33ED8,
        &&label_80D33EDC,
        &&label_80D33EE0,
        &&label_80D33EE4,
        &&label_80D33EE8,
        &&label_80D33EEC,
        &&label_80D33EF0,
        &&label_80D33EF4,
        &&label_80D33EF8,
        &&label_80D33EFC,
        &&label_80D33F00,
        &&label_80D33F04,
        &&label_80D33F08,
        &&label_80D33F0C,
        &&label_80D33F10,
        &&label_80D33F14,
        &&label_80D33F18,
        &&label_80D33F1C,
        &&label_80D33F20,
        &&label_80D33F24,
        &&label_80D33F28,
        &&label_80D33F2C,
        &&label_80D33F30,
        &&label_80D33F34,
        &&label_80D33F38,
        &&label_80D33F3C,
        &&label_80D33F40,
        &&label_80D33F44,
        &&label_80D33F48,
        &&label_80D33F4C,
        &&label_80D33F50,
        &&label_80D33F54,
        &&label_80D33F58,
        &&label_80D33F5C,
        &&label_80D33F60,
        &&label_80D33F64,
        &&label_80D33F68,
        &&label_80D33F6C,
        &&label_80D33F70,
        &&label_80D33F74,
        &&label_80D33F78,
        &&label_80D33F7C,
        &&label_80D33F80,
        &&label_80D33F84,
        &&label_80D33F88,
        &&label_80D33F8C,
        &&label_80D33F90,
        &&label_80D33F94,
        &&label_80D33F98,
        &&label_80D33F9C,
        &&label_80D33FA0,
        &&label_80D33FA4,
        &&label_80D33FA8,
        &&label_80D33FAC,
        &&label_80D33FB0,
        &&label_80D33FB4,
        &&label_80D33FB8,
        &&label_80D33FBC,
        &&label_80D33FC0,
        &&label_80D33FC4,
        &&label_80D33FC8,
        &&label_80D33FCC,
        &&label_80D33FD0,
        &&label_80D33FD4,
        &&label_80D33FD8,
        &&label_80D33FDC,
        &&label_80D33FE0,
        &&label_80D33FE4,
        &&label_80D33FE8,
        &&label_80D33FEC,
        &&label_80D33FF0,
        &&label_80D33FF4,
        &&label_80D33FF8,
        &&label_80D33FFC,
        &&label_80D34000,
        &&label_80D34004,
        &&label_80D34008,
        &&label_80D3400C,
        &&label_80D34010,
        &&label_80D34014,
        &&label_80D34018,
        &&label_80D3401C,
        &&label_80D34020,
        &&label_80D34024,
        &&label_80D34028,
        &&label_80D3402C,
        &&label_80D34030,
        &&label_80D34034,
        &&label_80D34038,
        &&label_80D3403C,
        &&label_80D34040,
        &&label_80D34044,
        &&label_80D34048,
        &&label_80D3404C,
        &&label_80D34050,
        &&label_80D34054,
        &&label_80D34058,
        &&label_80D3405C,
        &&label_80D34060,
        &&label_80D34064,
        &&label_80D34068,
        &&label_80D3406C,
        &&label_80D34070,
        &&label_80D34074,
        &&label_80D34078,
        &&label_80D3407C,
        &&label_80D34080,
        &&label_80D34084,
        &&label_80D34088,
        &&label_80D3408C,
        &&label_80D34090,
        &&label_80D34094,
        &&label_80D34098,
        &&label_80D3409C,
        &&label_80D340A0,
        &&label_80D340A4,
        &&label_80D340A8,
        &&label_80D340AC,
        &&label_80D340B0,
        &&label_80D340B4,
        &&label_80D340B8,
        &&label_80D340BC,
        &&label_80D340C0,
        &&label_80D340C4,
        &&label_80D340C8,
        &&label_80D340CC,
        &&label_80D340D0,
        &&label_80D340D4,
        &&label_80D340D8,
        &&label_80D340DC,
        &&label_80D340E0,
        &&label_80D340E4,
        &&label_80D340E8,
        &&label_80D340EC,
        &&label_80D340F0,
        &&label_80D340F4,
        &&label_80D340F8,
        &&label_80D340FC,
        &&label_80D34100,
        &&label_80D34104,
        &&label_80D34108,
        &&label_80D3410C,
        &&label_80D34110,
        &&label_80D34114,
        &&label_80D34118,
        &&label_80D3411C,
        &&label_80D34120,
        &&label_80D34124,
        &&label_80D34128,
        &&label_80D3412C,
        &&label_80D34130,
        &&label_80D34134,
        &&label_80D34138,
        &&label_80D3413C,
        &&label_80D34140,
        &&label_80D34144,
        &&label_80D34148,
        &&label_80D3414C,
        &&label_80D34150,
        &&label_80D34154,
        &&label_80D34158,
        &&label_80D3415C,
        &&label_80D34160,
        &&label_80D34164,
        &&label_80D34168,
        &&label_80D3416C,
        &&label_80D34170,
        &&label_80D34174,
        &&label_80D34178,
        &&label_80D3417C,
        &&label_80D34180,
        &&label_80D34184,
        &&label_80D34188,
        &&label_80D3418C,
        &&label_80D34190,
        &&label_80D34194,
        &&label_80D34198,
        &&label_80D3419C,
        &&label_80D341A0,
        &&label_80D341A4,
        &&label_80D341A8,
        &&label_80D341AC,
        &&label_80D341B0,
        &&label_80D341B4,
        &&label_80D341B8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D33900u && pc <= 0x80D341B8u && ((pc - 0x80D33900u) & 3u) == 0u)
            goto *pc_table_80D33900[(pc - 0x80D33900u) >> 2];
    }
    return;
label_80D33900:
    ctx->pc = 0x80D33900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D33900: stwu     r1, -16(r1)
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
label_80D33904:
    ctx->pc = 0x80D33904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33904: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33908:
    ctx->pc = 0x80D33908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D33908: stw     r0, 20(r1)
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
label_80D3390C:
    ctx->pc = 0x80D3390Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3390Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3390C: stw     r31, 12(r1)
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
label_80D33910:
    ctx->pc = 0x80D33910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33910u)) return;
    // 80D33910: cmpwi   r3, 2
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

label_80D33914:
    ctx->pc = 0x80D33914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33914u)) return;
    // 80D33914: bc    12, 2, 0x80D34190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D34190;
        }
    }

label_80D33918:
    ctx->pc = 0x80D33918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33918: bc    4, 0, 0x80D3392C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D3392C;
        }
    }

label_80D3391C:
    ctx->pc = 0x80D3391Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3391Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3391C: cmpwi   r3, 0
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

label_80D33920:
    ctx->pc = 0x80D33920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33920u)) return;
    // 80D33920: bc    12, 2, 0x80D341A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D341A8;
        }
    }

label_80D33924:
    ctx->pc = 0x80D33924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33924: bc    4, 0, 0x80D33934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D33934;
        }
    }

label_80D33928:
    ctx->pc = 0x80D33928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33928: b       0x80D341A8
    {
            goto label_80D341A8;
    }

label_80D3392C:
    ctx->pc = 0x80D3392Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3392Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3392C: cmpwi   r3, 4
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

label_80D33930:
    ctx->pc = 0x80D33930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33930u)) return;
    // 80D33930: b       0x80D341A8
    {
            goto label_80D341A8;
    }

label_80D33934:
    ctx->pc = 0x80D33934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33934: bl      0x80460A24
    {
            ctx->lr = 0x80D33938u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D33938:
    ctx->pc = 0x80D33938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33938: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D3393C:
    ctx->pc = 0x80D3393Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3393Cu)) return;
    // 80D3393C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33940u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33940:
    ctx->pc = 0x80D33940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33940: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33944:
    ctx->pc = 0x80D33944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33944u)) return;
    // 80D33944: bl      0x8045EC10
    {
            ctx->lr = 0x80D33948u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D33948:
    ctx->pc = 0x80D33948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33948: bl      0x8045DE7C
    {
            ctx->lr = 0x80D3394Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D3394C:
    ctx->pc = 0x80D3394Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3394Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3394C: bl      0x80460A60
    {
            ctx->lr = 0x80D33950u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D33950:
    ctx->pc = 0x80D33950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D33950: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33954:
    ctx->pc = 0x80D33954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33954u)) return;
    // 80D33954: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80D33958:
    ctx->pc = 0x80D33958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33958u)) return;
    // 80D33958: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80D3395C:
    ctx->pc = 0x80D3395Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3395Cu)) return;
    // 80D3395C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33960:
    ctx->pc = 0x80D33960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33960u)) return;
    // 80D33960: addi    r5, r5, 13776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13776);

label_80D33964:
    ctx->pc = 0x80D33964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D33964: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33964u)) return;
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
label_80D33968:
    ctx->pc = 0x80D33968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33968u)) return;
    // 80D33968: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3396C:
    ctx->pc = 0x80D3396Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3396Cu)) return;
    // 80D3396C: addi    r5, r5, 13780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13780);

label_80D33970:
    ctx->pc = 0x80D33970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33970: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33970u)) return;
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
label_80D33974:
    ctx->pc = 0x80D33974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33974u)) return;
    // 80D33974: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33978:
    ctx->pc = 0x80D33978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33978u)) return;
    // 80D33978: addi    r5, r5, 13784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13784);

label_80D3397C:
    ctx->pc = 0x80D3397Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3397Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3397C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3397Cu)) return;
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
label_80D33980:
    ctx->pc = 0x80D33980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33980u)) return;
    // 80D33980: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D33984:
    ctx->pc = 0x80D33984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33984u)) return;
    // 80D33984: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D33988:
    ctx->pc = 0x80D33988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33988u)) return;
    // 80D33988: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D3398C:
    ctx->pc = 0x80D3398Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3398Cu)) return;
    // 80D3398C: bl      0x8045ED84
    {
            ctx->lr = 0x80D33990u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D33990:
    ctx->pc = 0x80D33990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33990: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D33994:
    ctx->pc = 0x80D33994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33994u)) return;
    // 80D33994: bl      0x80406090
    {
            ctx->lr = 0x80D33998u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D33998:
    ctx->pc = 0x80D33998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33998: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3399C:
    ctx->pc = 0x80D3399Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3399Cu)) return;
    // 80D3399C: bl      0x8045F220
    {
            ctx->lr = 0x80D339A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D339A0:
    ctx->pc = 0x80D339A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D339A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D339A0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D339A4:
    ctx->pc = 0x80D339A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339A4u)) return;
    // 80D339A4: addi    r4, r4, 13788
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13788);

label_80D339A8:
    ctx->pc = 0x80D339A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D339A8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D339A8u)) return;
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
label_80D339AC:
    ctx->pc = 0x80D339ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339ACu)) return;
    // 80D339AC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D339B0:
    ctx->pc = 0x80D339B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339B0u)) return;
    // 80D339B0: addi    r4, r4, 13792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13792);

label_80D339B4:
    ctx->pc = 0x80D339B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D339B4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D339B4u)) return;
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
label_80D339B8:
    ctx->pc = 0x80D339B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339B8u)) return;
    // 80D339B8: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D339BC:
    ctx->pc = 0x80D339BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339BCu)) return;
    // 80D339BC: addi    r4, r4, 13796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13796);

label_80D339C0:
    ctx->pc = 0x80D339C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D339C0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D339C0u)) return;
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
label_80D339C4:
    ctx->pc = 0x80D339C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339C4u)) return;
    // 80D339C4: bl      0x8045EF2C
    {
            ctx->lr = 0x80D339C8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D339C8:
    ctx->pc = 0x80D339C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D339C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D339C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D339CC:
    ctx->pc = 0x80D339CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339CCu)) return;
    // 80D339CC: bl      0x8045F220
    {
            ctx->lr = 0x80D339D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D339D0:
    ctx->pc = 0x80D339D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D339D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D339D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D339D4:
    ctx->pc = 0x80D339D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339D4u)) return;
    // 80D339D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D339D8:
    ctx->pc = 0x80D339D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339D8u)) return;
    // 80D339D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D339DC:
    ctx->pc = 0x80D339DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339DCu)) return;
    // 80D339DC: bl      0x8045EEA8
    {
            ctx->lr = 0x80D339E0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D339E0:
    ctx->pc = 0x80D339E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D339E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D339E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D339E4:
    ctx->pc = 0x80D339E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339E4u)) return;
    // 80D339E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D339E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D339E8:
    ctx->pc = 0x80D339E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D339E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D339E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D339EC:
    ctx->pc = 0x80D339ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339ECu)) return;
    // 80D339EC: bl      0x8045F220
    {
            ctx->lr = 0x80D339F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D339F0:
    ctx->pc = 0x80D339F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D339F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D339F0: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D339F4:
    ctx->pc = 0x80D339F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339F4u)) return;
    // 80D339F4: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D339F8:
    ctx->pc = 0x80D339F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339F8u)) return;
    // 80D339F8: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D339FC:
    ctx->pc = 0x80D339FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D339FCu)) return;
    // 80D339FC: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D33A00:
    ctx->pc = 0x80D33A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A00u)) return;
    // 80D33A00: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D33A04:
    ctx->pc = 0x80D33A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A04u)) return;
    // 80D33A04: addi    r6, r6, 13800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13800);

label_80D33A08:
    ctx->pc = 0x80D33A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D33A08: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D33A08u)) return;
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
label_80D33A0C:
    ctx->pc = 0x80D33A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A0Cu)) return;
    // 80D33A0C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D33A10:
    ctx->pc = 0x80D33A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A10u)) return;
    // 80D33A10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D33A14:
    ctx->pc = 0x80D33A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A14u)) return;
    // 80D33A14: bl      0x8045EBE4
    {
            ctx->lr = 0x80D33A18u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D33A18:
    ctx->pc = 0x80D33A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33A18: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33A1C:
    ctx->pc = 0x80D33A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A1Cu)) return;
    // 80D33A1C: bl      0x8045F220
    {
            ctx->lr = 0x80D33A20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33A20:
    ctx->pc = 0x80D33A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33A20: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33A24:
    ctx->pc = 0x80D33A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A24u)) return;
    // 80D33A24: addi    r4, r4, 13776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13776);

label_80D33A28:
    ctx->pc = 0x80D33A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33A28: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33A28u)) return;
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
label_80D33A2C:
    ctx->pc = 0x80D33A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A2Cu)) return;
    // 80D33A2C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33A30:
    ctx->pc = 0x80D33A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A30u)) return;
    // 80D33A30: addi    r4, r4, 13804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13804);

label_80D33A34:
    ctx->pc = 0x80D33A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33A34: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33A34u)) return;
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
label_80D33A38:
    ctx->pc = 0x80D33A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A38u)) return;
    // 80D33A38: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33A3C:
    ctx->pc = 0x80D33A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A3Cu)) return;
    // 80D33A3C: addi    r4, r4, 13808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13808);

label_80D33A40:
    ctx->pc = 0x80D33A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33A40: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33A40u)) return;
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
label_80D33A44:
    ctx->pc = 0x80D33A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A44u)) return;
    // 80D33A44: bl      0x8045E70C
    {
            ctx->lr = 0x80D33A48u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D33A48:
    ctx->pc = 0x80D33A48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33A48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33A48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33A4C:
    ctx->pc = 0x80D33A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A4Cu)) return;
    // 80D33A4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33A50:
    ctx->pc = 0x80D33A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A50u)) return;
    // 80D33A50: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33A54:
    ctx->pc = 0x80D33A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A54u)) return;
    // 80D33A54: addi    r5, r5, 13812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13812);

label_80D33A58:
    ctx->pc = 0x80D33A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33A58: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33A58u)) return;
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
label_80D33A5C:
    ctx->pc = 0x80D33A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A5Cu)) return;
    // 80D33A5C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33A60:
    ctx->pc = 0x80D33A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A60u)) return;
    // 80D33A60: addi    r5, r5, 13816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13816);

label_80D33A64:
    ctx->pc = 0x80D33A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33A64: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33A64u)) return;
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
label_80D33A68:
    ctx->pc = 0x80D33A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A68u)) return;
    // 80D33A68: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33A6C:
    ctx->pc = 0x80D33A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A6Cu)) return;
    // 80D33A6C: addi    r5, r5, 13820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13820);

label_80D33A70:
    ctx->pc = 0x80D33A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33A70: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33A70u)) return;
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
label_80D33A74:
    ctx->pc = 0x80D33A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A74u)) return;
    // 80D33A74: bl      0x8045C750
    {
            ctx->lr = 0x80D33A78u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33A78:
    ctx->pc = 0x80D33A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D33A78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33A7C:
    ctx->pc = 0x80D33A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A7Cu)) return;
    // 80D33A7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33A80:
    ctx->pc = 0x80D33A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A80u)) return;
    // 80D33A80: li      r5, 5079
    ctx->gpr[5] = (u32)(s32)(5079);

label_80D33A84:
    ctx->pc = 0x80D33A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A84u)) return;
    // 80D33A84: li      r6, 662
    ctx->gpr[6] = (u32)(s32)(662);

label_80D33A88:
    ctx->pc = 0x80D33A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A88u)) return;
    // 80D33A88: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_80D33A8C:
    ctx->pc = 0x80D33A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A8Cu)) return;
    // 80D33A8C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33A90u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33A90:
    ctx->pc = 0x80D33A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D33A90: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33A94:
    ctx->pc = 0x80D33A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A94u)) return;
    // 80D33A94: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D33A98:
    ctx->pc = 0x80D33A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33A98: lwz     r0, 0(r3)
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
label_80D33A9C:
    ctx->pc = 0x80D33A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33A9Cu)) return;
    // 80D33A9C: cmpwi   r0, 0
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

label_80D33AA0:
    ctx->pc = 0x80D33AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AA0u)) return;
    // 80D33AA0: bc    4, 2, 0x80D33AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D33AB8;
        }
    }

label_80D33AA4:
    ctx->pc = 0x80D33AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33AA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33AA8:
    ctx->pc = 0x80D33AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AA8u)) return;
    // 80D33AA8: bl      0x8045F220
    {
            ctx->lr = 0x80D33AACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33AAC:
    ctx->pc = 0x80D33AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33AAC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33AB0:
    ctx->pc = 0x80D33AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AB0u)) return;
    // 80D33AB0: addi    r4, r4, 15992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15992);

label_80D33AB4:
    ctx->pc = 0x80D33AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AB4u)) return;
    // 80D33AB4: bl      0x8045C060
    {
            ctx->lr = 0x80D33AB8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33AB8:
    ctx->pc = 0x80D33AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D33AB8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33ABC:
    ctx->pc = 0x80D33ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33ABCu)) return;
    // 80D33ABC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D33AC0:
    ctx->pc = 0x80D33AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33AC0: lwz     r0, 0(r3)
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
label_80D33AC4:
    ctx->pc = 0x80D33AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AC4u)) return;
    // 80D33AC4: cmpwi   r0, 1
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

label_80D33AC8:
    ctx->pc = 0x80D33AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AC8u)) return;
    // 80D33AC8: bc    4, 2, 0x80D33AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D33AE0;
        }
    }

label_80D33ACC:
    ctx->pc = 0x80D33ACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33ACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33ACC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33AD0:
    ctx->pc = 0x80D33AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AD0u)) return;
    // 80D33AD0: bl      0x8045F220
    {
            ctx->lr = 0x80D33AD4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33AD4:
    ctx->pc = 0x80D33AD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33AD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33AD4: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33AD8:
    ctx->pc = 0x80D33AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AD8u)) return;
    // 80D33AD8: addi    r4, r4, 16000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16000);

label_80D33ADC:
    ctx->pc = 0x80D33ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33ADCu)) return;
    // 80D33ADC: bl      0x8045C060
    {
            ctx->lr = 0x80D33AE0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33AE0:
    ctx->pc = 0x80D33AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33AE0: li      r3, 1539
    ctx->gpr[3] = (u32)(s32)(1539);

label_80D33AE4:
    ctx->pc = 0x80D33AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AE4u)) return;
    // 80D33AE4: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33AE8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33AE8:
    ctx->pc = 0x80D33AE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33AE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D33AE8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33AEC:
    ctx->pc = 0x80D33AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AECu)) return;
    // 80D33AEC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D33AF0:
    ctx->pc = 0x80D33AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33AF0: lwz     r0, 0(r3)
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
label_80D33AF4:
    ctx->pc = 0x80D33AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AF4u)) return;
    // 80D33AF4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33AF8:
    ctx->pc = 0x80D33AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AF8u)) return;
    // 80D33AF8: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D33AFC:
    ctx->pc = 0x80D33AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33AFCu)) return;
    // 80D33AFC: addi    r3, r3, 15964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15964);

label_80D33B00:
    ctx->pc = 0x80D33B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33B00: lwzx    r3, r3, r0
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
label_80D33B04:
    ctx->pc = 0x80D33B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33B04: lwz     r3, 0(r3)
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
label_80D33B08:
    ctx->pc = 0x80D33B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B08u)) return;
    // 80D33B08: bl      0x8045F6FC
    {
            ctx->lr = 0x80D33B0Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D33B0C:
    ctx->pc = 0x80D33B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33B0C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33B10:
    ctx->pc = 0x80D33B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B10u)) return;
    // 80D33B10: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33B14u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33B14:
    ctx->pc = 0x80D33B14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33B14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33B14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33B18:
    ctx->pc = 0x80D33B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B18u)) return;
    // 80D33B18: bl      0x8045F220
    {
            ctx->lr = 0x80D33B1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33B1C:
    ctx->pc = 0x80D33B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33B1C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33B20:
    ctx->pc = 0x80D33B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B20u)) return;
    // 80D33B20: addi    r4, r4, 13776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13776);

label_80D33B24:
    ctx->pc = 0x80D33B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33B24: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33B24u)) return;
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
label_80D33B28:
    ctx->pc = 0x80D33B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B28u)) return;
    // 80D33B28: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33B2C:
    ctx->pc = 0x80D33B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B2Cu)) return;
    // 80D33B2C: addi    r4, r4, 13780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13780);

label_80D33B30:
    ctx->pc = 0x80D33B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33B30: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33B30u)) return;
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
label_80D33B34:
    ctx->pc = 0x80D33B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B34u)) return;
    // 80D33B34: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33B38:
    ctx->pc = 0x80D33B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B38u)) return;
    // 80D33B38: addi    r4, r4, 13784
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13784);

label_80D33B3C:
    ctx->pc = 0x80D33B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33B3C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33B3Cu)) return;
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
label_80D33B40:
    ctx->pc = 0x80D33B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B40u)) return;
    // 80D33B40: bl      0x8045E70C
    {
            ctx->lr = 0x80D33B44u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D33B44:
    ctx->pc = 0x80D33B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33B44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33B48:
    ctx->pc = 0x80D33B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B48u)) return;
    // 80D33B48: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D33B4C:
    ctx->pc = 0x80D33B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B4Cu)) return;
    // 80D33B4C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33B50:
    ctx->pc = 0x80D33B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B50u)) return;
    // 80D33B50: addi    r5, r5, 13824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13824);

label_80D33B54:
    ctx->pc = 0x80D33B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33B54: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33B54u)) return;
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
label_80D33B58:
    ctx->pc = 0x80D33B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B58u)) return;
    // 80D33B58: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33B5C:
    ctx->pc = 0x80D33B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B5Cu)) return;
    // 80D33B5C: addi    r5, r5, 13828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13828);

label_80D33B60:
    ctx->pc = 0x80D33B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33B60: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33B60u)) return;
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
label_80D33B64:
    ctx->pc = 0x80D33B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B64u)) return;
    // 80D33B64: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33B68:
    ctx->pc = 0x80D33B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B68u)) return;
    // 80D33B68: addi    r5, r5, 13832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13832);

label_80D33B6C:
    ctx->pc = 0x80D33B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33B6C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33B6Cu)) return;
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
label_80D33B70:
    ctx->pc = 0x80D33B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B70u)) return;
    // 80D33B70: bl      0x8045C750
    {
            ctx->lr = 0x80D33B74u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33B74:
    ctx->pc = 0x80D33B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D33B74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33B78:
    ctx->pc = 0x80D33B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B78u)) return;
    // 80D33B78: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D33B7C:
    ctx->pc = 0x80D33B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B7Cu)) return;
    // 80D33B7C: li      r5, 3799
    ctx->gpr[5] = (u32)(s32)(3799);

label_80D33B80:
    ctx->pc = 0x80D33B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B80u)) return;
    // 80D33B80: li      r6, 662
    ctx->gpr[6] = (u32)(s32)(662);

label_80D33B84:
    ctx->pc = 0x80D33B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B84u)) return;
    // 80D33B84: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_80D33B88:
    ctx->pc = 0x80D33B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B88u)) return;
    // 80D33B88: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33B8Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33B8C:
    ctx->pc = 0x80D33B8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33B8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33B8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33B90:
    ctx->pc = 0x80D33B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B90u)) return;
    // 80D33B90: bl      0x8045F220
    {
            ctx->lr = 0x80D33B94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33B94:
    ctx->pc = 0x80D33B94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33B94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33B94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D33B98:
    ctx->pc = 0x80D33B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B98u)) return;
    // 80D33B98: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33B9C:
    ctx->pc = 0x80D33B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33B9Cu)) return;
    // 80D33B9C: bl      0x8045F220
    {
            ctx->lr = 0x80D33BA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33BA0:
    ctx->pc = 0x80D33BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D33BA0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D33BA4:
    ctx->pc = 0x80D33BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BA4u)) return;
    // 80D33BA4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33BA8:
    ctx->pc = 0x80D33BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BA8u)) return;
    // 80D33BA8: addi    r5, r5, 13836
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13836);

label_80D33BAC:
    ctx->pc = 0x80D33BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D33BAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33BACu)) return;
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
label_80D33BB0:
    ctx->pc = 0x80D33BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BB0u)) return;
    // 80D33BB0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33BB4:
    ctx->pc = 0x80D33BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BB4u)) return;
    // 80D33BB4: addi    r5, r5, 13840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13840);

label_80D33BB8:
    ctx->pc = 0x80D33BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33BB8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33BB8u)) return;
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
label_80D33BBC:
    ctx->pc = 0x80D33BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BBCu)) return;
    // 80D33BBC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D33BBCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D33BC0:
    ctx->pc = 0x80D33BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BC0u)) return;
    // 80D33BC0: bl      0x8045E734
    {
            ctx->lr = 0x80D33BC4u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D33BC4:
    ctx->pc = 0x80D33BC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33BC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33BC4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33BC8:
    ctx->pc = 0x80D33BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BC8u)) return;
    // 80D33BC8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33BCCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33BCC:
    ctx->pc = 0x80D33BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33BCC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33BD0:
    ctx->pc = 0x80D33BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BD0u)) return;
    // 80D33BD0: bl      0x8045F220
    {
            ctx->lr = 0x80D33BD4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33BD4:
    ctx->pc = 0x80D33BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33BD4: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33BD8:
    ctx->pc = 0x80D33BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BD8u)) return;
    // 80D33BD8: addi    r4, r4, 16004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16004);

label_80D33BDC:
    ctx->pc = 0x80D33BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BDCu)) return;
    // 80D33BDC: bl      0x8045C060
    {
            ctx->lr = 0x80D33BE0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33BE0:
    ctx->pc = 0x80D33BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33BE0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33BE4:
    ctx->pc = 0x80D33BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BE4u)) return;
    // 80D33BE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33BE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33BE8:
    ctx->pc = 0x80D33BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33BE8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33BEC:
    ctx->pc = 0x80D33BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BECu)) return;
    // 80D33BEC: bl      0x8045F220
    {
            ctx->lr = 0x80D33BF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33BF0:
    ctx->pc = 0x80D33BF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33BF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33BF0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33BF4:
    ctx->pc = 0x80D33BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BF4u)) return;
    // 80D33BF4: addi    r4, r4, 13776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13776);

label_80D33BF8:
    ctx->pc = 0x80D33BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33BF8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33BF8u)) return;
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
label_80D33BFC:
    ctx->pc = 0x80D33BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33BFCu)) return;
    // 80D33BFC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33C00:
    ctx->pc = 0x80D33C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C00u)) return;
    // 80D33C00: addi    r4, r4, 13804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13804);

label_80D33C04:
    ctx->pc = 0x80D33C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33C04: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33C04u)) return;
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
label_80D33C08:
    ctx->pc = 0x80D33C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C08u)) return;
    // 80D33C08: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33C0C:
    ctx->pc = 0x80D33C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C0Cu)) return;
    // 80D33C0C: addi    r4, r4, 13808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13808);

label_80D33C10:
    ctx->pc = 0x80D33C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33C10: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D33C10u)) return;
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
label_80D33C14:
    ctx->pc = 0x80D33C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C14u)) return;
    // 80D33C14: bl      0x8045E70C
    {
            ctx->lr = 0x80D33C18u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D33C18:
    ctx->pc = 0x80D33C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33C18: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33C1C:
    ctx->pc = 0x80D33C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C1Cu)) return;
    // 80D33C1C: bl      0x8045F220
    {
            ctx->lr = 0x80D33C20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33C20:
    ctx->pc = 0x80D33C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33C20: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33C24:
    ctx->pc = 0x80D33C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C24u)) return;
    // 80D33C24: addi    r4, r4, 16008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16008);

label_80D33C28:
    ctx->pc = 0x80D33C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C28u)) return;
    // 80D33C28: bl      0x8045C060
    {
            ctx->lr = 0x80D33C2Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33C2C:
    ctx->pc = 0x80D33C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33C2C: li      r3, 1540
    ctx->gpr[3] = (u32)(s32)(1540);

label_80D33C30:
    ctx->pc = 0x80D33C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C30u)) return;
    // 80D33C30: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33C34u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33C34:
    ctx->pc = 0x80D33C34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33C34: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33C38:
    ctx->pc = 0x80D33C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C38u)) return;
    // 80D33C38: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D33C3C:
    ctx->pc = 0x80D33C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C3Cu)) return;
    // 80D33C3C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33C40:
    ctx->pc = 0x80D33C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33C40: lwz     r0, 0(r4)
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
label_80D33C44:
    ctx->pc = 0x80D33C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C44u)) return;
    // 80D33C44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33C48:
    ctx->pc = 0x80D33C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C48u)) return;
    // 80D33C48: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33C4C:
    ctx->pc = 0x80D33C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C4Cu)) return;
    // 80D33C4C: addi    r4, r4, 15964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15964);

label_80D33C50:
    ctx->pc = 0x80D33C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33C50: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33C54:
    ctx->pc = 0x80D33C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33C54: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33C58:
    ctx->pc = 0x80D33C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C58u)) return;
    // 80D33C58: bl      0x8045F608
    {
            ctx->lr = 0x80D33C5Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D33C5C:
    ctx->pc = 0x80D33C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33C5C: bl      0x8045BFF4
    {
            ctx->lr = 0x80D33C60u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D33C60:
    ctx->pc = 0x80D33C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33C60: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33C64:
    ctx->pc = 0x80D33C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C64u)) return;
    // 80D33C64: bl      0x8045F220
    {
            ctx->lr = 0x80D33C68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33C68:
    ctx->pc = 0x80D33C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33C68: bl      0x8045C034
    {
            ctx->lr = 0x80D33C6Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D33C6C:
    ctx->pc = 0x80D33C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33C6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33C70:
    ctx->pc = 0x80D33C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C70u)) return;
    // 80D33C70: bl      0x8045F220
    {
            ctx->lr = 0x80D33C74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33C74:
    ctx->pc = 0x80D33C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33C74: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33C78:
    ctx->pc = 0x80D33C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C78u)) return;
    // 80D33C78: addi    r4, r4, 16016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16016);

label_80D33C7C:
    ctx->pc = 0x80D33C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C7Cu)) return;
    // 80D33C7C: bl      0x8045C060
    {
            ctx->lr = 0x80D33C80u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33C80:
    ctx->pc = 0x80D33C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33C80: li      r3, 1541
    ctx->gpr[3] = (u32)(s32)(1541);

label_80D33C84:
    ctx->pc = 0x80D33C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C84u)) return;
    // 80D33C84: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33C88u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33C88:
    ctx->pc = 0x80D33C88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33C88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33C88: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33C8C:
    ctx->pc = 0x80D33C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C8Cu)) return;
    // 80D33C8C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D33C90:
    ctx->pc = 0x80D33C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C90u)) return;
    // 80D33C90: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33C94:
    ctx->pc = 0x80D33C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33C94: lwz     r0, 0(r4)
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
label_80D33C98:
    ctx->pc = 0x80D33C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C98u)) return;
    // 80D33C98: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33C9C:
    ctx->pc = 0x80D33C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33C9Cu)) return;
    // 80D33C9C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33CA0:
    ctx->pc = 0x80D33CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CA0u)) return;
    // 80D33CA0: addi    r4, r4, 15964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15964);

label_80D33CA4:
    ctx->pc = 0x80D33CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33CA4: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33CA8:
    ctx->pc = 0x80D33CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33CA8: lwz     r4, 8(r4)
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
label_80D33CAC:
    ctx->pc = 0x80D33CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CACu)) return;
    // 80D33CAC: bl      0x8045F608
    {
            ctx->lr = 0x80D33CB0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D33CB0:
    ctx->pc = 0x80D33CB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33CB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33CB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33CB4:
    ctx->pc = 0x80D33CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CB4u)) return;
    // 80D33CB4: bl      0x8045F220
    {
            ctx->lr = 0x80D33CB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33CB8:
    ctx->pc = 0x80D33CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33CB8: bl      0x8045C034
    {
            ctx->lr = 0x80D33CBCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D33CBC:
    ctx->pc = 0x80D33CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33CBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33CC0:
    ctx->pc = 0x80D33CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CC0u)) return;
    // 80D33CC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33CC4:
    ctx->pc = 0x80D33CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CC4u)) return;
    // 80D33CC4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33CC8:
    ctx->pc = 0x80D33CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CC8u)) return;
    // 80D33CC8: addi    r5, r5, 13844
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13844);

label_80D33CCC:
    ctx->pc = 0x80D33CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33CCC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33CCCu)) return;
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
label_80D33CD0:
    ctx->pc = 0x80D33CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CD0u)) return;
    // 80D33CD0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33CD4:
    ctx->pc = 0x80D33CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CD4u)) return;
    // 80D33CD4: addi    r5, r5, 13848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13848);

label_80D33CD8:
    ctx->pc = 0x80D33CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33CD8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33CD8u)) return;
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
label_80D33CDC:
    ctx->pc = 0x80D33CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CDCu)) return;
    // 80D33CDC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33CE0:
    ctx->pc = 0x80D33CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CE0u)) return;
    // 80D33CE0: addi    r5, r5, 13852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13852);

label_80D33CE4:
    ctx->pc = 0x80D33CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33CE4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33CE4u)) return;
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
label_80D33CE8:
    ctx->pc = 0x80D33CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CE8u)) return;
    // 80D33CE8: bl      0x8045C750
    {
            ctx->lr = 0x80D33CECu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33CEC:
    ctx->pc = 0x80D33CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33CEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33CF0:
    ctx->pc = 0x80D33CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CF0u)) return;
    // 80D33CF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33CF4:
    ctx->pc = 0x80D33CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CF4u)) return;
    // 80D33CF4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D33CF8:
    ctx->pc = 0x80D33CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CF8u)) return;
    // 80D33CF8: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D33CFC:
    ctx->pc = 0x80D33CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33CFCu)) return;
    // 80D33CFC: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D33D00:
    ctx->pc = 0x80D33D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D00u)) return;
    // 80D33D00: li      r7, 3328
    ctx->gpr[7] = (u32)(s32)(3328);

label_80D33D04:
    ctx->pc = 0x80D33D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D04u)) return;
    // 80D33D04: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33D08u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33D08:
    ctx->pc = 0x80D33D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33D08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33D0C:
    ctx->pc = 0x80D33D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D0Cu)) return;
    // 80D33D0C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D33D10:
    ctx->pc = 0x80D33D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D10u)) return;
    // 80D33D10: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33D14:
    ctx->pc = 0x80D33D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D14u)) return;
    // 80D33D14: addi    r5, r5, 13856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13856);

label_80D33D18:
    ctx->pc = 0x80D33D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33D18: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33D18u)) return;
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
label_80D33D1C:
    ctx->pc = 0x80D33D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D1Cu)) return;
    // 80D33D1C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33D20:
    ctx->pc = 0x80D33D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D20u)) return;
    // 80D33D20: addi    r5, r5, 13860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13860);

label_80D33D24:
    ctx->pc = 0x80D33D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33D24: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33D24u)) return;
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
label_80D33D28:
    ctx->pc = 0x80D33D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D28u)) return;
    // 80D33D28: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33D2C:
    ctx->pc = 0x80D33D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D2Cu)) return;
    // 80D33D2C: addi    r5, r5, 13864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13864);

label_80D33D30:
    ctx->pc = 0x80D33D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33D30: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33D30u)) return;
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
label_80D33D34:
    ctx->pc = 0x80D33D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D34u)) return;
    // 80D33D34: bl      0x8045C750
    {
            ctx->lr = 0x80D33D38u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33D38:
    ctx->pc = 0x80D33D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33D38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33D3C:
    ctx->pc = 0x80D33D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D3Cu)) return;
    // 80D33D3C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D33D40:
    ctx->pc = 0x80D33D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D40u)) return;
    // 80D33D40: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D33D44:
    ctx->pc = 0x80D33D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D44u)) return;
    // 80D33D44: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D33D48:
    ctx->pc = 0x80D33D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D48u)) return;
    // 80D33D48: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D33D4C:
    ctx->pc = 0x80D33D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D4Cu)) return;
    // 80D33D4C: li      r7, 3328
    ctx->gpr[7] = (u32)(s32)(3328);

label_80D33D50:
    ctx->pc = 0x80D33D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D50u)) return;
    // 80D33D50: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33D54u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33D54:
    ctx->pc = 0x80D33D54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33D54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33D54: li      r3, 1542
    ctx->gpr[3] = (u32)(s32)(1542);

label_80D33D58:
    ctx->pc = 0x80D33D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D58u)) return;
    // 80D33D58: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33D5Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33D5C:
    ctx->pc = 0x80D33D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33D5C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33D60:
    ctx->pc = 0x80D33D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D60u)) return;
    // 80D33D60: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D33D64:
    ctx->pc = 0x80D33D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D64u)) return;
    // 80D33D64: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33D68:
    ctx->pc = 0x80D33D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33D68: lwz     r0, 0(r4)
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
label_80D33D6C:
    ctx->pc = 0x80D33D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D6Cu)) return;
    // 80D33D6C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33D70:
    ctx->pc = 0x80D33D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D70u)) return;
    // 80D33D70: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33D74:
    ctx->pc = 0x80D33D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D74u)) return;
    // 80D33D74: addi    r4, r4, 15964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15964);

label_80D33D78:
    ctx->pc = 0x80D33D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33D78: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33D7C:
    ctx->pc = 0x80D33D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33D7C: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33D80:
    ctx->pc = 0x80D33D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D80u)) return;
    // 80D33D80: bl      0x8045F608
    {
            ctx->lr = 0x80D33D84u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D33D84:
    ctx->pc = 0x80D33D84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33D84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33D84: li      r3, 1543
    ctx->gpr[3] = (u32)(s32)(1543);

label_80D33D88:
    ctx->pc = 0x80D33D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D88u)) return;
    // 80D33D88: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33D8Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33D8C:
    ctx->pc = 0x80D33D8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33D8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33D8C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D33D90:
    ctx->pc = 0x80D33D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D90u)) return;
    // 80D33D90: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D33D94:
    ctx->pc = 0x80D33D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D94u)) return;
    // 80D33D94: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33D98:
    ctx->pc = 0x80D33D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33D98: lwz     r0, 0(r4)
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
label_80D33D9C:
    ctx->pc = 0x80D33D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33D9Cu)) return;
    // 80D33D9C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33DA0:
    ctx->pc = 0x80D33DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DA0u)) return;
    // 80D33DA0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33DA4:
    ctx->pc = 0x80D33DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DA4u)) return;
    // 80D33DA4: addi    r4, r4, 15964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15964);

label_80D33DA8:
    ctx->pc = 0x80D33DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33DA8: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33DAC:
    ctx->pc = 0x80D33DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33DAC: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33DB0:
    ctx->pc = 0x80D33DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DB0u)) return;
    // 80D33DB0: bl      0x8045F608
    {
            ctx->lr = 0x80D33DB4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D33DB4:
    ctx->pc = 0x80D33DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33DB4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D33DB8:
    ctx->pc = 0x80D33DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DB8u)) return;
    // 80D33DB8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D33DBC:
    ctx->pc = 0x80D33DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DBCu)) return;
    // 80D33DBC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33DC0:
    ctx->pc = 0x80D33DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33DC0: lwz     r0, 0(r4)
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
label_80D33DC4:
    ctx->pc = 0x80D33DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DC4u)) return;
    // 80D33DC4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33DC8:
    ctx->pc = 0x80D33DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DC8u)) return;
    // 80D33DC8: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33DCC:
    ctx->pc = 0x80D33DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DCCu)) return;
    // 80D33DCC: addi    r4, r4, 15964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15964);

label_80D33DD0:
    ctx->pc = 0x80D33DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33DD0: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33DD4:
    ctx->pc = 0x80D33DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33DD4: lwz     r4, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33DD8:
    ctx->pc = 0x80D33DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DD8u)) return;
    // 80D33DD8: bl      0x8045F608
    {
            ctx->lr = 0x80D33DDCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D33DDC:
    ctx->pc = 0x80D33DDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33DDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33DDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33DE0:
    ctx->pc = 0x80D33DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DE0u)) return;
    // 80D33DE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33DE4:
    ctx->pc = 0x80D33DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DE4u)) return;
    // 80D33DE4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33DE8:
    ctx->pc = 0x80D33DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DE8u)) return;
    // 80D33DE8: addi    r5, r5, 13856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13856);

label_80D33DEC:
    ctx->pc = 0x80D33DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33DEC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33DECu)) return;
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
label_80D33DF0:
    ctx->pc = 0x80D33DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DF0u)) return;
    // 80D33DF0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33DF4:
    ctx->pc = 0x80D33DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DF4u)) return;
    // 80D33DF4: addi    r5, r5, 13860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13860);

label_80D33DF8:
    ctx->pc = 0x80D33DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33DF8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33DF8u)) return;
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
label_80D33DFC:
    ctx->pc = 0x80D33DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33DFCu)) return;
    // 80D33DFC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33E00:
    ctx->pc = 0x80D33E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E00u)) return;
    // 80D33E00: addi    r5, r5, 13864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13864);

label_80D33E04:
    ctx->pc = 0x80D33E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33E04: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33E04u)) return;
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
label_80D33E08:
    ctx->pc = 0x80D33E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E08u)) return;
    // 80D33E08: bl      0x8045C750
    {
            ctx->lr = 0x80D33E0Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33E0C:
    ctx->pc = 0x80D33E0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33E0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33E0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33E10:
    ctx->pc = 0x80D33E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E10u)) return;
    // 80D33E10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33E14:
    ctx->pc = 0x80D33E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E14u)) return;
    // 80D33E14: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D33E18:
    ctx->pc = 0x80D33E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E18u)) return;
    // 80D33E18: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D33E1C:
    ctx->pc = 0x80D33E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E1Cu)) return;
    // 80D33E1C: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D33E20:
    ctx->pc = 0x80D33E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E20u)) return;
    // 80D33E20: li      r7, 3328
    ctx->gpr[7] = (u32)(s32)(3328);

label_80D33E24:
    ctx->pc = 0x80D33E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E24u)) return;
    // 80D33E24: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33E28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33E28:
    ctx->pc = 0x80D33E28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33E28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33E28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33E2C:
    ctx->pc = 0x80D33E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E2Cu)) return;
    // 80D33E2C: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80D33E30:
    ctx->pc = 0x80D33E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E30u)) return;
    // 80D33E30: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33E34:
    ctx->pc = 0x80D33E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E34u)) return;
    // 80D33E34: addi    r5, r5, 13868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13868);

label_80D33E38:
    ctx->pc = 0x80D33E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33E38: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33E38u)) return;
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
label_80D33E3C:
    ctx->pc = 0x80D33E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E3Cu)) return;
    // 80D33E3C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33E40:
    ctx->pc = 0x80D33E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E40u)) return;
    // 80D33E40: addi    r5, r5, 13872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13872);

label_80D33E44:
    ctx->pc = 0x80D33E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33E44: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33E44u)) return;
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
label_80D33E48:
    ctx->pc = 0x80D33E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E48u)) return;
    // 80D33E48: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33E4C:
    ctx->pc = 0x80D33E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E4Cu)) return;
    // 80D33E4C: addi    r5, r5, 13876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13876);

label_80D33E50:
    ctx->pc = 0x80D33E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33E50: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33E50u)) return;
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
label_80D33E54:
    ctx->pc = 0x80D33E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E54u)) return;
    // 80D33E54: bl      0x8045C750
    {
            ctx->lr = 0x80D33E58u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33E58:
    ctx->pc = 0x80D33E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D33E58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33E5C:
    ctx->pc = 0x80D33E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E5Cu)) return;
    // 80D33E5C: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80D33E60:
    ctx->pc = 0x80D33E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E60u)) return;
    // 80D33E60: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D33E64:
    ctx->pc = 0x80D33E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E64u)) return;
    // 80D33E64: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D33E68:
    ctx->pc = 0x80D33E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E68u)) return;
    // 80D33E68: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D33E6C:
    ctx->pc = 0x80D33E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E6Cu)) return;
    // 80D33E6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D33E70:
    ctx->pc = 0x80D33E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E70u)) return;
    // 80D33E70: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33E74u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33E74:
    ctx->pc = 0x80D33E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33E74: li      r3, 1544
    ctx->gpr[3] = (u32)(s32)(1544);

label_80D33E78:
    ctx->pc = 0x80D33E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E78u)) return;
    // 80D33E78: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33E7Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33E7C:
    ctx->pc = 0x80D33E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33E7C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33E80:
    ctx->pc = 0x80D33E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E80u)) return;
    // 80D33E80: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D33E84:
    ctx->pc = 0x80D33E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E84u)) return;
    // 80D33E84: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33E88:
    ctx->pc = 0x80D33E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33E88: lwz     r0, 0(r4)
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
label_80D33E8C:
    ctx->pc = 0x80D33E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E8Cu)) return;
    // 80D33E8C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33E90:
    ctx->pc = 0x80D33E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E90u)) return;
    // 80D33E90: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33E94:
    ctx->pc = 0x80D33E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E94u)) return;
    // 80D33E94: addi    r4, r4, 15964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15964);

label_80D33E98:
    ctx->pc = 0x80D33E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33E98: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33E9C:
    ctx->pc = 0x80D33E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33E9C: lwz     r4, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33EA0:
    ctx->pc = 0x80D33EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EA0u)) return;
    // 80D33EA0: bl      0x8045F608
    {
            ctx->lr = 0x80D33EA4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D33EA4:
    ctx->pc = 0x80D33EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33EA4: li      r3, 1545
    ctx->gpr[3] = (u32)(s32)(1545);

label_80D33EA8:
    ctx->pc = 0x80D33EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EA8u)) return;
    // 80D33EA8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33EACu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33EAC:
    ctx->pc = 0x80D33EACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33EACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33EAC: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D33EB0:
    ctx->pc = 0x80D33EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EB0u)) return;
    // 80D33EB0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D33EB4:
    ctx->pc = 0x80D33EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EB4u)) return;
    // 80D33EB4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D33EB8:
    ctx->pc = 0x80D33EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33EB8: lwz     r0, 0(r4)
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
label_80D33EBC:
    ctx->pc = 0x80D33EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EBCu)) return;
    // 80D33EBC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33EC0:
    ctx->pc = 0x80D33EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EC0u)) return;
    // 80D33EC0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33EC4:
    ctx->pc = 0x80D33EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EC4u)) return;
    // 80D33EC4: addi    r4, r4, 15964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15964);

label_80D33EC8:
    ctx->pc = 0x80D33EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33EC8: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33ECC:
    ctx->pc = 0x80D33ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33ECC: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D33ED0:
    ctx->pc = 0x80D33ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33ED0u)) return;
    // 80D33ED0: bl      0x8045F608
    {
            ctx->lr = 0x80D33ED4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D33ED4:
    ctx->pc = 0x80D33ED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33ED4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33ED8:
    ctx->pc = 0x80D33ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33ED8u)) return;
    // 80D33ED8: bl      0x8045F220
    {
            ctx->lr = 0x80D33EDCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33EDC:
    ctx->pc = 0x80D33EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33EDC: bl      0x8045E760
    {
            ctx->lr = 0x80D33EE0u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D33EE0:
    ctx->pc = 0x80D33EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D33EE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33EE4:
    ctx->pc = 0x80D33EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EE4u)) return;
    // 80D33EE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33EE8:
    ctx->pc = 0x80D33EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EE8u)) return;
    // 80D33EE8: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33EEC:
    ctx->pc = 0x80D33EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EECu)) return;
    // 80D33EEC: addi    r5, r5, 13824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13824);

label_80D33EF0:
    ctx->pc = 0x80D33EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D33EF0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33EF0u)) return;
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
label_80D33EF4:
    ctx->pc = 0x80D33EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EF4u)) return;
    // 80D33EF4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33EF8:
    ctx->pc = 0x80D33EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EF8u)) return;
    // 80D33EF8: addi    r5, r5, 13828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13828);

label_80D33EFC:
    ctx->pc = 0x80D33EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D33EFC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33EFCu)) return;
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
label_80D33F00:
    ctx->pc = 0x80D33F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F00u)) return;
    // 80D33F00: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D33F04:
    ctx->pc = 0x80D33F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F04u)) return;
    // 80D33F04: addi    r5, r5, 13832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13832);

label_80D33F08:
    ctx->pc = 0x80D33F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33F08: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D33F08u)) return;
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
label_80D33F0C:
    ctx->pc = 0x80D33F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F0Cu)) return;
    // 80D33F0C: bl      0x8045C750
    {
            ctx->lr = 0x80D33F10u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D33F10:
    ctx->pc = 0x80D33F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D33F10: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D33F14:
    ctx->pc = 0x80D33F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F14u)) return;
    // 80D33F14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D33F18:
    ctx->pc = 0x80D33F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F18u)) return;
    // 80D33F18: li      r5, 3799
    ctx->gpr[5] = (u32)(s32)(3799);

label_80D33F1C:
    ctx->pc = 0x80D33F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F1Cu)) return;
    // 80D33F1C: li      r6, 662
    ctx->gpr[6] = (u32)(s32)(662);

label_80D33F20:
    ctx->pc = 0x80D33F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F20u)) return;
    // 80D33F20: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_80D33F24:
    ctx->pc = 0x80D33F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F24u)) return;
    // 80D33F24: bl      0x8045C7B4
    {
            ctx->lr = 0x80D33F28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D33F28:
    ctx->pc = 0x80D33F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33F28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33F2C:
    ctx->pc = 0x80D33F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F2Cu)) return;
    // 80D33F2C: bl      0x8045F220
    {
            ctx->lr = 0x80D33F30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33F30:
    ctx->pc = 0x80D33F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33F30: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D33F34:
    ctx->pc = 0x80D33F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F34u)) return;
    // 80D33F34: addi    r4, r4, -24844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24844);

label_80D33F38:
    ctx->pc = 0x80D33F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F38u)) return;
    // 80D33F38: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D33F3C:
    ctx->pc = 0x80D33F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F3Cu)) return;
    // 80D33F3C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D33F40:
    ctx->pc = 0x80D33F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F40u)) return;
    // 80D33F40: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D33F44:
    ctx->pc = 0x80D33F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F44u)) return;
    // 80D33F44: addi    r6, r6, 13800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13800);

label_80D33F48:
    ctx->pc = 0x80D33F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D33F48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D33F48u)) return;
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
label_80D33F4C:
    ctx->pc = 0x80D33F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F4Cu)) return;
    // 80D33F4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D33F50:
    ctx->pc = 0x80D33F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F50u)) return;
    // 80D33F50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D33F54:
    ctx->pc = 0x80D33F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F54u)) return;
    // 80D33F54: bl      0x8045EBE4
    {
            ctx->lr = 0x80D33F58u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D33F58:
    ctx->pc = 0x80D33F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33F58: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D33F5C:
    ctx->pc = 0x80D33F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F5Cu)) return;
    // 80D33F5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D33F60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D33F60:
    ctx->pc = 0x80D33F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33F60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D33F64:
    ctx->pc = 0x80D33F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F64u)) return;
    // 80D33F64: bl      0x8045F220
    {
            ctx->lr = 0x80D33F68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33F68:
    ctx->pc = 0x80D33F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33F68: lis     r4, -28601
    ctx->gpr[4] = ((u32)(s32)(-28601) << 16);

label_80D33F6C:
    ctx->pc = 0x80D33F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F6Cu)) return;
    // 80D33F6C: addi    r4, r4, -1396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1396);

label_80D33F70:
    ctx->pc = 0x80D33F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F70u)) return;
    // 80D33F70: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D33F74:
    ctx->pc = 0x80D33F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F74u)) return;
    // 80D33F74: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D33F78:
    ctx->pc = 0x80D33F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F78u)) return;
    // 80D33F78: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D33F7C:
    ctx->pc = 0x80D33F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F7Cu)) return;
    // 80D33F7C: addi    r6, r6, 13800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13800);

label_80D33F80:
    ctx->pc = 0x80D33F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D33F80: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D33F80u)) return;
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
label_80D33F84:
    ctx->pc = 0x80D33F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F84u)) return;
    // 80D33F84: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D33F88:
    ctx->pc = 0x80D33F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F88u)) return;
    // 80D33F88: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80D33F8C:
    ctx->pc = 0x80D33F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F8Cu)) return;
    // 80D33F8C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D33F90u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D33F90:
    ctx->pc = 0x80D33F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33F90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33F94:
    ctx->pc = 0x80D33F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F94u)) return;
    // 80D33F94: bl      0x8045F220
    {
            ctx->lr = 0x80D33F98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33F98:
    ctx->pc = 0x80D33F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D33F98: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33F9C:
    ctx->pc = 0x80D33F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33F9Cu)) return;
    // 80D33F9C: addi    r4, r4, 16024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16024);

label_80D33FA0:
    ctx->pc = 0x80D33FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FA0u)) return;
    // 80D33FA0: bl      0x8045C060
    {
            ctx->lr = 0x80D33FA4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D33FA4:
    ctx->pc = 0x80D33FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33FA4: li      r3, 1546
    ctx->gpr[3] = (u32)(s32)(1546);

label_80D33FA8:
    ctx->pc = 0x80D33FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FA8u)) return;
    // 80D33FA8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D33FACu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D33FAC:
    ctx->pc = 0x80D33FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D33FAC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D33FB0:
    ctx->pc = 0x80D33FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FB0u)) return;
    // 80D33FB0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D33FB4:
    ctx->pc = 0x80D33FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D33FB4: lwz     r0, 0(r3)
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
label_80D33FB8:
    ctx->pc = 0x80D33FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FB8u)) return;
    // 80D33FB8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D33FBC:
    ctx->pc = 0x80D33FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FBCu)) return;
    // 80D33FBC: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D33FC0:
    ctx->pc = 0x80D33FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FC0u)) return;
    // 80D33FC0: addi    r3, r3, 15964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15964);

label_80D33FC4:
    ctx->pc = 0x80D33FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D33FC4: lwzx    r3, r3, r0
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
label_80D33FC8:
    ctx->pc = 0x80D33FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D33FC8: lwz     r3, 32(r3)
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
label_80D33FCC:
    ctx->pc = 0x80D33FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FCCu)) return;
    // 80D33FCC: bl      0x8045F6FC
    {
            ctx->lr = 0x80D33FD0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D33FD0:
    ctx->pc = 0x80D33FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33FD0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33FD4:
    ctx->pc = 0x80D33FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FD4u)) return;
    // 80D33FD4: bl      0x8045F220
    {
            ctx->lr = 0x80D33FD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33FD8:
    ctx->pc = 0x80D33FD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33FD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D33FD8: bl      0x8045E760
    {
            ctx->lr = 0x80D33FDCu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D33FDC:
    ctx->pc = 0x80D33FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D33FDC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D33FE0:
    ctx->pc = 0x80D33FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FE0u)) return;
    // 80D33FE0: bl      0x8045F220
    {
            ctx->lr = 0x80D33FE4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D33FE4:
    ctx->pc = 0x80D33FE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D33FE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D33FE4: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D33FE8:
    ctx->pc = 0x80D33FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FE8u)) return;
    // 80D33FE8: addi    r4, r4, 21964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21964);

label_80D33FEC:
    ctx->pc = 0x80D33FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FECu)) return;
    // 80D33FEC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D33FF0:
    ctx->pc = 0x80D33FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FF0u)) return;
    // 80D33FF0: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D33FF4:
    ctx->pc = 0x80D33FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FF4u)) return;
    // 80D33FF4: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D33FF8:
    ctx->pc = 0x80D33FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FF8u)) return;
    // 80D33FF8: addi    r6, r6, 13880
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13880);

label_80D33FFC:
    ctx->pc = 0x80D33FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D33FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D33FFC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D33FFCu)) return;
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
label_80D34000:
    ctx->pc = 0x80D34000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34000u)) return;
    // 80D34000: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34004:
    ctx->pc = 0x80D34004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34004u)) return;
    // 80D34004: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D34008:
    ctx->pc = 0x80D34008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34008u)) return;
    // 80D34008: bl      0x8045EBE4
    {
            ctx->lr = 0x80D3400Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D3400C:
    ctx->pc = 0x80D3400Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3400Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3400C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34010:
    ctx->pc = 0x80D34010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34010u)) return;
    // 80D34010: bl      0x8045F220
    {
            ctx->lr = 0x80D34014u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34014:
    ctx->pc = 0x80D34014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D34014: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D34018:
    ctx->pc = 0x80D34018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34018u)) return;
    // 80D34018: addi    r4, r4, 30304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30304);

label_80D3401C:
    ctx->pc = 0x80D3401Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3401Cu)) return;
    // 80D3401C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D34020:
    ctx->pc = 0x80D34020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34020u)) return;
    // 80D34020: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D34024:
    ctx->pc = 0x80D34024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34024u)) return;
    // 80D34024: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D34028:
    ctx->pc = 0x80D34028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34028u)) return;
    // 80D34028: addi    r6, r6, 13800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13800);

label_80D3402C:
    ctx->pc = 0x80D3402Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3402Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3402C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D3402Cu)) return;
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
label_80D34030:
    ctx->pc = 0x80D34030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34030u)) return;
    // 80D34030: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34034:
    ctx->pc = 0x80D34034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34034u)) return;
    // 80D34034: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D34038:
    ctx->pc = 0x80D34038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34038u)) return;
    // 80D34038: bl      0x8045EBE4
    {
            ctx->lr = 0x80D3403Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D3403C:
    ctx->pc = 0x80D3403Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3403Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3403C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34040:
    ctx->pc = 0x80D34040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34040u)) return;
    // 80D34040: bl      0x8045F220
    {
            ctx->lr = 0x80D34044u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34044:
    ctx->pc = 0x80D34044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D34044: lis     r4, -28582
    ctx->gpr[4] = ((u32)(s32)(-28582) << 16);

label_80D34048:
    ctx->pc = 0x80D34048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34048u)) return;
    // 80D34048: addi    r4, r4, -1616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1616);

label_80D3404C:
    ctx->pc = 0x80D3404Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3404Cu)) return;
    // 80D3404C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D34050:
    ctx->pc = 0x80D34050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34050u)) return;
    // 80D34050: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D34054:
    ctx->pc = 0x80D34054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34054u)) return;
    // 80D34054: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D34058:
    ctx->pc = 0x80D34058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34058u)) return;
    // 80D34058: addi    r6, r6, 13800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13800);

label_80D3405C:
    ctx->pc = 0x80D3405Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3405Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3405C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D3405Cu)) return;
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
label_80D34060:
    ctx->pc = 0x80D34060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34060u)) return;
    // 80D34060: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D34064:
    ctx->pc = 0x80D34064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34064u)) return;
    // 80D34064: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D34068:
    ctx->pc = 0x80D34068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34068u)) return;
    // 80D34068: bl      0x8045EBE4
    {
            ctx->lr = 0x80D3406Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D3406C:
    ctx->pc = 0x80D3406Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3406Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3406C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D34070:
    ctx->pc = 0x80D34070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34070u)) return;
    // 80D34070: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34074u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34074:
    ctx->pc = 0x80D34074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34074: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34078:
    ctx->pc = 0x80D34078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34078u)) return;
    // 80D34078: bl      0x8045F220
    {
            ctx->lr = 0x80D3407Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3407C:
    ctx->pc = 0x80D3407Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3407Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3407C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34080:
    ctx->pc = 0x80D34080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34080u)) return;
    // 80D34080: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34084:
    ctx->pc = 0x80D34084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34084u)) return;
    // 80D34084: bl      0x8045F220
    {
            ctx->lr = 0x80D34088u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34088:
    ctx->pc = 0x80D34088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D34088: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D3408C:
    ctx->pc = 0x80D3408Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3408Cu)) return;
    // 80D3408C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D34090:
    ctx->pc = 0x80D34090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34090u)) return;
    // 80D34090: addi    r5, r5, 13836
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13836);

label_80D34094:
    ctx->pc = 0x80D34094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34094: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34094u)) return;
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
label_80D34098:
    ctx->pc = 0x80D34098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34098u)) return;
    // 80D34098: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3409C:
    ctx->pc = 0x80D3409Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3409Cu)) return;
    // 80D3409C: addi    r5, r5, 13840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13840);

label_80D340A0:
    ctx->pc = 0x80D340A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D340A0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D340A0u)) return;
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
label_80D340A4:
    ctx->pc = 0x80D340A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340A4u)) return;
    // 80D340A4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D340A4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D340A8:
    ctx->pc = 0x80D340A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340A8u)) return;
    // 80D340A8: bl      0x8045E734
    {
            ctx->lr = 0x80D340ACu;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D340AC:
    ctx->pc = 0x80D340ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D340AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D340B0:
    ctx->pc = 0x80D340B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340B0u)) return;
    // 80D340B0: bl      0x8045F220
    {
            ctx->lr = 0x80D340B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D340B4:
    ctx->pc = 0x80D340B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D340B4: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D340B8:
    ctx->pc = 0x80D340B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340B8u)) return;
    // 80D340B8: addi    r4, r4, 16032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16032);

label_80D340BC:
    ctx->pc = 0x80D340BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340BCu)) return;
    // 80D340BC: bl      0x8045C060
    {
            ctx->lr = 0x80D340C0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D340C0:
    ctx->pc = 0x80D340C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D340C0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D340C4:
    ctx->pc = 0x80D340C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340C4u)) return;
    // 80D340C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D340C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D340C8:
    ctx->pc = 0x80D340C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D340C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D340CC:
    ctx->pc = 0x80D340CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340CCu)) return;
    // 80D340CC: bl      0x8045F220
    {
            ctx->lr = 0x80D340D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D340D0:
    ctx->pc = 0x80D340D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D340D0: bl      0x8045E760
    {
            ctx->lr = 0x80D340D4u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D340D4:
    ctx->pc = 0x80D340D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D340D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D340D8:
    ctx->pc = 0x80D340D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340D8u)) return;
    // 80D340D8: bl      0x8045F220
    {
            ctx->lr = 0x80D340DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D340DC:
    ctx->pc = 0x80D340DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D340DC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D340E0:
    ctx->pc = 0x80D340E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340E0u)) return;
    // 80D340E0: addi    r4, r4, 16036
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16036);

label_80D340E4:
    ctx->pc = 0x80D340E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340E4u)) return;
    // 80D340E4: bl      0x8045C060
    {
            ctx->lr = 0x80D340E8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D340E8:
    ctx->pc = 0x80D340E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D340E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D340E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D340EC:
    ctx->pc = 0x80D340ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340ECu)) return;
    // 80D340EC: li      r4, 70
    ctx->gpr[4] = (u32)(s32)(70);

label_80D340F0:
    ctx->pc = 0x80D340F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340F0u)) return;
    // 80D340F0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D340F4:
    ctx->pc = 0x80D340F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340F4u)) return;
    // 80D340F4: addi    r5, r5, 13884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13884);

label_80D340F8:
    ctx->pc = 0x80D340F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D340F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D340F8u)) return;
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
label_80D340FC:
    ctx->pc = 0x80D340FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D340FCu)) return;
    // 80D340FC: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D34100:
    ctx->pc = 0x80D34100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34100u)) return;
    // 80D34100: addi    r5, r5, 13888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13888);

label_80D34104:
    ctx->pc = 0x80D34104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34104: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34104u)) return;
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
label_80D34108:
    ctx->pc = 0x80D34108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34108u)) return;
    // 80D34108: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D3410C:
    ctx->pc = 0x80D3410Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3410Cu)) return;
    // 80D3410C: addi    r5, r5, 13892
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13892);

label_80D34110:
    ctx->pc = 0x80D34110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34110: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34110u)) return;
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
label_80D34114:
    ctx->pc = 0x80D34114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34114u)) return;
    // 80D34114: bl      0x8045C750
    {
            ctx->lr = 0x80D34118u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D34118:
    ctx->pc = 0x80D34118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D34118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3411C:
    ctx->pc = 0x80D3411Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3411Cu)) return;
    // 80D3411C: li      r4, 70
    ctx->gpr[4] = (u32)(s32)(70);

label_80D34120:
    ctx->pc = 0x80D34120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34120u)) return;
    // 80D34120: li      r5, 3799
    ctx->gpr[5] = (u32)(s32)(3799);

label_80D34124:
    ctx->pc = 0x80D34124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34124u)) return;
    // 80D34124: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D34128:
    ctx->pc = 0x80D34128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34128u)) return;
    // 80D34128: addi    r6, r6, -30570
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30570);

label_80D3412C:
    ctx->pc = 0x80D3412Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3412Cu)) return;
    // 80D3412C: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_80D34130:
    ctx->pc = 0x80D34130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34130u)) return;
    // 80D34130: bl      0x8045C7B4
    {
            ctx->lr = 0x80D34134u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D34134:
    ctx->pc = 0x80D34134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34134: bl      0x8045BFF4
    {
            ctx->lr = 0x80D34138u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D34138:
    ctx->pc = 0x80D34138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34138: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3413C:
    ctx->pc = 0x80D3413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3413Cu)) return;
    // 80D3413C: bl      0x8045F220
    {
            ctx->lr = 0x80D34140u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34140:
    ctx->pc = 0x80D34140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34140: bl      0x8045EB8C
    {
            ctx->lr = 0x80D34144u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D34144:
    ctx->pc = 0x80D34144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34144: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34148:
    ctx->pc = 0x80D34148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34148u)) return;
    // 80D34148: bl      0x8045F220
    {
            ctx->lr = 0x80D3414Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3414C:
    ctx->pc = 0x80D3414Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3414Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3414C: bl      0x8045C034
    {
            ctx->lr = 0x80D34150u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D34150:
    ctx->pc = 0x80D34150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34150: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34154:
    ctx->pc = 0x80D34154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34154u)) return;
    // 80D34154: bl      0x8045F220
    {
            ctx->lr = 0x80D34158u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34158:
    ctx->pc = 0x80D34158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D34158: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D3415C:
    ctx->pc = 0x80D3415Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3415Cu)) return;
    // 80D3415C: addi    r4, r4, 13776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13776);

label_80D34160:
    ctx->pc = 0x80D34160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34160: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34160u)) return;
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
label_80D34164:
    ctx->pc = 0x80D34164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34164u)) return;
    // 80D34164: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D34168:
    ctx->pc = 0x80D34168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34168u)) return;
    // 80D34168: addi    r4, r4, 13804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13804);

label_80D3416C:
    ctx->pc = 0x80D3416Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3416Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3416C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3416Cu)) return;
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
label_80D34170:
    ctx->pc = 0x80D34170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34170u)) return;
    // 80D34170: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D34174:
    ctx->pc = 0x80D34174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34174u)) return;
    // 80D34174: addi    r4, r4, 13808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13808);

label_80D34178:
    ctx->pc = 0x80D34178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34178: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34178u)) return;
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
label_80D3417C:
    ctx->pc = 0x80D3417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3417Cu)) return;
    // 80D3417C: bl      0x8045E70C
    {
            ctx->lr = 0x80D34180u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D34180:
    ctx->pc = 0x80D34180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34180: bl      0x8045F32C
    {
            ctx->lr = 0x80D34184u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D34184:
    ctx->pc = 0x80D34184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34184: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D34188:
    ctx->pc = 0x80D34188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34188u)) return;
    // 80D34188: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3418Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3418C:
    ctx->pc = 0x80D3418Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3418Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3418C: b       0x80D341A8
    {
            goto label_80D341A8;
    }

label_80D34190:
    ctx->pc = 0x80D34190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34190: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34194:
    ctx->pc = 0x80D34194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34194u)) return;
    // 80D34194: bl      0x8045EC10
    {
            ctx->lr = 0x80D34198u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D34198:
    ctx->pc = 0x80D34198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34198: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3419C:
    ctx->pc = 0x80D3419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3419Cu)) return;
    // 80D3419C: bl      0x8045ED54
    {
            ctx->lr = 0x80D341A0u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D341A0:
    ctx->pc = 0x80D341A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341A0: bl      0x8045DE34
    {
            ctx->lr = 0x80D341A4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D341A4:
    ctx->pc = 0x80D341A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D341A4: bl      0x80460A80
    {
            ctx->lr = 0x80D341A8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D341A8:
    ctx->pc = 0x80D341A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D341A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D341A8: lwz     r31, 12(r1)
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
label_80D341AC:
    ctx->pc = 0x80D341ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D341AC: lwz     r0, 20(r1)
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
label_80D341B0:
    ctx->pc = 0x80D341B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D341B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D341B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D341B4:
    ctx->pc = 0x80D341B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341B4u)) return;
    // 80D341B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D341B8:
    ctx->pc = 0x80D341B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D341B8u)) return;
    // 80D341B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D33900;
        }
    }

    ctx->pc = 0x80D341BCu;
    return;
return_dispatch_80D33900:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D33938u: goto label_80D33938;
    case 0x80D33940u: goto label_80D33940;
    case 0x80D33948u: goto label_80D33948;
    case 0x80D3394Cu: goto label_80D3394C;
    case 0x80D33950u: goto label_80D33950;
    case 0x80D33990u: goto label_80D33990;
    case 0x80D33998u: goto label_80D33998;
    case 0x80D339A0u: goto label_80D339A0;
    case 0x80D339C8u: goto label_80D339C8;
    case 0x80D339D0u: goto label_80D339D0;
    case 0x80D339E0u: goto label_80D339E0;
    case 0x80D339E8u: goto label_80D339E8;
    case 0x80D339F0u: goto label_80D339F0;
    case 0x80D33A18u: goto label_80D33A18;
    case 0x80D33A20u: goto label_80D33A20;
    case 0x80D33A48u: goto label_80D33A48;
    case 0x80D33A78u: goto label_80D33A78;
    case 0x80D33A90u: goto label_80D33A90;
    case 0x80D33AACu: goto label_80D33AAC;
    case 0x80D33AB8u: goto label_80D33AB8;
    case 0x80D33AD4u: goto label_80D33AD4;
    case 0x80D33AE0u: goto label_80D33AE0;
    case 0x80D33AE8u: goto label_80D33AE8;
    case 0x80D33B0Cu: goto label_80D33B0C;
    case 0x80D33B14u: goto label_80D33B14;
    case 0x80D33B1Cu: goto label_80D33B1C;
    case 0x80D33B44u: goto label_80D33B44;
    case 0x80D33B74u: goto label_80D33B74;
    case 0x80D33B8Cu: goto label_80D33B8C;
    case 0x80D33B94u: goto label_80D33B94;
    case 0x80D33BA0u: goto label_80D33BA0;
    case 0x80D33BC4u: goto label_80D33BC4;
    case 0x80D33BCCu: goto label_80D33BCC;
    case 0x80D33BD4u: goto label_80D33BD4;
    case 0x80D33BE0u: goto label_80D33BE0;
    case 0x80D33BE8u: goto label_80D33BE8;
    case 0x80D33BF0u: goto label_80D33BF0;
    case 0x80D33C18u: goto label_80D33C18;
    case 0x80D33C20u: goto label_80D33C20;
    case 0x80D33C2Cu: goto label_80D33C2C;
    case 0x80D33C34u: goto label_80D33C34;
    case 0x80D33C5Cu: goto label_80D33C5C;
    case 0x80D33C60u: goto label_80D33C60;
    case 0x80D33C68u: goto label_80D33C68;
    case 0x80D33C6Cu: goto label_80D33C6C;
    case 0x80D33C74u: goto label_80D33C74;
    case 0x80D33C80u: goto label_80D33C80;
    case 0x80D33C88u: goto label_80D33C88;
    case 0x80D33CB0u: goto label_80D33CB0;
    case 0x80D33CB8u: goto label_80D33CB8;
    case 0x80D33CBCu: goto label_80D33CBC;
    case 0x80D33CECu: goto label_80D33CEC;
    case 0x80D33D08u: goto label_80D33D08;
    case 0x80D33D38u: goto label_80D33D38;
    case 0x80D33D54u: goto label_80D33D54;
    case 0x80D33D5Cu: goto label_80D33D5C;
    case 0x80D33D84u: goto label_80D33D84;
    case 0x80D33D8Cu: goto label_80D33D8C;
    case 0x80D33DB4u: goto label_80D33DB4;
    case 0x80D33DDCu: goto label_80D33DDC;
    case 0x80D33E0Cu: goto label_80D33E0C;
    case 0x80D33E28u: goto label_80D33E28;
    case 0x80D33E58u: goto label_80D33E58;
    case 0x80D33E74u: goto label_80D33E74;
    case 0x80D33E7Cu: goto label_80D33E7C;
    case 0x80D33EA4u: goto label_80D33EA4;
    case 0x80D33EACu: goto label_80D33EAC;
    case 0x80D33ED4u: goto label_80D33ED4;
    case 0x80D33EDCu: goto label_80D33EDC;
    case 0x80D33EE0u: goto label_80D33EE0;
    case 0x80D33F10u: goto label_80D33F10;
    case 0x80D33F28u: goto label_80D33F28;
    case 0x80D33F30u: goto label_80D33F30;
    case 0x80D33F58u: goto label_80D33F58;
    case 0x80D33F60u: goto label_80D33F60;
    case 0x80D33F68u: goto label_80D33F68;
    case 0x80D33F90u: goto label_80D33F90;
    case 0x80D33F98u: goto label_80D33F98;
    case 0x80D33FA4u: goto label_80D33FA4;
    case 0x80D33FACu: goto label_80D33FAC;
    case 0x80D33FD0u: goto label_80D33FD0;
    case 0x80D33FD8u: goto label_80D33FD8;
    case 0x80D33FDCu: goto label_80D33FDC;
    case 0x80D33FE4u: goto label_80D33FE4;
    case 0x80D3400Cu: goto label_80D3400C;
    case 0x80D34014u: goto label_80D34014;
    case 0x80D3403Cu: goto label_80D3403C;
    case 0x80D34044u: goto label_80D34044;
    case 0x80D3406Cu: goto label_80D3406C;
    case 0x80D34074u: goto label_80D34074;
    case 0x80D3407Cu: goto label_80D3407C;
    case 0x80D34088u: goto label_80D34088;
    case 0x80D340ACu: goto label_80D340AC;
    case 0x80D340B4u: goto label_80D340B4;
    case 0x80D340C0u: goto label_80D340C0;
    case 0x80D340C8u: goto label_80D340C8;
    case 0x80D340D0u: goto label_80D340D0;
    case 0x80D340D4u: goto label_80D340D4;
    case 0x80D340DCu: goto label_80D340DC;
    case 0x80D340E8u: goto label_80D340E8;
    case 0x80D34118u: goto label_80D34118;
    case 0x80D34134u: goto label_80D34134;
    case 0x80D34138u: goto label_80D34138;
    case 0x80D34140u: goto label_80D34140;
    case 0x80D34144u: goto label_80D34144;
    case 0x80D3414Cu: goto label_80D3414C;
    case 0x80D34150u: goto label_80D34150;
    case 0x80D34158u: goto label_80D34158;
    case 0x80D34180u: goto label_80D34180;
    case 0x80D34184u: goto label_80D34184;
    case 0x80D3418Cu: goto label_80D3418C;
    case 0x80D34198u: goto label_80D34198;
    case 0x80D341A0u: goto label_80D341A0;
    case 0x80D341A4u: goto label_80D341A4;
    case 0x80D341A8u: goto label_80D341A8;
    default: return;
    }
}

