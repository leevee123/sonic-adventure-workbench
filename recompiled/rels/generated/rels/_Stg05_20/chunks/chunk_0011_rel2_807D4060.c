// DolRecomp output
#include "../generated.h"

void func_807D4060(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_807D4060[434] = {
        &&label_807D4060,
        &&label_807D4064,
        &&label_807D4068,
        &&label_807D406C,
        &&label_807D4070,
        &&label_807D4074,
        &&label_807D4078,
        &&label_807D407C,
        &&label_807D4080,
        &&label_807D4084,
        &&label_807D4088,
        &&label_807D408C,
        &&label_807D4090,
        &&label_807D4094,
        &&label_807D4098,
        &&label_807D409C,
        &&label_807D40A0,
        &&label_807D40A4,
        &&label_807D40A8,
        &&label_807D40AC,
        &&label_807D40B0,
        &&label_807D40B4,
        &&label_807D40B8,
        &&label_807D40BC,
        &&label_807D40C0,
        &&label_807D40C4,
        &&label_807D40C8,
        &&label_807D40CC,
        &&label_807D40D0,
        &&label_807D40D4,
        &&label_807D40D8,
        &&label_807D40DC,
        &&label_807D40E0,
        &&label_807D40E4,
        &&label_807D40E8,
        &&label_807D40EC,
        &&label_807D40F0,
        &&label_807D40F4,
        &&label_807D40F8,
        &&label_807D40FC,
        &&label_807D4100,
        &&label_807D4104,
        &&label_807D4108,
        &&label_807D410C,
        &&label_807D4110,
        &&label_807D4114,
        &&label_807D4118,
        &&label_807D411C,
        &&label_807D4120,
        &&label_807D4124,
        &&label_807D4128,
        &&label_807D412C,
        &&label_807D4130,
        &&label_807D4134,
        &&label_807D4138,
        &&label_807D413C,
        &&label_807D4140,
        &&label_807D4144,
        &&label_807D4148,
        &&label_807D414C,
        &&label_807D4150,
        &&label_807D4154,
        &&label_807D4158,
        &&label_807D415C,
        &&label_807D4160,
        &&label_807D4164,
        &&label_807D4168,
        &&label_807D416C,
        &&label_807D4170,
        &&label_807D4174,
        &&label_807D4178,
        &&label_807D417C,
        &&label_807D4180,
        &&label_807D4184,
        &&label_807D4188,
        &&label_807D418C,
        &&label_807D4190,
        &&label_807D4194,
        &&label_807D4198,
        &&label_807D419C,
        &&label_807D41A0,
        &&label_807D41A4,
        &&label_807D41A8,
        &&label_807D41AC,
        &&label_807D41B0,
        &&label_807D41B4,
        &&label_807D41B8,
        &&label_807D41BC,
        &&label_807D41C0,
        &&label_807D41C4,
        &&label_807D41C8,
        &&label_807D41CC,
        &&label_807D41D0,
        &&label_807D41D4,
        &&label_807D41D8,
        &&label_807D41DC,
        &&label_807D41E0,
        &&label_807D41E4,
        &&label_807D41E8,
        &&label_807D41EC,
        &&label_807D41F0,
        &&label_807D41F4,
        &&label_807D41F8,
        &&label_807D41FC,
        &&label_807D4200,
        &&label_807D4204,
        &&label_807D4208,
        &&label_807D420C,
        &&label_807D4210,
        &&label_807D4214,
        &&label_807D4218,
        &&label_807D421C,
        &&label_807D4220,
        &&label_807D4224,
        &&label_807D4228,
        &&label_807D422C,
        &&label_807D4230,
        &&label_807D4234,
        &&label_807D4238,
        &&label_807D423C,
        &&label_807D4240,
        &&label_807D4244,
        &&label_807D4248,
        &&label_807D424C,
        &&label_807D4250,
        &&label_807D4254,
        &&label_807D4258,
        &&label_807D425C,
        &&label_807D4260,
        &&label_807D4264,
        &&label_807D4268,
        &&label_807D426C,
        &&label_807D4270,
        &&label_807D4274,
        &&label_807D4278,
        &&label_807D427C,
        &&label_807D4280,
        &&label_807D4284,
        &&label_807D4288,
        &&label_807D428C,
        &&label_807D4290,
        &&label_807D4294,
        &&label_807D4298,
        &&label_807D429C,
        &&label_807D42A0,
        &&label_807D42A4,
        &&label_807D42A8,
        &&label_807D42AC,
        &&label_807D42B0,
        &&label_807D42B4,
        &&label_807D42B8,
        &&label_807D42BC,
        &&label_807D42C0,
        &&label_807D42C4,
        &&label_807D42C8,
        &&label_807D42CC,
        &&label_807D42D0,
        &&label_807D42D4,
        &&label_807D42D8,
        &&label_807D42DC,
        &&label_807D42E0,
        &&label_807D42E4,
        &&label_807D42E8,
        &&label_807D42EC,
        &&label_807D42F0,
        &&label_807D42F4,
        &&label_807D42F8,
        &&label_807D42FC,
        &&label_807D4300,
        &&label_807D4304,
        &&label_807D4308,
        &&label_807D430C,
        &&label_807D4310,
        &&label_807D4314,
        &&label_807D4318,
        &&label_807D431C,
        &&label_807D4320,
        &&label_807D4324,
        &&label_807D4328,
        &&label_807D432C,
        &&label_807D4330,
        &&label_807D4334,
        &&label_807D4338,
        &&label_807D433C,
        &&label_807D4340,
        &&label_807D4344,
        &&label_807D4348,
        &&label_807D434C,
        &&label_807D4350,
        &&label_807D4354,
        &&label_807D4358,
        &&label_807D435C,
        &&label_807D4360,
        &&label_807D4364,
        &&label_807D4368,
        &&label_807D436C,
        &&label_807D4370,
        &&label_807D4374,
        &&label_807D4378,
        &&label_807D437C,
        &&label_807D4380,
        &&label_807D4384,
        &&label_807D4388,
        &&label_807D438C,
        &&label_807D4390,
        &&label_807D4394,
        &&label_807D4398,
        &&label_807D439C,
        &&label_807D43A0,
        &&label_807D43A4,
        &&label_807D43A8,
        &&label_807D43AC,
        &&label_807D43B0,
        &&label_807D43B4,
        &&label_807D43B8,
        &&label_807D43BC,
        &&label_807D43C0,
        &&label_807D43C4,
        &&label_807D43C8,
        &&label_807D43CC,
        &&label_807D43D0,
        &&label_807D43D4,
        &&label_807D43D8,
        &&label_807D43DC,
        &&label_807D43E0,
        &&label_807D43E4,
        &&label_807D43E8,
        &&label_807D43EC,
        &&label_807D43F0,
        &&label_807D43F4,
        &&label_807D43F8,
        &&label_807D43FC,
        &&label_807D4400,
        &&label_807D4404,
        &&label_807D4408,
        &&label_807D440C,
        &&label_807D4410,
        &&label_807D4414,
        &&label_807D4418,
        &&label_807D441C,
        &&label_807D4420,
        &&label_807D4424,
        &&label_807D4428,
        &&label_807D442C,
        &&label_807D4430,
        &&label_807D4434,
        &&label_807D4438,
        &&label_807D443C,
        &&label_807D4440,
        &&label_807D4444,
        &&label_807D4448,
        &&label_807D444C,
        &&label_807D4450,
        &&label_807D4454,
        &&label_807D4458,
        &&label_807D445C,
        &&label_807D4460,
        &&label_807D4464,
        &&label_807D4468,
        &&label_807D446C,
        &&label_807D4470,
        &&label_807D4474,
        &&label_807D4478,
        &&label_807D447C,
        &&label_807D4480,
        &&label_807D4484,
        &&label_807D4488,
        &&label_807D448C,
        &&label_807D4490,
        &&label_807D4494,
        &&label_807D4498,
        &&label_807D449C,
        &&label_807D44A0,
        &&label_807D44A4,
        &&label_807D44A8,
        &&label_807D44AC,
        &&label_807D44B0,
        &&label_807D44B4,
        &&label_807D44B8,
        &&label_807D44BC,
        &&label_807D44C0,
        &&label_807D44C4,
        &&label_807D44C8,
        &&label_807D44CC,
        &&label_807D44D0,
        &&label_807D44D4,
        &&label_807D44D8,
        &&label_807D44DC,
        &&label_807D44E0,
        &&label_807D44E4,
        &&label_807D44E8,
        &&label_807D44EC,
        &&label_807D44F0,
        &&label_807D44F4,
        &&label_807D44F8,
        &&label_807D44FC,
        &&label_807D4500,
        &&label_807D4504,
        &&label_807D4508,
        &&label_807D450C,
        &&label_807D4510,
        &&label_807D4514,
        &&label_807D4518,
        &&label_807D451C,
        &&label_807D4520,
        &&label_807D4524,
        &&label_807D4528,
        &&label_807D452C,
        &&label_807D4530,
        &&label_807D4534,
        &&label_807D4538,
        &&label_807D453C,
        &&label_807D4540,
        &&label_807D4544,
        &&label_807D4548,
        &&label_807D454C,
        &&label_807D4550,
        &&label_807D4554,
        &&label_807D4558,
        &&label_807D455C,
        &&label_807D4560,
        &&label_807D4564,
        &&label_807D4568,
        &&label_807D456C,
        &&label_807D4570,
        &&label_807D4574,
        &&label_807D4578,
        &&label_807D457C,
        &&label_807D4580,
        &&label_807D4584,
        &&label_807D4588,
        &&label_807D458C,
        &&label_807D4590,
        &&label_807D4594,
        &&label_807D4598,
        &&label_807D459C,
        &&label_807D45A0,
        &&label_807D45A4,
        &&label_807D45A8,
        &&label_807D45AC,
        &&label_807D45B0,
        &&label_807D45B4,
        &&label_807D45B8,
        &&label_807D45BC,
        &&label_807D45C0,
        &&label_807D45C4,
        &&label_807D45C8,
        &&label_807D45CC,
        &&label_807D45D0,
        &&label_807D45D4,
        &&label_807D45D8,
        &&label_807D45DC,
        &&label_807D45E0,
        &&label_807D45E4,
        &&label_807D45E8,
        &&label_807D45EC,
        &&label_807D45F0,
        &&label_807D45F4,
        &&label_807D45F8,
        &&label_807D45FC,
        &&label_807D4600,
        &&label_807D4604,
        &&label_807D4608,
        &&label_807D460C,
        &&label_807D4610,
        &&label_807D4614,
        &&label_807D4618,
        &&label_807D461C,
        &&label_807D4620,
        &&label_807D4624,
        &&label_807D4628,
        &&label_807D462C,
        &&label_807D4630,
        &&label_807D4634,
        &&label_807D4638,
        &&label_807D463C,
        &&label_807D4640,
        &&label_807D4644,
        &&label_807D4648,
        &&label_807D464C,
        &&label_807D4650,
        &&label_807D4654,
        &&label_807D4658,
        &&label_807D465C,
        &&label_807D4660,
        &&label_807D4664,
        &&label_807D4668,
        &&label_807D466C,
        &&label_807D4670,
        &&label_807D4674,
        &&label_807D4678,
        &&label_807D467C,
        &&label_807D4680,
        &&label_807D4684,
        &&label_807D4688,
        &&label_807D468C,
        &&label_807D4690,
        &&label_807D4694,
        &&label_807D4698,
        &&label_807D469C,
        &&label_807D46A0,
        &&label_807D46A4,
        &&label_807D46A8,
        &&label_807D46AC,
        &&label_807D46B0,
        &&label_807D46B4,
        &&label_807D46B8,
        &&label_807D46BC,
        &&label_807D46C0,
        &&label_807D46C4,
        &&label_807D46C8,
        &&label_807D46CC,
        &&label_807D46D0,
        &&label_807D46D4,
        &&label_807D46D8,
        &&label_807D46DC,
        &&label_807D46E0,
        &&label_807D46E4,
        &&label_807D46E8,
        &&label_807D46EC,
        &&label_807D46F0,
        &&label_807D46F4,
        &&label_807D46F8,
        &&label_807D46FC,
        &&label_807D4700,
        &&label_807D4704,
        &&label_807D4708,
        &&label_807D470C,
        &&label_807D4710,
        &&label_807D4714,
        &&label_807D4718,
        &&label_807D471C,
        &&label_807D4720,
        &&label_807D4724
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x807D4060u && pc <= 0x807D4724u && ((pc - 0x807D4060u) & 3u) == 0u)
            goto *pc_table_807D4060[(pc - 0x807D4060u) >> 2];
    }
    return;
label_807D4060:
    ctx->pc = 0x807D4060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4060: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4064:
    ctx->pc = 0x807D4064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4064u)) return;
    // 807D4064: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807D4068:
    ctx->pc = 0x807D4068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4068u)) return;
    // 807D4068: b       0x807D4070
    {
            goto label_807D4070;
    }

label_807D406C:
    ctx->pc = 0x807D406Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D406Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D406C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807D4070:
    ctx->pc = 0x807D4070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4070: lwz     r0, 20(r1)
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
label_807D4074:
    ctx->pc = 0x807D4074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4074: lwz     r31, 12(r1)
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
label_807D4078:
    ctx->pc = 0x807D4078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4078: lwz     r30, 8(r1)
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
label_807D407C:
    ctx->pc = 0x807D407Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D407Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D407C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4080:
    ctx->pc = 0x807D4080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4080u)) return;
    // 807D4080: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807D4084:
    ctx->pc = 0x807D4084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4084u)) return;
    // 807D4084: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D4088:
    ctx->pc = 0x807D4088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4088: stwu     r1, -16(r1)
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
label_807D408C:
    ctx->pc = 0x807D408Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D408Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D408C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4090:
    ctx->pc = 0x807D4090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4090: stw     r0, 20(r1)
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
label_807D4094:
    ctx->pc = 0x807D4094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4094: stw     r31, 12(r1)
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
label_807D4098:
    ctx->pc = 0x807D4098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4098: lwz     r31, 44(r3)
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
label_807D409C:
    ctx->pc = 0x807D409Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D409Cu)) return;
    // 807D409C: bl      0x8000DD2C
    {
            ctx->lr = 0x807D40A0u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_807D40A0:
    ctx->pc = 0x807D40A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D40A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D40A0: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40A4:
    ctx->pc = 0x807D40A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40A4u)) return;
    // 807D40A4: rlwinm r3, r3, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_807D40A8:
    ctx->pc = 0x807D40A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40A8u)) return;
    // 807D40A8: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_807D40AC:
    ctx->pc = 0x807D40ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40ACu)) return;
    // 807D40AC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_807D40B0:
    ctx->pc = 0x807D40B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40B0u)) return;
    // 807D40B0: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807D40B4:
    ctx->pc = 0x807D40B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40B4u)) return;
    // 807D40B4: bc    12, 0, 0x807D40BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D40BC;
        }
    }

label_807D40B8:
    ctx->pc = 0x807D40B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D40B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D40B8: addi    r3, r3, -3
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3);

label_807D40BC:
    ctx->pc = 0x807D40BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D40BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D40BC: stw     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40C0:
    ctx->pc = 0x807D40C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D40C0: lwz     r0, 20(r1)
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
label_807D40C4:
    ctx->pc = 0x807D40C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D40C4: lwz     r31, 12(r1)
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
label_807D40C8:
    ctx->pc = 0x807D40C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D40C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D40C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40CC:
    ctx->pc = 0x807D40CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40CCu)) return;
    // 807D40CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807D40D0:
    ctx->pc = 0x807D40D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40D0u)) return;
    // 807D40D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D40D4:
    ctx->pc = 0x807D40D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D40D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807D40D4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40D8:
    ctx->pc = 0x807D40D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807D40D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40DC:
    ctx->pc = 0x807D40DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40DCu)) return;
    // 807D40DC: lis     r5, -28173
    ctx->gpr[5] = ((u32)(s32)(-28173) << 16);

label_807D40E0:
    ctx->pc = 0x807D40E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40E0u)) return;
    // 807D40E0: fneg    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x807D40E0u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_807D40E4:
    ctx->pc = 0x807D40E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D40E4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40E8:
    ctx->pc = 0x807D40E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D40E8: lfs     f0, -2640(r5)
    if (!ppc_fp_available_inline(ctx, 0x807D40E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2640);
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
label_807D40EC:
    ctx->pc = 0x807D40ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D40EC: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40F0:
    ctx->pc = 0x807D40F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40F0u)) return;
    // 807D40F0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_807D40F4:
    ctx->pc = 0x807D40F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D40F4: stw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D40F8:
    ctx->pc = 0x807D40F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40F8u)) return;
    // 807D40F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807D40FC:
    ctx->pc = 0x807D40FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D40FCu)) return;
    // 807D40FC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_807D4100:
    ctx->pc = 0x807D4100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4100: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4104:
    ctx->pc = 0x807D4104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4104: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4104u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4108:
    ctx->pc = 0x807D4108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4108: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D410C:
    ctx->pc = 0x807D410Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D410Cu)) return;
    // 807D410C: bl      0x8004AAF4
    {
            ctx->lr = 0x807D4110u;
            ctx->pc = 0x8004AAF4u;
            return;
    }

label_807D4110:
    ctx->pc = 0x807D4110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807D4110: cmpwi   r31, 0
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

label_807D4114:
    ctx->pc = 0x807D4114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4114u)) return;
    // 807D4114: bc    12, 2, 0x807D4124
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D4124;
        }
    }

label_807D4118:
    ctx->pc = 0x807D4118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D4118: rlwinm r4, r31, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000FFFFu;
    }

label_807D411C:
    ctx->pc = 0x807D411Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D411Cu)) return;
    // 807D411C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_807D4120:
    ctx->pc = 0x807D4120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4120u)) return;
    // 807D4120: bl      0x8004AF5C
    {
            ctx->lr = 0x807D4124u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_807D4124:
    ctx->pc = 0x807D4124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807D4124: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_807D4128:
    ctx->pc = 0x807D4128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4128u)) return;
    // 807D4128: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_807D412C:
    ctx->pc = 0x807D412Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D412Cu)) return;
    // 807D412C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_807D4130:
    ctx->pc = 0x807D4130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4130u)) return;
    // 807D4130: bl      0x8004A5F4
    {
            ctx->lr = 0x807D4134u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_807D4134:
    ctx->pc = 0x807D4134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807D4134: lfs     f1, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D4134u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
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
label_807D4138:
    ctx->pc = 0x807D4138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807D4138: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_807D413C:
    ctx->pc = 0x807D413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D413Cu)) return;
    // 807D413C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807D413Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_807D4140:
    ctx->pc = 0x807D4140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D4140: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D4140u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4144:
    ctx->pc = 0x807D4144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D4144: lfs     f1, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D4144u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_807D4148:
    ctx->pc = 0x807D4148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D4148: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_807D414C:
    ctx->pc = 0x807D414Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D414Cu)) return;
    // 807D414C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807D414Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_807D4150:
    ctx->pc = 0x807D4150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4150: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D4150u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4154:
    ctx->pc = 0x807D4154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4154: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4158:
    ctx->pc = 0x807D4158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4158: lwz     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D415C:
    ctx->pc = 0x807D415Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D415Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D415C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4160:
    ctx->pc = 0x807D4160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D4160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4160: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4164:
    ctx->pc = 0x807D4164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4164u)) return;
    // 807D4164: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_807D4168:
    ctx->pc = 0x807D4168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4168u)) return;
    // 807D4168: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D416C:
    ctx->pc = 0x807D416Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D416Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 807D416C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4170:
    ctx->pc = 0x807D4170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 807D4170: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4174:
    ctx->pc = 0x807D4174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 807D4174: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4178:
    ctx->pc = 0x807D4178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807D4178: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D417C:
    ctx->pc = 0x807D417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D417Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807D417C: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D417Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x807D417Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4180:
    ctx->pc = 0x807D4180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807D4180: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4180u)) return;
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
label_807D4184:
    ctx->pc = 0x807D4184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807D4184: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D4184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x807D4184u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4188:
    ctx->pc = 0x807D4188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807D4188: stw     r31, 28(r1)
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
label_807D418C:
    ctx->pc = 0x807D418Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D418Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807D418C: stw     r30, 24(r1)
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
label_807D4190:
    ctx->pc = 0x807D4190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807D4190: stw     r29, 20(r1)
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
label_807D4194:
    ctx->pc = 0x807D4194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D4194: lwz     r31, 32(r3)
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
label_807D4198:
    ctx->pc = 0x807D4198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4198u)) return;
    // 807D4198: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_807D419C:
    ctx->pc = 0x807D419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D419Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D419C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D419Cu)) return;
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
label_807D41A0:
    ctx->pc = 0x807D41A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D41A0: lfs     f3, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D41A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_807D41A4:
    ctx->pc = 0x807D41A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D41A4: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D41A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_807D41A8:
    ctx->pc = 0x807D41A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D41A8: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D41A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
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
label_807D41AC:
    ctx->pc = 0x807D41ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41ACu)) return;
    // 807D41AC: fsubs   f31, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x807D41ACu)) return;
    ppc_fsubs(ctx, 31, 3, 2);

label_807D41B0:
    ctx->pc = 0x807D41B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D41B0: lwz     r30, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D41B4:
    ctx->pc = 0x807D41B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41B4u)) return;
    // 807D41B4: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807D41B4u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_807D41B8:
    ctx->pc = 0x807D41B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41B8u)) return;
    // 807D41B8: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x807D41B8u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_807D41BC:
    ctx->pc = 0x807D41BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41BCu)) return;
    // 807D41BC: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x807D41BCu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_807D41C0:
    ctx->pc = 0x807D41C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41C0u)) return;
    // 807D41C0: bl      0x80401910
    {
            ctx->lr = 0x807D41C4u;
            ctx->pc = 0x80401910u;
            return;
    }

label_807D41C4:
    ctx->pc = 0x807D41C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D41C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D41C4: neg  r4, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[4] = (~a) + 1u;
    }

label_807D41C8:
    ctx->pc = 0x807D41C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D41C8: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D41CC:
    ctx->pc = 0x807D41CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41CCu)) return;
    // 807D41CC: bl      0x8048EBE4
    {
            ctx->lr = 0x807D41D0u;
            ctx->pc = 0x8048EBE4u;
            return;
    }

label_807D41D0:
    ctx->pc = 0x807D41D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D41D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D41D0: neg  r4, r29
    {
        u32 a = ctx->gpr[29];
        ctx->gpr[4] = (~a) + 1u;
    }

label_807D41D4:
    ctx->pc = 0x807D41D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41D4u)) return;
    // 807D41D4: cmpw    r3, r4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807D41D8:
    ctx->pc = 0x807D41D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41D8u)) return;
    // 807D41D8: bc    4, 0, 0x807D41E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807D41E0;
        }
    }

label_807D41DC:
    ctx->pc = 0x807D41DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D41DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D41DC: b       0x807D41F0
    {
            goto label_807D41F0;
    }

label_807D41E0:
    ctx->pc = 0x807D41E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D41E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807D41E0: cmpw    r3, r29
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807D41E4:
    ctx->pc = 0x807D41E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41E4u)) return;
    // 807D41E4: bc    4, 1, 0x807D41EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807D41EC;
        }
    }

label_807D41E8:
    ctx->pc = 0x807D41E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D41E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D41E8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D41EC:
    ctx->pc = 0x807D41ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D41ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D41EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807D41F0:
    ctx->pc = 0x807D41F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D41F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 807D41F0: fmuls   f0, f30, f30
    if (!ppc_fp_available_inline(ctx, 0x807D41F0u)) return;
    ppc_fmuls(ctx, 0, 30, 30);

label_807D41F4:
    ctx->pc = 0x807D41F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807D41F4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D41F8:
    ctx->pc = 0x807D41F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41F8u)) return;
    // 807D41F8: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_807D41FC:
    ctx->pc = 0x807D41FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D41FCu)) return;
    // 807D41FC: fmadds f0, f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x807D41FCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[31], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_807D4200:
    ctx->pc = 0x807D4200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807D4200: stw     r0, 24(r31)
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
label_807D4204:
    ctx->pc = 0x807D4204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807D4204: stfs     f0, 100(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D4204u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4208:
    ctx->pc = 0x807D4208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D4208: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D4208u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x807D4208u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D420C:
    ctx->pc = 0x807D420Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D420Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D420C: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D420Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4210:
    ctx->pc = 0x807D4210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D4210: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D4210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x807D4210u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4214:
    ctx->pc = 0x807D4214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D4214: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4214u)) return;
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
label_807D4218:
    ctx->pc = 0x807D4218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4218: lwz     r31, 28(r1)
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
label_807D421C:
    ctx->pc = 0x807D421Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D421Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D421C: lwz     r30, 24(r1)
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
label_807D4220:
    ctx->pc = 0x807D4220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4220: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4224:
    ctx->pc = 0x807D4224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4224: lwz     r29, 20(r1)
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
label_807D4228:
    ctx->pc = 0x807D4228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D4228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4228: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D422C:
    ctx->pc = 0x807D422Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D422Cu)) return;
    // 807D422C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_807D4230:
    ctx->pc = 0x807D4230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4230u)) return;
    // 807D4230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D4234:
    ctx->pc = 0x807D4234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 807D4234: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_807D4238:
    ctx->pc = 0x807D4238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807D4238: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D423C:
    ctx->pc = 0x807D423Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D423Cu)) return;
    // 807D423C: addi    r3, r4, -14944
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-14944);

label_807D4240:
    ctx->pc = 0x807D4240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807D4240: lwz     r3, 0(r3)
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
label_807D4244:
    ctx->pc = 0x807D4244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D4244: lfs     f2, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x807D4244u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
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
label_807D4248:
    ctx->pc = 0x807D4248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D4248: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D4248u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_807D424C:
    ctx->pc = 0x807D424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D424Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D424C: lfs     f3, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x807D424Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
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
label_807D4250:
    ctx->pc = 0x807D4250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4250u)) return;
    // 807D4250: fsubs   f4, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x807D4250u)) return;
    ppc_fsubs(ctx, 4, 2, 0);

label_807D4254:
    ctx->pc = 0x807D4254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4254: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D4254u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_807D4258:
    ctx->pc = 0x807D4258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4258u)) return;
    // 807D4258: fsubs   f2, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x807D4258u)) return;
    ppc_fsubs(ctx, 2, 3, 0);

label_807D425C:
    ctx->pc = 0x807D425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D425Cu)) return;
    // 807D425C: fmuls   f0, f4, f4
    if (!ppc_fp_available_inline(ctx, 0x807D425Cu)) return;
    ppc_fmuls(ctx, 0, 4, 4);

label_807D4260:
    ctx->pc = 0x807D4260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4260u)) return;
    // 807D4260: fmadds f0, f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x807D4260u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_807D4264:
    ctx->pc = 0x807D4264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4264u)) return;
    // 807D4264: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x807D4264u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_807D4268:
    ctx->pc = 0x807D4268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4268u)) return;
    // 807D4268: mfcr    r0
    ctx->gpr[0] = ctx->cr;

label_807D426C:
    ctx->pc = 0x807D426Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D426Cu)) return;
    // 807D426C: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_807D4270:
    ctx->pc = 0x807D4270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4270u)) return;
    // 807D4270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D4274:
    ctx->pc = 0x807D4274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 807D4274: stwu     r1, -32(r1)
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
label_807D4278:
    ctx->pc = 0x807D4278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 807D4278: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D427C:
    ctx->pc = 0x807D427Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D427Cu)) return;
    // 807D427C: lis     r4, -28173
    ctx->gpr[4] = ((u32)(s32)(-28173) << 16);

label_807D4280:
    ctx->pc = 0x807D4280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807D4280: stw     r0, 36(r1)
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
label_807D4284:
    ctx->pc = 0x807D4284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4284u)) return;
    // 807D4284: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_807D4288:
    ctx->pc = 0x807D4288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807D4288: lfd     f2, -2624(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D4288u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2624);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D428C:
    ctx->pc = 0x807D428Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D428Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807D428C: stw     r31, 28(r1)
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
label_807D4290:
    ctx->pc = 0x807D4290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807D4290: lwz     r31, 44(r3)
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
label_807D4294:
    ctx->pc = 0x807D4294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4294u)) return;
    // 807D4294: lis     r3, -28173
    ctx->gpr[3] = ((u32)(s32)(-28173) << 16);

label_807D4298:
    ctx->pc = 0x807D4298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807D4298: stw     r0, 8(r1)
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
label_807D429C:
    ctx->pc = 0x807D429Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D429Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D429C: lwz     r5, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42A0:
    ctx->pc = 0x807D42A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D42A0: lfd     f1, -2656(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D42A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2656);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42A4:
    ctx->pc = 0x807D42A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42A4u)) return;
    // 807D42A4: addi    r0, r5, 1706
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1706);

label_807D42A8:
    ctx->pc = 0x807D42A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D42A8: stw     r0, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42AC:
    ctx->pc = 0x807D42ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D42AC: lwz     r0, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42B0:
    ctx->pc = 0x807D42B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42B0u)) return;
    // 807D42B0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_807D42B4:
    ctx->pc = 0x807D42B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D42B4: stw     r0, 12(r1)
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
label_807D42B8:
    ctx->pc = 0x807D42B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D42B8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D42B8u)) return;
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
label_807D42BC:
    ctx->pc = 0x807D42BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42BCu)) return;
    // 807D42BC: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x807D42BCu)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_807D42C0:
    ctx->pc = 0x807D42C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42C0u)) return;
    // 807D42C0: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x807D42C0u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_807D42C4:
    ctx->pc = 0x807D42C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42C4u)) return;
    // 807D42C4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x807D42C4u)) return;
    ppc_frsp(ctx, 1, 1);

label_807D42C8:
    ctx->pc = 0x807D42C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42C8u)) return;
    // 807D42C8: bl      0x80014034
    {
            ctx->lr = 0x807D42CCu;
            ctx->pc = 0x80014034u;
            return;
    }

label_807D42CC:
    ctx->pc = 0x807D42CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D42CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 807D42CC: frsp    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x807D42CCu)) return;
    ppc_frsp(ctx, 0, 1);

label_807D42D0:
    ctx->pc = 0x807D42D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D42D0: stfs     f0, 216(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D42D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42D4:
    ctx->pc = 0x807D42D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D42D4: lwz     r0, 36(r1)
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
label_807D42D8:
    ctx->pc = 0x807D42D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D42D8: lwz     r31, 28(r1)
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
label_807D42DC:
    ctx->pc = 0x807D42DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D42DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D42DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42E0:
    ctx->pc = 0x807D42E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42E0u)) return;
    // 807D42E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_807D42E4:
    ctx->pc = 0x807D42E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42E4u)) return;
    // 807D42E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D42E8:
    ctx->pc = 0x807D42E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D42E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D42E8: lwz     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42EC:
    ctx->pc = 0x807D42ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42ECu)) return;
    // 807D42EC: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_807D42F0:
    ctx->pc = 0x807D42F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D42F0: stw     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42F4:
    ctx->pc = 0x807D42F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D42F4: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42F8:
    ctx->pc = 0x807D42F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D42F8: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D42FC:
    ctx->pc = 0x807D42FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D42FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D42FC: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4300:
    ctx->pc = 0x807D4300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4300u)) return;
    // 807D4300: rlwinm r0, r0, 0, 30, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF3u;
    }

label_807D4304:
    ctx->pc = 0x807D4304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4304u)) return;
    // 807D4304: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_807D4308:
    ctx->pc = 0x807D4308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4308: stb     r0, 3(r3)
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
label_807D430C:
    ctx->pc = 0x807D430Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D430Cu)) return;
    // 807D430C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D4310:
    ctx->pc = 0x807D4310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D4310: lwz     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4314:
    ctx->pc = 0x807D4314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4314u)) return;
    // 807D4314: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_807D4318:
    ctx->pc = 0x807D4318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4318: stw     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D431C:
    ctx->pc = 0x807D431Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D431Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D431C: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4320:
    ctx->pc = 0x807D4320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4320: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4324:
    ctx->pc = 0x807D4324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4324: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4328:
    ctx->pc = 0x807D4328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4328u)) return;
    // 807D4328: rlwinm r0, r0, 0, 30, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF3u;
    }

label_807D432C:
    ctx->pc = 0x807D432Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D432Cu)) return;
    // 807D432C: ori     r0, r0, 0x000C
    ctx->gpr[0] = ctx->gpr[0] | 0x000Cu;

label_807D4330:
    ctx->pc = 0x807D4330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4330: stb     r0, 3(r3)
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
label_807D4334:
    ctx->pc = 0x807D4334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4334u)) return;
    // 807D4334: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D4338:
    ctx->pc = 0x807D4338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807D4338: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D433C:
    ctx->pc = 0x807D433Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D433Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807D433C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4340:
    ctx->pc = 0x807D4340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807D4340: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4344:
    ctx->pc = 0x807D4344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807D4344: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4348:
    ctx->pc = 0x807D4348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807D4348: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D4348u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x807D4348u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D434C:
    ctx->pc = 0x807D434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D434Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807D434C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D434Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4350:
    ctx->pc = 0x807D4350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807D4350: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D4350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x807D4350u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4354:
    ctx->pc = 0x807D4354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D4354: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4358:
    ctx->pc = 0x807D4358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D4358: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D4358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x807D4358u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D435C:
    ctx->pc = 0x807D435Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D435Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D435C: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4360:
    ctx->pc = 0x807D4360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D4360: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4364:
    ctx->pc = 0x807D4364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4364: stw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4368:
    ctx->pc = 0x807D4368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4368: lwz     r31, 44(r3)
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
label_807D436C:
    ctx->pc = 0x807D436Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D436Cu)) return;
    // 807D436C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807D4370:
    ctx->pc = 0x807D4370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4370: lwz     r29, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4374:
    ctx->pc = 0x807D4374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4374: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4378:
    ctx->pc = 0x807D4378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4378: lwz     r4, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D437C:
    ctx->pc = 0x807D437Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D437Cu)) return;
    // 807D437C: rlwinm. r0, r0, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_807D4380:
    ctx->pc = 0x807D4380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4380u)) return;
    // 807D4380: bc    12, 2, 0x807D438C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D438C;
        }
    }

label_807D4384:
    ctx->pc = 0x807D4384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D4384: bl      0x80583EB8
    {
            ctx->lr = 0x807D4388u;
            ctx->pc = 0x80583EB8u;
            return;
    }

label_807D4388:
    ctx->pc = 0x807D4388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D4388: b       0x807D44F4
    {
            goto label_807D44F4;
    }

label_807D438C:
    ctx->pc = 0x807D438Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D438Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D438C: lha     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4390:
    ctx->pc = 0x807D4390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4390u)) return;
    // 807D4390: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_807D4394:
    ctx->pc = 0x807D4394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4394u)) return;
    // 807D4394: bc    12, 2, 0x807D44F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D44F4;
        }
    }

label_807D4398:
    ctx->pc = 0x807D4398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4398: lbz     r0, 0(r29)
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
label_807D439C:
    ctx->pc = 0x807D439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D439Cu)) return;
    // 807D439C: cmpwi   r0, 6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807D43A0:
    ctx->pc = 0x807D43A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43A0u)) return;
    // 807D43A0: bc    12, 2, 0x807D44F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D44F4;
        }
    }

label_807D43A4:
    ctx->pc = 0x807D43A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D43A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D43A4: lwz     r3, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D43A8:
    ctx->pc = 0x807D43A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43A8u)) return;
    // 807D43A8: bl      0x8058405C
    {
            ctx->lr = 0x807D43ACu;
            ctx->pc = 0x8058405Cu;
            return;
    }

label_807D43AC:
    ctx->pc = 0x807D43ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D43ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807D43AC: cmplwi  r3, 0x0000
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

label_807D43B0:
    ctx->pc = 0x807D43B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43B0u)) return;
    // 807D43B0: bc    12, 2, 0x807D43E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D43E4;
        }
    }

label_807D43B4:
    ctx->pc = 0x807D43B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D43B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D43B4: lwz     r4, 32(r3)
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
label_807D43B8:
    ctx->pc = 0x807D43B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D43B8: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D43B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_807D43BC:
    ctx->pc = 0x807D43BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D43BC: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D43BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D43C0:
    ctx->pc = 0x807D43C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D43C0: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D43C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_807D43C4:
    ctx->pc = 0x807D43C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D43C4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D43C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D43C8:
    ctx->pc = 0x807D43C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D43C8: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D43C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_807D43CC:
    ctx->pc = 0x807D43CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D43CC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D43CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D43D0:
    ctx->pc = 0x807D43D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D43D0: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D43D4:
    ctx->pc = 0x807D43D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D43D4: lfs     f31, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D43D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_807D43D8:
    ctx->pc = 0x807D43D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D43D8: lfs     f30, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D43D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
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
label_807D43DC:
    ctx->pc = 0x807D43DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D43DC: lfs     f29, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D43DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
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
label_807D43E0:
    ctx->pc = 0x807D43E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43E0u)) return;
    // 807D43E0: b       0x807D440C
    {
            goto label_807D440C;
    }

label_807D43E4:
    ctx->pc = 0x807D43E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D43E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D43E4: lfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x807D43E4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
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
label_807D43E8:
    ctx->pc = 0x807D43E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43E8u)) return;
    // 807D43E8: lis     r3, -28173
    ctx->gpr[3] = ((u32)(s32)(-28173) << 16);

label_807D43EC:
    ctx->pc = 0x807D43ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D43EC: lfs     f29, -2640(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D43ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2640);
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
label_807D43F0:
    ctx->pc = 0x807D43F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D43F0: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D43F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D43F4:
    ctx->pc = 0x807D43F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43F4u)) return;
    // 807D43F4: fmr    f30, f29
    if (!ppc_fp_available_inline(ctx, 0x807D43F4u)) return;
    ctx->fpr[30] = ctx->fpr[29];

label_807D43F8:
    ctx->pc = 0x807D43F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D43F8: lfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x807D43F8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_807D43FC:
    ctx->pc = 0x807D43FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D43FCu)) return;
    // 807D43FC: fmr    f31, f29
    if (!ppc_fp_available_inline(ctx, 0x807D43FCu)) return;
    ctx->fpr[31] = ctx->fpr[29];

label_807D4400:
    ctx->pc = 0x807D4400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4400: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4404:
    ctx->pc = 0x807D4404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4404: lfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x807D4404u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
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
label_807D4408:
    ctx->pc = 0x807D4408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807D4408: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D440C:
    ctx->pc = 0x807D440Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D440Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D440C: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4410:
    ctx->pc = 0x807D4410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4410u)) return;
    // 807D4410: li      r3, 155
    ctx->gpr[3] = (u32)(s32)(155);

label_807D4414:
    ctx->pc = 0x807D4414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4414u)) return;
    // 807D4414: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807D4418:
    ctx->pc = 0x807D4418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4418u)) return;
    // 807D4418: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_807D441C:
    ctx->pc = 0x807D441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D441Cu)) return;
    // 807D441C: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_807D4420:
    ctx->pc = 0x807D4420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4420u)) return;
    // 807D4420: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807D4424:
    ctx->pc = 0x807D4424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4424: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4428:
    ctx->pc = 0x807D4428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4428u)) return;
    // 807D4428: bl      0x8050A480
    {
            ctx->lr = 0x807D442Cu;
            ctx->pc = 0x8050A480u;
            return;
    }

label_807D442C:
    ctx->pc = 0x807D442Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D442Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807D442C: lis     r4, -28173
    ctx->gpr[4] = ((u32)(s32)(-28173) << 16);

label_807D4430:
    ctx->pc = 0x807D4430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4430u)) return;
    // 807D4430: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_807D4434:
    ctx->pc = 0x807D4434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4434: lfs     f1, -2532(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D4434u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2532);
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
label_807D4438:
    ctx->pc = 0x807D4438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4438u)) return;
    // 807D4438: bl      0x805838CC
    {
            ctx->lr = 0x807D443Cu;
            ctx->pc = 0x805838CCu;
            return;
    }

label_807D443C:
    ctx->pc = 0x807D443Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D443Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807D443C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807D4440:
    ctx->pc = 0x807D4440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4440u)) return;
    // 807D4440: bl      0x80583F98
    {
            ctx->lr = 0x807D4444u;
            ctx->pc = 0x80583F98u;
            return;
    }

label_807D4444:
    ctx->pc = 0x807D4444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 807D4444: lis     r4, -28173
    ctx->gpr[4] = ((u32)(s32)(-28173) << 16);

label_807D4448:
    ctx->pc = 0x807D4448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4448u)) return;
    // 807D4448: lis     r3, -28173
    ctx->gpr[3] = ((u32)(s32)(-28173) << 16);

label_807D444C:
    ctx->pc = 0x807D444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D444Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D444C: lfs     f2, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D444Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
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
label_807D4450:
    ctx->pc = 0x807D4450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4450: lfs     f1, -2660(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D4450u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2660);
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
label_807D4454:
    ctx->pc = 0x807D4454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4454: lfs     f0, -2640(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D4454u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2640);
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
label_807D4458:
    ctx->pc = 0x807D4458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4458u)) return;
    // 807D4458: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x807D4458u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_807D445C:
    ctx->pc = 0x807D445Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D445Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D445C: stfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D445Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4460:
    ctx->pc = 0x807D4460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4460: lfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D4460u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
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
label_807D4464:
    ctx->pc = 0x807D4464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4464u)) return;
    // 807D4464: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807D4464u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807D4468:
    ctx->pc = 0x807D4468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4468u)) return;
    // 807D4468: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807D446C:
    ctx->pc = 0x807D446Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D446Cu)) return;
    // 807D446C: bc    4, 2, 0x807D44A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807D44A4;
        }
    }

label_807D4470:
    ctx->pc = 0x807D4470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4470: lwz     r3, 32(r30)
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
label_807D4474:
    ctx->pc = 0x807D4474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4474: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4478:
    ctx->pc = 0x807D4478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4478u)) return;
    // 807D4478: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807D447C:
    ctx->pc = 0x807D447Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D447Cu)) return;
    // 807D447C: bc    12, 2, 0x807D44F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D44F4;
        }
    }

label_807D4480:
    ctx->pc = 0x807D4480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D4480: lwz     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4484:
    ctx->pc = 0x807D4484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4484u)) return;
    // 807D4484: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_807D4488:
    ctx->pc = 0x807D4488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4488: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D448C:
    ctx->pc = 0x807D448Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D448Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D448C: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4490:
    ctx->pc = 0x807D4490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4490: lwz     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4494:
    ctx->pc = 0x807D4494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4494: lbz     r0, 0(r4)
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
label_807D4498:
    ctx->pc = 0x807D4498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4498u)) return;
    // 807D4498: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_807D449C:
    ctx->pc = 0x807D449Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D449Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D449C: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44A0:
    ctx->pc = 0x807D44A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44A0u)) return;
    // 807D44A0: b       0x807D44F4
    {
            goto label_807D44F4;
    }

label_807D44A4:
    ctx->pc = 0x807D44A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D44A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D44A4: lwz     r3, 32(r30)
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
label_807D44A8:
    ctx->pc = 0x807D44A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D44A8: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44AC:
    ctx->pc = 0x807D44ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44ACu)) return;
    // 807D44AC: cmpwi   r0, 6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807D44B0:
    ctx->pc = 0x807D44B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44B0u)) return;
    // 807D44B0: bc    12, 2, 0x807D44D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D44D4;
        }
    }

label_807D44B4:
    ctx->pc = 0x807D44B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D44B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D44B4: lwz     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44B8:
    ctx->pc = 0x807D44B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44B8u)) return;
    // 807D44B8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_807D44BC:
    ctx->pc = 0x807D44BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D44BC: stw     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44C0:
    ctx->pc = 0x807D44C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D44C0: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44C4:
    ctx->pc = 0x807D44C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D44C4: lwz     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44C8:
    ctx->pc = 0x807D44C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D44C8: lbz     r0, 0(r4)
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
label_807D44CC:
    ctx->pc = 0x807D44CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44CCu)) return;
    // 807D44CC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_807D44D0:
    ctx->pc = 0x807D44D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807D44D0: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44D4:
    ctx->pc = 0x807D44D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D44D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 807D44D4: lis     r3, -28173
    ctx->gpr[3] = ((u32)(s32)(-28173) << 16);

label_807D44D8:
    ctx->pc = 0x807D44D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D44D8: lfs     f0, -2528(r3)
    if (!ppc_fp_available_inline(ctx, 0x807D44D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2528);
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
label_807D44DC:
    ctx->pc = 0x807D44DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44DCu)) return;
    // 807D44DC: fmuls   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x807D44DCu)) return;
    ppc_fmuls(ctx, 2, 0, 31);

label_807D44E0:
    ctx->pc = 0x807D44E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44E0u)) return;
    // 807D44E0: fmuls   f1, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x807D44E0u)) return;
    ppc_fmuls(ctx, 1, 0, 30);

label_807D44E4:
    ctx->pc = 0x807D44E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44E4u)) return;
    // 807D44E4: fmuls   f0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x807D44E4u)) return;
    ppc_fmuls(ctx, 0, 0, 29);

label_807D44E8:
    ctx->pc = 0x807D44E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D44E8: stfs     f2, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D44E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44EC:
    ctx->pc = 0x807D44ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D44EC: stfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D44ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44F0:
    ctx->pc = 0x807D44F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807D44F0: stfs     f0, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x807D44F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44F4:
    ctx->pc = 0x807D44F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D44F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807D44F4: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D44F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x807D44F4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44F8:
    ctx->pc = 0x807D44F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807D44F8: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D44F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D44FC:
    ctx->pc = 0x807D44FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D44FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D44FC: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D44FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x807D44FCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4500:
    ctx->pc = 0x807D4500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D4500: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4500u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4504:
    ctx->pc = 0x807D4504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D4504: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807D4504u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x807D4504u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4508:
    ctx->pc = 0x807D4508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D4508: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x807D4508u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D450C:
    ctx->pc = 0x807D450Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D450Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D450C: lwz     r31, 44(r1)
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
label_807D4510:
    ctx->pc = 0x807D4510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4510: lwz     r30, 40(r1)
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
label_807D4514:
    ctx->pc = 0x807D4514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4514: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4518:
    ctx->pc = 0x807D4518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4518: lwz     r29, 36(r1)
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
label_807D451C:
    ctx->pc = 0x807D451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D451Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D451C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4520:
    ctx->pc = 0x807D4520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4520u)) return;
    // 807D4520: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_807D4524:
    ctx->pc = 0x807D4524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4524u)) return;
    // 807D4524: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D4528:
    ctx->pc = 0x807D4528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807D4528: stwu     r1, -16(r1)
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
label_807D452C:
    ctx->pc = 0x807D452Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D452Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D452C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4530:
    ctx->pc = 0x807D4530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D4530: stw     r0, 20(r1)
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
label_807D4534:
    ctx->pc = 0x807D4534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4534: stw     r31, 12(r1)
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
label_807D4538:
    ctx->pc = 0x807D4538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4538: stw     r30, 8(r1)
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
label_807D453C:
    ctx->pc = 0x807D453Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D453Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D453C: lwz     r31, 32(r3)
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
label_807D4540:
    ctx->pc = 0x807D4540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4540: lwz     r30, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4544:
    ctx->pc = 0x807D4544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4544: lbz     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4548:
    ctx->pc = 0x807D4548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4548u)) return;
    // 807D4548: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_807D454C:
    ctx->pc = 0x807D454Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D454Cu)) return;
    // 807D454C: cmpwi   r0, -1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807D4550:
    ctx->pc = 0x807D4550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4550u)) return;
    // 807D4550: bc    12, 2, 0x807D4560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D4560;
        }
    }

label_807D4554:
    ctx->pc = 0x807D4554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D4554: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_807D4558:
    ctx->pc = 0x807D4558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4558: stb     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D455C:
    ctx->pc = 0x807D455Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D455Cu)) return;
    // 807D455C: bl      0x807D1B28
    {
            ctx->lr = 0x807D4560u;
            ctx->pc = 0x807D1B28u;
            return;
    }

label_807D4560:
    ctx->pc = 0x807D4560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807D4560: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_807D4564:
    ctx->pc = 0x807D4564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4564u)) return;
    // 807D4564: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_807D4568:
    ctx->pc = 0x807D4568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4568: sth     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D456C:
    ctx->pc = 0x807D456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D456Cu)) return;
    // 807D456C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807D4570:
    ctx->pc = 0x807D4570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4570u)) return;
    // 807D4570: bl      0x80407904
    {
            ctx->lr = 0x807D4574u;
            ctx->pc = 0x80407904u;
            return;
    }

label_807D4574:
    ctx->pc = 0x807D4574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4574: lwz     r0, 20(r1)
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
label_807D4578:
    ctx->pc = 0x807D4578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4578: lwz     r31, 12(r1)
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
label_807D457C:
    ctx->pc = 0x807D457Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D457Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D457C: lwz     r30, 8(r1)
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
label_807D4580:
    ctx->pc = 0x807D4580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D4580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4580: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4584:
    ctx->pc = 0x807D4584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4584u)) return;
    // 807D4584: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807D4588:
    ctx->pc = 0x807D4588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4588u)) return;
    // 807D4588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

label_807D458C:
    ctx->pc = 0x807D458Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D458Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807D458C: stwu     r1, -32(r1)
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
label_807D4590:
    ctx->pc = 0x807D4590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D4590: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4594:
    ctx->pc = 0x807D4594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4594u)) return;
    // 807D4594: lis     r4, -28132
    ctx->gpr[4] = ((u32)(s32)(-28132) << 16);

label_807D4598:
    ctx->pc = 0x807D4598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807D4598: stw     r0, 36(r1)
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
label_807D459C:
    ctx->pc = 0x807D459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D459Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D459C: stw     r31, 28(r1)
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
label_807D45A0:
    ctx->pc = 0x807D45A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45A0u)) return;
    // 807D45A0: addi    r31, r4, -13560
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-13560);

label_807D45A4:
    ctx->pc = 0x807D45A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D45A4: stw     r30, 24(r1)
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
label_807D45A8:
    ctx->pc = 0x807D45A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D45A8: stw     r29, 20(r1)
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
label_807D45AC:
    ctx->pc = 0x807D45ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D45AC: stw     r28, 16(r1)
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
label_807D45B0:
    ctx->pc = 0x807D45B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45B0u)) return;
    // 807D45B0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807D45B4:
    ctx->pc = 0x807D45B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D45B4: lwz     r29, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D45B8:
    ctx->pc = 0x807D45B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D45B8: lwz     r30, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D45BC:
    ctx->pc = 0x807D45BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45BCu)) return;
    // 807D45BC: bl      0x8044757C
    {
            ctx->lr = 0x807D45C0u;
            ctx->pc = 0x8044757Cu;
            return;
    }

label_807D45C0:
    ctx->pc = 0x807D45C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D45C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807D45C0: cmplwi  r3, 0x0000
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

label_807D45C4:
    ctx->pc = 0x807D45C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45C4u)) return;
    // 807D45C4: bc    12, 2, 0x807D4634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807D4634;
        }
    }

label_807D45C8:
    ctx->pc = 0x807D45C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D45C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D45C8: lwz     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D45CC:
    ctx->pc = 0x807D45CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45CCu)) return;
    // 807D45CC: cmplwi  r0, 0x0000
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

label_807D45D0:
    ctx->pc = 0x807D45D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45D0u)) return;
    // 807D45D0: bc    4, 2, 0x807D461C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807D461C;
        }
    }

label_807D45D4:
    ctx->pc = 0x807D45D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D45D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807D45D4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_807D45D8:
    ctx->pc = 0x807D45D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45D8u)) return;
    // 807D45D8: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_807D45DC:
    ctx->pc = 0x807D45DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45DCu)) return;
    // 807D45DC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_807D45E0:
    ctx->pc = 0x807D45E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45E0u)) return;
    // 807D45E0: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_807D45E4:
    ctx->pc = 0x807D45E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45E4u)) return;
    // 807D45E4: bl      0x8041E63C
    {
            ctx->lr = 0x807D45E8u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_807D45E8:
    ctx->pc = 0x807D45E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D45E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D45E8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_807D45EC:
    ctx->pc = 0x807D45ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45ECu)) return;
    // 807D45EC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D45F0:
    ctx->pc = 0x807D45F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45F0u)) return;
    // 807D45F0: bl      0x804551B4
    {
            ctx->lr = 0x807D45F4u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_807D45F4:
    ctx->pc = 0x807D45F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D45F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D45F4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D45F8:
    ctx->pc = 0x807D45F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45F8u)) return;
    // 807D45F8: li      r4, 220
    ctx->gpr[4] = (u32)(s32)(220);

label_807D45FC:
    ctx->pc = 0x807D45FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D45FCu)) return;
    // 807D45FC: bl      0x804081FC
    {
            ctx->lr = 0x807D4600u;
            ctx->pc = 0x804081FCu;
            return;
    }

label_807D4600:
    ctx->pc = 0x807D4600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 807D4600: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807D4604:
    ctx->pc = 0x807D4604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4604u)) return;
    // 807D4604: addi    r0, r31, 156
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(156);

label_807D4608:
    ctx->pc = 0x807D4608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4608: sth     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D460C:
    ctx->pc = 0x807D460Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D460Cu)) return;
    // 807D460C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807D4610:
    ctx->pc = 0x807D4610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D4610: sth     r4, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4614:
    ctx->pc = 0x807D4614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4614: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4618:
    ctx->pc = 0x807D4618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807D4618: stw     r30, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D461C:
    ctx->pc = 0x807D461Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D461Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D461C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D4620:
    ctx->pc = 0x807D4620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4620u)) return;
    // 807D4620: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807D4624:
    ctx->pc = 0x807D4624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4624u)) return;
    // 807D4624: bl      0x80407904
    {
            ctx->lr = 0x807D4628u;
            ctx->pc = 0x80407904u;
            return;
    }

label_807D4628:
    ctx->pc = 0x807D4628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807D4628: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_807D462C:
    ctx->pc = 0x807D462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D462Cu)) return;
    // 807D462C: bl      0x807D152C
    {
            ctx->lr = 0x807D4630u;
            ctx->pc = 0x807D152Cu;
            return;
    }

label_807D4630:
    ctx->pc = 0x807D4630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807D4630: b       0x807D4708
    {
            goto label_807D4708;
    }

label_807D4634:
    ctx->pc = 0x807D4634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807D4634: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_807D4638:
    ctx->pc = 0x807D4638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4638u)) return;
    // 807D4638: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_807D463C:
    ctx->pc = 0x807D463Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D463Cu)) return;
    // 807D463C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_807D4640:
    ctx->pc = 0x807D4640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4640u)) return;
    // 807D4640: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_807D4644:
    ctx->pc = 0x807D4644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4644u)) return;
    // 807D4644: bl      0x8041E63C
    {
            ctx->lr = 0x807D4648u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_807D4648:
    ctx->pc = 0x807D4648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D4648: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_807D464C:
    ctx->pc = 0x807D464Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D464Cu)) return;
    // 807D464C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D4650:
    ctx->pc = 0x807D4650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4650u)) return;
    // 807D4650: bl      0x804551B4
    {
            ctx->lr = 0x807D4654u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_807D4654:
    ctx->pc = 0x807D4654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807D4654: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D4658:
    ctx->pc = 0x807D4658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4658u)) return;
    // 807D4658: li      r4, 220
    ctx->gpr[4] = (u32)(s32)(220);

label_807D465C:
    ctx->pc = 0x807D465Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D465Cu)) return;
    // 807D465C: bl      0x804081FC
    {
            ctx->lr = 0x807D4660u;
            ctx->pc = 0x804081FCu;
            return;
    }

label_807D4660:
    ctx->pc = 0x807D4660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 807D4660: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_807D4664:
    ctx->pc = 0x807D4664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4664u)) return;
    // 807D4664: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807D4668:
    ctx->pc = 0x807D4668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D4668: sth     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D466C:
    ctx->pc = 0x807D466Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D466Cu)) return;
    // 807D466C: addi    r0, r31, 156
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(156);

label_807D4670:
    ctx->pc = 0x807D4670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4670u)) return;
    // 807D4670: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D4674:
    ctx->pc = 0x807D4674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4674u)) return;
    // 807D4674: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807D4678:
    ctx->pc = 0x807D4678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D4678: sth     r5, 10(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D467C:
    ctx->pc = 0x807D467Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D467Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D467C: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4680:
    ctx->pc = 0x807D4680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4680: stw     r30, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4684:
    ctx->pc = 0x807D4684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4684u)) return;
    // 807D4684: bl      0x80407904
    {
            ctx->lr = 0x807D4688u;
            ctx->pc = 0x80407904u;
            return;
    }

label_807D4688:
    ctx->pc = 0x807D4688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 32u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 32u : 1u;
    // 807D4688: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_807D468C:
    ctx->pc = 0x807D468Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D468Cu)) return;
    // 807D468C: lis     r3, -28173
    ctx->gpr[3] = ((u32)(s32)(-28173) << 16);

label_807D4690:
    ctx->pc = 0x807D4690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 807D4690: stw     r9, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4694:
    ctx->pc = 0x807D4694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4694u)) return;
    // 807D4694: addi    r4, r3, -2644
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2644);

label_807D4698:
    ctx->pc = 0x807D4698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4698u)) return;
    // 807D4698: lis     r7, -28619
    ctx->gpr[7] = ((u32)(s32)(-28619) << 16);

label_807D469C:
    ctx->pc = 0x807D469Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D469Cu)) return;
    // 807D469C: lis     r3, -28173
    ctx->gpr[3] = ((u32)(s32)(-28173) << 16);

label_807D46A0:
    ctx->pc = 0x807D46A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 807D46A0: stw     r9, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46A4:
    ctx->pc = 0x807D46A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46A4u)) return;
    // 807D46A4: addi    r6, r3, -2640
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-2640);

label_807D46A8:
    ctx->pc = 0x807D46A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 807D46A8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x807D46A8u)) return;
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
label_807D46AC:
    ctx->pc = 0x807D46ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46ACu)) return;
    // 807D46AC: lis     r5, -32643
    ctx->gpr[5] = ((u32)(s32)(-32643) << 16);

label_807D46B0:
    ctx->pc = 0x807D46B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46B0u)) return;
    // 807D46B0: lis     r4, -32643
    ctx->gpr[4] = ((u32)(s32)(-32643) << 16);

label_807D46B4:
    ctx->pc = 0x807D46B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46B4u)) return;
    // 807D46B4: lis     r3, -32643
    ctx->gpr[3] = ((u32)(s32)(-32643) << 16);

label_807D46B8:
    ctx->pc = 0x807D46B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 807D46B8: stfs     f1, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D46B8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46BC:
    ctx->pc = 0x807D46BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46BCu)) return;
    // 807D46BC: addi    r8, r7, 27892
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(27892);

label_807D46C0:
    ctx->pc = 0x807D46C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46C0u)) return;
    // 807D46C0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_807D46C4:
    ctx->pc = 0x807D46C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807D46C4: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x807D46C4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_807D46C8:
    ctx->pc = 0x807D46C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807D46C8: stfs     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x807D46C8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46CC:
    ctx->pc = 0x807D46CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46CCu)) return;
    // 807D46CC: addi    r6, r5, 6408
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(6408);

label_807D46D0:
    ctx->pc = 0x807D46D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46D0u)) return;
    // 807D46D0: addi    r5, r4, 5420
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(5420);

label_807D46D4:
    ctx->pc = 0x807D46D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46D4u)) return;
    // 807D46D4: addi    r0, r3, 17704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17704);

label_807D46D8:
    ctx->pc = 0x807D46D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807D46D8: stw     r9, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46DC:
    ctx->pc = 0x807D46DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46DCu)) return;
    // 807D46DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807D46E0:
    ctx->pc = 0x807D46E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46E0u)) return;
    // 807D46E0: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_807D46E4:
    ctx->pc = 0x807D46E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D46E4: stw     r9, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46E8:
    ctx->pc = 0x807D46E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D46E8: stw     r7, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46EC:
    ctx->pc = 0x807D46ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D46EC: stfs     f0, 124(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D46ECu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46F0:
    ctx->pc = 0x807D46F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D46F0: stfs     f0, 120(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D46F0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46F4:
    ctx->pc = 0x807D46F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D46F4: stfs     f0, 116(r30)
    if (!ppc_fp_available_inline(ctx, 0x807D46F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46F8:
    ctx->pc = 0x807D46F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807D46F8: stw     r6, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D46FC:
    ctx->pc = 0x807D46FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D46FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D46FC: stw     r5, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4700:
    ctx->pc = 0x807D4700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807D4700: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4704:
    ctx->pc = 0x807D4704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4704u)) return;
    // 807D4704: bl      0x80429A54
    {
            ctx->lr = 0x807D4708u;
            ctx->pc = 0x80429A54u;
            return;
    }

label_807D4708:
    ctx->pc = 0x807D4708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807D4708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807D4708: lwz     r0, 36(r1)
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
label_807D470C:
    ctx->pc = 0x807D470Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D470Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807D470C: lwz     r31, 28(r1)
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
label_807D4710:
    ctx->pc = 0x807D4710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807D4710: lwz     r30, 24(r1)
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
label_807D4714:
    ctx->pc = 0x807D4714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807D4714: lwz     r29, 20(r1)
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
label_807D4718:
    ctx->pc = 0x807D4718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807D4718: lwz     r28, 16(r1)
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
label_807D471C:
    ctx->pc = 0x807D471Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807D471Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807D471C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807D4720:
    ctx->pc = 0x807D4720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4720u)) return;
    // 807D4720: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_807D4724:
    ctx->pc = 0x807D4724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807D4724u)) return;
    // 807D4724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807D4060;
        }
    }

    ctx->pc = 0x807D4728u;
    return;
return_dispatch_807D4060:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x807D40A0u: goto label_807D40A0;
    case 0x807D4110u: goto label_807D4110;
    case 0x807D4124u: goto label_807D4124;
    case 0x807D4134u: goto label_807D4134;
    case 0x807D41C4u: goto label_807D41C4;
    case 0x807D41D0u: goto label_807D41D0;
    case 0x807D42CCu: goto label_807D42CC;
    case 0x807D4388u: goto label_807D4388;
    case 0x807D43ACu: goto label_807D43AC;
    case 0x807D442Cu: goto label_807D442C;
    case 0x807D443Cu: goto label_807D443C;
    case 0x807D4444u: goto label_807D4444;
    case 0x807D4560u: goto label_807D4560;
    case 0x807D4574u: goto label_807D4574;
    case 0x807D45C0u: goto label_807D45C0;
    case 0x807D45E8u: goto label_807D45E8;
    case 0x807D45F4u: goto label_807D45F4;
    case 0x807D4600u: goto label_807D4600;
    case 0x807D4628u: goto label_807D4628;
    case 0x807D4630u: goto label_807D4630;
    case 0x807D4648u: goto label_807D4648;
    case 0x807D4654u: goto label_807D4654;
    case 0x807D4660u: goto label_807D4660;
    case 0x807D4688u: goto label_807D4688;
    case 0x807D4708u: goto label_807D4708;
    default: return;
    }
}

