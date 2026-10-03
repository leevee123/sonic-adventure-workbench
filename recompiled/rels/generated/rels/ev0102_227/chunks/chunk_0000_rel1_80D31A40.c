// DolRecomp output
#include "../generated.h"

void func_80D31A40(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D31A40[545] = {
        &&label_80D31A40,
        &&label_80D31A44,
        &&label_80D31A48,
        &&label_80D31A4C,
        &&label_80D31A50,
        &&label_80D31A54,
        &&label_80D31A58,
        &&label_80D31A5C,
        &&label_80D31A60,
        &&label_80D31A64,
        &&label_80D31A68,
        &&label_80D31A6C,
        &&label_80D31A70,
        &&label_80D31A74,
        &&label_80D31A78,
        &&label_80D31A7C,
        &&label_80D31A80,
        &&label_80D31A84,
        &&label_80D31A88,
        &&label_80D31A8C,
        &&label_80D31A90,
        &&label_80D31A94,
        &&label_80D31A98,
        &&label_80D31A9C,
        &&label_80D31AA0,
        &&label_80D31AA4,
        &&label_80D31AA8,
        &&label_80D31AAC,
        &&label_80D31AB0,
        &&label_80D31AB4,
        &&label_80D31AB8,
        &&label_80D31ABC,
        &&label_80D31AC0,
        &&label_80D31AC4,
        &&label_80D31AC8,
        &&label_80D31ACC,
        &&label_80D31AD0,
        &&label_80D31AD4,
        &&label_80D31AD8,
        &&label_80D31ADC,
        &&label_80D31AE0,
        &&label_80D31AE4,
        &&label_80D31AE8,
        &&label_80D31AEC,
        &&label_80D31AF0,
        &&label_80D31AF4,
        &&label_80D31AF8,
        &&label_80D31AFC,
        &&label_80D31B00,
        &&label_80D31B04,
        &&label_80D31B08,
        &&label_80D31B0C,
        &&label_80D31B10,
        &&label_80D31B14,
        &&label_80D31B18,
        &&label_80D31B1C,
        &&label_80D31B20,
        &&label_80D31B24,
        &&label_80D31B28,
        &&label_80D31B2C,
        &&label_80D31B30,
        &&label_80D31B34,
        &&label_80D31B38,
        &&label_80D31B3C,
        &&label_80D31B40,
        &&label_80D31B44,
        &&label_80D31B48,
        &&label_80D31B4C,
        &&label_80D31B50,
        &&label_80D31B54,
        &&label_80D31B58,
        &&label_80D31B5C,
        &&label_80D31B60,
        &&label_80D31B64,
        &&label_80D31B68,
        &&label_80D31B6C,
        &&label_80D31B70,
        &&label_80D31B74,
        &&label_80D31B78,
        &&label_80D31B7C,
        &&label_80D31B80,
        &&label_80D31B84,
        &&label_80D31B88,
        &&label_80D31B8C,
        &&label_80D31B90,
        &&label_80D31B94,
        &&label_80D31B98,
        &&label_80D31B9C,
        &&label_80D31BA0,
        &&label_80D31BA4,
        &&label_80D31BA8,
        &&label_80D31BAC,
        &&label_80D31BB0,
        &&label_80D31BB4,
        &&label_80D31BB8,
        &&label_80D31BBC,
        &&label_80D31BC0,
        &&label_80D31BC4,
        &&label_80D31BC8,
        &&label_80D31BCC,
        &&label_80D31BD0,
        &&label_80D31BD4,
        &&label_80D31BD8,
        &&label_80D31BDC,
        &&label_80D31BE0,
        &&label_80D31BE4,
        &&label_80D31BE8,
        &&label_80D31BEC,
        &&label_80D31BF0,
        &&label_80D31BF4,
        &&label_80D31BF8,
        &&label_80D31BFC,
        &&label_80D31C00,
        &&label_80D31C04,
        &&label_80D31C08,
        &&label_80D31C0C,
        &&label_80D31C10,
        &&label_80D31C14,
        &&label_80D31C18,
        &&label_80D31C1C,
        &&label_80D31C20,
        &&label_80D31C24,
        &&label_80D31C28,
        &&label_80D31C2C,
        &&label_80D31C30,
        &&label_80D31C34,
        &&label_80D31C38,
        &&label_80D31C3C,
        &&label_80D31C40,
        &&label_80D31C44,
        &&label_80D31C48,
        &&label_80D31C4C,
        &&label_80D31C50,
        &&label_80D31C54,
        &&label_80D31C58,
        &&label_80D31C5C,
        &&label_80D31C60,
        &&label_80D31C64,
        &&label_80D31C68,
        &&label_80D31C6C,
        &&label_80D31C70,
        &&label_80D31C74,
        &&label_80D31C78,
        &&label_80D31C7C,
        &&label_80D31C80,
        &&label_80D31C84,
        &&label_80D31C88,
        &&label_80D31C8C,
        &&label_80D31C90,
        &&label_80D31C94,
        &&label_80D31C98,
        &&label_80D31C9C,
        &&label_80D31CA0,
        &&label_80D31CA4,
        &&label_80D31CA8,
        &&label_80D31CAC,
        &&label_80D31CB0,
        &&label_80D31CB4,
        &&label_80D31CB8,
        &&label_80D31CBC,
        &&label_80D31CC0,
        &&label_80D31CC4,
        &&label_80D31CC8,
        &&label_80D31CCC,
        &&label_80D31CD0,
        &&label_80D31CD4,
        &&label_80D31CD8,
        &&label_80D31CDC,
        &&label_80D31CE0,
        &&label_80D31CE4,
        &&label_80D31CE8,
        &&label_80D31CEC,
        &&label_80D31CF0,
        &&label_80D31CF4,
        &&label_80D31CF8,
        &&label_80D31CFC,
        &&label_80D31D00,
        &&label_80D31D04,
        &&label_80D31D08,
        &&label_80D31D0C,
        &&label_80D31D10,
        &&label_80D31D14,
        &&label_80D31D18,
        &&label_80D31D1C,
        &&label_80D31D20,
        &&label_80D31D24,
        &&label_80D31D28,
        &&label_80D31D2C,
        &&label_80D31D30,
        &&label_80D31D34,
        &&label_80D31D38,
        &&label_80D31D3C,
        &&label_80D31D40,
        &&label_80D31D44,
        &&label_80D31D48,
        &&label_80D31D4C,
        &&label_80D31D50,
        &&label_80D31D54,
        &&label_80D31D58,
        &&label_80D31D5C,
        &&label_80D31D60,
        &&label_80D31D64,
        &&label_80D31D68,
        &&label_80D31D6C,
        &&label_80D31D70,
        &&label_80D31D74,
        &&label_80D31D78,
        &&label_80D31D7C,
        &&label_80D31D80,
        &&label_80D31D84,
        &&label_80D31D88,
        &&label_80D31D8C,
        &&label_80D31D90,
        &&label_80D31D94,
        &&label_80D31D98,
        &&label_80D31D9C,
        &&label_80D31DA0,
        &&label_80D31DA4,
        &&label_80D31DA8,
        &&label_80D31DAC,
        &&label_80D31DB0,
        &&label_80D31DB4,
        &&label_80D31DB8,
        &&label_80D31DBC,
        &&label_80D31DC0,
        &&label_80D31DC4,
        &&label_80D31DC8,
        &&label_80D31DCC,
        &&label_80D31DD0,
        &&label_80D31DD4,
        &&label_80D31DD8,
        &&label_80D31DDC,
        &&label_80D31DE0,
        &&label_80D31DE4,
        &&label_80D31DE8,
        &&label_80D31DEC,
        &&label_80D31DF0,
        &&label_80D31DF4,
        &&label_80D31DF8,
        &&label_80D31DFC,
        &&label_80D31E00,
        &&label_80D31E04,
        &&label_80D31E08,
        &&label_80D31E0C,
        &&label_80D31E10,
        &&label_80D31E14,
        &&label_80D31E18,
        &&label_80D31E1C,
        &&label_80D31E20,
        &&label_80D31E24,
        &&label_80D31E28,
        &&label_80D31E2C,
        &&label_80D31E30,
        &&label_80D31E34,
        &&label_80D31E38,
        &&label_80D31E3C,
        &&label_80D31E40,
        &&label_80D31E44,
        &&label_80D31E48,
        &&label_80D31E4C,
        &&label_80D31E50,
        &&label_80D31E54,
        &&label_80D31E58,
        &&label_80D31E5C,
        &&label_80D31E60,
        &&label_80D31E64,
        &&label_80D31E68,
        &&label_80D31E6C,
        &&label_80D31E70,
        &&label_80D31E74,
        &&label_80D31E78,
        &&label_80D31E7C,
        &&label_80D31E80,
        &&label_80D31E84,
        &&label_80D31E88,
        &&label_80D31E8C,
        &&label_80D31E90,
        &&label_80D31E94,
        &&label_80D31E98,
        &&label_80D31E9C,
        &&label_80D31EA0,
        &&label_80D31EA4,
        &&label_80D31EA8,
        &&label_80D31EAC,
        &&label_80D31EB0,
        &&label_80D31EB4,
        &&label_80D31EB8,
        &&label_80D31EBC,
        &&label_80D31EC0,
        &&label_80D31EC4,
        &&label_80D31EC8,
        &&label_80D31ECC,
        &&label_80D31ED0,
        &&label_80D31ED4,
        &&label_80D31ED8,
        &&label_80D31EDC,
        &&label_80D31EE0,
        &&label_80D31EE4,
        &&label_80D31EE8,
        &&label_80D31EEC,
        &&label_80D31EF0,
        &&label_80D31EF4,
        &&label_80D31EF8,
        &&label_80D31EFC,
        &&label_80D31F00,
        &&label_80D31F04,
        &&label_80D31F08,
        &&label_80D31F0C,
        &&label_80D31F10,
        &&label_80D31F14,
        &&label_80D31F18,
        &&label_80D31F1C,
        &&label_80D31F20,
        &&label_80D31F24,
        &&label_80D31F28,
        &&label_80D31F2C,
        &&label_80D31F30,
        &&label_80D31F34,
        &&label_80D31F38,
        &&label_80D31F3C,
        &&label_80D31F40,
        &&label_80D31F44,
        &&label_80D31F48,
        &&label_80D31F4C,
        &&label_80D31F50,
        &&label_80D31F54,
        &&label_80D31F58,
        &&label_80D31F5C,
        &&label_80D31F60,
        &&label_80D31F64,
        &&label_80D31F68,
        &&label_80D31F6C,
        &&label_80D31F70,
        &&label_80D31F74,
        &&label_80D31F78,
        &&label_80D31F7C,
        &&label_80D31F80,
        &&label_80D31F84,
        &&label_80D31F88,
        &&label_80D31F8C,
        &&label_80D31F90,
        &&label_80D31F94,
        &&label_80D31F98,
        &&label_80D31F9C,
        &&label_80D31FA0,
        &&label_80D31FA4,
        &&label_80D31FA8,
        &&label_80D31FAC,
        &&label_80D31FB0,
        &&label_80D31FB4,
        &&label_80D31FB8,
        &&label_80D31FBC,
        &&label_80D31FC0,
        &&label_80D31FC4,
        &&label_80D31FC8,
        &&label_80D31FCC,
        &&label_80D31FD0,
        &&label_80D31FD4,
        &&label_80D31FD8,
        &&label_80D31FDC,
        &&label_80D31FE0,
        &&label_80D31FE4,
        &&label_80D31FE8,
        &&label_80D31FEC,
        &&label_80D31FF0,
        &&label_80D31FF4,
        &&label_80D31FF8,
        &&label_80D31FFC,
        &&label_80D32000,
        &&label_80D32004,
        &&label_80D32008,
        &&label_80D3200C,
        &&label_80D32010,
        &&label_80D32014,
        &&label_80D32018,
        &&label_80D3201C,
        &&label_80D32020,
        &&label_80D32024,
        &&label_80D32028,
        &&label_80D3202C,
        &&label_80D32030,
        &&label_80D32034,
        &&label_80D32038,
        &&label_80D3203C,
        &&label_80D32040,
        &&label_80D32044,
        &&label_80D32048,
        &&label_80D3204C,
        &&label_80D32050,
        &&label_80D32054,
        &&label_80D32058,
        &&label_80D3205C,
        &&label_80D32060,
        &&label_80D32064,
        &&label_80D32068,
        &&label_80D3206C,
        &&label_80D32070,
        &&label_80D32074,
        &&label_80D32078,
        &&label_80D3207C,
        &&label_80D32080,
        &&label_80D32084,
        &&label_80D32088,
        &&label_80D3208C,
        &&label_80D32090,
        &&label_80D32094,
        &&label_80D32098,
        &&label_80D3209C,
        &&label_80D320A0,
        &&label_80D320A4,
        &&label_80D320A8,
        &&label_80D320AC,
        &&label_80D320B0,
        &&label_80D320B4,
        &&label_80D320B8,
        &&label_80D320BC,
        &&label_80D320C0,
        &&label_80D320C4,
        &&label_80D320C8,
        &&label_80D320CC,
        &&label_80D320D0,
        &&label_80D320D4,
        &&label_80D320D8,
        &&label_80D320DC,
        &&label_80D320E0,
        &&label_80D320E4,
        &&label_80D320E8,
        &&label_80D320EC,
        &&label_80D320F0,
        &&label_80D320F4,
        &&label_80D320F8,
        &&label_80D320FC,
        &&label_80D32100,
        &&label_80D32104,
        &&label_80D32108,
        &&label_80D3210C,
        &&label_80D32110,
        &&label_80D32114,
        &&label_80D32118,
        &&label_80D3211C,
        &&label_80D32120,
        &&label_80D32124,
        &&label_80D32128,
        &&label_80D3212C,
        &&label_80D32130,
        &&label_80D32134,
        &&label_80D32138,
        &&label_80D3213C,
        &&label_80D32140,
        &&label_80D32144,
        &&label_80D32148,
        &&label_80D3214C,
        &&label_80D32150,
        &&label_80D32154,
        &&label_80D32158,
        &&label_80D3215C,
        &&label_80D32160,
        &&label_80D32164,
        &&label_80D32168,
        &&label_80D3216C,
        &&label_80D32170,
        &&label_80D32174,
        &&label_80D32178,
        &&label_80D3217C,
        &&label_80D32180,
        &&label_80D32184,
        &&label_80D32188,
        &&label_80D3218C,
        &&label_80D32190,
        &&label_80D32194,
        &&label_80D32198,
        &&label_80D3219C,
        &&label_80D321A0,
        &&label_80D321A4,
        &&label_80D321A8,
        &&label_80D321AC,
        &&label_80D321B0,
        &&label_80D321B4,
        &&label_80D321B8,
        &&label_80D321BC,
        &&label_80D321C0,
        &&label_80D321C4,
        &&label_80D321C8,
        &&label_80D321CC,
        &&label_80D321D0,
        &&label_80D321D4,
        &&label_80D321D8,
        &&label_80D321DC,
        &&label_80D321E0,
        &&label_80D321E4,
        &&label_80D321E8,
        &&label_80D321EC,
        &&label_80D321F0,
        &&label_80D321F4,
        &&label_80D321F8,
        &&label_80D321FC,
        &&label_80D32200,
        &&label_80D32204,
        &&label_80D32208,
        &&label_80D3220C,
        &&label_80D32210,
        &&label_80D32214,
        &&label_80D32218,
        &&label_80D3221C,
        &&label_80D32220,
        &&label_80D32224,
        &&label_80D32228,
        &&label_80D3222C,
        &&label_80D32230,
        &&label_80D32234,
        &&label_80D32238,
        &&label_80D3223C,
        &&label_80D32240,
        &&label_80D32244,
        &&label_80D32248,
        &&label_80D3224C,
        &&label_80D32250,
        &&label_80D32254,
        &&label_80D32258,
        &&label_80D3225C,
        &&label_80D32260,
        &&label_80D32264,
        &&label_80D32268,
        &&label_80D3226C,
        &&label_80D32270,
        &&label_80D32274,
        &&label_80D32278,
        &&label_80D3227C,
        &&label_80D32280,
        &&label_80D32284,
        &&label_80D32288,
        &&label_80D3228C,
        &&label_80D32290,
        &&label_80D32294,
        &&label_80D32298,
        &&label_80D3229C,
        &&label_80D322A0,
        &&label_80D322A4,
        &&label_80D322A8,
        &&label_80D322AC,
        &&label_80D322B0,
        &&label_80D322B4,
        &&label_80D322B8,
        &&label_80D322BC,
        &&label_80D322C0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D31A40u && pc <= 0x80D322C0u && ((pc - 0x80D31A40u) & 3u) == 0u)
            goto *pc_table_80D31A40[(pc - 0x80D31A40u) >> 2];
    }
    return;
label_80D31A40:
    ctx->pc = 0x80D31A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D31A40: stwu     r1, -16(r1)
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
label_80D31A44:
    ctx->pc = 0x80D31A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31A44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D31A48:
    ctx->pc = 0x80D31A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D31A48: stw     r0, 20(r1)
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
label_80D31A4C:
    ctx->pc = 0x80D31A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31A4C: stw     r31, 12(r1)
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
label_80D31A50:
    ctx->pc = 0x80D31A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A50u)) return;
    // 80D31A50: cmpwi   r3, 2
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

label_80D31A54:
    ctx->pc = 0x80D31A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A54u)) return;
    // 80D31A54: bc    12, 2, 0x80D32298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D32298;
        }
    }

label_80D31A58:
    ctx->pc = 0x80D31A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A58: bc    4, 0, 0x80D31A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31A6C;
        }
    }

label_80D31A5C:
    ctx->pc = 0x80D31A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31A5C: cmpwi   r3, 0
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

label_80D31A60:
    ctx->pc = 0x80D31A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A60u)) return;
    // 80D31A60: bc    12, 2, 0x80D322B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D322B0;
        }
    }

label_80D31A64:
    ctx->pc = 0x80D31A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A64: bc    4, 0, 0x80D31A74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31A74;
        }
    }

label_80D31A68:
    ctx->pc = 0x80D31A68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A68: b       0x80D322B0
    {
            goto label_80D322B0;
    }

label_80D31A6C:
    ctx->pc = 0x80D31A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31A6C: cmpwi   r3, 4
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

label_80D31A70:
    ctx->pc = 0x80D31A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A70u)) return;
    // 80D31A70: b       0x80D322B0
    {
            goto label_80D322B0;
    }

label_80D31A74:
    ctx->pc = 0x80D31A74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A74: bl      0x80460A24
    {
            ctx->lr = 0x80D31A78u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D31A78:
    ctx->pc = 0x80D31A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31A78: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80D31A7C:
    ctx->pc = 0x80D31A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A7Cu)) return;
    // 80D31A7C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31A80u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31A80:
    ctx->pc = 0x80D31A80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31A80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31A84:
    ctx->pc = 0x80D31A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A84u)) return;
    // 80D31A84: bl      0x8045EC10
    {
            ctx->lr = 0x80D31A88u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D31A88:
    ctx->pc = 0x80D31A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A88: bl      0x8045DE7C
    {
            ctx->lr = 0x80D31A8Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D31A8C:
    ctx->pc = 0x80D31A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31A8C: bl      0x80460A60
    {
            ctx->lr = 0x80D31A90u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D31A90:
    ctx->pc = 0x80D31A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D31A90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31A94:
    ctx->pc = 0x80D31A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A94u)) return;
    // 80D31A94: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80D31A98:
    ctx->pc = 0x80D31A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A98u)) return;
    // 80D31A98: addi    r4, r4, -5088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5088);

label_80D31A9C:
    ctx->pc = 0x80D31A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31A9Cu)) return;
    // 80D31A9C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31AA0:
    ctx->pc = 0x80D31AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AA0u)) return;
    // 80D31AA0: addi    r5, r5, 21072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21072);

label_80D31AA4:
    ctx->pc = 0x80D31AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D31AA4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31AA4u)) return;
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
label_80D31AA8:
    ctx->pc = 0x80D31AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AA8u)) return;
    // 80D31AA8: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31AAC:
    ctx->pc = 0x80D31AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AACu)) return;
    // 80D31AAC: addi    r5, r5, 21076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21076);

label_80D31AB0:
    ctx->pc = 0x80D31AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31AB0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31AB0u)) return;
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
label_80D31AB4:
    ctx->pc = 0x80D31AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AB4u)) return;
    // 80D31AB4: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31AB8:
    ctx->pc = 0x80D31AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AB8u)) return;
    // 80D31AB8: addi    r5, r5, 21080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21080);

label_80D31ABC:
    ctx->pc = 0x80D31ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31ABC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31ABCu)) return;
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
label_80D31AC0:
    ctx->pc = 0x80D31AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AC0u)) return;
    // 80D31AC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D31AC4:
    ctx->pc = 0x80D31AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AC4u)) return;
    // 80D31AC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D31AC8:
    ctx->pc = 0x80D31AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AC8u)) return;
    // 80D31AC8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D31ACC:
    ctx->pc = 0x80D31ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31ACCu)) return;
    // 80D31ACC: bl      0x8045ED84
    {
            ctx->lr = 0x80D31AD0u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D31AD0:
    ctx->pc = 0x80D31AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31AD0: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80D31AD4:
    ctx->pc = 0x80D31AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AD4u)) return;
    // 80D31AD4: bl      0x80406090
    {
            ctx->lr = 0x80D31AD8u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D31AD8:
    ctx->pc = 0x80D31AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31AD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31ADC:
    ctx->pc = 0x80D31ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31ADCu)) return;
    // 80D31ADC: bl      0x8045F220
    {
            ctx->lr = 0x80D31AE0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31AE0:
    ctx->pc = 0x80D31AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31AE0: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31AE4:
    ctx->pc = 0x80D31AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AE4u)) return;
    // 80D31AE4: addi    r4, r4, 21084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21084);

label_80D31AE8:
    ctx->pc = 0x80D31AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31AE8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31AE8u)) return;
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
label_80D31AEC:
    ctx->pc = 0x80D31AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AECu)) return;
    // 80D31AEC: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31AF0:
    ctx->pc = 0x80D31AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AF0u)) return;
    // 80D31AF0: addi    r4, r4, 21088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21088);

label_80D31AF4:
    ctx->pc = 0x80D31AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31AF4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31AF4u)) return;
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
label_80D31AF8:
    ctx->pc = 0x80D31AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AF8u)) return;
    // 80D31AF8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31AFC:
    ctx->pc = 0x80D31AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31AFCu)) return;
    // 80D31AFC: addi    r4, r4, 21092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21092);

label_80D31B00:
    ctx->pc = 0x80D31B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31B00: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31B00u)) return;
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
label_80D31B04:
    ctx->pc = 0x80D31B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B04u)) return;
    // 80D31B04: bl      0x8045EF2C
    {
            ctx->lr = 0x80D31B08u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D31B08:
    ctx->pc = 0x80D31B08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31B08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31B0C:
    ctx->pc = 0x80D31B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B0Cu)) return;
    // 80D31B0C: bl      0x8045F220
    {
            ctx->lr = 0x80D31B10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31B10:
    ctx->pc = 0x80D31B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D31B10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31B14:
    ctx->pc = 0x80D31B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B14u)) return;
    // 80D31B14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D31B18:
    ctx->pc = 0x80D31B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B18u)) return;
    // 80D31B18: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D31B1C:
    ctx->pc = 0x80D31B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B1Cu)) return;
    // 80D31B1C: bl      0x8045EEA8
    {
            ctx->lr = 0x80D31B20u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D31B20:
    ctx->pc = 0x80D31B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31B20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31B24:
    ctx->pc = 0x80D31B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B24u)) return;
    // 80D31B24: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31B28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31B28:
    ctx->pc = 0x80D31B28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31B28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31B2C:
    ctx->pc = 0x80D31B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B2Cu)) return;
    // 80D31B2C: bl      0x8045F220
    {
            ctx->lr = 0x80D31B30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31B30:
    ctx->pc = 0x80D31B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31B30: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D31B34:
    ctx->pc = 0x80D31B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B34u)) return;
    // 80D31B34: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D31B38:
    ctx->pc = 0x80D31B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B38u)) return;
    // 80D31B38: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D31B3C:
    ctx->pc = 0x80D31B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B3Cu)) return;
    // 80D31B3C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D31B40:
    ctx->pc = 0x80D31B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B40u)) return;
    // 80D31B40: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D31B44:
    ctx->pc = 0x80D31B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B44u)) return;
    // 80D31B44: addi    r6, r6, 21096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(21096);

label_80D31B48:
    ctx->pc = 0x80D31B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D31B48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D31B48u)) return;
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
label_80D31B4C:
    ctx->pc = 0x80D31B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B4Cu)) return;
    // 80D31B4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D31B50:
    ctx->pc = 0x80D31B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B50u)) return;
    // 80D31B50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D31B54:
    ctx->pc = 0x80D31B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B54u)) return;
    // 80D31B54: bl      0x8045EBE4
    {
            ctx->lr = 0x80D31B58u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D31B58:
    ctx->pc = 0x80D31B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31B58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31B5C:
    ctx->pc = 0x80D31B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B5Cu)) return;
    // 80D31B5C: bl      0x8045F220
    {
            ctx->lr = 0x80D31B60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31B60:
    ctx->pc = 0x80D31B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31B60: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31B64:
    ctx->pc = 0x80D31B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B64u)) return;
    // 80D31B64: addi    r4, r4, 21084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21084);

label_80D31B68:
    ctx->pc = 0x80D31B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31B68: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31B68u)) return;
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
label_80D31B6C:
    ctx->pc = 0x80D31B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B6Cu)) return;
    // 80D31B6C: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31B70:
    ctx->pc = 0x80D31B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B70u)) return;
    // 80D31B70: addi    r4, r4, 21100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21100);

label_80D31B74:
    ctx->pc = 0x80D31B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31B74: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31B74u)) return;
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
label_80D31B78:
    ctx->pc = 0x80D31B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B78u)) return;
    // 80D31B78: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31B7C:
    ctx->pc = 0x80D31B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B7Cu)) return;
    // 80D31B7C: addi    r4, r4, 21104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21104);

label_80D31B80:
    ctx->pc = 0x80D31B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31B80: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31B80u)) return;
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
label_80D31B84:
    ctx->pc = 0x80D31B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B84u)) return;
    // 80D31B84: bl      0x8045E70C
    {
            ctx->lr = 0x80D31B88u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D31B88:
    ctx->pc = 0x80D31B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31B88: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31B8C:
    ctx->pc = 0x80D31B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B8Cu)) return;
    // 80D31B8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31B90:
    ctx->pc = 0x80D31B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B90u)) return;
    // 80D31B90: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31B94:
    ctx->pc = 0x80D31B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B94u)) return;
    // 80D31B94: addi    r5, r5, 21108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21108);

label_80D31B98:
    ctx->pc = 0x80D31B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31B98: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31B98u)) return;
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
label_80D31B9C:
    ctx->pc = 0x80D31B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31B9Cu)) return;
    // 80D31B9C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31BA0:
    ctx->pc = 0x80D31BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BA0u)) return;
    // 80D31BA0: addi    r5, r5, 21112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21112);

label_80D31BA4:
    ctx->pc = 0x80D31BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31BA4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31BA4u)) return;
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
label_80D31BA8:
    ctx->pc = 0x80D31BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BA8u)) return;
    // 80D31BA8: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31BAC:
    ctx->pc = 0x80D31BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BACu)) return;
    // 80D31BAC: addi    r5, r5, 21116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21116);

label_80D31BB0:
    ctx->pc = 0x80D31BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31BB0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31BB0u)) return;
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
label_80D31BB4:
    ctx->pc = 0x80D31BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BB4u)) return;
    // 80D31BB4: bl      0x8045C750
    {
            ctx->lr = 0x80D31BB8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31BB8:
    ctx->pc = 0x80D31BB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31BB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D31BB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31BBC:
    ctx->pc = 0x80D31BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BBCu)) return;
    // 80D31BBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31BC0:
    ctx->pc = 0x80D31BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BC0u)) return;
    // 80D31BC0: li      r5, 5079
    ctx->gpr[5] = (u32)(s32)(5079);

label_80D31BC4:
    ctx->pc = 0x80D31BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BC4u)) return;
    // 80D31BC4: li      r6, 662
    ctx->gpr[6] = (u32)(s32)(662);

label_80D31BC8:
    ctx->pc = 0x80D31BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BC8u)) return;
    // 80D31BC8: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_80D31BCC:
    ctx->pc = 0x80D31BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BCCu)) return;
    // 80D31BCC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31BD0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31BD0:
    ctx->pc = 0x80D31BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D31BD0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31BD4:
    ctx->pc = 0x80D31BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BD4u)) return;
    // 80D31BD4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D31BD8:
    ctx->pc = 0x80D31BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31BD8: lwz     r0, 0(r3)
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
label_80D31BDC:
    ctx->pc = 0x80D31BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BDCu)) return;
    // 80D31BDC: cmpwi   r0, 0
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

label_80D31BE0:
    ctx->pc = 0x80D31BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BE0u)) return;
    // 80D31BE0: bc    4, 2, 0x80D31BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31BF8;
        }
    }

label_80D31BE4:
    ctx->pc = 0x80D31BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31BE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31BE8:
    ctx->pc = 0x80D31BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BE8u)) return;
    // 80D31BE8: bl      0x8045F220
    {
            ctx->lr = 0x80D31BECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31BEC:
    ctx->pc = 0x80D31BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31BEC: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31BF0:
    ctx->pc = 0x80D31BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BF0u)) return;
    // 80D31BF0: addi    r4, r4, 23288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23288);

label_80D31BF4:
    ctx->pc = 0x80D31BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BF4u)) return;
    // 80D31BF4: bl      0x8045C060
    {
            ctx->lr = 0x80D31BF8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31BF8:
    ctx->pc = 0x80D31BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D31BF8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31BFC:
    ctx->pc = 0x80D31BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31BFCu)) return;
    // 80D31BFC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D31C00:
    ctx->pc = 0x80D31C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31C00: lwz     r0, 0(r3)
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
label_80D31C04:
    ctx->pc = 0x80D31C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C04u)) return;
    // 80D31C04: cmpwi   r0, 1
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

label_80D31C08:
    ctx->pc = 0x80D31C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C08u)) return;
    // 80D31C08: bc    4, 2, 0x80D31C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D31C20;
        }
    }

label_80D31C0C:
    ctx->pc = 0x80D31C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31C0C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31C10:
    ctx->pc = 0x80D31C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C10u)) return;
    // 80D31C10: bl      0x8045F220
    {
            ctx->lr = 0x80D31C14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31C14:
    ctx->pc = 0x80D31C14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31C14: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31C18:
    ctx->pc = 0x80D31C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C18u)) return;
    // 80D31C18: addi    r4, r4, 23296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23296);

label_80D31C1C:
    ctx->pc = 0x80D31C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C1Cu)) return;
    // 80D31C1C: bl      0x8045C060
    {
            ctx->lr = 0x80D31C20u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31C20:
    ctx->pc = 0x80D31C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31C20: li      r3, 1519
    ctx->gpr[3] = (u32)(s32)(1519);

label_80D31C24:
    ctx->pc = 0x80D31C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C24u)) return;
    // 80D31C24: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31C28u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31C28:
    ctx->pc = 0x80D31C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D31C28: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D31C2C:
    ctx->pc = 0x80D31C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C2Cu)) return;
    // 80D31C2C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D31C30:
    ctx->pc = 0x80D31C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31C30: lwz     r0, 0(r3)
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
label_80D31C34:
    ctx->pc = 0x80D31C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C34u)) return;
    // 80D31C34: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31C38:
    ctx->pc = 0x80D31C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C38u)) return;
    // 80D31C38: lis     r3, -27330
    ctx->gpr[3] = ((u32)(s32)(-27330) << 16);

label_80D31C3C:
    ctx->pc = 0x80D31C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C3Cu)) return;
    // 80D31C3C: addi    r3, r3, 23260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23260);

label_80D31C40:
    ctx->pc = 0x80D31C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31C40: lwzx    r3, r3, r0
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
label_80D31C44:
    ctx->pc = 0x80D31C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31C44: lwz     r3, 0(r3)
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
label_80D31C48:
    ctx->pc = 0x80D31C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C48u)) return;
    // 80D31C48: bl      0x8045F6FC
    {
            ctx->lr = 0x80D31C4Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D31C4C:
    ctx->pc = 0x80D31C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31C4C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31C50:
    ctx->pc = 0x80D31C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C50u)) return;
    // 80D31C50: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31C54u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31C54:
    ctx->pc = 0x80D31C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31C54: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31C58:
    ctx->pc = 0x80D31C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C58u)) return;
    // 80D31C58: bl      0x8045F220
    {
            ctx->lr = 0x80D31C5Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31C5C:
    ctx->pc = 0x80D31C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31C5C: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31C60:
    ctx->pc = 0x80D31C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C60u)) return;
    // 80D31C60: addi    r4, r4, 21084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21084);

label_80D31C64:
    ctx->pc = 0x80D31C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31C64: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31C64u)) return;
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
label_80D31C68:
    ctx->pc = 0x80D31C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C68u)) return;
    // 80D31C68: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31C6C:
    ctx->pc = 0x80D31C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C6Cu)) return;
    // 80D31C6C: addi    r4, r4, 21088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21088);

label_80D31C70:
    ctx->pc = 0x80D31C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31C70: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31C70u)) return;
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
label_80D31C74:
    ctx->pc = 0x80D31C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C74u)) return;
    // 80D31C74: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31C78:
    ctx->pc = 0x80D31C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C78u)) return;
    // 80D31C78: addi    r4, r4, 21092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21092);

label_80D31C7C:
    ctx->pc = 0x80D31C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31C7C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31C7Cu)) return;
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
label_80D31C80:
    ctx->pc = 0x80D31C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C80u)) return;
    // 80D31C80: bl      0x8045E70C
    {
            ctx->lr = 0x80D31C84u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D31C84:
    ctx->pc = 0x80D31C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31C84: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31C88:
    ctx->pc = 0x80D31C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C88u)) return;
    // 80D31C88: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D31C8C:
    ctx->pc = 0x80D31C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C8Cu)) return;
    // 80D31C8C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31C90:
    ctx->pc = 0x80D31C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C90u)) return;
    // 80D31C90: addi    r5, r5, 21120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21120);

label_80D31C94:
    ctx->pc = 0x80D31C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31C94: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31C94u)) return;
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
label_80D31C98:
    ctx->pc = 0x80D31C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C98u)) return;
    // 80D31C98: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31C9C:
    ctx->pc = 0x80D31C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31C9Cu)) return;
    // 80D31C9C: addi    r5, r5, 21124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21124);

label_80D31CA0:
    ctx->pc = 0x80D31CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31CA0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31CA0u)) return;
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
label_80D31CA4:
    ctx->pc = 0x80D31CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CA4u)) return;
    // 80D31CA4: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31CA8:
    ctx->pc = 0x80D31CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CA8u)) return;
    // 80D31CA8: addi    r5, r5, 21128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21128);

label_80D31CAC:
    ctx->pc = 0x80D31CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31CAC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31CACu)) return;
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
label_80D31CB0:
    ctx->pc = 0x80D31CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CB0u)) return;
    // 80D31CB0: bl      0x8045C750
    {
            ctx->lr = 0x80D31CB4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31CB4:
    ctx->pc = 0x80D31CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D31CB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31CB8:
    ctx->pc = 0x80D31CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CB8u)) return;
    // 80D31CB8: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80D31CBC:
    ctx->pc = 0x80D31CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CBCu)) return;
    // 80D31CBC: li      r5, 3799
    ctx->gpr[5] = (u32)(s32)(3799);

label_80D31CC0:
    ctx->pc = 0x80D31CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CC0u)) return;
    // 80D31CC0: li      r6, 662
    ctx->gpr[6] = (u32)(s32)(662);

label_80D31CC4:
    ctx->pc = 0x80D31CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CC4u)) return;
    // 80D31CC4: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_80D31CC8:
    ctx->pc = 0x80D31CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CC8u)) return;
    // 80D31CC8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31CCCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31CCC:
    ctx->pc = 0x80D31CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31CCC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31CD0:
    ctx->pc = 0x80D31CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CD0u)) return;
    // 80D31CD0: bl      0x8045F220
    {
            ctx->lr = 0x80D31CD4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31CD4:
    ctx->pc = 0x80D31CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31CD4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D31CD8:
    ctx->pc = 0x80D31CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CD8u)) return;
    // 80D31CD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31CDC:
    ctx->pc = 0x80D31CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CDCu)) return;
    // 80D31CDC: bl      0x8045F220
    {
            ctx->lr = 0x80D31CE0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31CE0:
    ctx->pc = 0x80D31CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D31CE0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D31CE4:
    ctx->pc = 0x80D31CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CE4u)) return;
    // 80D31CE4: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31CE8:
    ctx->pc = 0x80D31CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CE8u)) return;
    // 80D31CE8: addi    r5, r5, 21132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21132);

label_80D31CEC:
    ctx->pc = 0x80D31CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D31CEC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31CECu)) return;
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
label_80D31CF0:
    ctx->pc = 0x80D31CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CF0u)) return;
    // 80D31CF0: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31CF4:
    ctx->pc = 0x80D31CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CF4u)) return;
    // 80D31CF4: addi    r5, r5, 21136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21136);

label_80D31CF8:
    ctx->pc = 0x80D31CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31CF8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31CF8u)) return;
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
label_80D31CFC:
    ctx->pc = 0x80D31CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31CFCu)) return;
    // 80D31CFC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D31CFCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D31D00:
    ctx->pc = 0x80D31D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D00u)) return;
    // 80D31D00: bl      0x8045E734
    {
            ctx->lr = 0x80D31D04u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D31D04:
    ctx->pc = 0x80D31D04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31D04: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31D08:
    ctx->pc = 0x80D31D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D08u)) return;
    // 80D31D08: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31D0Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31D0C:
    ctx->pc = 0x80D31D0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31D0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31D10:
    ctx->pc = 0x80D31D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D10u)) return;
    // 80D31D10: bl      0x8045F220
    {
            ctx->lr = 0x80D31D14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31D14:
    ctx->pc = 0x80D31D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31D14: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31D18:
    ctx->pc = 0x80D31D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D18u)) return;
    // 80D31D18: addi    r4, r4, 23304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23304);

label_80D31D1C:
    ctx->pc = 0x80D31D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D1Cu)) return;
    // 80D31D1C: bl      0x8045C060
    {
            ctx->lr = 0x80D31D20u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31D20:
    ctx->pc = 0x80D31D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31D20: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31D24:
    ctx->pc = 0x80D31D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D24u)) return;
    // 80D31D24: bl      0x8045F7C8
    {
            ctx->lr = 0x80D31D28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D31D28:
    ctx->pc = 0x80D31D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31D28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31D2C:
    ctx->pc = 0x80D31D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D2Cu)) return;
    // 80D31D2C: bl      0x8045F220
    {
            ctx->lr = 0x80D31D30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31D30:
    ctx->pc = 0x80D31D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31D30: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31D34:
    ctx->pc = 0x80D31D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D34u)) return;
    // 80D31D34: addi    r4, r4, 21084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21084);

label_80D31D38:
    ctx->pc = 0x80D31D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31D38: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31D38u)) return;
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
label_80D31D3C:
    ctx->pc = 0x80D31D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D3Cu)) return;
    // 80D31D3C: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31D40:
    ctx->pc = 0x80D31D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D40u)) return;
    // 80D31D40: addi    r4, r4, 21100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21100);

label_80D31D44:
    ctx->pc = 0x80D31D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31D44: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31D44u)) return;
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
label_80D31D48:
    ctx->pc = 0x80D31D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D48u)) return;
    // 80D31D48: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31D4C:
    ctx->pc = 0x80D31D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D4Cu)) return;
    // 80D31D4C: addi    r4, r4, 21104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21104);

label_80D31D50:
    ctx->pc = 0x80D31D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31D50: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D31D50u)) return;
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
label_80D31D54:
    ctx->pc = 0x80D31D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D54u)) return;
    // 80D31D54: bl      0x8045E70C
    {
            ctx->lr = 0x80D31D58u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D31D58:
    ctx->pc = 0x80D31D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31D58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31D5C:
    ctx->pc = 0x80D31D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D5Cu)) return;
    // 80D31D5C: bl      0x8045F220
    {
            ctx->lr = 0x80D31D60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31D60:
    ctx->pc = 0x80D31D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31D60: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31D64:
    ctx->pc = 0x80D31D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D64u)) return;
    // 80D31D64: addi    r4, r4, 23308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23308);

label_80D31D68:
    ctx->pc = 0x80D31D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D68u)) return;
    // 80D31D68: bl      0x8045C060
    {
            ctx->lr = 0x80D31D6Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31D6C:
    ctx->pc = 0x80D31D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31D6C: li      r3, 1520
    ctx->gpr[3] = (u32)(s32)(1520);

label_80D31D70:
    ctx->pc = 0x80D31D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D70u)) return;
    // 80D31D70: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31D74u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31D74:
    ctx->pc = 0x80D31D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31D74: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31D78:
    ctx->pc = 0x80D31D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D78u)) return;
    // 80D31D78: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D31D7C:
    ctx->pc = 0x80D31D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D7Cu)) return;
    // 80D31D7C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D31D80:
    ctx->pc = 0x80D31D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31D80: lwz     r0, 0(r4)
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
label_80D31D84:
    ctx->pc = 0x80D31D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D84u)) return;
    // 80D31D84: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31D88:
    ctx->pc = 0x80D31D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D88u)) return;
    // 80D31D88: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31D8C:
    ctx->pc = 0x80D31D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D8Cu)) return;
    // 80D31D8C: addi    r4, r4, 23260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23260);

label_80D31D90:
    ctx->pc = 0x80D31D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31D90: lwzx    r4, r4, r0
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
label_80D31D94:
    ctx->pc = 0x80D31D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31D94: lwz     r4, 4(r4)
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
label_80D31D98:
    ctx->pc = 0x80D31D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31D98u)) return;
    // 80D31D98: bl      0x8045F608
    {
            ctx->lr = 0x80D31D9Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D31D9C:
    ctx->pc = 0x80D31D9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31D9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31D9C: bl      0x8045BFF4
    {
            ctx->lr = 0x80D31DA0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D31DA0:
    ctx->pc = 0x80D31DA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31DA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D31DA4:
    ctx->pc = 0x80D31DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DA4u)) return;
    // 80D31DA4: bl      0x8045F220
    {
            ctx->lr = 0x80D31DA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31DA8:
    ctx->pc = 0x80D31DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31DA8: bl      0x8045C034
    {
            ctx->lr = 0x80D31DACu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D31DAC:
    ctx->pc = 0x80D31DACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31DAC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31DB0:
    ctx->pc = 0x80D31DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DB0u)) return;
    // 80D31DB0: bl      0x8045F220
    {
            ctx->lr = 0x80D31DB4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31DB4:
    ctx->pc = 0x80D31DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D31DB4: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31DB8:
    ctx->pc = 0x80D31DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DB8u)) return;
    // 80D31DB8: addi    r4, r4, 23316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23316);

label_80D31DBC:
    ctx->pc = 0x80D31DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DBCu)) return;
    // 80D31DBC: bl      0x8045C060
    {
            ctx->lr = 0x80D31DC0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D31DC0:
    ctx->pc = 0x80D31DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31DC0: li      r3, 1521
    ctx->gpr[3] = (u32)(s32)(1521);

label_80D31DC4:
    ctx->pc = 0x80D31DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DC4u)) return;
    // 80D31DC4: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31DC8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31DC8:
    ctx->pc = 0x80D31DC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31DC8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31DCC:
    ctx->pc = 0x80D31DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DCCu)) return;
    // 80D31DCC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D31DD0:
    ctx->pc = 0x80D31DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DD0u)) return;
    // 80D31DD0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D31DD4:
    ctx->pc = 0x80D31DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31DD4: lwz     r0, 0(r4)
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
label_80D31DD8:
    ctx->pc = 0x80D31DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DD8u)) return;
    // 80D31DD8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31DDC:
    ctx->pc = 0x80D31DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DDCu)) return;
    // 80D31DDC: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31DE0:
    ctx->pc = 0x80D31DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DE0u)) return;
    // 80D31DE0: addi    r4, r4, 23260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23260);

label_80D31DE4:
    ctx->pc = 0x80D31DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31DE4: lwzx    r4, r4, r0
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
label_80D31DE8:
    ctx->pc = 0x80D31DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31DE8: lwz     r4, 8(r4)
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
label_80D31DEC:
    ctx->pc = 0x80D31DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DECu)) return;
    // 80D31DEC: bl      0x8045F608
    {
            ctx->lr = 0x80D31DF0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D31DF0:
    ctx->pc = 0x80D31DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31DF0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31DF4:
    ctx->pc = 0x80D31DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31DF4u)) return;
    // 80D31DF4: bl      0x8045F220
    {
            ctx->lr = 0x80D31DF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31DF8:
    ctx->pc = 0x80D31DF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31DF8: bl      0x8045C034
    {
            ctx->lr = 0x80D31DFCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D31DFC:
    ctx->pc = 0x80D31DFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31DFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31DFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31E00:
    ctx->pc = 0x80D31E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E00u)) return;
    // 80D31E00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31E04:
    ctx->pc = 0x80D31E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E04u)) return;
    // 80D31E04: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31E08:
    ctx->pc = 0x80D31E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E08u)) return;
    // 80D31E08: addi    r5, r5, 21140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21140);

label_80D31E0C:
    ctx->pc = 0x80D31E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31E0C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31E0Cu)) return;
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
label_80D31E10:
    ctx->pc = 0x80D31E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E10u)) return;
    // 80D31E10: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31E14:
    ctx->pc = 0x80D31E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E14u)) return;
    // 80D31E14: addi    r5, r5, 21144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21144);

label_80D31E18:
    ctx->pc = 0x80D31E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31E18: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31E18u)) return;
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
label_80D31E1C:
    ctx->pc = 0x80D31E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E1Cu)) return;
    // 80D31E1C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31E20:
    ctx->pc = 0x80D31E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E20u)) return;
    // 80D31E20: addi    r5, r5, 21148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21148);

label_80D31E24:
    ctx->pc = 0x80D31E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31E24: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31E24u)) return;
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
label_80D31E28:
    ctx->pc = 0x80D31E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E28u)) return;
    // 80D31E28: bl      0x8045C750
    {
            ctx->lr = 0x80D31E2Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31E2C:
    ctx->pc = 0x80D31E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D31E2C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31E30:
    ctx->pc = 0x80D31E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E30u)) return;
    // 80D31E30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31E34:
    ctx->pc = 0x80D31E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E34u)) return;
    // 80D31E34: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D31E38:
    ctx->pc = 0x80D31E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E38u)) return;
    // 80D31E38: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D31E3C:
    ctx->pc = 0x80D31E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E3Cu)) return;
    // 80D31E3C: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D31E40:
    ctx->pc = 0x80D31E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E40u)) return;
    // 80D31E40: li      r7, 3328
    ctx->gpr[7] = (u32)(s32)(3328);

label_80D31E44:
    ctx->pc = 0x80D31E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E44u)) return;
    // 80D31E44: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31E48u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31E48:
    ctx->pc = 0x80D31E48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31E48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31E48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31E4C:
    ctx->pc = 0x80D31E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E4Cu)) return;
    // 80D31E4C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D31E50:
    ctx->pc = 0x80D31E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E50u)) return;
    // 80D31E50: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31E54:
    ctx->pc = 0x80D31E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E54u)) return;
    // 80D31E54: addi    r5, r5, 21152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21152);

label_80D31E58:
    ctx->pc = 0x80D31E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31E58: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31E58u)) return;
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
label_80D31E5C:
    ctx->pc = 0x80D31E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E5Cu)) return;
    // 80D31E5C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31E60:
    ctx->pc = 0x80D31E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E60u)) return;
    // 80D31E60: addi    r5, r5, 21156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21156);

label_80D31E64:
    ctx->pc = 0x80D31E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31E64: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31E64u)) return;
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
label_80D31E68:
    ctx->pc = 0x80D31E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E68u)) return;
    // 80D31E68: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31E6C:
    ctx->pc = 0x80D31E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E6Cu)) return;
    // 80D31E6C: addi    r5, r5, 21160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21160);

label_80D31E70:
    ctx->pc = 0x80D31E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31E70: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31E70u)) return;
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
label_80D31E74:
    ctx->pc = 0x80D31E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E74u)) return;
    // 80D31E74: bl      0x8045C750
    {
            ctx->lr = 0x80D31E78u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31E78:
    ctx->pc = 0x80D31E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D31E78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31E7C:
    ctx->pc = 0x80D31E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E7Cu)) return;
    // 80D31E7C: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D31E80:
    ctx->pc = 0x80D31E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E80u)) return;
    // 80D31E80: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D31E84:
    ctx->pc = 0x80D31E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E84u)) return;
    // 80D31E84: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D31E88:
    ctx->pc = 0x80D31E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E88u)) return;
    // 80D31E88: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D31E8C:
    ctx->pc = 0x80D31E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E8Cu)) return;
    // 80D31E8C: li      r7, 3328
    ctx->gpr[7] = (u32)(s32)(3328);

label_80D31E90:
    ctx->pc = 0x80D31E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E90u)) return;
    // 80D31E90: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31E94u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31E94:
    ctx->pc = 0x80D31E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31E94: li      r3, 1522
    ctx->gpr[3] = (u32)(s32)(1522);

label_80D31E98:
    ctx->pc = 0x80D31E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31E98u)) return;
    // 80D31E98: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31E9Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31E9C:
    ctx->pc = 0x80D31E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31E9C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31EA0:
    ctx->pc = 0x80D31EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EA0u)) return;
    // 80D31EA0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D31EA4:
    ctx->pc = 0x80D31EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EA4u)) return;
    // 80D31EA4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D31EA8:
    ctx->pc = 0x80D31EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31EA8: lwz     r0, 0(r4)
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
label_80D31EAC:
    ctx->pc = 0x80D31EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EACu)) return;
    // 80D31EAC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31EB0:
    ctx->pc = 0x80D31EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EB0u)) return;
    // 80D31EB0: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31EB4:
    ctx->pc = 0x80D31EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EB4u)) return;
    // 80D31EB4: addi    r4, r4, 23260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23260);

label_80D31EB8:
    ctx->pc = 0x80D31EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31EB8: lwzx    r4, r4, r0
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
label_80D31EBC:
    ctx->pc = 0x80D31EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31EBC: lwz     r4, 12(r4)
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
label_80D31EC0:
    ctx->pc = 0x80D31EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EC0u)) return;
    // 80D31EC0: bl      0x8045F608
    {
            ctx->lr = 0x80D31EC4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D31EC4:
    ctx->pc = 0x80D31EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31EC4: li      r3, 1523
    ctx->gpr[3] = (u32)(s32)(1523);

label_80D31EC8:
    ctx->pc = 0x80D31EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EC8u)) return;
    // 80D31EC8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31ECCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31ECC:
    ctx->pc = 0x80D31ECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31ECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31ECC: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80D31ED0:
    ctx->pc = 0x80D31ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31ED0u)) return;
    // 80D31ED0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D31ED4:
    ctx->pc = 0x80D31ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31ED4u)) return;
    // 80D31ED4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D31ED8:
    ctx->pc = 0x80D31ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31ED8: lwz     r0, 0(r4)
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
label_80D31EDC:
    ctx->pc = 0x80D31EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EDCu)) return;
    // 80D31EDC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31EE0:
    ctx->pc = 0x80D31EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EE0u)) return;
    // 80D31EE0: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31EE4:
    ctx->pc = 0x80D31EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EE4u)) return;
    // 80D31EE4: addi    r4, r4, 23260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23260);

label_80D31EE8:
    ctx->pc = 0x80D31EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31EE8: lwzx    r4, r4, r0
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
label_80D31EEC:
    ctx->pc = 0x80D31EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31EEC: lwz     r4, 16(r4)
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
label_80D31EF0:
    ctx->pc = 0x80D31EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EF0u)) return;
    // 80D31EF0: bl      0x8045F608
    {
            ctx->lr = 0x80D31EF4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D31EF4:
    ctx->pc = 0x80D31EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31EF4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31EF8:
    ctx->pc = 0x80D31EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EF8u)) return;
    // 80D31EF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31EFC:
    ctx->pc = 0x80D31EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31EFCu)) return;
    // 80D31EFC: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31F00:
    ctx->pc = 0x80D31F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F00u)) return;
    // 80D31F00: addi    r5, r5, 21152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21152);

label_80D31F04:
    ctx->pc = 0x80D31F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31F04: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31F04u)) return;
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
label_80D31F08:
    ctx->pc = 0x80D31F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F08u)) return;
    // 80D31F08: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31F0C:
    ctx->pc = 0x80D31F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F0Cu)) return;
    // 80D31F0C: addi    r5, r5, 21156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21156);

label_80D31F10:
    ctx->pc = 0x80D31F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31F10: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31F10u)) return;
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
label_80D31F14:
    ctx->pc = 0x80D31F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F14u)) return;
    // 80D31F14: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31F18:
    ctx->pc = 0x80D31F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F18u)) return;
    // 80D31F18: addi    r5, r5, 21160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21160);

label_80D31F1C:
    ctx->pc = 0x80D31F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31F1C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31F1Cu)) return;
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
label_80D31F20:
    ctx->pc = 0x80D31F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F20u)) return;
    // 80D31F20: bl      0x8045C750
    {
            ctx->lr = 0x80D31F24u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31F24:
    ctx->pc = 0x80D31F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D31F24: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31F28:
    ctx->pc = 0x80D31F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F28u)) return;
    // 80D31F28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D31F2C:
    ctx->pc = 0x80D31F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F2Cu)) return;
    // 80D31F2C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D31F30:
    ctx->pc = 0x80D31F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F30u)) return;
    // 80D31F30: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D31F34:
    ctx->pc = 0x80D31F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F34u)) return;
    // 80D31F34: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D31F38:
    ctx->pc = 0x80D31F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F38u)) return;
    // 80D31F38: li      r7, 3328
    ctx->gpr[7] = (u32)(s32)(3328);

label_80D31F3C:
    ctx->pc = 0x80D31F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F3Cu)) return;
    // 80D31F3C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31F40u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31F40:
    ctx->pc = 0x80D31F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31F40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31F44:
    ctx->pc = 0x80D31F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F44u)) return;
    // 80D31F44: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80D31F48:
    ctx->pc = 0x80D31F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F48u)) return;
    // 80D31F48: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31F4C:
    ctx->pc = 0x80D31F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F4Cu)) return;
    // 80D31F4C: addi    r5, r5, 21164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21164);

label_80D31F50:
    ctx->pc = 0x80D31F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D31F50: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31F50u)) return;
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
label_80D31F54:
    ctx->pc = 0x80D31F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F54u)) return;
    // 80D31F54: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31F58:
    ctx->pc = 0x80D31F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F58u)) return;
    // 80D31F58: addi    r5, r5, 21168
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21168);

label_80D31F5C:
    ctx->pc = 0x80D31F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D31F5C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31F5Cu)) return;
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
label_80D31F60:
    ctx->pc = 0x80D31F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F60u)) return;
    // 80D31F60: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D31F64:
    ctx->pc = 0x80D31F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F64u)) return;
    // 80D31F64: addi    r5, r5, 21172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21172);

label_80D31F68:
    ctx->pc = 0x80D31F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31F68: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D31F68u)) return;
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
label_80D31F6C:
    ctx->pc = 0x80D31F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F6Cu)) return;
    // 80D31F6C: bl      0x8045C750
    {
            ctx->lr = 0x80D31F70u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D31F70:
    ctx->pc = 0x80D31F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D31F70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31F74:
    ctx->pc = 0x80D31F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F74u)) return;
    // 80D31F74: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80D31F78:
    ctx->pc = 0x80D31F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F78u)) return;
    // 80D31F78: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D31F7C:
    ctx->pc = 0x80D31F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F7Cu)) return;
    // 80D31F7C: addi    r5, r6, -180
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-180);

label_80D31F80:
    ctx->pc = 0x80D31F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F80u)) return;
    // 80D31F80: addi    r6, r6, -30484
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30484);

label_80D31F84:
    ctx->pc = 0x80D31F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F84u)) return;
    // 80D31F84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D31F88:
    ctx->pc = 0x80D31F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F88u)) return;
    // 80D31F88: bl      0x8045C7B4
    {
            ctx->lr = 0x80D31F8Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D31F8C:
    ctx->pc = 0x80D31F8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31F8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31F8C: li      r3, 1524
    ctx->gpr[3] = (u32)(s32)(1524);

label_80D31F90:
    ctx->pc = 0x80D31F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F90u)) return;
    // 80D31F90: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31F94u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31F94:
    ctx->pc = 0x80D31F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31F94: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31F98:
    ctx->pc = 0x80D31F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F98u)) return;
    // 80D31F98: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D31F9C:
    ctx->pc = 0x80D31F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31F9Cu)) return;
    // 80D31F9C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D31FA0:
    ctx->pc = 0x80D31FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31FA0: lwz     r0, 0(r4)
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
label_80D31FA4:
    ctx->pc = 0x80D31FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FA4u)) return;
    // 80D31FA4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31FA8:
    ctx->pc = 0x80D31FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FA8u)) return;
    // 80D31FA8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31FAC:
    ctx->pc = 0x80D31FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FACu)) return;
    // 80D31FAC: addi    r4, r4, 23260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23260);

label_80D31FB0:
    ctx->pc = 0x80D31FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31FB0: lwzx    r4, r4, r0
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
label_80D31FB4:
    ctx->pc = 0x80D31FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31FB4: lwz     r4, 20(r4)
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
label_80D31FB8:
    ctx->pc = 0x80D31FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FB8u)) return;
    // 80D31FB8: bl      0x8045F608
    {
            ctx->lr = 0x80D31FBCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D31FBC:
    ctx->pc = 0x80D31FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31FBC: li      r3, 1525
    ctx->gpr[3] = (u32)(s32)(1525);

label_80D31FC0:
    ctx->pc = 0x80D31FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FC0u)) return;
    // 80D31FC0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D31FC4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D31FC4:
    ctx->pc = 0x80D31FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D31FC4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D31FC8:
    ctx->pc = 0x80D31FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FC8u)) return;
    // 80D31FC8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D31FCC:
    ctx->pc = 0x80D31FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FCCu)) return;
    // 80D31FCC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D31FD0:
    ctx->pc = 0x80D31FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D31FD0: lwz     r0, 0(r4)
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
label_80D31FD4:
    ctx->pc = 0x80D31FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FD4u)) return;
    // 80D31FD4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D31FD8:
    ctx->pc = 0x80D31FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FD8u)) return;
    // 80D31FD8: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D31FDC:
    ctx->pc = 0x80D31FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FDCu)) return;
    // 80D31FDC: addi    r4, r4, 23260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23260);

label_80D31FE0:
    ctx->pc = 0x80D31FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D31FE0: lwzx    r4, r4, r0
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
label_80D31FE4:
    ctx->pc = 0x80D31FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D31FE4: lwz     r4, 24(r4)
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
label_80D31FE8:
    ctx->pc = 0x80D31FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FE8u)) return;
    // 80D31FE8: bl      0x8045F608
    {
            ctx->lr = 0x80D31FECu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D31FEC:
    ctx->pc = 0x80D31FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D31FEC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D31FF0:
    ctx->pc = 0x80D31FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FF0u)) return;
    // 80D31FF0: bl      0x8045F220
    {
            ctx->lr = 0x80D31FF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D31FF4:
    ctx->pc = 0x80D31FF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31FF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D31FF4: bl      0x8045E760
    {
            ctx->lr = 0x80D31FF8u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D31FF8:
    ctx->pc = 0x80D31FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D31FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D31FF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D31FFC:
    ctx->pc = 0x80D31FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D31FFCu)) return;
    // 80D31FFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D32000:
    ctx->pc = 0x80D32000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32000u)) return;
    // 80D32000: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D32004:
    ctx->pc = 0x80D32004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32004u)) return;
    // 80D32004: addi    r5, r5, 21120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21120);

label_80D32008:
    ctx->pc = 0x80D32008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32008: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32008u)) return;
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
label_80D3200C:
    ctx->pc = 0x80D3200Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3200Cu)) return;
    // 80D3200C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D32010:
    ctx->pc = 0x80D32010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32010u)) return;
    // 80D32010: addi    r5, r5, 21124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21124);

label_80D32014:
    ctx->pc = 0x80D32014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32014: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32014u)) return;
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
label_80D32018:
    ctx->pc = 0x80D32018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32018u)) return;
    // 80D32018: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3201C:
    ctx->pc = 0x80D3201Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3201Cu)) return;
    // 80D3201C: addi    r5, r5, 21128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21128);

label_80D32020:
    ctx->pc = 0x80D32020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32020: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32020u)) return;
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
label_80D32024:
    ctx->pc = 0x80D32024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32024u)) return;
    // 80D32024: bl      0x8045C750
    {
            ctx->lr = 0x80D32028u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32028:
    ctx->pc = 0x80D32028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D32028: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3202C:
    ctx->pc = 0x80D3202Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3202Cu)) return;
    // 80D3202C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D32030:
    ctx->pc = 0x80D32030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32030u)) return;
    // 80D32030: li      r5, 3799
    ctx->gpr[5] = (u32)(s32)(3799);

label_80D32034:
    ctx->pc = 0x80D32034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32034u)) return;
    // 80D32034: li      r6, 662
    ctx->gpr[6] = (u32)(s32)(662);

label_80D32038:
    ctx->pc = 0x80D32038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32038u)) return;
    // 80D32038: li      r7, 47
    ctx->gpr[7] = (u32)(s32)(47);

label_80D3203C:
    ctx->pc = 0x80D3203Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3203Cu)) return;
    // 80D3203C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D32040u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D32040:
    ctx->pc = 0x80D32040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32040: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D32044:
    ctx->pc = 0x80D32044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32044u)) return;
    // 80D32044: bl      0x8045F220
    {
            ctx->lr = 0x80D32048u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32048:
    ctx->pc = 0x80D32048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D32048: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D3204C:
    ctx->pc = 0x80D3204Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3204Cu)) return;
    // 80D3204C: addi    r4, r4, -17540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17540);

label_80D32050:
    ctx->pc = 0x80D32050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32050u)) return;
    // 80D32050: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D32054:
    ctx->pc = 0x80D32054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32054u)) return;
    // 80D32054: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D32058:
    ctx->pc = 0x80D32058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32058u)) return;
    // 80D32058: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D3205C:
    ctx->pc = 0x80D3205Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3205Cu)) return;
    // 80D3205C: addi    r6, r6, 21096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(21096);

label_80D32060:
    ctx->pc = 0x80D32060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32060: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32060u)) return;
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
label_80D32064:
    ctx->pc = 0x80D32064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32064u)) return;
    // 80D32064: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D32068:
    ctx->pc = 0x80D32068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32068u)) return;
    // 80D32068: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D3206C:
    ctx->pc = 0x80D3206Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3206Cu)) return;
    // 80D3206C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D32070u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D32070:
    ctx->pc = 0x80D32070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32070: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D32074:
    ctx->pc = 0x80D32074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32074u)) return;
    // 80D32074: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32078u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32078:
    ctx->pc = 0x80D32078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32078: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3207C:
    ctx->pc = 0x80D3207Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3207Cu)) return;
    // 80D3207C: bl      0x8045F220
    {
            ctx->lr = 0x80D32080u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32080:
    ctx->pc = 0x80D32080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D32080: lis     r4, -28601
    ctx->gpr[4] = ((u32)(s32)(-28601) << 16);

label_80D32084:
    ctx->pc = 0x80D32084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32084u)) return;
    // 80D32084: addi    r4, r4, -1396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1396);

label_80D32088:
    ctx->pc = 0x80D32088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32088u)) return;
    // 80D32088: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D3208C:
    ctx->pc = 0x80D3208Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3208Cu)) return;
    // 80D3208C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D32090:
    ctx->pc = 0x80D32090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32090u)) return;
    // 80D32090: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D32094:
    ctx->pc = 0x80D32094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32094u)) return;
    // 80D32094: addi    r6, r6, 21096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(21096);

label_80D32098:
    ctx->pc = 0x80D32098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32098: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32098u)) return;
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
label_80D3209C:
    ctx->pc = 0x80D3209Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3209Cu)) return;
    // 80D3209C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D320A0:
    ctx->pc = 0x80D320A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320A0u)) return;
    // 80D320A0: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80D320A4:
    ctx->pc = 0x80D320A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320A4u)) return;
    // 80D320A4: bl      0x8045EBE4
    {
            ctx->lr = 0x80D320A8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D320A8:
    ctx->pc = 0x80D320A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D320A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D320AC:
    ctx->pc = 0x80D320ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320ACu)) return;
    // 80D320AC: bl      0x8045F220
    {
            ctx->lr = 0x80D320B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D320B0:
    ctx->pc = 0x80D320B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D320B0: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D320B4:
    ctx->pc = 0x80D320B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320B4u)) return;
    // 80D320B4: addi    r4, r4, 23324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23324);

label_80D320B8:
    ctx->pc = 0x80D320B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320B8u)) return;
    // 80D320B8: bl      0x8045C060
    {
            ctx->lr = 0x80D320BCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D320BC:
    ctx->pc = 0x80D320BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D320BC: li      r3, 1526
    ctx->gpr[3] = (u32)(s32)(1526);

label_80D320C0:
    ctx->pc = 0x80D320C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320C0u)) return;
    // 80D320C0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D320C4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D320C4:
    ctx->pc = 0x80D320C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D320C4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D320C8:
    ctx->pc = 0x80D320C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320C8u)) return;
    // 80D320C8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D320CC:
    ctx->pc = 0x80D320CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D320CC: lwz     r0, 0(r3)
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
label_80D320D0:
    ctx->pc = 0x80D320D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320D0u)) return;
    // 80D320D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D320D4:
    ctx->pc = 0x80D320D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320D4u)) return;
    // 80D320D4: lis     r3, -27330
    ctx->gpr[3] = ((u32)(s32)(-27330) << 16);

label_80D320D8:
    ctx->pc = 0x80D320D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320D8u)) return;
    // 80D320D8: addi    r3, r3, 23260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23260);

label_80D320DC:
    ctx->pc = 0x80D320DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D320DC: lwzx    r3, r3, r0
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
label_80D320E0:
    ctx->pc = 0x80D320E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D320E0: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D320E4:
    ctx->pc = 0x80D320E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320E4u)) return;
    // 80D320E4: bl      0x8045F6FC
    {
            ctx->lr = 0x80D320E8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D320E8:
    ctx->pc = 0x80D320E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D320E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D320EC:
    ctx->pc = 0x80D320ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320ECu)) return;
    // 80D320EC: bl      0x8045F220
    {
            ctx->lr = 0x80D320F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D320F0:
    ctx->pc = 0x80D320F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D320F0: bl      0x8045E760
    {
            ctx->lr = 0x80D320F4u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D320F4:
    ctx->pc = 0x80D320F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D320F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D320F8:
    ctx->pc = 0x80D320F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D320F8u)) return;
    // 80D320F8: bl      0x8045F220
    {
            ctx->lr = 0x80D320FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D320FC:
    ctx->pc = 0x80D320FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D320FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D320FC: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D32100:
    ctx->pc = 0x80D32100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32100u)) return;
    // 80D32100: addi    r4, r4, 29268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29268);

label_80D32104:
    ctx->pc = 0x80D32104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32104u)) return;
    // 80D32104: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D32108:
    ctx->pc = 0x80D32108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32108u)) return;
    // 80D32108: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D3210C:
    ctx->pc = 0x80D3210Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3210Cu)) return;
    // 80D3210C: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D32110:
    ctx->pc = 0x80D32110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32110u)) return;
    // 80D32110: addi    r6, r6, 21176
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(21176);

label_80D32114:
    ctx->pc = 0x80D32114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32114: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32114u)) return;
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
label_80D32118:
    ctx->pc = 0x80D32118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32118u)) return;
    // 80D32118: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D3211C:
    ctx->pc = 0x80D3211Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3211Cu)) return;
    // 80D3211C: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D32120:
    ctx->pc = 0x80D32120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32120u)) return;
    // 80D32120: bl      0x8045EBE4
    {
            ctx->lr = 0x80D32124u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D32124:
    ctx->pc = 0x80D32124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32124: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32128:
    ctx->pc = 0x80D32128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32128u)) return;
    // 80D32128: bl      0x8045F220
    {
            ctx->lr = 0x80D3212Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3212C:
    ctx->pc = 0x80D3212Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3212Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3212C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32130:
    ctx->pc = 0x80D32130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32130u)) return;
    // 80D32130: addi    r4, r4, -27928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27928);

label_80D32134:
    ctx->pc = 0x80D32134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32134u)) return;
    // 80D32134: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D32138:
    ctx->pc = 0x80D32138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32138u)) return;
    // 80D32138: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D3213C:
    ctx->pc = 0x80D3213Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3213Cu)) return;
    // 80D3213C: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D32140:
    ctx->pc = 0x80D32140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32140u)) return;
    // 80D32140: addi    r6, r6, 21096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(21096);

label_80D32144:
    ctx->pc = 0x80D32144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32144: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32144u)) return;
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
label_80D32148:
    ctx->pc = 0x80D32148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32148u)) return;
    // 80D32148: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D3214C:
    ctx->pc = 0x80D3214Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3214Cu)) return;
    // 80D3214C: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D32150:
    ctx->pc = 0x80D32150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32150u)) return;
    // 80D32150: bl      0x8045EBE4
    {
            ctx->lr = 0x80D32154u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D32154:
    ctx->pc = 0x80D32154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32154: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32158:
    ctx->pc = 0x80D32158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32158u)) return;
    // 80D32158: bl      0x8045F220
    {
            ctx->lr = 0x80D3215Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3215C:
    ctx->pc = 0x80D3215Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3215Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3215C: lis     r4, -28582
    ctx->gpr[4] = ((u32)(s32)(-28582) << 16);

label_80D32160:
    ctx->pc = 0x80D32160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32160u)) return;
    // 80D32160: addi    r4, r4, -1616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1616);

label_80D32164:
    ctx->pc = 0x80D32164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32164u)) return;
    // 80D32164: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D32168:
    ctx->pc = 0x80D32168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32168u)) return;
    // 80D32168: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D3216C:
    ctx->pc = 0x80D3216Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3216Cu)) return;
    // 80D3216C: lis     r6, -27330
    ctx->gpr[6] = ((u32)(s32)(-27330) << 16);

label_80D32170:
    ctx->pc = 0x80D32170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32170u)) return;
    // 80D32170: addi    r6, r6, 21096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(21096);

label_80D32174:
    ctx->pc = 0x80D32174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32174: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32174u)) return;
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
label_80D32178:
    ctx->pc = 0x80D32178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32178u)) return;
    // 80D32178: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D3217C:
    ctx->pc = 0x80D3217Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3217Cu)) return;
    // 80D3217C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D32180:
    ctx->pc = 0x80D32180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32180u)) return;
    // 80D32180: bl      0x8045EBE4
    {
            ctx->lr = 0x80D32184u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D32184:
    ctx->pc = 0x80D32184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32184: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D32188:
    ctx->pc = 0x80D32188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32188u)) return;
    // 80D32188: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3218Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3218C:
    ctx->pc = 0x80D3218Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3218Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3218C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32190:
    ctx->pc = 0x80D32190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32190u)) return;
    // 80D32190: bl      0x8045F220
    {
            ctx->lr = 0x80D32194u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32194:
    ctx->pc = 0x80D32194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D32194: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32198:
    ctx->pc = 0x80D32198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32198u)) return;
    // 80D32198: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3219C:
    ctx->pc = 0x80D3219Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3219Cu)) return;
    // 80D3219C: bl      0x8045F220
    {
            ctx->lr = 0x80D321A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D321A0:
    ctx->pc = 0x80D321A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D321A0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D321A4:
    ctx->pc = 0x80D321A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321A4u)) return;
    // 80D321A4: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D321A8:
    ctx->pc = 0x80D321A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321A8u)) return;
    // 80D321A8: addi    r5, r5, 21132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21132);

label_80D321AC:
    ctx->pc = 0x80D321ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D321AC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D321ACu)) return;
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
label_80D321B0:
    ctx->pc = 0x80D321B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321B0u)) return;
    // 80D321B0: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D321B4:
    ctx->pc = 0x80D321B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321B4u)) return;
    // 80D321B4: addi    r5, r5, 21136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21136);

label_80D321B8:
    ctx->pc = 0x80D321B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D321B8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D321B8u)) return;
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
label_80D321BC:
    ctx->pc = 0x80D321BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321BCu)) return;
    // 80D321BC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D321BCu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D321C0:
    ctx->pc = 0x80D321C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321C0u)) return;
    // 80D321C0: bl      0x8045E734
    {
            ctx->lr = 0x80D321C4u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D321C4:
    ctx->pc = 0x80D321C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D321C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D321C8:
    ctx->pc = 0x80D321C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321C8u)) return;
    // 80D321C8: bl      0x8045F220
    {
            ctx->lr = 0x80D321CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D321CC:
    ctx->pc = 0x80D321CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D321CC: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D321D0:
    ctx->pc = 0x80D321D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321D0u)) return;
    // 80D321D0: addi    r4, r4, 23332
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23332);

label_80D321D4:
    ctx->pc = 0x80D321D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321D4u)) return;
    // 80D321D4: bl      0x8045C060
    {
            ctx->lr = 0x80D321D8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D321D8:
    ctx->pc = 0x80D321D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D321D8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D321DC:
    ctx->pc = 0x80D321DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321DCu)) return;
    // 80D321DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D321E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D321E0:
    ctx->pc = 0x80D321E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D321E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D321E4:
    ctx->pc = 0x80D321E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321E4u)) return;
    // 80D321E4: bl      0x8045F220
    {
            ctx->lr = 0x80D321E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D321E8:
    ctx->pc = 0x80D321E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D321E8: bl      0x8045E760
    {
            ctx->lr = 0x80D321ECu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D321EC:
    ctx->pc = 0x80D321ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D321EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D321F0:
    ctx->pc = 0x80D321F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321F0u)) return;
    // 80D321F0: bl      0x8045F220
    {
            ctx->lr = 0x80D321F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D321F4:
    ctx->pc = 0x80D321F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D321F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D321F4: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D321F8:
    ctx->pc = 0x80D321F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321F8u)) return;
    // 80D321F8: addi    r4, r4, 23336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23336);

label_80D321FC:
    ctx->pc = 0x80D321FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D321FCu)) return;
    // 80D321FC: bl      0x8045C060
    {
            ctx->lr = 0x80D32200u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32200:
    ctx->pc = 0x80D32200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32200: bl      0x8045BFF4
    {
            ctx->lr = 0x80D32204u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D32204:
    ctx->pc = 0x80D32204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D32204: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32208:
    ctx->pc = 0x80D32208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32208u)) return;
    // 80D32208: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80D3220C:
    ctx->pc = 0x80D3220Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3220Cu)) return;
    // 80D3220C: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D32210:
    ctx->pc = 0x80D32210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32210u)) return;
    // 80D32210: addi    r5, r5, 21180
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21180);

label_80D32214:
    ctx->pc = 0x80D32214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32214: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32214u)) return;
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
label_80D32218:
    ctx->pc = 0x80D32218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32218u)) return;
    // 80D32218: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D3221C:
    ctx->pc = 0x80D3221Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3221Cu)) return;
    // 80D3221C: addi    r5, r5, 21184
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21184);

label_80D32220:
    ctx->pc = 0x80D32220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32220: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32220u)) return;
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
label_80D32224:
    ctx->pc = 0x80D32224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32224u)) return;
    // 80D32224: lis     r5, -27330
    ctx->gpr[5] = ((u32)(s32)(-27330) << 16);

label_80D32228:
    ctx->pc = 0x80D32228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32228u)) return;
    // 80D32228: addi    r5, r5, 21188
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21188);

label_80D3222C:
    ctx->pc = 0x80D3222Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3222Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3222C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3222Cu)) return;
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
label_80D32230:
    ctx->pc = 0x80D32230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32230u)) return;
    // 80D32230: bl      0x8045C750
    {
            ctx->lr = 0x80D32234u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32234:
    ctx->pc = 0x80D32234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D32234: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32238:
    ctx->pc = 0x80D32238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32238u)) return;
    // 80D32238: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80D3223C:
    ctx->pc = 0x80D3223Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3223Cu)) return;
    // 80D3223C: li      r5, 3543
    ctx->gpr[5] = (u32)(s32)(3543);

label_80D32240:
    ctx->pc = 0x80D32240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32240u)) return;
    // 80D32240: li      r6, 30102
    ctx->gpr[6] = (u32)(s32)(30102);

label_80D32244:
    ctx->pc = 0x80D32244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32244u)) return;
    // 80D32244: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D32248:
    ctx->pc = 0x80D32248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32248u)) return;
    // 80D32248: bl      0x8045C7B4
    {
            ctx->lr = 0x80D3224Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D3224C:
    ctx->pc = 0x80D3224Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3224Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3224C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32250:
    ctx->pc = 0x80D32250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32250u)) return;
    // 80D32250: bl      0x8045F220
    {
            ctx->lr = 0x80D32254u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32254:
    ctx->pc = 0x80D32254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32254: bl      0x8045C034
    {
            ctx->lr = 0x80D32258u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D32258:
    ctx->pc = 0x80D32258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32258: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3225C:
    ctx->pc = 0x80D3225Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3225Cu)) return;
    // 80D3225C: bl      0x8045F220
    {
            ctx->lr = 0x80D32260u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32260:
    ctx->pc = 0x80D32260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D32260: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D32264:
    ctx->pc = 0x80D32264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32264u)) return;
    // 80D32264: addi    r4, r4, 21084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21084);

label_80D32268:
    ctx->pc = 0x80D32268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32268: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32268u)) return;
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
label_80D3226C:
    ctx->pc = 0x80D3226Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3226Cu)) return;
    // 80D3226C: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D32270:
    ctx->pc = 0x80D32270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32270u)) return;
    // 80D32270: addi    r4, r4, 21100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21100);

label_80D32274:
    ctx->pc = 0x80D32274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32274: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32274u)) return;
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
label_80D32278:
    ctx->pc = 0x80D32278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32278u)) return;
    // 80D32278: lis     r4, -27330
    ctx->gpr[4] = ((u32)(s32)(-27330) << 16);

label_80D3227C:
    ctx->pc = 0x80D3227Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3227Cu)) return;
    // 80D3227C: addi    r4, r4, 21104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21104);

label_80D32280:
    ctx->pc = 0x80D32280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32280: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32280u)) return;
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
label_80D32284:
    ctx->pc = 0x80D32284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32284u)) return;
    // 80D32284: bl      0x8045E70C
    {
            ctx->lr = 0x80D32288u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D32288:
    ctx->pc = 0x80D32288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32288: bl      0x8045F32C
    {
            ctx->lr = 0x80D3228Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D3228C:
    ctx->pc = 0x80D3228Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3228Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3228C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D32290:
    ctx->pc = 0x80D32290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32290u)) return;
    // 80D32290: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32294u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32294:
    ctx->pc = 0x80D32294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32294: b       0x80D322B0
    {
            goto label_80D322B0;
    }

label_80D32298:
    ctx->pc = 0x80D32298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32298: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3229C:
    ctx->pc = 0x80D3229Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3229Cu)) return;
    // 80D3229C: bl      0x8045EC10
    {
            ctx->lr = 0x80D322A0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D322A0:
    ctx->pc = 0x80D322A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D322A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D322A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D322A4:
    ctx->pc = 0x80D322A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322A4u)) return;
    // 80D322A4: bl      0x8045ED54
    {
            ctx->lr = 0x80D322A8u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D322A8:
    ctx->pc = 0x80D322A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D322A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D322A8: bl      0x8045DE34
    {
            ctx->lr = 0x80D322ACu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D322AC:
    ctx->pc = 0x80D322ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D322ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D322AC: bl      0x80460A80
    {
            ctx->lr = 0x80D322B0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D322B0:
    ctx->pc = 0x80D322B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D322B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D322B0: lwz     r31, 12(r1)
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
label_80D322B4:
    ctx->pc = 0x80D322B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D322B4: lwz     r0, 20(r1)
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
label_80D322B8:
    ctx->pc = 0x80D322B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D322B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D322B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D322BC:
    ctx->pc = 0x80D322BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322BCu)) return;
    // 80D322BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D322C0:
    ctx->pc = 0x80D322C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D322C0u)) return;
    // 80D322C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D31A40;
        }
    }

    ctx->pc = 0x80D322C4u;
    return;
return_dispatch_80D31A40:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D31A78u: goto label_80D31A78;
    case 0x80D31A80u: goto label_80D31A80;
    case 0x80D31A88u: goto label_80D31A88;
    case 0x80D31A8Cu: goto label_80D31A8C;
    case 0x80D31A90u: goto label_80D31A90;
    case 0x80D31AD0u: goto label_80D31AD0;
    case 0x80D31AD8u: goto label_80D31AD8;
    case 0x80D31AE0u: goto label_80D31AE0;
    case 0x80D31B08u: goto label_80D31B08;
    case 0x80D31B10u: goto label_80D31B10;
    case 0x80D31B20u: goto label_80D31B20;
    case 0x80D31B28u: goto label_80D31B28;
    case 0x80D31B30u: goto label_80D31B30;
    case 0x80D31B58u: goto label_80D31B58;
    case 0x80D31B60u: goto label_80D31B60;
    case 0x80D31B88u: goto label_80D31B88;
    case 0x80D31BB8u: goto label_80D31BB8;
    case 0x80D31BD0u: goto label_80D31BD0;
    case 0x80D31BECu: goto label_80D31BEC;
    case 0x80D31BF8u: goto label_80D31BF8;
    case 0x80D31C14u: goto label_80D31C14;
    case 0x80D31C20u: goto label_80D31C20;
    case 0x80D31C28u: goto label_80D31C28;
    case 0x80D31C4Cu: goto label_80D31C4C;
    case 0x80D31C54u: goto label_80D31C54;
    case 0x80D31C5Cu: goto label_80D31C5C;
    case 0x80D31C84u: goto label_80D31C84;
    case 0x80D31CB4u: goto label_80D31CB4;
    case 0x80D31CCCu: goto label_80D31CCC;
    case 0x80D31CD4u: goto label_80D31CD4;
    case 0x80D31CE0u: goto label_80D31CE0;
    case 0x80D31D04u: goto label_80D31D04;
    case 0x80D31D0Cu: goto label_80D31D0C;
    case 0x80D31D14u: goto label_80D31D14;
    case 0x80D31D20u: goto label_80D31D20;
    case 0x80D31D28u: goto label_80D31D28;
    case 0x80D31D30u: goto label_80D31D30;
    case 0x80D31D58u: goto label_80D31D58;
    case 0x80D31D60u: goto label_80D31D60;
    case 0x80D31D6Cu: goto label_80D31D6C;
    case 0x80D31D74u: goto label_80D31D74;
    case 0x80D31D9Cu: goto label_80D31D9C;
    case 0x80D31DA0u: goto label_80D31DA0;
    case 0x80D31DA8u: goto label_80D31DA8;
    case 0x80D31DACu: goto label_80D31DAC;
    case 0x80D31DB4u: goto label_80D31DB4;
    case 0x80D31DC0u: goto label_80D31DC0;
    case 0x80D31DC8u: goto label_80D31DC8;
    case 0x80D31DF0u: goto label_80D31DF0;
    case 0x80D31DF8u: goto label_80D31DF8;
    case 0x80D31DFCu: goto label_80D31DFC;
    case 0x80D31E2Cu: goto label_80D31E2C;
    case 0x80D31E48u: goto label_80D31E48;
    case 0x80D31E78u: goto label_80D31E78;
    case 0x80D31E94u: goto label_80D31E94;
    case 0x80D31E9Cu: goto label_80D31E9C;
    case 0x80D31EC4u: goto label_80D31EC4;
    case 0x80D31ECCu: goto label_80D31ECC;
    case 0x80D31EF4u: goto label_80D31EF4;
    case 0x80D31F24u: goto label_80D31F24;
    case 0x80D31F40u: goto label_80D31F40;
    case 0x80D31F70u: goto label_80D31F70;
    case 0x80D31F8Cu: goto label_80D31F8C;
    case 0x80D31F94u: goto label_80D31F94;
    case 0x80D31FBCu: goto label_80D31FBC;
    case 0x80D31FC4u: goto label_80D31FC4;
    case 0x80D31FECu: goto label_80D31FEC;
    case 0x80D31FF4u: goto label_80D31FF4;
    case 0x80D31FF8u: goto label_80D31FF8;
    case 0x80D32028u: goto label_80D32028;
    case 0x80D32040u: goto label_80D32040;
    case 0x80D32048u: goto label_80D32048;
    case 0x80D32070u: goto label_80D32070;
    case 0x80D32078u: goto label_80D32078;
    case 0x80D32080u: goto label_80D32080;
    case 0x80D320A8u: goto label_80D320A8;
    case 0x80D320B0u: goto label_80D320B0;
    case 0x80D320BCu: goto label_80D320BC;
    case 0x80D320C4u: goto label_80D320C4;
    case 0x80D320E8u: goto label_80D320E8;
    case 0x80D320F0u: goto label_80D320F0;
    case 0x80D320F4u: goto label_80D320F4;
    case 0x80D320FCu: goto label_80D320FC;
    case 0x80D32124u: goto label_80D32124;
    case 0x80D3212Cu: goto label_80D3212C;
    case 0x80D32154u: goto label_80D32154;
    case 0x80D3215Cu: goto label_80D3215C;
    case 0x80D32184u: goto label_80D32184;
    case 0x80D3218Cu: goto label_80D3218C;
    case 0x80D32194u: goto label_80D32194;
    case 0x80D321A0u: goto label_80D321A0;
    case 0x80D321C4u: goto label_80D321C4;
    case 0x80D321CCu: goto label_80D321CC;
    case 0x80D321D8u: goto label_80D321D8;
    case 0x80D321E0u: goto label_80D321E0;
    case 0x80D321E8u: goto label_80D321E8;
    case 0x80D321ECu: goto label_80D321EC;
    case 0x80D321F4u: goto label_80D321F4;
    case 0x80D32200u: goto label_80D32200;
    case 0x80D32204u: goto label_80D32204;
    case 0x80D32234u: goto label_80D32234;
    case 0x80D3224Cu: goto label_80D3224C;
    case 0x80D32254u: goto label_80D32254;
    case 0x80D32258u: goto label_80D32258;
    case 0x80D32260u: goto label_80D32260;
    case 0x80D32288u: goto label_80D32288;
    case 0x80D3228Cu: goto label_80D3228C;
    case 0x80D32294u: goto label_80D32294;
    case 0x80D322A0u: goto label_80D322A0;
    case 0x80D322A8u: goto label_80D322A8;
    case 0x80D322ACu: goto label_80D322AC;
    case 0x80D322B0u: goto label_80D322B0;
    default: return;
    }
}

