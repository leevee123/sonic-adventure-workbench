// DolRecomp output
#include "../generated.h"

static void loop_80988050(CPUState* ctx) {
    bool cycle_block_prepaid = false;
label_80988050:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (cycle_block_prepaid) {
        if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
            ctx->pc = 0x80988050u;
            return;
        }
        ctx->downcount -= 7;
    }
    ctx->pc = 0x80988050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80988050: lha     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988054u)) return;
    // 80988054: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988058u)) return;
    // 80988058: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

    ctx->pc = 0x8098805Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098805Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8098805C: sth     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988060u)) return;
    // 80988060: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988064u)) return;
    // 80988064: cmplw   r4, r3
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

    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988068u)) return;
    // 80988068: bc    4, 2, 0x80988050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80988050u;
                return;
            }
            goto label_80988050;
        }
    }

    ctx->pc = 0x8098806Cu;
}

void func_80987B80(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80987B80[339] = {
        &&label_80987B80,
        &&label_80987B84,
        &&label_80987B88,
        &&label_80987B8C,
        &&label_80987B90,
        &&label_80987B94,
        &&label_80987B98,
        &&label_80987B9C,
        &&label_80987BA0,
        &&label_80987BA4,
        &&label_80987BA8,
        &&label_80987BAC,
        &&label_80987BB0,
        &&label_80987BB4,
        &&label_80987BB8,
        &&label_80987BBC,
        &&label_80987BC0,
        &&label_80987BC4,
        &&label_80987BC8,
        &&label_80987BCC,
        &&label_80987BD0,
        &&label_80987BD4,
        &&label_80987BD8,
        &&label_80987BDC,
        &&label_80987BE0,
        &&label_80987BE4,
        &&label_80987BE8,
        &&label_80987BEC,
        &&label_80987BF0,
        &&label_80987BF4,
        &&label_80987BF8,
        &&label_80987BFC,
        &&label_80987C00,
        &&label_80987C04,
        &&label_80987C08,
        &&label_80987C0C,
        &&label_80987C10,
        &&label_80987C14,
        &&label_80987C18,
        &&label_80987C1C,
        &&label_80987C20,
        &&label_80987C24,
        &&label_80987C28,
        &&label_80987C2C,
        &&label_80987C30,
        &&label_80987C34,
        &&label_80987C38,
        &&label_80987C3C,
        &&label_80987C40,
        &&label_80987C44,
        &&label_80987C48,
        &&label_80987C4C,
        &&label_80987C50,
        &&label_80987C54,
        &&label_80987C58,
        &&label_80987C5C,
        &&label_80987C60,
        &&label_80987C64,
        &&label_80987C68,
        &&label_80987C6C,
        &&label_80987C70,
        &&label_80987C74,
        &&label_80987C78,
        &&label_80987C7C,
        &&label_80987C80,
        &&label_80987C84,
        &&label_80987C88,
        &&label_80987C8C,
        &&label_80987C90,
        &&label_80987C94,
        &&label_80987C98,
        &&label_80987C9C,
        &&label_80987CA0,
        &&label_80987CA4,
        &&label_80987CA8,
        &&label_80987CAC,
        &&label_80987CB0,
        &&label_80987CB4,
        &&label_80987CB8,
        &&label_80987CBC,
        &&label_80987CC0,
        &&label_80987CC4,
        &&label_80987CC8,
        &&label_80987CCC,
        &&label_80987CD0,
        &&label_80987CD4,
        &&label_80987CD8,
        &&label_80987CDC,
        &&label_80987CE0,
        &&label_80987CE4,
        &&label_80987CE8,
        &&label_80987CEC,
        &&label_80987CF0,
        &&label_80987CF4,
        &&label_80987CF8,
        &&label_80987CFC,
        &&label_80987D00,
        &&label_80987D04,
        &&label_80987D08,
        &&label_80987D0C,
        &&label_80987D10,
        &&label_80987D14,
        &&label_80987D18,
        &&label_80987D1C,
        &&label_80987D20,
        &&label_80987D24,
        &&label_80987D28,
        &&label_80987D2C,
        &&label_80987D30,
        &&label_80987D34,
        &&label_80987D38,
        &&label_80987D3C,
        &&label_80987D40,
        &&label_80987D44,
        &&label_80987D48,
        &&label_80987D4C,
        &&label_80987D50,
        &&label_80987D54,
        &&label_80987D58,
        &&label_80987D5C,
        &&label_80987D60,
        &&label_80987D64,
        &&label_80987D68,
        &&label_80987D6C,
        &&label_80987D70,
        &&label_80987D74,
        &&label_80987D78,
        &&label_80987D7C,
        &&label_80987D80,
        &&label_80987D84,
        &&label_80987D88,
        &&label_80987D8C,
        &&label_80987D90,
        &&label_80987D94,
        &&label_80987D98,
        &&label_80987D9C,
        &&label_80987DA0,
        &&label_80987DA4,
        &&label_80987DA8,
        &&label_80987DAC,
        &&label_80987DB0,
        &&label_80987DB4,
        &&label_80987DB8,
        &&label_80987DBC,
        &&label_80987DC0,
        &&label_80987DC4,
        &&label_80987DC8,
        &&label_80987DCC,
        &&label_80987DD0,
        &&label_80987DD4,
        &&label_80987DD8,
        &&label_80987DDC,
        &&label_80987DE0,
        &&label_80987DE4,
        &&label_80987DE8,
        &&label_80987DEC,
        &&label_80987DF0,
        &&label_80987DF4,
        &&label_80987DF8,
        &&label_80987DFC,
        &&label_80987E00,
        &&label_80987E04,
        &&label_80987E08,
        &&label_80987E0C,
        &&label_80987E10,
        &&label_80987E14,
        &&label_80987E18,
        &&label_80987E1C,
        &&label_80987E20,
        &&label_80987E24,
        &&label_80987E28,
        &&label_80987E2C,
        &&label_80987E30,
        &&label_80987E34,
        &&label_80987E38,
        &&label_80987E3C,
        &&label_80987E40,
        &&label_80987E44,
        &&label_80987E48,
        &&label_80987E4C,
        &&label_80987E50,
        &&label_80987E54,
        &&label_80987E58,
        &&label_80987E5C,
        &&label_80987E60,
        &&label_80987E64,
        &&label_80987E68,
        &&label_80987E6C,
        &&label_80987E70,
        &&label_80987E74,
        &&label_80987E78,
        &&label_80987E7C,
        &&label_80987E80,
        &&label_80987E84,
        &&label_80987E88,
        &&label_80987E8C,
        &&label_80987E90,
        &&label_80987E94,
        &&label_80987E98,
        &&label_80987E9C,
        &&label_80987EA0,
        &&label_80987EA4,
        &&label_80987EA8,
        &&label_80987EAC,
        &&label_80987EB0,
        &&label_80987EB4,
        &&label_80987EB8,
        &&label_80987EBC,
        &&label_80987EC0,
        &&label_80987EC4,
        &&label_80987EC8,
        &&label_80987ECC,
        &&label_80987ED0,
        &&label_80987ED4,
        &&label_80987ED8,
        &&label_80987EDC,
        &&label_80987EE0,
        &&label_80987EE4,
        &&label_80987EE8,
        &&label_80987EEC,
        &&label_80987EF0,
        &&label_80987EF4,
        &&label_80987EF8,
        &&label_80987EFC,
        &&label_80987F00,
        &&label_80987F04,
        &&label_80987F08,
        &&label_80987F0C,
        &&label_80987F10,
        &&label_80987F14,
        &&label_80987F18,
        &&label_80987F1C,
        &&label_80987F20,
        &&label_80987F24,
        &&label_80987F28,
        &&label_80987F2C,
        &&label_80987F30,
        &&label_80987F34,
        &&label_80987F38,
        &&label_80987F3C,
        &&label_80987F40,
        &&label_80987F44,
        &&label_80987F48,
        &&label_80987F4C,
        &&label_80987F50,
        &&label_80987F54,
        &&label_80987F58,
        &&label_80987F5C,
        &&label_80987F60,
        &&label_80987F64,
        &&label_80987F68,
        &&label_80987F6C,
        &&label_80987F70,
        &&label_80987F74,
        &&label_80987F78,
        &&label_80987F7C,
        &&label_80987F80,
        &&label_80987F84,
        &&label_80987F88,
        &&label_80987F8C,
        &&label_80987F90,
        &&label_80987F94,
        &&label_80987F98,
        &&label_80987F9C,
        &&label_80987FA0,
        &&label_80987FA4,
        &&label_80987FA8,
        &&label_80987FAC,
        &&label_80987FB0,
        &&label_80987FB4,
        &&label_80987FB8,
        &&label_80987FBC,
        &&label_80987FC0,
        &&label_80987FC4,
        &&label_80987FC8,
        &&label_80987FCC,
        &&label_80987FD0,
        &&label_80987FD4,
        &&label_80987FD8,
        &&label_80987FDC,
        &&label_80987FE0,
        &&label_80987FE4,
        &&label_80987FE8,
        &&label_80987FEC,
        &&label_80987FF0,
        &&label_80987FF4,
        &&label_80987FF8,
        &&label_80987FFC,
        &&label_80988000,
        &&label_80988004,
        &&label_80988008,
        &&label_8098800C,
        &&label_80988010,
        &&label_80988014,
        &&label_80988018,
        &&label_8098801C,
        &&label_80988020,
        &&label_80988024,
        &&label_80988028,
        &&label_8098802C,
        &&label_80988030,
        &&label_80988034,
        &&label_80988038,
        &&label_8098803C,
        &&label_80988040,
        &&label_80988044,
        &&label_80988048,
        &&label_8098804C,
        &&label_80988050,
        &&label_80988054,
        &&label_80988058,
        &&label_8098805C,
        &&label_80988060,
        &&label_80988064,
        &&label_80988068,
        &&label_8098806C,
        &&label_80988070,
        &&label_80988074,
        &&label_80988078,
        &&label_8098807C,
        &&label_80988080,
        &&label_80988084,
        &&label_80988088,
        &&label_8098808C,
        &&label_80988090,
        &&label_80988094,
        &&label_80988098,
        &&label_8098809C,
        &&label_809880A0,
        &&label_809880A4,
        &&label_809880A8,
        &&label_809880AC,
        &&label_809880B0,
        &&label_809880B4,
        &&label_809880B8,
        &&label_809880BC,
        &&label_809880C0,
        &&label_809880C4,
        &&label_809880C8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80987B80u && pc <= 0x809880C8u && ((pc - 0x80987B80u) & 3u) == 0u)
            goto *pc_table_80987B80[(pc - 0x80987B80u) >> 2];
    }
    return;
label_80987B80:
    ctx->pc = 0x80987B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987B80: stwu     r1, -16(r1)
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
label_80987B84:
    ctx->pc = 0x80987B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987B84: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987B88:
    ctx->pc = 0x80987B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987B88: stw     r0, 20(r1)
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
label_80987B8C:
    ctx->pc = 0x80987B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B8Cu)) return;
    // 80987B8C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987B90:
    ctx->pc = 0x80987B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B90u)) return;
    // 80987B90: addi    r3, r3, -224
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-224);

label_80987B94:
    ctx->pc = 0x80987B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B94u)) return;
    // 80987B94: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80987B98:
    ctx->pc = 0x80987B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987B98u)) return;
    // 80987B98: bl      0x8003D8B8
    {
            ctx->lr = 0x80987B9Cu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80987B9C:
    ctx->pc = 0x80987B9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987B9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987B9C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987BA0:
    ctx->pc = 0x80987BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BA0u)) return;
    // 80987BA0: addi    r3, r3, -196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-196);

label_80987BA4:
    ctx->pc = 0x80987BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BA4u)) return;
    // 80987BA4: bl      0x809325E8
    {
            ctx->lr = 0x80987BA8u;
            ctx->pc = 0x809325E8u;
            return;
    }

label_80987BA8:
    ctx->pc = 0x80987BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80987BA8: lis     r4, -27778
    ctx->gpr[4] = ((u32)(s32)(-27778) << 16);

label_80987BAC:
    ctx->pc = 0x80987BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BACu)) return;
    // 80987BAC: addi    r4, r4, 64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(64);

label_80987BB0:
    ctx->pc = 0x80987BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987BB0: stw     r3, 0(r4)
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
label_80987BB4:
    ctx->pc = 0x80987BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BB4u)) return;
    // 80987BB4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80987BB8:
    ctx->pc = 0x80987BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BB8u)) return;
    // 80987BB8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80987BBC:
    ctx->pc = 0x80987BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BBCu)) return;
    // 80987BBC: lis     r5, -32616
    ctx->gpr[5] = ((u32)(s32)(-32616) << 16);

label_80987BC0:
    ctx->pc = 0x80987BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BC0u)) return;
    // 80987BC0: addi    r5, r5, 32236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32236);

label_80987BC4:
    ctx->pc = 0x80987BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BC4u)) return;
    // 80987BC4: bl      0x8050FD60
    {
            ctx->lr = 0x80987BC8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80987BC8:
    ctx->pc = 0x80987BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987BC8: bl      0x805039B4
    {
            ctx->lr = 0x80987BCCu;
            ctx->pc = 0x805039B4u;
            return;
    }

label_80987BCC:
    ctx->pc = 0x80987BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80987BCC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80987BD0:
    ctx->pc = 0x80987BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BD0u)) return;
    // 80987BD0: addi    r4, r4, 4048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4048);

label_80987BD4:
    ctx->pc = 0x80987BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987BD4: lwz     r4, 0(r4)
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
label_80987BD8:
    ctx->pc = 0x80987BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987BD8: lwz     r4, 8(r4)
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
label_80987BDC:
    ctx->pc = 0x80987BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BDCu)) return;
    // 80987BDC: rlwinm r0, r4, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000010u;
    }

label_80987BE0:
    ctx->pc = 0x80987BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BE0u)) return;
    // 80987BE0: cmplwi  r0, 0x0000
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

label_80987BE4:
    ctx->pc = 0x80987BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BE4u)) return;
    // 80987BE4: bc    12, 2, 0x80987BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80987BEC;
        }
    }

label_80987BE8:
    ctx->pc = 0x80987BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987BE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80987BEC:
    ctx->pc = 0x80987BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987BEC: rlwinm r0, r4, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000080u;
    }

label_80987BF0:
    ctx->pc = 0x80987BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BF0u)) return;
    // 80987BF0: cmplwi  r0, 0x0000
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

label_80987BF4:
    ctx->pc = 0x80987BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987BF4u)) return;
    // 80987BF4: bc    12, 2, 0x80987BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80987BFC;
        }
    }

label_80987BF8:
    ctx->pc = 0x80987BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987BF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80987BFC:
    ctx->pc = 0x80987BFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987BFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987BFC: rlwinm r0, r4, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000020u;
    }

label_80987C00:
    ctx->pc = 0x80987C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C00u)) return;
    // 80987C00: cmplwi  r0, 0x0000
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

label_80987C04:
    ctx->pc = 0x80987C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C04u)) return;
    // 80987C04: bc    12, 2, 0x80987C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80987C0C;
        }
    }

label_80987C08:
    ctx->pc = 0x80987C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987C08: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80987C0C:
    ctx->pc = 0x80987C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987C0C: cmpwi   r3, 1
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

label_80987C10:
    ctx->pc = 0x80987C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C10u)) return;
    // 80987C10: bc    12, 2, 0x80987C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80987C4C;
        }
    }

label_80987C14:
    ctx->pc = 0x80987C14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987C14: bc    4, 0, 0x80987C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80987C20;
        }
    }

label_80987C18:
    ctx->pc = 0x80987C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987C18: cmpwi   r3, 0
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

label_80987C1C:
    ctx->pc = 0x80987C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C1Cu)) return;
    // 80987C1C: b       0x80987C2C
    {
            goto label_80987C2C;
    }

label_80987C20:
    ctx->pc = 0x80987C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987C20: cmpwi   r3, 3
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

label_80987C24:
    ctx->pc = 0x80987C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C24u)) return;
    // 80987C24: bc    4, 0, 0x80987C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80987C2C;
        }
    }

label_80987C28:
    ctx->pc = 0x80987C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987C28: b       0x80987C6C
    {
            goto label_80987C6C;
    }

label_80987C2C:
    ctx->pc = 0x80987C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987C2C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987C30:
    ctx->pc = 0x80987C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C30u)) return;
    // 80987C30: addi    r3, r3, -180
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-180);

label_80987C34:
    ctx->pc = 0x80987C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C34u)) return;
    // 80987C34: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80987C38:
    ctx->pc = 0x80987C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C38u)) return;
    // 80987C38: bl      0x809323AC
    {
            ctx->lr = 0x80987C3Cu;
            ctx->pc = 0x809323ACu;
            return;
    }

label_80987C3C:
    ctx->pc = 0x80987C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987C3C: lis     r3, -27775
    ctx->gpr[3] = ((u32)(s32)(-27775) << 16);

label_80987C40:
    ctx->pc = 0x80987C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C40u)) return;
    // 80987C40: addi    r3, r3, -6876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6876);

label_80987C44:
    ctx->pc = 0x80987C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C44u)) return;
    // 80987C44: bl      0x80480218
    {
            ctx->lr = 0x80987C48u;
            ctx->pc = 0x80480218u;
            return;
    }

label_80987C48:
    ctx->pc = 0x80987C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987C48: b       0x80987C88
    {
            goto label_80987C88;
    }

label_80987C4C:
    ctx->pc = 0x80987C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987C4C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987C50:
    ctx->pc = 0x80987C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C50u)) return;
    // 80987C50: addi    r3, r3, -152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-152);

label_80987C54:
    ctx->pc = 0x80987C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C54u)) return;
    // 80987C54: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80987C58:
    ctx->pc = 0x80987C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C58u)) return;
    // 80987C58: bl      0x809323AC
    {
            ctx->lr = 0x80987C5Cu;
            ctx->pc = 0x809323ACu;
            return;
    }

label_80987C5C:
    ctx->pc = 0x80987C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987C5C: lis     r3, -27772
    ctx->gpr[3] = ((u32)(s32)(-27772) << 16);

label_80987C60:
    ctx->pc = 0x80987C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C60u)) return;
    // 80987C60: addi    r3, r3, -13724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13724);

label_80987C64:
    ctx->pc = 0x80987C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C64u)) return;
    // 80987C64: bl      0x80480218
    {
            ctx->lr = 0x80987C68u;
            ctx->pc = 0x80480218u;
            return;
    }

label_80987C68:
    ctx->pc = 0x80987C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987C68: b       0x80987C88
    {
            goto label_80987C88;
    }

label_80987C6C:
    ctx->pc = 0x80987C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987C6C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987C70:
    ctx->pc = 0x80987C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C70u)) return;
    // 80987C70: addi    r3, r3, -124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-124);

label_80987C74:
    ctx->pc = 0x80987C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C74u)) return;
    // 80987C74: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80987C78:
    ctx->pc = 0x80987C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C78u)) return;
    // 80987C78: bl      0x809323AC
    {
            ctx->lr = 0x80987C7Cu;
            ctx->pc = 0x809323ACu;
            return;
    }

label_80987C7C:
    ctx->pc = 0x80987C7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987C7C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80987C80:
    ctx->pc = 0x80987C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C80u)) return;
    // 80987C80: addi    r3, r3, -19716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19716);

label_80987C84:
    ctx->pc = 0x80987C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C84u)) return;
    // 80987C84: bl      0x80480218
    {
            ctx->lr = 0x80987C88u;
            ctx->pc = 0x80480218u;
            return;
    }

label_80987C88:
    ctx->pc = 0x80987C88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987C88: lwz     r0, 20(r1)
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
label_80987C8C:
    ctx->pc = 0x80987C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987C8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987C90:
    ctx->pc = 0x80987C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C90u)) return;
    // 80987C90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987C94:
    ctx->pc = 0x80987C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C94u)) return;
    // 80987C94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987B80;
        }
    }

label_80987C98:
    ctx->pc = 0x80987C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987C98: stwu     r1, -16(r1)
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
label_80987C9C:
    ctx->pc = 0x80987C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987C9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987CA0:
    ctx->pc = 0x80987CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987CA0: stw     r0, 20(r1)
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
label_80987CA4:
    ctx->pc = 0x80987CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CA4u)) return;
    // 80987CA4: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987CA8:
    ctx->pc = 0x80987CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CA8u)) return;
    // 80987CA8: addi    r3, r3, -100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-100);

label_80987CAC:
    ctx->pc = 0x80987CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CACu)) return;
    // 80987CAC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80987CB0:
    ctx->pc = 0x80987CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CB0u)) return;
    // 80987CB0: bl      0x8003D8B8
    {
            ctx->lr = 0x80987CB4u;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80987CB4:
    ctx->pc = 0x80987CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987CB4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80987CB8:
    ctx->pc = 0x80987CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CB8u)) return;
    // 80987CB8: bl      0x8093232C
    {
            ctx->lr = 0x80987CBCu;
            ctx->pc = 0x8093232Cu;
            return;
    }

label_80987CBC:
    ctx->pc = 0x80987CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987CBC: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987CC0:
    ctx->pc = 0x80987CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CC0u)) return;
    // 80987CC0: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_80987CC4:
    ctx->pc = 0x80987CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987CC4: lwz     r3, 0(r3)
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
label_80987CC8:
    ctx->pc = 0x80987CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CC8u)) return;
    // 80987CC8: bl      0x8093259C
    {
            ctx->lr = 0x80987CCCu;
            ctx->pc = 0x8093259Cu;
            return;
    }

label_80987CCC:
    ctx->pc = 0x80987CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80987CCC: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987CD0:
    ctx->pc = 0x80987CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CD0u)) return;
    // 80987CD0: addi    r3, r3, -68
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-68);

label_80987CD4:
    ctx->pc = 0x80987CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CD4u)) return;
    // 80987CD4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80987CD8:
    ctx->pc = 0x80987CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CD8u)) return;
    // 80987CD8: bl      0x8003D8B8
    {
            ctx->lr = 0x80987CDCu;
            ctx->pc = 0x8003D8B8u;
            return;
    }

label_80987CDC:
    ctx->pc = 0x80987CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987CDC: lwz     r0, 20(r1)
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
label_80987CE0:
    ctx->pc = 0x80987CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987CE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987CE4:
    ctx->pc = 0x80987CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CE4u)) return;
    // 80987CE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987CE8:
    ctx->pc = 0x80987CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CE8u)) return;
    // 80987CE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987B80;
        }
    }

label_80987CEC:
    ctx->pc = 0x80987CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987CEC: stwu     r1, -16(r1)
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
label_80987CF0:
    ctx->pc = 0x80987CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987CF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987CF4:
    ctx->pc = 0x80987CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987CF4: stw     r0, 20(r1)
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
label_80987CF8:
    ctx->pc = 0x80987CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987CF8: stw     r31, 12(r1)
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
label_80987CFC:
    ctx->pc = 0x80987CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987CFCu)) return;
    // 80987CFC: bl      0x8050E95C
    {
            ctx->lr = 0x80987D00u;
            ctx->pc = 0x8050E95Cu;
            return;
    }

label_80987D00:
    ctx->pc = 0x80987D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80987D00: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_80987D04:
    ctx->pc = 0x80987D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D04u)) return;
    // 80987D04: addi    r3, r3, -14944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80987D08:
    ctx->pc = 0x80987D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987D08: lwz     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987D0C:
    ctx->pc = 0x80987D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987D0C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D0Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80987D10:
    ctx->pc = 0x80987D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D10u)) return;
    // 80987D10: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987D14:
    ctx->pc = 0x80987D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D14u)) return;
    // 80987D14: addi    r3, r3, -304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-304);

label_80987D18:
    ctx->pc = 0x80987D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987D18: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987D18u)) return;
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
label_80987D1C:
    ctx->pc = 0x80987D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D1Cu)) return;
    // 80987D1C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80987D1Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80987D20:
    ctx->pc = 0x80987D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D20u)) return;
    // 80987D20: bc    4, 0, 0x80987D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80987D50;
        }
    }

label_80987D24:
    ctx->pc = 0x80987D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987D24: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D24u)) return;
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
label_80987D28:
    ctx->pc = 0x80987D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D28u)) return;
    // 80987D28: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987D2C:
    ctx->pc = 0x80987D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D2Cu)) return;
    // 80987D2C: addi    r3, r3, -300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-300);

label_80987D30:
    ctx->pc = 0x80987D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987D30: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987D30u)) return;
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
label_80987D34:
    ctx->pc = 0x80987D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D34u)) return;
    // 80987D34: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80987D34u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80987D38:
    ctx->pc = 0x80987D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D38u)) return;
    // 80987D38: bc    4, 0, 0x80987D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80987D50;
        }
    }

label_80987D3C:
    ctx->pc = 0x80987D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987D3C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80987D40:
    ctx->pc = 0x80987D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D40u)) return;
    // 80987D40: bl      0x8046EECC
    {
            ctx->lr = 0x80987D44u;
            ctx->pc = 0x8046EECCu;
            return;
    }

label_80987D44:
    ctx->pc = 0x80987D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80987D44: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_80987D48:
    ctx->pc = 0x80987D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D48u)) return;
    // 80987D48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80987D4C:
    ctx->pc = 0x80987D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D4Cu)) return;
    // 80987D4C: bl      0x80940650
    {
            ctx->lr = 0x80987D50u;
            ctx->pc = 0x80940650u;
            return;
    }

label_80987D50:
    ctx->pc = 0x80987D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987D50: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80987D54:
    ctx->pc = 0x80987D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D54u)) return;
    // 80987D54: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987D58:
    ctx->pc = 0x80987D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D58u)) return;
    // 80987D58: addi    r3, r3, -296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-296);

label_80987D5C:
    ctx->pc = 0x80987D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987D5C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987D5Cu)) return;
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
label_80987D60:
    ctx->pc = 0x80987D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D60u)) return;
    // 80987D60: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80987D60u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80987D64:
    ctx->pc = 0x80987D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D64u)) return;
    // 80987D64: bc    4, 1, 0x80987D6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80987D6C;
        }
    }

label_80987D68:
    ctx->pc = 0x80987D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80987D68: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D68u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987D6C:
    ctx->pc = 0x80987D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987D6C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80987D70:
    ctx->pc = 0x80987D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D70u)) return;
    // 80987D70: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987D74:
    ctx->pc = 0x80987D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D74u)) return;
    // 80987D74: addi    r3, r3, -292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-292);

label_80987D78:
    ctx->pc = 0x80987D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987D78: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987D78u)) return;
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
label_80987D7C:
    ctx->pc = 0x80987D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D7Cu)) return;
    // 80987D7C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80987D7Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80987D80:
    ctx->pc = 0x80987D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D80u)) return;
    // 80987D80: bc    4, 0, 0x80987D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80987D9C;
        }
    }

label_80987D84:
    ctx->pc = 0x80987D84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987D84: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987D88:
    ctx->pc = 0x80987D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D88u)) return;
    // 80987D88: addi    r3, r3, -288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-288);

label_80987D8C:
    ctx->pc = 0x80987D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987D8C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987D8Cu)) return;
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
label_80987D90:
    ctx->pc = 0x80987D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987D90: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987D94:
    ctx->pc = 0x80987D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987D94: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987D98:
    ctx->pc = 0x80987D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80987D98: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80987D98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987D9C:
    ctx->pc = 0x80987D9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987D9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987D9C: lwz     r31, 12(r1)
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
label_80987DA0:
    ctx->pc = 0x80987DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987DA0: lwz     r0, 20(r1)
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
label_80987DA4:
    ctx->pc = 0x80987DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987DA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987DA8:
    ctx->pc = 0x80987DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DA8u)) return;
    // 80987DA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987DAC:
    ctx->pc = 0x80987DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DACu)) return;
    // 80987DAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987B80;
        }
    }

label_80987DB0:
    ctx->pc = 0x80987DB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987DB0: stwu     r1, -16(r1)
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
label_80987DB4:
    ctx->pc = 0x80987DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987DB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987DB8:
    ctx->pc = 0x80987DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987DB8: stw     r0, 20(r1)
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
label_80987DBC:
    ctx->pc = 0x80987DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DBCu)) return;
    // 80987DBC: bl      0x80406038
    {
            ctx->lr = 0x80987DC0u;
            ctx->pc = 0x80406038u;
            return;
    }

label_80987DC0:
    ctx->pc = 0x80987DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987DC0: bl      0x80405F58
    {
            ctx->lr = 0x80987DC4u;
            ctx->pc = 0x80405F58u;
            return;
    }

label_80987DC4:
    ctx->pc = 0x80987DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987DC4: bl      0x80931198
    {
            ctx->lr = 0x80987DC8u;
            ctx->pc = 0x80931198u;
            return;
    }

label_80987DC8:
    ctx->pc = 0x80987DC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987DC8: bl      0x8097886C
    {
            ctx->lr = 0x80987DCCu;
            ctx->pc = 0x8097886Cu;
            return;
    }

label_80987DCC:
    ctx->pc = 0x80987DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987DCC: bl      0x8097D258
    {
            ctx->lr = 0x80987DD0u;
            ctx->pc = 0x8097D258u;
            return;
    }

label_80987DD0:
    ctx->pc = 0x80987DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987DD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80987DD4:
    ctx->pc = 0x80987DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DD4u)) return;
    // 80987DD4: bl      0x80941A00
    {
            ctx->lr = 0x80987DD8u;
            ctx->pc = 0x80941A00u;
            return;
    }

label_80987DD8:
    ctx->pc = 0x80987DD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987DD8: bl      0x80932998
    {
            ctx->lr = 0x80987DDCu;
            ctx->pc = 0x80932998u;
            return;
    }

label_80987DDC:
    ctx->pc = 0x80987DDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987DDC: lwz     r0, 20(r1)
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
label_80987DE0:
    ctx->pc = 0x80987DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80987DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80987DE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987DE4:
    ctx->pc = 0x80987DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DE4u)) return;
    // 80987DE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80987DE8:
    ctx->pc = 0x80987DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DE8u)) return;
    // 80987DE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987B80;
        }
    }

label_80987DEC:
    ctx->pc = 0x80987DECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987DECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80987DEC: stwu     r1, -32(r1)
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
label_80987DF0:
    ctx->pc = 0x80987DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80987DF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80987DF4:
    ctx->pc = 0x80987DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987DF4: stw     r0, 36(r1)
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
label_80987DF8:
    ctx->pc = 0x80987DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987DF8: stw     r31, 28(r1)
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
label_80987DFC:
    ctx->pc = 0x80987DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987DFCu)) return;
    // 80987DFC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80987E00:
    ctx->pc = 0x80987E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E00u)) return;
    // 80987E00: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80987E04:
    ctx->pc = 0x80987E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E04u)) return;
    // 80987E04: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80987E08:
    ctx->pc = 0x80987E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E08u)) return;
    // 80987E08: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80987E0C:
    ctx->pc = 0x80987E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E0Cu)) return;
    // 80987E0C: bl      0x8060F71C
    {
            ctx->lr = 0x80987E10u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80987E10:
    ctx->pc = 0x80987E10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80987E10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80987E14:
    ctx->pc = 0x80987E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E14u)) return;
    // 80987E14: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80987E18:
    ctx->pc = 0x80987E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E18u)) return;
    // 80987E18: addi    r3, r3, -25468
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25468);

label_80987E1C:
    ctx->pc = 0x80987E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987E1C: stb     r0, 21(r3)
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
label_80987E20:
    ctx->pc = 0x80987E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E20u)) return;
    // 80987E20: bl      0x80917AA0
    {
            ctx->lr = 0x80987E24u;
            ctx->pc = 0x80917AA0u;
            return;
    }

label_80987E24:
    ctx->pc = 0x80987E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987E24: bl      0x80917BFC
    {
            ctx->lr = 0x80987E28u;
            ctx->pc = 0x80917BFCu;
            return;
    }

label_80987E28:
    ctx->pc = 0x80987E28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987E28: bl      0x80932A24
    {
            ctx->lr = 0x80987E2Cu;
            ctx->pc = 0x80932A24u;
            return;
    }

label_80987E2C:
    ctx->pc = 0x80987E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987E2C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987E30:
    ctx->pc = 0x80987E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E30u)) return;
    // 80987E30: addi    r3, r3, -36
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-36);

label_80987E34:
    ctx->pc = 0x80987E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E34u)) return;
    // 80987E34: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987E38:
    ctx->pc = 0x80987E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E38u)) return;
    // 80987E38: addi    r4, r4, -32700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32700);

label_80987E3C:
    ctx->pc = 0x80987E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E3Cu)) return;
    // 80987E3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987E40:
    ctx->pc = 0x80987E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E40u)) return;
    // 80987E40: bl      0x80941A9C
    {
            ctx->lr = 0x80987E44u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987E44:
    ctx->pc = 0x80987E44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987E44: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987E48:
    ctx->pc = 0x80987E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E48u)) return;
    // 80987E48: addi    r3, r3, -20
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20);

label_80987E4C:
    ctx->pc = 0x80987E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E4Cu)) return;
    // 80987E4C: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987E50:
    ctx->pc = 0x80987E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E50u)) return;
    // 80987E50: addi    r4, r4, -28564
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28564);

label_80987E54:
    ctx->pc = 0x80987E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E54u)) return;
    // 80987E54: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987E58:
    ctx->pc = 0x80987E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E58u)) return;
    // 80987E58: bl      0x80941A9C
    {
            ctx->lr = 0x80987E5Cu;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987E5C:
    ctx->pc = 0x80987E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987E5C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987E60:
    ctx->pc = 0x80987E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E60u)) return;
    // 80987E60: addi    r3, r3, -8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8);

label_80987E64:
    ctx->pc = 0x80987E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E64u)) return;
    // 80987E64: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987E68:
    ctx->pc = 0x80987E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E68u)) return;
    // 80987E68: addi    r4, r4, -31928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31928);

label_80987E6C:
    ctx->pc = 0x80987E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E6Cu)) return;
    // 80987E6C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987E70:
    ctx->pc = 0x80987E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E70u)) return;
    // 80987E70: bl      0x80941A9C
    {
            ctx->lr = 0x80987E74u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987E74:
    ctx->pc = 0x80987E74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987E74: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987E78:
    ctx->pc = 0x80987E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E78u)) return;
    // 80987E78: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_80987E7C:
    ctx->pc = 0x80987E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E7Cu)) return;
    // 80987E7C: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987E80:
    ctx->pc = 0x80987E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E80u)) return;
    // 80987E80: addi    r4, r4, -30468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30468);

label_80987E84:
    ctx->pc = 0x80987E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E84u)) return;
    // 80987E84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987E88:
    ctx->pc = 0x80987E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E88u)) return;
    // 80987E88: bl      0x80941A9C
    {
            ctx->lr = 0x80987E8Cu;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987E8C:
    ctx->pc = 0x80987E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987E8C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987E90:
    ctx->pc = 0x80987E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E90u)) return;
    // 80987E90: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80987E94:
    ctx->pc = 0x80987E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E94u)) return;
    // 80987E94: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987E98:
    ctx->pc = 0x80987E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E98u)) return;
    // 80987E98: addi    r4, r4, -30148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30148);

label_80987E9C:
    ctx->pc = 0x80987E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987E9Cu)) return;
    // 80987E9C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987EA0:
    ctx->pc = 0x80987EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EA0u)) return;
    // 80987EA0: bl      0x80941A9C
    {
            ctx->lr = 0x80987EA4u;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987EA4:
    ctx->pc = 0x80987EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80987EA4: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987EA8:
    ctx->pc = 0x80987EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EA8u)) return;
    // 80987EA8: addi    r3, r3, 28
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28);

label_80987EAC:
    ctx->pc = 0x80987EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EACu)) return;
    // 80987EAC: lis     r4, -27846
    ctx->gpr[4] = ((u32)(s32)(-27846) << 16);

label_80987EB0:
    ctx->pc = 0x80987EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EB0u)) return;
    // 80987EB0: addi    r4, r4, -28572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28572);

label_80987EB4:
    ctx->pc = 0x80987EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EB4u)) return;
    // 80987EB4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80987EB8:
    ctx->pc = 0x80987EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EB8u)) return;
    // 80987EB8: bl      0x80941A9C
    {
            ctx->lr = 0x80987EBCu;
            ctx->pc = 0x80941A9Cu;
            return;
    }

label_80987EBC:
    ctx->pc = 0x80987EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987EBC: bl      0x8097D2B8
    {
            ctx->lr = 0x80987EC0u;
            ctx->pc = 0x8097D2B8u;
            return;
    }

label_80987EC0:
    ctx->pc = 0x80987EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987EC0: bl      0x8097D330
    {
            ctx->lr = 0x80987EC4u;
            ctx->pc = 0x8097D330u;
            return;
    }

label_80987EC4:
    ctx->pc = 0x80987EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987EC4: bl      0x80941B60
    {
            ctx->lr = 0x80987EC8u;
            ctx->pc = 0x80941B60u;
            return;
    }

label_80987EC8:
    ctx->pc = 0x80987EC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987EC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987EC8: bl      0x80918A88
    {
            ctx->lr = 0x80987ECCu;
            ctx->pc = 0x80918A88u;
            return;
    }

label_80987ECC:
    ctx->pc = 0x80987ECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987ECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987ECC: bl      0x809246C8
    {
            ctx->lr = 0x80987ED0u;
            ctx->pc = 0x809246C8u;
            return;
    }

label_80987ED0:
    ctx->pc = 0x80987ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80987ED0: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987ED4:
    ctx->pc = 0x80987ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987ED4u)) return;
    // 80987ED4: addi    r4, r3, -284
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-284);

label_80987ED8:
    ctx->pc = 0x80987ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80987ED8: lwz     r3, 0(r4)
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
label_80987EDC:
    ctx->pc = 0x80987EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80987EDC: lwz     r0, 4(r4)
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
label_80987EE0:
    ctx->pc = 0x80987EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80987EE0: stw     r3, 8(r1)
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
label_80987EE4:
    ctx->pc = 0x80987EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987EE4: stw     r0, 12(r1)
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
label_80987EE8:
    ctx->pc = 0x80987EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80987EE8: lwz     r0, 8(r4)
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
label_80987EEC:
    ctx->pc = 0x80987EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987EEC: stw     r0, 16(r1)
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
label_80987EF0:
    ctx->pc = 0x80987EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EF0u)) return;
    // 80987EF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80987EF4:
    ctx->pc = 0x80987EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EF4u)) return;
    // 80987EF4: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80987EF8:
    ctx->pc = 0x80987EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EF8u)) return;
    // 80987EF8: addi    r4, r4, -23384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23384);

label_80987EFC:
    ctx->pc = 0x80987EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987EFCu)) return;
    // 80987EFC: bl      0x809465C8
    {
            ctx->lr = 0x80987F00u;
            ctx->pc = 0x809465C8u;
            return;
    }

label_80987F00:
    ctx->pc = 0x80987F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80987F00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80987F04:
    ctx->pc = 0x80987F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F04u)) return;
    // 80987F04: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80987F08:
    ctx->pc = 0x80987F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F08u)) return;
    // 80987F08: lis     r5, -27778
    ctx->gpr[5] = ((u32)(s32)(-27778) << 16);

label_80987F0C:
    ctx->pc = 0x80987F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F0Cu)) return;
    // 80987F0C: addi    r5, r5, -272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-272);

label_80987F10:
    ctx->pc = 0x80987F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80987F10: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987F10u)) return;
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
label_80987F14:
    ctx->pc = 0x80987F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F14u)) return;
    // 80987F14: lis     r5, -27778
    ctx->gpr[5] = ((u32)(s32)(-27778) << 16);

label_80987F18:
    ctx->pc = 0x80987F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F18u)) return;
    // 80987F18: addi    r5, r5, -268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-268);

label_80987F1C:
    ctx->pc = 0x80987F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987F1C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987F1Cu)) return;
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
label_80987F20:
    ctx->pc = 0x80987F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F20u)) return;
    // 80987F20: lis     r5, -27778
    ctx->gpr[5] = ((u32)(s32)(-27778) << 16);

label_80987F24:
    ctx->pc = 0x80987F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F24u)) return;
    // 80987F24: addi    r5, r5, -264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-264);

label_80987F28:
    ctx->pc = 0x80987F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987F28: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987F28u)) return;
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
label_80987F2C:
    ctx->pc = 0x80987F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F2Cu)) return;
    // 80987F2C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80987F30:
    ctx->pc = 0x80987F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F30u)) return;
    // 80987F30: addi    r5, r5, -7000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7000);

label_80987F34:
    ctx->pc = 0x80987F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F34u)) return;
    // 80987F34: bl      0x80971064
    {
            ctx->lr = 0x80987F38u;
            ctx->pc = 0x80971064u;
            return;
    }

label_80987F38:
    ctx->pc = 0x80987F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80987F38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80987F3C:
    ctx->pc = 0x80987F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F3Cu)) return;
    // 80987F3C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80987F40:
    ctx->pc = 0x80987F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F40u)) return;
    // 80987F40: lis     r5, -27778
    ctx->gpr[5] = ((u32)(s32)(-27778) << 16);

label_80987F44:
    ctx->pc = 0x80987F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F44u)) return;
    // 80987F44: addi    r5, r5, -260
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-260);

label_80987F48:
    ctx->pc = 0x80987F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80987F48: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987F48u)) return;
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
label_80987F4C:
    ctx->pc = 0x80987F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F4Cu)) return;
    // 80987F4C: lis     r5, -27778
    ctx->gpr[5] = ((u32)(s32)(-27778) << 16);

label_80987F50:
    ctx->pc = 0x80987F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F50u)) return;
    // 80987F50: addi    r5, r5, -268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-268);

label_80987F54:
    ctx->pc = 0x80987F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80987F54: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987F54u)) return;
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
label_80987F58:
    ctx->pc = 0x80987F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F58u)) return;
    // 80987F58: lis     r5, -27778
    ctx->gpr[5] = ((u32)(s32)(-27778) << 16);

label_80987F5C:
    ctx->pc = 0x80987F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F5Cu)) return;
    // 80987F5C: addi    r5, r5, -256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-256);

label_80987F60:
    ctx->pc = 0x80987F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80987F60: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80987F60u)) return;
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
label_80987F64:
    ctx->pc = 0x80987F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F64u)) return;
    // 80987F64: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80987F68:
    ctx->pc = 0x80987F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F68u)) return;
    // 80987F68: addi    r5, r5, -7000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7000);

label_80987F6C:
    ctx->pc = 0x80987F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F6Cu)) return;
    // 80987F6C: bl      0x80971064
    {
            ctx->lr = 0x80987F70u;
            ctx->pc = 0x80971064u;
            return;
    }

label_80987F70:
    ctx->pc = 0x80987F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987F70: bl      0x809188F0
    {
            ctx->lr = 0x80987F74u;
            ctx->pc = 0x809188F0u;
            return;
    }

label_80987F74:
    ctx->pc = 0x80987F74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987F74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987F74: bl      0x80923514
    {
            ctx->lr = 0x80987F78u;
            ctx->pc = 0x80923514u;
            return;
    }

label_80987F78:
    ctx->pc = 0x80987F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987F78: bl      0x80973A94
    {
            ctx->lr = 0x80987F7Cu;
            ctx->pc = 0x80973A94u;
            return;
    }

label_80987F7C:
    ctx->pc = 0x80987F7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987F7C: bl      0x80970E68
    {
            ctx->lr = 0x80987F80u;
            ctx->pc = 0x80970E68u;
            return;
    }

label_80987F80:
    ctx->pc = 0x80987F80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987F80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80987F80: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987F84:
    ctx->pc = 0x80987F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F84u)) return;
    // 80987F84: addi    r3, r3, -252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-252);

label_80987F88:
    ctx->pc = 0x80987F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80987F88: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987F88u)) return;
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
label_80987F8C:
    ctx->pc = 0x80987F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F8Cu)) return;
    // 80987F8C: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987F90:
    ctx->pc = 0x80987F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F90u)) return;
    // 80987F90: addi    r3, r3, -248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-248);

label_80987F94:
    ctx->pc = 0x80987F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80987F94: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987F94u)) return;
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
label_80987F98:
    ctx->pc = 0x80987F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F98u)) return;
    // 80987F98: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987F9C:
    ctx->pc = 0x80987F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987F9Cu)) return;
    // 80987F9C: addi    r3, r3, -244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-244);

label_80987FA0:
    ctx->pc = 0x80987FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80987FA0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987FA0u)) return;
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
label_80987FA4:
    ctx->pc = 0x80987FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FA4u)) return;
    // 80987FA4: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987FA8:
    ctx->pc = 0x80987FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FA8u)) return;
    // 80987FA8: addi    r3, r3, -240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-240);

label_80987FAC:
    ctx->pc = 0x80987FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80987FAC: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987FACu)) return;
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
label_80987FB0:
    ctx->pc = 0x80987FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FB0u)) return;
    // 80987FB0: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987FB4:
    ctx->pc = 0x80987FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FB4u)) return;
    // 80987FB4: addi    r3, r3, -236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-236);

label_80987FB8:
    ctx->pc = 0x80987FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80987FB8: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987FB8u)) return;
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
label_80987FBC:
    ctx->pc = 0x80987FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FBCu)) return;
    // 80987FBC: bl      0x80978880
    {
            ctx->lr = 0x80987FC0u;
            ctx->pc = 0x80978880u;
            return;
    }

label_80987FC0:
    ctx->pc = 0x80987FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80987FC0: bl      0x80405C38
    {
            ctx->lr = 0x80987FC4u;
            ctx->pc = 0x80405C38u;
            return;
    }

label_80987FC4:
    ctx->pc = 0x80987FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80987FC4: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80987FC8:
    ctx->pc = 0x80987FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FC8u)) return;
    // 80987FC8: bl      0x80406090
    {
            ctx->lr = 0x80987FCCu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80987FCC:
    ctx->pc = 0x80987FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80987FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80987FCC: lis     r3, -32616
    ctx->gpr[3] = ((u32)(s32)(-32616) << 16);

label_80987FD0:
    ctx->pc = 0x80987FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FD0u)) return;
    // 80987FD0: addi    r0, r3, 31980
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31980);

label_80987FD4:
    ctx->pc = 0x80987FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80987FD4: stw     r0, 16(r31)
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
label_80987FD8:
    ctx->pc = 0x80987FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FD8u)) return;
    // 80987FD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80987FDC:
    ctx->pc = 0x80987FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80987FDC: stw     r0, 20(r31)
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
label_80987FE0:
    ctx->pc = 0x80987FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FE0u)) return;
    // 80987FE0: lis     r3, -32616
    ctx->gpr[3] = ((u32)(s32)(-32616) << 16);

label_80987FE4:
    ctx->pc = 0x80987FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FE4u)) return;
    // 80987FE4: addi    r0, r3, 32176
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32176);

label_80987FE8:
    ctx->pc = 0x80987FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80987FE8: stw     r0, 24(r31)
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
label_80987FEC:
    ctx->pc = 0x80987FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FECu)) return;
    // 80987FEC: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80987FF0:
    ctx->pc = 0x80987FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FF0u)) return;
    // 80987FF0: addi    r3, r3, -232
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-232);

label_80987FF4:
    ctx->pc = 0x80987FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80987FF4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80987FF4u)) return;
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
label_80987FF8:
    ctx->pc = 0x80987FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FF8u)) return;
    // 80987FF8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80987FFC:
    ctx->pc = 0x80987FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80987FFCu)) return;
    // 80987FFC: addi    r4, r3, -25500
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80988000:
    ctx->pc = 0x80988000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80988000: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80988000u)) return;
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
label_80988004:
    ctx->pc = 0x80988004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988004u)) return;
    // 80988004: lis     r3, -27778
    ctx->gpr[3] = ((u32)(s32)(-27778) << 16);

label_80988008:
    ctx->pc = 0x80988008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988008u)) return;
    // 80988008: addi    r3, r3, -228
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-228);

label_8098800C:
    ctx->pc = 0x8098800Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098800Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8098800C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x8098800Cu)) return;
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
label_80988010:
    ctx->pc = 0x80988010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80988010: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x80988010u)) return;
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
label_80988014:
    ctx->pc = 0x80988014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80988014: lwz     r31, 28(r1)
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
label_80988018:
    ctx->pc = 0x80988018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80988018: lwz     r0, 36(r1)
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
label_8098801C:
    ctx->pc = 0x8098801Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8098801Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8098801C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988020:
    ctx->pc = 0x80988020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988020u)) return;
    // 80988020: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80988024:
    ctx->pc = 0x80988024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988024u)) return;
    // 80988024: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987B80;
        }
    }

label_80988028:
    ctx->pc = 0x80988028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80988028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80988028: lwz     r3, 44(r3)
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
label_8098802C:
    ctx->pc = 0x8098802Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098802Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8098802C: lwz     r4, 0(r3)
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
label_80988030:
    ctx->pc = 0x80988030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80988030: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988034:
    ctx->pc = 0x80988034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988034u)) return;
    // 80988034: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80988038:
    ctx->pc = 0x80988038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988038u)) return;
    // 80988038: add   r3, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8098803C:
    ctx->pc = 0x8098803Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098803Cu)) return;
    // 8098803C: li      r5, -6
    ctx->gpr[5] = (u32)(s32)(-6);

label_80988040:
    ctx->pc = 0x80988040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80988040: lha     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988044:
    ctx->pc = 0x80988044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988044u)) return;
    // 80988044: cmpwi   r0, 0
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

label_80988048:
    ctx->pc = 0x80988048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988048u)) return;
    // 80988048: bc    4, 0, 0x80988050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80988050;
        }
    }

label_8098804C:
    ctx->pc = 0x8098804Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098804Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8098804C: li      r5, 250
    ctx->gpr[5] = (u32)(s32)(250);

label_80988050:
    loop_80988050(ctx);
    if (ctx->pc == 0x8098806Cu) goto label_8098806C;
    return;
label_80988054:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988054u)) return;
    // 80988054: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80988058:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988058u)) return;
    // 80988058: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8098805C:
    ctx->pc = 0x8098805Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098805Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8098805C: sth     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988060:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988060u)) return;
    // 80988060: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_80988064:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988064u)) return;
    // 80988064: cmplw   r4, r3
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

label_80988068:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988068u)) return;
    // 80988068: bc    4, 2, 0x80988050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80988050u;
                return;
            }
            goto label_80988050;
        }
    }

label_8098806C:
    ctx->pc = 0x8098806Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8098806Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8098806C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987B80;
        }
    }

label_80988070:
    ctx->pc = 0x80988070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80988070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80988070: stwu     r1, -16(r1)
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
label_80988074:
    ctx->pc = 0x80988074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80988074: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80988078:
    ctx->pc = 0x80988078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80988078: stw     r0, 20(r1)
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
label_8098807C:
    ctx->pc = 0x8098807Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098807Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8098807C: stw     r31, 12(r1)
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
label_80988080:
    ctx->pc = 0x80988080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80988080: stw     r30, 8(r1)
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
label_80988084:
    ctx->pc = 0x80988084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988084u)) return;
    // 80988084: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80988088:
    ctx->pc = 0x80988088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988088u)) return;
    // 80988088: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8098808C:
    ctx->pc = 0x8098808Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098808Cu)) return;
    // 8098808C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80988090:
    ctx->pc = 0x80988090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988090u)) return;
    // 80988090: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80988094:
    ctx->pc = 0x80988094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988094u)) return;
    // 80988094: lis     r5, -32615
    ctx->gpr[5] = ((u32)(s32)(-32615) << 16);

label_80988098:
    ctx->pc = 0x80988098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80988098u)) return;
    // 80988098: addi    r5, r5, -32728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32728);

label_8098809C:
    ctx->pc = 0x8098809Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8098809Cu)) return;
    // 8098809C: bl      0x8050FD60
    {
            ctx->lr = 0x809880A0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_809880A0:
    ctx->pc = 0x809880A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809880A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 809880A0: cmplwi  r3, 0x0000
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

label_809880A4:
    ctx->pc = 0x809880A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880A4u)) return;
    // 809880A4: bc    12, 2, 0x809880B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_809880B4;
        }
    }

label_809880A8:
    ctx->pc = 0x809880A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809880A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809880A8: lwz     r3, 44(r3)
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
label_809880AC:
    ctx->pc = 0x809880ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 809880AC: stw     r30, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809880B0:
    ctx->pc = 0x809880B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 809880B0: stw     r31, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809880B4:
    ctx->pc = 0x809880B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x809880B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 809880B4: lwz     r31, 12(r1)
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
label_809880B8:
    ctx->pc = 0x809880B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 809880B8: lwz     r30, 8(r1)
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
label_809880BC:
    ctx->pc = 0x809880BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 809880BC: lwz     r0, 20(r1)
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
label_809880C0:
    ctx->pc = 0x809880C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x809880C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 809880C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_809880C4:
    ctx->pc = 0x809880C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880C4u)) return;
    // 809880C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_809880C8:
    ctx->pc = 0x809880C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x809880C8u)) return;
    // 809880C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80987B80;
        }
    }

    ctx->pc = 0x809880CCu;
    return;
return_dispatch_80987B80:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80987B9Cu: goto label_80987B9C;
    case 0x80987BA8u: goto label_80987BA8;
    case 0x80987BC8u: goto label_80987BC8;
    case 0x80987BCCu: goto label_80987BCC;
    case 0x80987C3Cu: goto label_80987C3C;
    case 0x80987C48u: goto label_80987C48;
    case 0x80987C5Cu: goto label_80987C5C;
    case 0x80987C68u: goto label_80987C68;
    case 0x80987C7Cu: goto label_80987C7C;
    case 0x80987C88u: goto label_80987C88;
    case 0x80987CB4u: goto label_80987CB4;
    case 0x80987CBCu: goto label_80987CBC;
    case 0x80987CCCu: goto label_80987CCC;
    case 0x80987CDCu: goto label_80987CDC;
    case 0x80987D00u: goto label_80987D00;
    case 0x80987D44u: goto label_80987D44;
    case 0x80987D50u: goto label_80987D50;
    case 0x80987DC0u: goto label_80987DC0;
    case 0x80987DC4u: goto label_80987DC4;
    case 0x80987DC8u: goto label_80987DC8;
    case 0x80987DCCu: goto label_80987DCC;
    case 0x80987DD0u: goto label_80987DD0;
    case 0x80987DD8u: goto label_80987DD8;
    case 0x80987DDCu: goto label_80987DDC;
    case 0x80987E10u: goto label_80987E10;
    case 0x80987E24u: goto label_80987E24;
    case 0x80987E28u: goto label_80987E28;
    case 0x80987E2Cu: goto label_80987E2C;
    case 0x80987E44u: goto label_80987E44;
    case 0x80987E5Cu: goto label_80987E5C;
    case 0x80987E74u: goto label_80987E74;
    case 0x80987E8Cu: goto label_80987E8C;
    case 0x80987EA4u: goto label_80987EA4;
    case 0x80987EBCu: goto label_80987EBC;
    case 0x80987EC0u: goto label_80987EC0;
    case 0x80987EC4u: goto label_80987EC4;
    case 0x80987EC8u: goto label_80987EC8;
    case 0x80987ECCu: goto label_80987ECC;
    case 0x80987ED0u: goto label_80987ED0;
    case 0x80987F00u: goto label_80987F00;
    case 0x80987F38u: goto label_80987F38;
    case 0x80987F70u: goto label_80987F70;
    case 0x80987F74u: goto label_80987F74;
    case 0x80987F78u: goto label_80987F78;
    case 0x80987F7Cu: goto label_80987F7C;
    case 0x80987F80u: goto label_80987F80;
    case 0x80987FC0u: goto label_80987FC0;
    case 0x80987FC4u: goto label_80987FC4;
    case 0x80987FCCu: goto label_80987FCC;
    case 0x809880A0u: goto label_809880A0;
    default: return;
    }
}

