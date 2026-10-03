// DolRecomp output
#include "../generated.h"

void func_80CC3EC0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CC3EC0[362] = {
        &&label_80CC3EC0,
        &&label_80CC3EC4,
        &&label_80CC3EC8,
        &&label_80CC3ECC,
        &&label_80CC3ED0,
        &&label_80CC3ED4,
        &&label_80CC3ED8,
        &&label_80CC3EDC,
        &&label_80CC3EE0,
        &&label_80CC3EE4,
        &&label_80CC3EE8,
        &&label_80CC3EEC,
        &&label_80CC3EF0,
        &&label_80CC3EF4,
        &&label_80CC3EF8,
        &&label_80CC3EFC,
        &&label_80CC3F00,
        &&label_80CC3F04,
        &&label_80CC3F08,
        &&label_80CC3F0C,
        &&label_80CC3F10,
        &&label_80CC3F14,
        &&label_80CC3F18,
        &&label_80CC3F1C,
        &&label_80CC3F20,
        &&label_80CC3F24,
        &&label_80CC3F28,
        &&label_80CC3F2C,
        &&label_80CC3F30,
        &&label_80CC3F34,
        &&label_80CC3F38,
        &&label_80CC3F3C,
        &&label_80CC3F40,
        &&label_80CC3F44,
        &&label_80CC3F48,
        &&label_80CC3F4C,
        &&label_80CC3F50,
        &&label_80CC3F54,
        &&label_80CC3F58,
        &&label_80CC3F5C,
        &&label_80CC3F60,
        &&label_80CC3F64,
        &&label_80CC3F68,
        &&label_80CC3F6C,
        &&label_80CC3F70,
        &&label_80CC3F74,
        &&label_80CC3F78,
        &&label_80CC3F7C,
        &&label_80CC3F80,
        &&label_80CC3F84,
        &&label_80CC3F88,
        &&label_80CC3F8C,
        &&label_80CC3F90,
        &&label_80CC3F94,
        &&label_80CC3F98,
        &&label_80CC3F9C,
        &&label_80CC3FA0,
        &&label_80CC3FA4,
        &&label_80CC3FA8,
        &&label_80CC3FAC,
        &&label_80CC3FB0,
        &&label_80CC3FB4,
        &&label_80CC3FB8,
        &&label_80CC3FBC,
        &&label_80CC3FC0,
        &&label_80CC3FC4,
        &&label_80CC3FC8,
        &&label_80CC3FCC,
        &&label_80CC3FD0,
        &&label_80CC3FD4,
        &&label_80CC3FD8,
        &&label_80CC3FDC,
        &&label_80CC3FE0,
        &&label_80CC3FE4,
        &&label_80CC3FE8,
        &&label_80CC3FEC,
        &&label_80CC3FF0,
        &&label_80CC3FF4,
        &&label_80CC3FF8,
        &&label_80CC3FFC,
        &&label_80CC4000,
        &&label_80CC4004,
        &&label_80CC4008,
        &&label_80CC400C,
        &&label_80CC4010,
        &&label_80CC4014,
        &&label_80CC4018,
        &&label_80CC401C,
        &&label_80CC4020,
        &&label_80CC4024,
        &&label_80CC4028,
        &&label_80CC402C,
        &&label_80CC4030,
        &&label_80CC4034,
        &&label_80CC4038,
        &&label_80CC403C,
        &&label_80CC4040,
        &&label_80CC4044,
        &&label_80CC4048,
        &&label_80CC404C,
        &&label_80CC4050,
        &&label_80CC4054,
        &&label_80CC4058,
        &&label_80CC405C,
        &&label_80CC4060,
        &&label_80CC4064,
        &&label_80CC4068,
        &&label_80CC406C,
        &&label_80CC4070,
        &&label_80CC4074,
        &&label_80CC4078,
        &&label_80CC407C,
        &&label_80CC4080,
        &&label_80CC4084,
        &&label_80CC4088,
        &&label_80CC408C,
        &&label_80CC4090,
        &&label_80CC4094,
        &&label_80CC4098,
        &&label_80CC409C,
        &&label_80CC40A0,
        &&label_80CC40A4,
        &&label_80CC40A8,
        &&label_80CC40AC,
        &&label_80CC40B0,
        &&label_80CC40B4,
        &&label_80CC40B8,
        &&label_80CC40BC,
        &&label_80CC40C0,
        &&label_80CC40C4,
        &&label_80CC40C8,
        &&label_80CC40CC,
        &&label_80CC40D0,
        &&label_80CC40D4,
        &&label_80CC40D8,
        &&label_80CC40DC,
        &&label_80CC40E0,
        &&label_80CC40E4,
        &&label_80CC40E8,
        &&label_80CC40EC,
        &&label_80CC40F0,
        &&label_80CC40F4,
        &&label_80CC40F8,
        &&label_80CC40FC,
        &&label_80CC4100,
        &&label_80CC4104,
        &&label_80CC4108,
        &&label_80CC410C,
        &&label_80CC4110,
        &&label_80CC4114,
        &&label_80CC4118,
        &&label_80CC411C,
        &&label_80CC4120,
        &&label_80CC4124,
        &&label_80CC4128,
        &&label_80CC412C,
        &&label_80CC4130,
        &&label_80CC4134,
        &&label_80CC4138,
        &&label_80CC413C,
        &&label_80CC4140,
        &&label_80CC4144,
        &&label_80CC4148,
        &&label_80CC414C,
        &&label_80CC4150,
        &&label_80CC4154,
        &&label_80CC4158,
        &&label_80CC415C,
        &&label_80CC4160,
        &&label_80CC4164,
        &&label_80CC4168,
        &&label_80CC416C,
        &&label_80CC4170,
        &&label_80CC4174,
        &&label_80CC4178,
        &&label_80CC417C,
        &&label_80CC4180,
        &&label_80CC4184,
        &&label_80CC4188,
        &&label_80CC418C,
        &&label_80CC4190,
        &&label_80CC4194,
        &&label_80CC4198,
        &&label_80CC419C,
        &&label_80CC41A0,
        &&label_80CC41A4,
        &&label_80CC41A8,
        &&label_80CC41AC,
        &&label_80CC41B0,
        &&label_80CC41B4,
        &&label_80CC41B8,
        &&label_80CC41BC,
        &&label_80CC41C0,
        &&label_80CC41C4,
        &&label_80CC41C8,
        &&label_80CC41CC,
        &&label_80CC41D0,
        &&label_80CC41D4,
        &&label_80CC41D8,
        &&label_80CC41DC,
        &&label_80CC41E0,
        &&label_80CC41E4,
        &&label_80CC41E8,
        &&label_80CC41EC,
        &&label_80CC41F0,
        &&label_80CC41F4,
        &&label_80CC41F8,
        &&label_80CC41FC,
        &&label_80CC4200,
        &&label_80CC4204,
        &&label_80CC4208,
        &&label_80CC420C,
        &&label_80CC4210,
        &&label_80CC4214,
        &&label_80CC4218,
        &&label_80CC421C,
        &&label_80CC4220,
        &&label_80CC4224,
        &&label_80CC4228,
        &&label_80CC422C,
        &&label_80CC4230,
        &&label_80CC4234,
        &&label_80CC4238,
        &&label_80CC423C,
        &&label_80CC4240,
        &&label_80CC4244,
        &&label_80CC4248,
        &&label_80CC424C,
        &&label_80CC4250,
        &&label_80CC4254,
        &&label_80CC4258,
        &&label_80CC425C,
        &&label_80CC4260,
        &&label_80CC4264,
        &&label_80CC4268,
        &&label_80CC426C,
        &&label_80CC4270,
        &&label_80CC4274,
        &&label_80CC4278,
        &&label_80CC427C,
        &&label_80CC4280,
        &&label_80CC4284,
        &&label_80CC4288,
        &&label_80CC428C,
        &&label_80CC4290,
        &&label_80CC4294,
        &&label_80CC4298,
        &&label_80CC429C,
        &&label_80CC42A0,
        &&label_80CC42A4,
        &&label_80CC42A8,
        &&label_80CC42AC,
        &&label_80CC42B0,
        &&label_80CC42B4,
        &&label_80CC42B8,
        &&label_80CC42BC,
        &&label_80CC42C0,
        &&label_80CC42C4,
        &&label_80CC42C8,
        &&label_80CC42CC,
        &&label_80CC42D0,
        &&label_80CC42D4,
        &&label_80CC42D8,
        &&label_80CC42DC,
        &&label_80CC42E0,
        &&label_80CC42E4,
        &&label_80CC42E8,
        &&label_80CC42EC,
        &&label_80CC42F0,
        &&label_80CC42F4,
        &&label_80CC42F8,
        &&label_80CC42FC,
        &&label_80CC4300,
        &&label_80CC4304,
        &&label_80CC4308,
        &&label_80CC430C,
        &&label_80CC4310,
        &&label_80CC4314,
        &&label_80CC4318,
        &&label_80CC431C,
        &&label_80CC4320,
        &&label_80CC4324,
        &&label_80CC4328,
        &&label_80CC432C,
        &&label_80CC4330,
        &&label_80CC4334,
        &&label_80CC4338,
        &&label_80CC433C,
        &&label_80CC4340,
        &&label_80CC4344,
        &&label_80CC4348,
        &&label_80CC434C,
        &&label_80CC4350,
        &&label_80CC4354,
        &&label_80CC4358,
        &&label_80CC435C,
        &&label_80CC4360,
        &&label_80CC4364,
        &&label_80CC4368,
        &&label_80CC436C,
        &&label_80CC4370,
        &&label_80CC4374,
        &&label_80CC4378,
        &&label_80CC437C,
        &&label_80CC4380,
        &&label_80CC4384,
        &&label_80CC4388,
        &&label_80CC438C,
        &&label_80CC4390,
        &&label_80CC4394,
        &&label_80CC4398,
        &&label_80CC439C,
        &&label_80CC43A0,
        &&label_80CC43A4,
        &&label_80CC43A8,
        &&label_80CC43AC,
        &&label_80CC43B0,
        &&label_80CC43B4,
        &&label_80CC43B8,
        &&label_80CC43BC,
        &&label_80CC43C0,
        &&label_80CC43C4,
        &&label_80CC43C8,
        &&label_80CC43CC,
        &&label_80CC43D0,
        &&label_80CC43D4,
        &&label_80CC43D8,
        &&label_80CC43DC,
        &&label_80CC43E0,
        &&label_80CC43E4,
        &&label_80CC43E8,
        &&label_80CC43EC,
        &&label_80CC43F0,
        &&label_80CC43F4,
        &&label_80CC43F8,
        &&label_80CC43FC,
        &&label_80CC4400,
        &&label_80CC4404,
        &&label_80CC4408,
        &&label_80CC440C,
        &&label_80CC4410,
        &&label_80CC4414,
        &&label_80CC4418,
        &&label_80CC441C,
        &&label_80CC4420,
        &&label_80CC4424,
        &&label_80CC4428,
        &&label_80CC442C,
        &&label_80CC4430,
        &&label_80CC4434,
        &&label_80CC4438,
        &&label_80CC443C,
        &&label_80CC4440,
        &&label_80CC4444,
        &&label_80CC4448,
        &&label_80CC444C,
        &&label_80CC4450,
        &&label_80CC4454,
        &&label_80CC4458,
        &&label_80CC445C,
        &&label_80CC4460,
        &&label_80CC4464
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CC3EC0u && pc <= 0x80CC4464u && ((pc - 0x80CC3EC0u) & 3u) == 0u)
            goto *pc_table_80CC3EC0[(pc - 0x80CC3EC0u) >> 2];
    }
    return;
label_80CC3EC0:
    ctx->pc = 0x80CC3EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC3EC0: stwu     r1, -16(r1)
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
label_80CC3EC4:
    ctx->pc = 0x80CC3EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC3EC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC3EC8:
    ctx->pc = 0x80CC3EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC3EC8: stw     r0, 20(r1)
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
label_80CC3ECC:
    ctx->pc = 0x80CC3ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3ECCu)) return;
    // 80CC3ECC: cmpwi   r3, 2
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

label_80CC3ED0:
    ctx->pc = 0x80CC3ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3ED0u)) return;
    // 80CC3ED0: bc    12, 2, 0x80CC4448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC4448;
        }
    }

label_80CC3ED4:
    ctx->pc = 0x80CC3ED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC3ED4: bc    4, 0, 0x80CC3EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC3EE8;
        }
    }

label_80CC3ED8:
    ctx->pc = 0x80CC3ED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3ED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3ED8: cmpwi   r3, 0
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

label_80CC3EDC:
    ctx->pc = 0x80CC3EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3EDCu)) return;
    // 80CC3EDC: bc    12, 2, 0x80CC4458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CC4458;
        }
    }

label_80CC3EE0:
    ctx->pc = 0x80CC3EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC3EE0: bc    4, 0, 0x80CC3EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC3EF0;
        }
    }

label_80CC3EE4:
    ctx->pc = 0x80CC3EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC3EE4: b       0x80CC4458
    {
            goto label_80CC4458;
    }

label_80CC3EE8:
    ctx->pc = 0x80CC3EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3EE8: cmpwi   r3, 4
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

label_80CC3EEC:
    ctx->pc = 0x80CC3EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3EECu)) return;
    // 80CC3EEC: b       0x80CC4458
    {
            goto label_80CC4458;
    }

label_80CC3EF0:
    ctx->pc = 0x80CC3EF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC3EF0: bl      0x8045DE7C
    {
            ctx->lr = 0x80CC3EF4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CC3EF4:
    ctx->pc = 0x80CC3EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC3EF4: bl      0x80460A60
    {
            ctx->lr = 0x80CC3EF8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CC3EF8:
    ctx->pc = 0x80CC3EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC3EF8: bl      0x80460A24
    {
            ctx->lr = 0x80CC3EFCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CC3EFC:
    ctx->pc = 0x80CC3EFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3EFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3EFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC3F00:
    ctx->pc = 0x80CC3F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F00u)) return;
    // 80CC3F00: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC3F04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC3F04:
    ctx->pc = 0x80CC3F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3F04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3F08:
    ctx->pc = 0x80CC3F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F08u)) return;
    // 80CC3F08: bl      0x8045EC10
    {
            ctx->lr = 0x80CC3F0Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CC3F0C:
    ctx->pc = 0x80CC3F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3F0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3F10:
    ctx->pc = 0x80CC3F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F10u)) return;
    // 80CC3F10: bl      0x8045F220
    {
            ctx->lr = 0x80CC3F14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC3F14:
    ctx->pc = 0x80CC3F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC3F14: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC3F18:
    ctx->pc = 0x80CC3F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F18u)) return;
    // 80CC3F18: addi    r4, r4, -29872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29872);

label_80CC3F1C:
    ctx->pc = 0x80CC3F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC3F1C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC3F1Cu)) return;
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
label_80CC3F20:
    ctx->pc = 0x80CC3F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F20u)) return;
    // 80CC3F20: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC3F24:
    ctx->pc = 0x80CC3F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F24u)) return;
    // 80CC3F24: addi    r4, r4, -29868
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29868);

label_80CC3F28:
    ctx->pc = 0x80CC3F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC3F28: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC3F28u)) return;
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
label_80CC3F2C:
    ctx->pc = 0x80CC3F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F2Cu)) return;
    // 80CC3F2C: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC3F30:
    ctx->pc = 0x80CC3F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F30u)) return;
    // 80CC3F30: addi    r4, r4, -29864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29864);

label_80CC3F34:
    ctx->pc = 0x80CC3F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC3F34: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC3F34u)) return;
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
label_80CC3F38:
    ctx->pc = 0x80CC3F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F38u)) return;
    // 80CC3F38: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC3F3Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC3F3C:
    ctx->pc = 0x80CC3F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3F3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3F40:
    ctx->pc = 0x80CC3F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F40u)) return;
    // 80CC3F40: bl      0x8045F220
    {
            ctx->lr = 0x80CC3F44u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC3F44:
    ctx->pc = 0x80CC3F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC3F44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC3F48:
    ctx->pc = 0x80CC3F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F48u)) return;
    // 80CC3F48: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CC3F4C:
    ctx->pc = 0x80CC3F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F4Cu)) return;
    // 80CC3F4C: addi    r5, r5, -348
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-348);

label_80CC3F50:
    ctx->pc = 0x80CC3F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F50u)) return;
    // 80CC3F50: li      r6, 281
    ctx->gpr[6] = (u32)(s32)(281);

label_80CC3F54:
    ctx->pc = 0x80CC3F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F54u)) return;
    // 80CC3F54: bl      0x8045EEA8
    {
            ctx->lr = 0x80CC3F58u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CC3F58:
    ctx->pc = 0x80CC3F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3F58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC3F5C:
    ctx->pc = 0x80CC3F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F5Cu)) return;
    // 80CC3F5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC3F60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC3F60:
    ctx->pc = 0x80CC3F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3F60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3F64:
    ctx->pc = 0x80CC3F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F64u)) return;
    // 80CC3F64: bl      0x8045F220
    {
            ctx->lr = 0x80CC3F68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC3F68:
    ctx->pc = 0x80CC3F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC3F68: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC3F6Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC3F6C:
    ctx->pc = 0x80CC3F6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3F6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3F70:
    ctx->pc = 0x80CC3F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F70u)) return;
    // 80CC3F70: bl      0x8045F220
    {
            ctx->lr = 0x80CC3F74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC3F74:
    ctx->pc = 0x80CC3F74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC3F74: lis     r4, -28596
    ctx->gpr[4] = ((u32)(s32)(-28596) << 16);

label_80CC3F78:
    ctx->pc = 0x80CC3F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F78u)) return;
    // 80CC3F78: addi    r4, r4, 31184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31184);

label_80CC3F7C:
    ctx->pc = 0x80CC3F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F7Cu)) return;
    // 80CC3F7C: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC3F80:
    ctx->pc = 0x80CC3F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F80u)) return;
    // 80CC3F80: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC3F84:
    ctx->pc = 0x80CC3F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F84u)) return;
    // 80CC3F84: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC3F88:
    ctx->pc = 0x80CC3F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F88u)) return;
    // 80CC3F88: addi    r6, r6, -29860
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29860);

label_80CC3F8C:
    ctx->pc = 0x80CC3F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC3F8C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC3F8Cu)) return;
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
label_80CC3F90:
    ctx->pc = 0x80CC3F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F90u)) return;
    // 80CC3F90: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC3F94:
    ctx->pc = 0x80CC3F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F94u)) return;
    // 80CC3F94: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CC3F98:
    ctx->pc = 0x80CC3F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3F98u)) return;
    // 80CC3F98: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC3F9Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC3F9C:
    ctx->pc = 0x80CC3F9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3F9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC3F9C: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80CC3FA0:
    ctx->pc = 0x80CC3FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FA0u)) return;
    // 80CC3FA0: bl      0x80406090
    {
            ctx->lr = 0x80CC3FA4u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80CC3FA4:
    ctx->pc = 0x80CC3FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC3FA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3FA8:
    ctx->pc = 0x80CC3FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FA8u)) return;
    // 80CC3FA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC3FAC:
    ctx->pc = 0x80CC3FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FACu)) return;
    // 80CC3FAC: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC3FB0:
    ctx->pc = 0x80CC3FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FB0u)) return;
    // 80CC3FB0: addi    r5, r5, -29856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29856);

label_80CC3FB4:
    ctx->pc = 0x80CC3FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC3FB4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC3FB4u)) return;
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
label_80CC3FB8:
    ctx->pc = 0x80CC3FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FB8u)) return;
    // 80CC3FB8: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC3FBC:
    ctx->pc = 0x80CC3FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FBCu)) return;
    // 80CC3FBC: addi    r5, r5, -29852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29852);

label_80CC3FC0:
    ctx->pc = 0x80CC3FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC3FC0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC3FC0u)) return;
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
label_80CC3FC4:
    ctx->pc = 0x80CC3FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FC4u)) return;
    // 80CC3FC4: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC3FC8:
    ctx->pc = 0x80CC3FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FC8u)) return;
    // 80CC3FC8: addi    r5, r5, -29848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29848);

label_80CC3FCC:
    ctx->pc = 0x80CC3FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC3FCC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC3FCCu)) return;
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
label_80CC3FD0:
    ctx->pc = 0x80CC3FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FD0u)) return;
    // 80CC3FD0: bl      0x8045C750
    {
            ctx->lr = 0x80CC3FD4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC3FD4:
    ctx->pc = 0x80CC3FD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC3FD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3FD8:
    ctx->pc = 0x80CC3FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FD8u)) return;
    // 80CC3FD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC3FDC:
    ctx->pc = 0x80CC3FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FDCu)) return;
    // 80CC3FDC: li      r5, 1612
    ctx->gpr[5] = (u32)(s32)(1612);

label_80CC3FE0:
    ctx->pc = 0x80CC3FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FE0u)) return;
    // 80CC3FE0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC3FE4:
    ctx->pc = 0x80CC3FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FE4u)) return;
    // 80CC3FE4: addi    r6, r6, -28416
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28416);

label_80CC3FE8:
    ctx->pc = 0x80CC3FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FE8u)) return;
    // 80CC3FE8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC3FEC:
    ctx->pc = 0x80CC3FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FECu)) return;
    // 80CC3FEC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC3FF0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC3FF0:
    ctx->pc = 0x80CC3FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC3FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC3FF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC3FF4:
    ctx->pc = 0x80CC3FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FF4u)) return;
    // 80CC3FF4: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80CC3FF8:
    ctx->pc = 0x80CC3FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FF8u)) return;
    // 80CC3FF8: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC3FFC:
    ctx->pc = 0x80CC3FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC3FFCu)) return;
    // 80CC3FFC: addi    r5, r5, -29844
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29844);

label_80CC4000:
    ctx->pc = 0x80CC4000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC4000: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4000u)) return;
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
label_80CC4004:
    ctx->pc = 0x80CC4004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4004u)) return;
    // 80CC4004: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4008:
    ctx->pc = 0x80CC4008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4008u)) return;
    // 80CC4008: addi    r5, r5, -29840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29840);

label_80CC400C:
    ctx->pc = 0x80CC400Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC400Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC400C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC400Cu)) return;
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
label_80CC4010:
    ctx->pc = 0x80CC4010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4010u)) return;
    // 80CC4010: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4014:
    ctx->pc = 0x80CC4014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4014u)) return;
    // 80CC4014: addi    r5, r5, -29836
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29836);

label_80CC4018:
    ctx->pc = 0x80CC4018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC4018: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4018u)) return;
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
label_80CC401C:
    ctx->pc = 0x80CC401Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC401Cu)) return;
    // 80CC401C: bl      0x8045C750
    {
            ctx->lr = 0x80CC4020u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC4020:
    ctx->pc = 0x80CC4020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC4020: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4024:
    ctx->pc = 0x80CC4024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4024u)) return;
    // 80CC4024: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80CC4028:
    ctx->pc = 0x80CC4028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4028u)) return;
    // 80CC4028: li      r5, 1612
    ctx->gpr[5] = (u32)(s32)(1612);

label_80CC402C:
    ctx->pc = 0x80CC402Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC402Cu)) return;
    // 80CC402C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC4030:
    ctx->pc = 0x80CC4030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4030u)) return;
    // 80CC4030: addi    r6, r6, -27648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27648);

label_80CC4034:
    ctx->pc = 0x80CC4034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4034u)) return;
    // 80CC4034: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC4038:
    ctx->pc = 0x80CC4038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4038u)) return;
    // 80CC4038: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC403Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC403C:
    ctx->pc = 0x80CC403Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC403Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC403C: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80CC4040:
    ctx->pc = 0x80CC4040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4040u)) return;
    // 80CC4040: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4044u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4044:
    ctx->pc = 0x80CC4044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC4044: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4048:
    ctx->pc = 0x80CC4048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4048u)) return;
    // 80CC4048: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80CC404C:
    ctx->pc = 0x80CC404Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC404Cu)) return;
    // 80CC404C: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4050:
    ctx->pc = 0x80CC4050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4050u)) return;
    // 80CC4050: addi    r5, r5, -29832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29832);

label_80CC4054:
    ctx->pc = 0x80CC4054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC4054: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4054u)) return;
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
label_80CC4058:
    ctx->pc = 0x80CC4058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4058u)) return;
    // 80CC4058: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC405C:
    ctx->pc = 0x80CC405Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC405Cu)) return;
    // 80CC405C: addi    r5, r5, -29840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29840);

label_80CC4060:
    ctx->pc = 0x80CC4060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC4060: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4060u)) return;
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
label_80CC4064:
    ctx->pc = 0x80CC4064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4064u)) return;
    // 80CC4064: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4068:
    ctx->pc = 0x80CC4068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4068u)) return;
    // 80CC4068: addi    r5, r5, -29828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29828);

label_80CC406C:
    ctx->pc = 0x80CC406Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC406Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC406C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC406Cu)) return;
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
label_80CC4070:
    ctx->pc = 0x80CC4070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4070u)) return;
    // 80CC4070: bl      0x8045C750
    {
            ctx->lr = 0x80CC4074u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC4074:
    ctx->pc = 0x80CC4074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4074: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC4078:
    ctx->pc = 0x80CC4078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4078u)) return;
    // 80CC4078: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC407Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC407C:
    ctx->pc = 0x80CC407Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC407Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC407C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4080:
    ctx->pc = 0x80CC4080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4080u)) return;
    // 80CC4080: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC4084:
    ctx->pc = 0x80CC4084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4084u)) return;
    // 80CC4084: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4088:
    ctx->pc = 0x80CC4088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4088u)) return;
    // 80CC4088: addi    r5, r5, -29824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29824);

label_80CC408C:
    ctx->pc = 0x80CC408Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC408Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC408C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC408Cu)) return;
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
label_80CC4090:
    ctx->pc = 0x80CC4090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4090u)) return;
    // 80CC4090: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4094:
    ctx->pc = 0x80CC4094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4094u)) return;
    // 80CC4094: addi    r5, r5, -29820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29820);

label_80CC4098:
    ctx->pc = 0x80CC4098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC4098: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4098u)) return;
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
label_80CC409C:
    ctx->pc = 0x80CC409Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC409Cu)) return;
    // 80CC409C: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC40A0:
    ctx->pc = 0x80CC40A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40A0u)) return;
    // 80CC40A0: addi    r5, r5, -29816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29816);

label_80CC40A4:
    ctx->pc = 0x80CC40A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC40A4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC40A4u)) return;
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
label_80CC40A8:
    ctx->pc = 0x80CC40A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40A8u)) return;
    // 80CC40A8: bl      0x8045C750
    {
            ctx->lr = 0x80CC40ACu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC40AC:
    ctx->pc = 0x80CC40ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC40ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC40AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC40B0:
    ctx->pc = 0x80CC40B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40B0u)) return;
    // 80CC40B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC40B4:
    ctx->pc = 0x80CC40B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40B4u)) return;
    // 80CC40B4: li      r5, 3148
    ctx->gpr[5] = (u32)(s32)(3148);

label_80CC40B8:
    ctx->pc = 0x80CC40B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40B8u)) return;
    // 80CC40B8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC40BC:
    ctx->pc = 0x80CC40BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40BCu)) return;
    // 80CC40BC: addi    r6, r6, -6400
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6400);

label_80CC40C0:
    ctx->pc = 0x80CC40C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40C0u)) return;
    // 80CC40C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC40C4:
    ctx->pc = 0x80CC40C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40C4u)) return;
    // 80CC40C4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC40C8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC40C8:
    ctx->pc = 0x80CC40C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC40C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC40C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC40CC:
    ctx->pc = 0x80CC40CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40CCu)) return;
    // 80CC40CC: li      r4, 270
    ctx->gpr[4] = (u32)(s32)(270);

label_80CC40D0:
    ctx->pc = 0x80CC40D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40D0u)) return;
    // 80CC40D0: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC40D4:
    ctx->pc = 0x80CC40D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40D4u)) return;
    // 80CC40D4: addi    r5, r5, -29812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29812);

label_80CC40D8:
    ctx->pc = 0x80CC40D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC40D8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC40D8u)) return;
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
label_80CC40DC:
    ctx->pc = 0x80CC40DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40DCu)) return;
    // 80CC40DC: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC40E0:
    ctx->pc = 0x80CC40E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40E0u)) return;
    // 80CC40E0: addi    r5, r5, -29808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29808);

label_80CC40E4:
    ctx->pc = 0x80CC40E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC40E4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC40E4u)) return;
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
label_80CC40E8:
    ctx->pc = 0x80CC40E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40E8u)) return;
    // 80CC40E8: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC40EC:
    ctx->pc = 0x80CC40ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40ECu)) return;
    // 80CC40EC: addi    r5, r5, -29804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29804);

label_80CC40F0:
    ctx->pc = 0x80CC40F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC40F0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC40F0u)) return;
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
label_80CC40F4:
    ctx->pc = 0x80CC40F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40F4u)) return;
    // 80CC40F4: bl      0x8045C750
    {
            ctx->lr = 0x80CC40F8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC40F8:
    ctx->pc = 0x80CC40F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC40F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC40F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC40FC:
    ctx->pc = 0x80CC40FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC40FCu)) return;
    // 80CC40FC: li      r4, 270
    ctx->gpr[4] = (u32)(s32)(270);

label_80CC4100:
    ctx->pc = 0x80CC4100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4100u)) return;
    // 80CC4100: li      r5, 3148
    ctx->gpr[5] = (u32)(s32)(3148);

label_80CC4104:
    ctx->pc = 0x80CC4104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4104u)) return;
    // 80CC4104: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC4108:
    ctx->pc = 0x80CC4108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4108u)) return;
    // 80CC4108: addi    r6, r6, -6400
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6400);

label_80CC410C:
    ctx->pc = 0x80CC410Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC410Cu)) return;
    // 80CC410C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC4110:
    ctx->pc = 0x80CC4110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4110u)) return;
    // 80CC4110: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC4114u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC4114:
    ctx->pc = 0x80CC4114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4114: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC4118:
    ctx->pc = 0x80CC4118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4118u)) return;
    // 80CC4118: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC411Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC411C:
    ctx->pc = 0x80CC411Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC411Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC411C: li      r3, 1339
    ctx->gpr[3] = (u32)(s32)(1339);

label_80CC4120:
    ctx->pc = 0x80CC4120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4120u)) return;
    // 80CC4120: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC4124u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC4124:
    ctx->pc = 0x80CC4124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC4124: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CC4128:
    ctx->pc = 0x80CC4128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4128u)) return;
    // 80CC4128: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC412C:
    ctx->pc = 0x80CC412Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC412Cu)) return;
    // 80CC412C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC4130:
    ctx->pc = 0x80CC4130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC4130: lwz     r0, 0(r4)
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
label_80CC4134:
    ctx->pc = 0x80CC4134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4134u)) return;
    // 80CC4134: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC4138:
    ctx->pc = 0x80CC4138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4138u)) return;
    // 80CC4138: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC413C:
    ctx->pc = 0x80CC413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC413Cu)) return;
    // 80CC413C: addi    r4, r4, -28920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28920);

label_80CC4140:
    ctx->pc = 0x80CC4140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC4140: lwzx    r4, r4, r0
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
label_80CC4144:
    ctx->pc = 0x80CC4144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC4144: lwz     r4, 0(r4)
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
label_80CC4148:
    ctx->pc = 0x80CC4148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4148u)) return;
    // 80CC4148: bl      0x8045F608
    {
            ctx->lr = 0x80CC414Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC414C:
    ctx->pc = 0x80CC414Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC414Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC414C: bl      0x8045F32C
    {
            ctx->lr = 0x80CC4150u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC4150:
    ctx->pc = 0x80CC4150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4150: li      r3, 1340
    ctx->gpr[3] = (u32)(s32)(1340);

label_80CC4154:
    ctx->pc = 0x80CC4154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4154u)) return;
    // 80CC4154: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC4158u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC4158:
    ctx->pc = 0x80CC4158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4158: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CC415C:
    ctx->pc = 0x80CC415Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC415Cu)) return;
    // 80CC415C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4160u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4160:
    ctx->pc = 0x80CC4160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC4160: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80CC4164:
    ctx->pc = 0x80CC4164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4164u)) return;
    // 80CC4164: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC4168:
    ctx->pc = 0x80CC4168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4168u)) return;
    // 80CC4168: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC416C:
    ctx->pc = 0x80CC416Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC416Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC416C: lwz     r0, 0(r4)
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
label_80CC4170:
    ctx->pc = 0x80CC4170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4170u)) return;
    // 80CC4170: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC4174:
    ctx->pc = 0x80CC4174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4174u)) return;
    // 80CC4174: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC4178:
    ctx->pc = 0x80CC4178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4178u)) return;
    // 80CC4178: addi    r4, r4, -28920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28920);

label_80CC417C:
    ctx->pc = 0x80CC417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC417Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC417C: lwzx    r4, r4, r0
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
label_80CC4180:
    ctx->pc = 0x80CC4180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC4180: lwz     r4, 4(r4)
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
label_80CC4184:
    ctx->pc = 0x80CC4184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4184u)) return;
    // 80CC4184: bl      0x8045F608
    {
            ctx->lr = 0x80CC4188u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC4188:
    ctx->pc = 0x80CC4188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4188: bl      0x8045F32C
    {
            ctx->lr = 0x80CC418Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC418C:
    ctx->pc = 0x80CC418Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC418Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC418C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC4190:
    ctx->pc = 0x80CC4190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4190u)) return;
    // 80CC4190: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4194u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4194:
    ctx->pc = 0x80CC4194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC4194: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4198:
    ctx->pc = 0x80CC4198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4198u)) return;
    // 80CC4198: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC419C:
    ctx->pc = 0x80CC419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC419Cu)) return;
    // 80CC419C: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC41A0:
    ctx->pc = 0x80CC41A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41A0u)) return;
    // 80CC41A0: addi    r5, r5, -29800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29800);

label_80CC41A4:
    ctx->pc = 0x80CC41A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC41A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC41A4u)) return;
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
label_80CC41A8:
    ctx->pc = 0x80CC41A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41A8u)) return;
    // 80CC41A8: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC41AC:
    ctx->pc = 0x80CC41ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41ACu)) return;
    // 80CC41AC: addi    r5, r5, -29796
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29796);

label_80CC41B0:
    ctx->pc = 0x80CC41B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC41B0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC41B0u)) return;
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
label_80CC41B4:
    ctx->pc = 0x80CC41B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41B4u)) return;
    // 80CC41B4: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC41B8:
    ctx->pc = 0x80CC41B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41B8u)) return;
    // 80CC41B8: addi    r5, r5, -29792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29792);

label_80CC41BC:
    ctx->pc = 0x80CC41BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC41BC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC41BCu)) return;
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
label_80CC41C0:
    ctx->pc = 0x80CC41C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41C0u)) return;
    // 80CC41C0: bl      0x8045C750
    {
            ctx->lr = 0x80CC41C4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC41C4:
    ctx->pc = 0x80CC41C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC41C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC41C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC41C8:
    ctx->pc = 0x80CC41C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41C8u)) return;
    // 80CC41C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC41CC:
    ctx->pc = 0x80CC41CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41CCu)) return;
    // 80CC41CC: li      r5, 3660
    ctx->gpr[5] = (u32)(s32)(3660);

label_80CC41D0:
    ctx->pc = 0x80CC41D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41D0u)) return;
    // 80CC41D0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC41D4:
    ctx->pc = 0x80CC41D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41D4u)) return;
    // 80CC41D4: addi    r6, r6, -6912
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6912);

label_80CC41D8:
    ctx->pc = 0x80CC41D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41D8u)) return;
    // 80CC41D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC41DC:
    ctx->pc = 0x80CC41DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41DCu)) return;
    // 80CC41DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC41E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC41E0:
    ctx->pc = 0x80CC41E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC41E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC41E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC41E4:
    ctx->pc = 0x80CC41E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41E4u)) return;
    // 80CC41E4: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC41E8:
    ctx->pc = 0x80CC41E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41E8u)) return;
    // 80CC41E8: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC41EC:
    ctx->pc = 0x80CC41ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41ECu)) return;
    // 80CC41EC: addi    r5, r5, -29788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29788);

label_80CC41F0:
    ctx->pc = 0x80CC41F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC41F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC41F0u)) return;
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
label_80CC41F4:
    ctx->pc = 0x80CC41F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41F4u)) return;
    // 80CC41F4: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC41F8:
    ctx->pc = 0x80CC41F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41F8u)) return;
    // 80CC41F8: addi    r5, r5, -29796
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29796);

label_80CC41FC:
    ctx->pc = 0x80CC41FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC41FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC41FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC41FCu)) return;
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
label_80CC4200:
    ctx->pc = 0x80CC4200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4200u)) return;
    // 80CC4200: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4204:
    ctx->pc = 0x80CC4204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4204u)) return;
    // 80CC4204: addi    r5, r5, -29784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29784);

label_80CC4208:
    ctx->pc = 0x80CC4208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC4208: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4208u)) return;
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
label_80CC420C:
    ctx->pc = 0x80CC420Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC420Cu)) return;
    // 80CC420C: bl      0x8045C750
    {
            ctx->lr = 0x80CC4210u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC4210:
    ctx->pc = 0x80CC4210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC4210: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4214:
    ctx->pc = 0x80CC4214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4214u)) return;
    // 80CC4214: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC4218:
    ctx->pc = 0x80CC4218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4218u)) return;
    // 80CC4218: li      r5, 3660
    ctx->gpr[5] = (u32)(s32)(3660);

label_80CC421C:
    ctx->pc = 0x80CC421Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC421Cu)) return;
    // 80CC421C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC4220:
    ctx->pc = 0x80CC4220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4220u)) return;
    // 80CC4220: addi    r6, r6, -10240
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10240);

label_80CC4224:
    ctx->pc = 0x80CC4224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4224u)) return;
    // 80CC4224: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC4228:
    ctx->pc = 0x80CC4228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4228u)) return;
    // 80CC4228: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC422Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC422C:
    ctx->pc = 0x80CC422Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC422Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC422C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4230:
    ctx->pc = 0x80CC4230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4230u)) return;
    // 80CC4230: bl      0x8045F220
    {
            ctx->lr = 0x80CC4234u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC4234:
    ctx->pc = 0x80CC4234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4234: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC4238u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC4238:
    ctx->pc = 0x80CC4238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC423C:
    ctx->pc = 0x80CC423Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC423Cu)) return;
    // 80CC423C: bl      0x8045F220
    {
            ctx->lr = 0x80CC4240u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC4240:
    ctx->pc = 0x80CC4240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC4240: lis     r4, -28596
    ctx->gpr[4] = ((u32)(s32)(-28596) << 16);

label_80CC4244:
    ctx->pc = 0x80CC4244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4244u)) return;
    // 80CC4244: addi    r4, r4, 31184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31184);

label_80CC4248:
    ctx->pc = 0x80CC4248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4248u)) return;
    // 80CC4248: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC424C:
    ctx->pc = 0x80CC424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC424Cu)) return;
    // 80CC424C: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC4250:
    ctx->pc = 0x80CC4250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4250u)) return;
    // 80CC4250: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC4254:
    ctx->pc = 0x80CC4254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4254u)) return;
    // 80CC4254: addi    r6, r6, -29780
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29780);

label_80CC4258:
    ctx->pc = 0x80CC4258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC4258: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC4258u)) return;
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
label_80CC425C:
    ctx->pc = 0x80CC425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC425Cu)) return;
    // 80CC425C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC4260:
    ctx->pc = 0x80CC4260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4260u)) return;
    // 80CC4260: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC4264:
    ctx->pc = 0x80CC4264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4264u)) return;
    // 80CC4264: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC4268u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC4268:
    ctx->pc = 0x80CC4268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4268: li      r3, 1341
    ctx->gpr[3] = (u32)(s32)(1341);

label_80CC426C:
    ctx->pc = 0x80CC426Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC426Cu)) return;
    // 80CC426C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC4270u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC4270:
    ctx->pc = 0x80CC4270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4270: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CC4274:
    ctx->pc = 0x80CC4274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4274u)) return;
    // 80CC4274: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4278u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4278:
    ctx->pc = 0x80CC4278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4278: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC427C:
    ctx->pc = 0x80CC427Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC427Cu)) return;
    // 80CC427C: bl      0x8045F220
    {
            ctx->lr = 0x80CC4280u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC4280:
    ctx->pc = 0x80CC4280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4280: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC4284u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC4284:
    ctx->pc = 0x80CC4284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4284: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4288:
    ctx->pc = 0x80CC4288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4288u)) return;
    // 80CC4288: bl      0x8045F220
    {
            ctx->lr = 0x80CC428Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC428C:
    ctx->pc = 0x80CC428Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC428Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC428C: lis     r4, -28596
    ctx->gpr[4] = ((u32)(s32)(-28596) << 16);

label_80CC4290:
    ctx->pc = 0x80CC4290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4290u)) return;
    // 80CC4290: addi    r4, r4, 31184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31184);

label_80CC4294:
    ctx->pc = 0x80CC4294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4294u)) return;
    // 80CC4294: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC4298:
    ctx->pc = 0x80CC4298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4298u)) return;
    // 80CC4298: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC429C:
    ctx->pc = 0x80CC429Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC429Cu)) return;
    // 80CC429C: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC42A0:
    ctx->pc = 0x80CC42A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42A0u)) return;
    // 80CC42A0: addi    r6, r6, -29860
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29860);

label_80CC42A4:
    ctx->pc = 0x80CC42A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC42A4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC42A4u)) return;
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
label_80CC42A8:
    ctx->pc = 0x80CC42A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42A8u)) return;
    // 80CC42A8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC42AC:
    ctx->pc = 0x80CC42ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42ACu)) return;
    // 80CC42AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC42B0:
    ctx->pc = 0x80CC42B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42B0u)) return;
    // 80CC42B0: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC42B4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC42B4:
    ctx->pc = 0x80CC42B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC42B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC42B4: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CC42B8:
    ctx->pc = 0x80CC42B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42B8u)) return;
    // 80CC42B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC42BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC42BC:
    ctx->pc = 0x80CC42BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC42BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC42BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC42C0:
    ctx->pc = 0x80CC42C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42C0u)) return;
    // 80CC42C0: bl      0x8045F220
    {
            ctx->lr = 0x80CC42C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC42C4:
    ctx->pc = 0x80CC42C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC42C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC42C4: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC42C8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC42C8:
    ctx->pc = 0x80CC42C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC42C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC42C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC42CC:
    ctx->pc = 0x80CC42CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42CCu)) return;
    // 80CC42CC: bl      0x8045F220
    {
            ctx->lr = 0x80CC42D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC42D0:
    ctx->pc = 0x80CC42D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC42D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC42D0: lis     r4, -28596
    ctx->gpr[4] = ((u32)(s32)(-28596) << 16);

label_80CC42D4:
    ctx->pc = 0x80CC42D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42D4u)) return;
    // 80CC42D4: addi    r4, r4, 31184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31184);

label_80CC42D8:
    ctx->pc = 0x80CC42D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42D8u)) return;
    // 80CC42D8: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC42DC:
    ctx->pc = 0x80CC42DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42DCu)) return;
    // 80CC42DC: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC42E0:
    ctx->pc = 0x80CC42E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42E0u)) return;
    // 80CC42E0: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC42E4:
    ctx->pc = 0x80CC42E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42E4u)) return;
    // 80CC42E4: addi    r6, r6, -29780
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29780);

label_80CC42E8:
    ctx->pc = 0x80CC42E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC42E8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC42E8u)) return;
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
label_80CC42EC:
    ctx->pc = 0x80CC42ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42ECu)) return;
    // 80CC42EC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC42F0:
    ctx->pc = 0x80CC42F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42F0u)) return;
    // 80CC42F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC42F4:
    ctx->pc = 0x80CC42F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42F4u)) return;
    // 80CC42F4: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC42F8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC42F8:
    ctx->pc = 0x80CC42F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC42F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC42F8: li      r3, 1341
    ctx->gpr[3] = (u32)(s32)(1341);

label_80CC42FC:
    ctx->pc = 0x80CC42FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC42FCu)) return;
    // 80CC42FC: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC4300u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC4300:
    ctx->pc = 0x80CC4300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4300: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CC4304:
    ctx->pc = 0x80CC4304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4304u)) return;
    // 80CC4304: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4308u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4308:
    ctx->pc = 0x80CC4308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4308: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC430C:
    ctx->pc = 0x80CC430Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC430Cu)) return;
    // 80CC430C: bl      0x8045F220
    {
            ctx->lr = 0x80CC4310u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC4310:
    ctx->pc = 0x80CC4310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC4310: lis     r4, -28596
    ctx->gpr[4] = ((u32)(s32)(-28596) << 16);

label_80CC4314:
    ctx->pc = 0x80CC4314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4314u)) return;
    // 80CC4314: addi    r4, r4, 31184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31184);

label_80CC4318:
    ctx->pc = 0x80CC4318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4318u)) return;
    // 80CC4318: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC431C:
    ctx->pc = 0x80CC431Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC431Cu)) return;
    // 80CC431C: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC4320:
    ctx->pc = 0x80CC4320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4320u)) return;
    // 80CC4320: lis     r6, -27378
    ctx->gpr[6] = ((u32)(s32)(-27378) << 16);

label_80CC4324:
    ctx->pc = 0x80CC4324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4324u)) return;
    // 80CC4324: addi    r6, r6, -29860
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29860);

label_80CC4328:
    ctx->pc = 0x80CC4328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC4328: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC4328u)) return;
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
label_80CC432C:
    ctx->pc = 0x80CC432Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC432Cu)) return;
    // 80CC432C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC4330:
    ctx->pc = 0x80CC4330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4330u)) return;
    // 80CC4330: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC4334:
    ctx->pc = 0x80CC4334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4334u)) return;
    // 80CC4334: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC4338u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC4338:
    ctx->pc = 0x80CC4338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4338: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC433C:
    ctx->pc = 0x80CC433Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC433Cu)) return;
    // 80CC433C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4340u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4340:
    ctx->pc = 0x80CC4340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4340: li      r3, 1342
    ctx->gpr[3] = (u32)(s32)(1342);

label_80CC4344:
    ctx->pc = 0x80CC4344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4344u)) return;
    // 80CC4344: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC4348u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC4348:
    ctx->pc = 0x80CC4348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC4348: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CC434C:
    ctx->pc = 0x80CC434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC434Cu)) return;
    // 80CC434C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC4350:
    ctx->pc = 0x80CC4350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4350u)) return;
    // 80CC4350: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC4354:
    ctx->pc = 0x80CC4354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC4354: lwz     r0, 0(r4)
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
label_80CC4358:
    ctx->pc = 0x80CC4358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4358u)) return;
    // 80CC4358: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC435C:
    ctx->pc = 0x80CC435Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC435Cu)) return;
    // 80CC435C: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC4360:
    ctx->pc = 0x80CC4360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4360u)) return;
    // 80CC4360: addi    r4, r4, -28920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28920);

label_80CC4364:
    ctx->pc = 0x80CC4364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC4364: lwzx    r4, r4, r0
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
label_80CC4368:
    ctx->pc = 0x80CC4368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC4368: lwz     r4, 8(r4)
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
label_80CC436C:
    ctx->pc = 0x80CC436Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC436Cu)) return;
    // 80CC436C: bl      0x8045F608
    {
            ctx->lr = 0x80CC4370u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC4370:
    ctx->pc = 0x80CC4370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4370: bl      0x8045F32C
    {
            ctx->lr = 0x80CC4374u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC4374:
    ctx->pc = 0x80CC4374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC4374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC4378:
    ctx->pc = 0x80CC4378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4378u)) return;
    // 80CC4378: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC437C:
    ctx->pc = 0x80CC437Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC437Cu)) return;
    // 80CC437C: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4380:
    ctx->pc = 0x80CC4380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4380u)) return;
    // 80CC4380: addi    r5, r5, -29776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29776);

label_80CC4384:
    ctx->pc = 0x80CC4384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC4384: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4384u)) return;
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
label_80CC4388:
    ctx->pc = 0x80CC4388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4388u)) return;
    // 80CC4388: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC438C:
    ctx->pc = 0x80CC438Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC438Cu)) return;
    // 80CC438C: addi    r5, r5, -29772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29772);

label_80CC4390:
    ctx->pc = 0x80CC4390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC4390: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC4390u)) return;
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
label_80CC4394:
    ctx->pc = 0x80CC4394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4394u)) return;
    // 80CC4394: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC4398:
    ctx->pc = 0x80CC4398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4398u)) return;
    // 80CC4398: addi    r5, r5, -29768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29768);

label_80CC439C:
    ctx->pc = 0x80CC439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC439Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC439C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC439Cu)) return;
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
label_80CC43A0:
    ctx->pc = 0x80CC43A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43A0u)) return;
    // 80CC43A0: bl      0x8045C750
    {
            ctx->lr = 0x80CC43A4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC43A4:
    ctx->pc = 0x80CC43A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC43A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC43A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC43A8:
    ctx->pc = 0x80CC43A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43A8u)) return;
    // 80CC43A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC43AC:
    ctx->pc = 0x80CC43ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43ACu)) return;
    // 80CC43AC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC43B0:
    ctx->pc = 0x80CC43B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43B0u)) return;
    // 80CC43B0: addi    r5, r6, -1972
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1972);

label_80CC43B4:
    ctx->pc = 0x80CC43B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43B4u)) return;
    // 80CC43B4: addi    r6, r6, -32000
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32000);

label_80CC43B8:
    ctx->pc = 0x80CC43B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43B8u)) return;
    // 80CC43B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC43BC:
    ctx->pc = 0x80CC43BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43BCu)) return;
    // 80CC43BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC43C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC43C0:
    ctx->pc = 0x80CC43C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC43C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CC43C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC43C4:
    ctx->pc = 0x80CC43C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43C4u)) return;
    // 80CC43C4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80CC43C8:
    ctx->pc = 0x80CC43C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43C8u)) return;
    // 80CC43C8: li      r5, 7282
    ctx->gpr[5] = (u32)(s32)(7282);

label_80CC43CC:
    ctx->pc = 0x80CC43CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43CCu)) return;
    // 80CC43CC: bl      0x8045C0F8
    {
            ctx->lr = 0x80CC43D0u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80CC43D0:
    ctx->pc = 0x80CC43D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC43D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC43D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC43D4:
    ctx->pc = 0x80CC43D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43D4u)) return;
    // 80CC43D4: li      r4, 135
    ctx->gpr[4] = (u32)(s32)(135);

label_80CC43D8:
    ctx->pc = 0x80CC43D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43D8u)) return;
    // 80CC43D8: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC43DC:
    ctx->pc = 0x80CC43DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43DCu)) return;
    // 80CC43DC: addi    r5, r5, -29764
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29764);

label_80CC43E0:
    ctx->pc = 0x80CC43E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC43E0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC43E0u)) return;
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
label_80CC43E4:
    ctx->pc = 0x80CC43E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43E4u)) return;
    // 80CC43E4: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC43E8:
    ctx->pc = 0x80CC43E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43E8u)) return;
    // 80CC43E8: addi    r5, r5, -29760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29760);

label_80CC43EC:
    ctx->pc = 0x80CC43ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC43EC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC43ECu)) return;
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
label_80CC43F0:
    ctx->pc = 0x80CC43F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43F0u)) return;
    // 80CC43F0: lis     r5, -27378
    ctx->gpr[5] = ((u32)(s32)(-27378) << 16);

label_80CC43F4:
    ctx->pc = 0x80CC43F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43F4u)) return;
    // 80CC43F4: addi    r5, r5, -29756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29756);

label_80CC43F8:
    ctx->pc = 0x80CC43F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC43F8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC43F8u)) return;
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
label_80CC43FC:
    ctx->pc = 0x80CC43FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC43FCu)) return;
    // 80CC43FC: bl      0x8045C750
    {
            ctx->lr = 0x80CC4400u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC4400:
    ctx->pc = 0x80CC4400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4400: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CC4404:
    ctx->pc = 0x80CC4404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4404u)) return;
    // 80CC4404: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4408u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4408:
    ctx->pc = 0x80CC4408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4408: li      r3, 1343
    ctx->gpr[3] = (u32)(s32)(1343);

label_80CC440C:
    ctx->pc = 0x80CC440Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC440Cu)) return;
    // 80CC440C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC4410u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC4410:
    ctx->pc = 0x80CC4410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC4410: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CC4414:
    ctx->pc = 0x80CC4414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4414u)) return;
    // 80CC4414: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC4418:
    ctx->pc = 0x80CC4418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4418u)) return;
    // 80CC4418: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC441C:
    ctx->pc = 0x80CC441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC441Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC441C: lwz     r0, 0(r4)
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
label_80CC4420:
    ctx->pc = 0x80CC4420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4420u)) return;
    // 80CC4420: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC4424:
    ctx->pc = 0x80CC4424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4424u)) return;
    // 80CC4424: lis     r4, -27378
    ctx->gpr[4] = ((u32)(s32)(-27378) << 16);

label_80CC4428:
    ctx->pc = 0x80CC4428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4428u)) return;
    // 80CC4428: addi    r4, r4, -28920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28920);

label_80CC442C:
    ctx->pc = 0x80CC442Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC442Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC442C: lwzx    r4, r4, r0
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
label_80CC4430:
    ctx->pc = 0x80CC4430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC4430: lwz     r4, 12(r4)
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
label_80CC4434:
    ctx->pc = 0x80CC4434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4434u)) return;
    // 80CC4434: bl      0x8045F608
    {
            ctx->lr = 0x80CC4438u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC4438:
    ctx->pc = 0x80CC4438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4438: bl      0x8045F32C
    {
            ctx->lr = 0x80CC443Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC443C:
    ctx->pc = 0x80CC443Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC443Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC443C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CC4440:
    ctx->pc = 0x80CC4440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4440u)) return;
    // 80CC4440: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC4444u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC4444:
    ctx->pc = 0x80CC4444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4444: b       0x80CC4458
    {
            goto label_80CC4458;
    }

label_80CC4448:
    ctx->pc = 0x80CC4448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC4448: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC444C:
    ctx->pc = 0x80CC444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC444Cu)) return;
    // 80CC444C: bl      0x8045EC10
    {
            ctx->lr = 0x80CC4450u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CC4450:
    ctx->pc = 0x80CC4450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4450: bl      0x8045DE34
    {
            ctx->lr = 0x80CC4454u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CC4454:
    ctx->pc = 0x80CC4454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC4454: bl      0x80460A80
    {
            ctx->lr = 0x80CC4458u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CC4458:
    ctx->pc = 0x80CC4458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC4458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC4458: lwz     r0, 20(r1)
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
label_80CC445C:
    ctx->pc = 0x80CC445Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CC445Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC445C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC4460:
    ctx->pc = 0x80CC4460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4460u)) return;
    // 80CC4460: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CC4464:
    ctx->pc = 0x80CC4464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC4464u)) return;
    // 80CC4464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC3EC0;
        }
    }

    ctx->pc = 0x80CC4468u;
    return;
return_dispatch_80CC3EC0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CC3EF4u: goto label_80CC3EF4;
    case 0x80CC3EF8u: goto label_80CC3EF8;
    case 0x80CC3EFCu: goto label_80CC3EFC;
    case 0x80CC3F04u: goto label_80CC3F04;
    case 0x80CC3F0Cu: goto label_80CC3F0C;
    case 0x80CC3F14u: goto label_80CC3F14;
    case 0x80CC3F3Cu: goto label_80CC3F3C;
    case 0x80CC3F44u: goto label_80CC3F44;
    case 0x80CC3F58u: goto label_80CC3F58;
    case 0x80CC3F60u: goto label_80CC3F60;
    case 0x80CC3F68u: goto label_80CC3F68;
    case 0x80CC3F6Cu: goto label_80CC3F6C;
    case 0x80CC3F74u: goto label_80CC3F74;
    case 0x80CC3F9Cu: goto label_80CC3F9C;
    case 0x80CC3FA4u: goto label_80CC3FA4;
    case 0x80CC3FD4u: goto label_80CC3FD4;
    case 0x80CC3FF0u: goto label_80CC3FF0;
    case 0x80CC4020u: goto label_80CC4020;
    case 0x80CC403Cu: goto label_80CC403C;
    case 0x80CC4044u: goto label_80CC4044;
    case 0x80CC4074u: goto label_80CC4074;
    case 0x80CC407Cu: goto label_80CC407C;
    case 0x80CC40ACu: goto label_80CC40AC;
    case 0x80CC40C8u: goto label_80CC40C8;
    case 0x80CC40F8u: goto label_80CC40F8;
    case 0x80CC4114u: goto label_80CC4114;
    case 0x80CC411Cu: goto label_80CC411C;
    case 0x80CC4124u: goto label_80CC4124;
    case 0x80CC414Cu: goto label_80CC414C;
    case 0x80CC4150u: goto label_80CC4150;
    case 0x80CC4158u: goto label_80CC4158;
    case 0x80CC4160u: goto label_80CC4160;
    case 0x80CC4188u: goto label_80CC4188;
    case 0x80CC418Cu: goto label_80CC418C;
    case 0x80CC4194u: goto label_80CC4194;
    case 0x80CC41C4u: goto label_80CC41C4;
    case 0x80CC41E0u: goto label_80CC41E0;
    case 0x80CC4210u: goto label_80CC4210;
    case 0x80CC422Cu: goto label_80CC422C;
    case 0x80CC4234u: goto label_80CC4234;
    case 0x80CC4238u: goto label_80CC4238;
    case 0x80CC4240u: goto label_80CC4240;
    case 0x80CC4268u: goto label_80CC4268;
    case 0x80CC4270u: goto label_80CC4270;
    case 0x80CC4278u: goto label_80CC4278;
    case 0x80CC4280u: goto label_80CC4280;
    case 0x80CC4284u: goto label_80CC4284;
    case 0x80CC428Cu: goto label_80CC428C;
    case 0x80CC42B4u: goto label_80CC42B4;
    case 0x80CC42BCu: goto label_80CC42BC;
    case 0x80CC42C4u: goto label_80CC42C4;
    case 0x80CC42C8u: goto label_80CC42C8;
    case 0x80CC42D0u: goto label_80CC42D0;
    case 0x80CC42F8u: goto label_80CC42F8;
    case 0x80CC4300u: goto label_80CC4300;
    case 0x80CC4308u: goto label_80CC4308;
    case 0x80CC4310u: goto label_80CC4310;
    case 0x80CC4338u: goto label_80CC4338;
    case 0x80CC4340u: goto label_80CC4340;
    case 0x80CC4348u: goto label_80CC4348;
    case 0x80CC4370u: goto label_80CC4370;
    case 0x80CC4374u: goto label_80CC4374;
    case 0x80CC43A4u: goto label_80CC43A4;
    case 0x80CC43C0u: goto label_80CC43C0;
    case 0x80CC43D0u: goto label_80CC43D0;
    case 0x80CC4400u: goto label_80CC4400;
    case 0x80CC4408u: goto label_80CC4408;
    case 0x80CC4410u: goto label_80CC4410;
    case 0x80CC4438u: goto label_80CC4438;
    case 0x80CC443Cu: goto label_80CC443C;
    case 0x80CC4444u: goto label_80CC4444;
    case 0x80CC4450u: goto label_80CC4450;
    case 0x80CC4454u: goto label_80CC4454;
    case 0x80CC4458u: goto label_80CC4458;
    default: return;
    }
}

