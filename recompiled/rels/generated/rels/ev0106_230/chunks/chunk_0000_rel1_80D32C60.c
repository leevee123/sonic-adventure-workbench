// DolRecomp output
#include "../generated.h"

void func_80D32C60(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D32C60[220] = {
        &&label_80D32C60,
        &&label_80D32C64,
        &&label_80D32C68,
        &&label_80D32C6C,
        &&label_80D32C70,
        &&label_80D32C74,
        &&label_80D32C78,
        &&label_80D32C7C,
        &&label_80D32C80,
        &&label_80D32C84,
        &&label_80D32C88,
        &&label_80D32C8C,
        &&label_80D32C90,
        &&label_80D32C94,
        &&label_80D32C98,
        &&label_80D32C9C,
        &&label_80D32CA0,
        &&label_80D32CA4,
        &&label_80D32CA8,
        &&label_80D32CAC,
        &&label_80D32CB0,
        &&label_80D32CB4,
        &&label_80D32CB8,
        &&label_80D32CBC,
        &&label_80D32CC0,
        &&label_80D32CC4,
        &&label_80D32CC8,
        &&label_80D32CCC,
        &&label_80D32CD0,
        &&label_80D32CD4,
        &&label_80D32CD8,
        &&label_80D32CDC,
        &&label_80D32CE0,
        &&label_80D32CE4,
        &&label_80D32CE8,
        &&label_80D32CEC,
        &&label_80D32CF0,
        &&label_80D32CF4,
        &&label_80D32CF8,
        &&label_80D32CFC,
        &&label_80D32D00,
        &&label_80D32D04,
        &&label_80D32D08,
        &&label_80D32D0C,
        &&label_80D32D10,
        &&label_80D32D14,
        &&label_80D32D18,
        &&label_80D32D1C,
        &&label_80D32D20,
        &&label_80D32D24,
        &&label_80D32D28,
        &&label_80D32D2C,
        &&label_80D32D30,
        &&label_80D32D34,
        &&label_80D32D38,
        &&label_80D32D3C,
        &&label_80D32D40,
        &&label_80D32D44,
        &&label_80D32D48,
        &&label_80D32D4C,
        &&label_80D32D50,
        &&label_80D32D54,
        &&label_80D32D58,
        &&label_80D32D5C,
        &&label_80D32D60,
        &&label_80D32D64,
        &&label_80D32D68,
        &&label_80D32D6C,
        &&label_80D32D70,
        &&label_80D32D74,
        &&label_80D32D78,
        &&label_80D32D7C,
        &&label_80D32D80,
        &&label_80D32D84,
        &&label_80D32D88,
        &&label_80D32D8C,
        &&label_80D32D90,
        &&label_80D32D94,
        &&label_80D32D98,
        &&label_80D32D9C,
        &&label_80D32DA0,
        &&label_80D32DA4,
        &&label_80D32DA8,
        &&label_80D32DAC,
        &&label_80D32DB0,
        &&label_80D32DB4,
        &&label_80D32DB8,
        &&label_80D32DBC,
        &&label_80D32DC0,
        &&label_80D32DC4,
        &&label_80D32DC8,
        &&label_80D32DCC,
        &&label_80D32DD0,
        &&label_80D32DD4,
        &&label_80D32DD8,
        &&label_80D32DDC,
        &&label_80D32DE0,
        &&label_80D32DE4,
        &&label_80D32DE8,
        &&label_80D32DEC,
        &&label_80D32DF0,
        &&label_80D32DF4,
        &&label_80D32DF8,
        &&label_80D32DFC,
        &&label_80D32E00,
        &&label_80D32E04,
        &&label_80D32E08,
        &&label_80D32E0C,
        &&label_80D32E10,
        &&label_80D32E14,
        &&label_80D32E18,
        &&label_80D32E1C,
        &&label_80D32E20,
        &&label_80D32E24,
        &&label_80D32E28,
        &&label_80D32E2C,
        &&label_80D32E30,
        &&label_80D32E34,
        &&label_80D32E38,
        &&label_80D32E3C,
        &&label_80D32E40,
        &&label_80D32E44,
        &&label_80D32E48,
        &&label_80D32E4C,
        &&label_80D32E50,
        &&label_80D32E54,
        &&label_80D32E58,
        &&label_80D32E5C,
        &&label_80D32E60,
        &&label_80D32E64,
        &&label_80D32E68,
        &&label_80D32E6C,
        &&label_80D32E70,
        &&label_80D32E74,
        &&label_80D32E78,
        &&label_80D32E7C,
        &&label_80D32E80,
        &&label_80D32E84,
        &&label_80D32E88,
        &&label_80D32E8C,
        &&label_80D32E90,
        &&label_80D32E94,
        &&label_80D32E98,
        &&label_80D32E9C,
        &&label_80D32EA0,
        &&label_80D32EA4,
        &&label_80D32EA8,
        &&label_80D32EAC,
        &&label_80D32EB0,
        &&label_80D32EB4,
        &&label_80D32EB8,
        &&label_80D32EBC,
        &&label_80D32EC0,
        &&label_80D32EC4,
        &&label_80D32EC8,
        &&label_80D32ECC,
        &&label_80D32ED0,
        &&label_80D32ED4,
        &&label_80D32ED8,
        &&label_80D32EDC,
        &&label_80D32EE0,
        &&label_80D32EE4,
        &&label_80D32EE8,
        &&label_80D32EEC,
        &&label_80D32EF0,
        &&label_80D32EF4,
        &&label_80D32EF8,
        &&label_80D32EFC,
        &&label_80D32F00,
        &&label_80D32F04,
        &&label_80D32F08,
        &&label_80D32F0C,
        &&label_80D32F10,
        &&label_80D32F14,
        &&label_80D32F18,
        &&label_80D32F1C,
        &&label_80D32F20,
        &&label_80D32F24,
        &&label_80D32F28,
        &&label_80D32F2C,
        &&label_80D32F30,
        &&label_80D32F34,
        &&label_80D32F38,
        &&label_80D32F3C,
        &&label_80D32F40,
        &&label_80D32F44,
        &&label_80D32F48,
        &&label_80D32F4C,
        &&label_80D32F50,
        &&label_80D32F54,
        &&label_80D32F58,
        &&label_80D32F5C,
        &&label_80D32F60,
        &&label_80D32F64,
        &&label_80D32F68,
        &&label_80D32F6C,
        &&label_80D32F70,
        &&label_80D32F74,
        &&label_80D32F78,
        &&label_80D32F7C,
        &&label_80D32F80,
        &&label_80D32F84,
        &&label_80D32F88,
        &&label_80D32F8C,
        &&label_80D32F90,
        &&label_80D32F94,
        &&label_80D32F98,
        &&label_80D32F9C,
        &&label_80D32FA0,
        &&label_80D32FA4,
        &&label_80D32FA8,
        &&label_80D32FAC,
        &&label_80D32FB0,
        &&label_80D32FB4,
        &&label_80D32FB8,
        &&label_80D32FBC,
        &&label_80D32FC0,
        &&label_80D32FC4,
        &&label_80D32FC8,
        &&label_80D32FCC
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D32C60u && pc <= 0x80D32FCCu && ((pc - 0x80D32C60u) & 3u) == 0u)
            goto *pc_table_80D32C60[(pc - 0x80D32C60u) >> 2];
    }
    return;
label_80D32C60:
    ctx->pc = 0x80D32C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32C60: stwu     r1, -16(r1)
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
label_80D32C64:
    ctx->pc = 0x80D32C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D32C64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32C68:
    ctx->pc = 0x80D32C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32C68: stw     r0, 20(r1)
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
label_80D32C6C:
    ctx->pc = 0x80D32C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C6Cu)) return;
    // 80D32C6C: cmpwi   r3, 2
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

label_80D32C70:
    ctx->pc = 0x80D32C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C70u)) return;
    // 80D32C70: bc    12, 2, 0x80D32FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D32FB0;
        }
    }

label_80D32C74:
    ctx->pc = 0x80D32C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32C74: bc    4, 0, 0x80D32C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32C88;
        }
    }

label_80D32C78:
    ctx->pc = 0x80D32C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32C78: cmpwi   r3, 0
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

label_80D32C7C:
    ctx->pc = 0x80D32C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C7Cu)) return;
    // 80D32C7C: bc    12, 2, 0x80D32FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D32FC0;
        }
    }

label_80D32C80:
    ctx->pc = 0x80D32C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32C80: bc    4, 0, 0x80D32C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32C90;
        }
    }

label_80D32C84:
    ctx->pc = 0x80D32C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32C84: b       0x80D32FC0
    {
            goto label_80D32FC0;
    }

label_80D32C88:
    ctx->pc = 0x80D32C88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32C88: cmpwi   r3, 4
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

label_80D32C8C:
    ctx->pc = 0x80D32C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C8Cu)) return;
    // 80D32C8C: b       0x80D32FC0
    {
            goto label_80D32FC0;
    }

label_80D32C90:
    ctx->pc = 0x80D32C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32C90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32C94:
    ctx->pc = 0x80D32C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32C94u)) return;
    // 80D32C94: bl      0x8045EC10
    {
            ctx->lr = 0x80D32C98u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D32C98:
    ctx->pc = 0x80D32C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32C98: bl      0x8045DE7C
    {
            ctx->lr = 0x80D32C9Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D32C9C:
    ctx->pc = 0x80D32C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32C9C: bl      0x80460A60
    {
            ctx->lr = 0x80D32CA0u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D32CA0:
    ctx->pc = 0x80D32CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32CA0: bl      0x80460A24
    {
            ctx->lr = 0x80D32CA4u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D32CA4:
    ctx->pc = 0x80D32CA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32CA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32CA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32CA8:
    ctx->pc = 0x80D32CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CA8u)) return;
    // 80D32CA8: bl      0x8045F220
    {
            ctx->lr = 0x80D32CACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32CAC:
    ctx->pc = 0x80D32CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D32CAC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32CB0:
    ctx->pc = 0x80D32CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CB0u)) return;
    // 80D32CB0: addi    r4, r4, -10384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10384);

label_80D32CB4:
    ctx->pc = 0x80D32CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32CB4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32CB4u)) return;
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
label_80D32CB8:
    ctx->pc = 0x80D32CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CB8u)) return;
    // 80D32CB8: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32CBC:
    ctx->pc = 0x80D32CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CBCu)) return;
    // 80D32CBC: addi    r4, r4, -10380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10380);

label_80D32CC0:
    ctx->pc = 0x80D32CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32CC0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32CC0u)) return;
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
label_80D32CC4:
    ctx->pc = 0x80D32CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CC4u)) return;
    // 80D32CC4: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32CC8:
    ctx->pc = 0x80D32CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CC8u)) return;
    // 80D32CC8: addi    r4, r4, -10376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10376);

label_80D32CCC:
    ctx->pc = 0x80D32CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32CCC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32CCCu)) return;
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
label_80D32CD0:
    ctx->pc = 0x80D32CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CD0u)) return;
    // 80D32CD0: bl      0x8045EF2C
    {
            ctx->lr = 0x80D32CD4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D32CD4:
    ctx->pc = 0x80D32CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32CD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32CD8:
    ctx->pc = 0x80D32CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CD8u)) return;
    // 80D32CD8: bl      0x8045F220
    {
            ctx->lr = 0x80D32CDCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32CDC:
    ctx->pc = 0x80D32CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32CDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D32CE0:
    ctx->pc = 0x80D32CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CE0u)) return;
    // 80D32CE0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D32CE4:
    ctx->pc = 0x80D32CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CE4u)) return;
    // 80D32CE4: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80D32CE8:
    ctx->pc = 0x80D32CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CE8u)) return;
    // 80D32CE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D32CEC:
    ctx->pc = 0x80D32CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CECu)) return;
    // 80D32CEC: bl      0x8045EEA8
    {
            ctx->lr = 0x80D32CF0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D32CF0:
    ctx->pc = 0x80D32CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D32CF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32CF4:
    ctx->pc = 0x80D32CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CF4u)) return;
    // 80D32CF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D32CF8:
    ctx->pc = 0x80D32CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CF8u)) return;
    // 80D32CF8: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32CFC:
    ctx->pc = 0x80D32CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32CFCu)) return;
    // 80D32CFC: addi    r5, r5, -10372
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10372);

label_80D32D00:
    ctx->pc = 0x80D32D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32D00: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32D00u)) return;
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
label_80D32D04:
    ctx->pc = 0x80D32D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D04u)) return;
    // 80D32D04: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32D08:
    ctx->pc = 0x80D32D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D08u)) return;
    // 80D32D08: addi    r5, r5, -10368
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10368);

label_80D32D0C:
    ctx->pc = 0x80D32D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32D0C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32D0Cu)) return;
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
label_80D32D10:
    ctx->pc = 0x80D32D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D10u)) return;
    // 80D32D10: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32D14:
    ctx->pc = 0x80D32D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D14u)) return;
    // 80D32D14: addi    r5, r5, -10364
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10364);

label_80D32D18:
    ctx->pc = 0x80D32D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32D18: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32D18u)) return;
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
label_80D32D1C:
    ctx->pc = 0x80D32D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D1Cu)) return;
    // 80D32D1C: bl      0x8045C750
    {
            ctx->lr = 0x80D32D20u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32D20:
    ctx->pc = 0x80D32D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D32D20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32D24:
    ctx->pc = 0x80D32D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D24u)) return;
    // 80D32D24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D32D28:
    ctx->pc = 0x80D32D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D28u)) return;
    // 80D32D28: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D32D2C:
    ctx->pc = 0x80D32D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D2Cu)) return;
    // 80D32D2C: addi    r5, r7, -3584
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-3584);

label_80D32D30:
    ctx->pc = 0x80D32D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D30u)) return;
    // 80D32D30: addi    r6, r7, -187
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-187);

label_80D32D34:
    ctx->pc = 0x80D32D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D34u)) return;
    // 80D32D34: addi    r7, r7, -3072
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-3072);

label_80D32D38:
    ctx->pc = 0x80D32D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D38u)) return;
    // 80D32D38: bl      0x8045C7B4
    {
            ctx->lr = 0x80D32D3Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D32D3C:
    ctx->pc = 0x80D32D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D32D3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32D40:
    ctx->pc = 0x80D32D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D40u)) return;
    // 80D32D40: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80D32D44:
    ctx->pc = 0x80D32D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D44u)) return;
    // 80D32D44: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32D48:
    ctx->pc = 0x80D32D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D48u)) return;
    // 80D32D48: addi    r5, r5, -10360
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10360);

label_80D32D4C:
    ctx->pc = 0x80D32D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32D4C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32D4Cu)) return;
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
label_80D32D50:
    ctx->pc = 0x80D32D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D50u)) return;
    // 80D32D50: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32D54:
    ctx->pc = 0x80D32D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D54u)) return;
    // 80D32D54: addi    r5, r5, -10356
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10356);

label_80D32D58:
    ctx->pc = 0x80D32D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32D58: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32D58u)) return;
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
label_80D32D5C:
    ctx->pc = 0x80D32D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D5Cu)) return;
    // 80D32D5C: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32D60:
    ctx->pc = 0x80D32D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D60u)) return;
    // 80D32D60: addi    r5, r5, -10352
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10352);

label_80D32D64:
    ctx->pc = 0x80D32D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32D64: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32D64u)) return;
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
label_80D32D68:
    ctx->pc = 0x80D32D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D68u)) return;
    // 80D32D68: bl      0x8045C750
    {
            ctx->lr = 0x80D32D6Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32D6C:
    ctx->pc = 0x80D32D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32D6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32D70:
    ctx->pc = 0x80D32D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D70u)) return;
    // 80D32D70: bl      0x8045F220
    {
            ctx->lr = 0x80D32D74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32D74:
    ctx->pc = 0x80D32D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D32D74: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D32D78:
    ctx->pc = 0x80D32D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D78u)) return;
    // 80D32D78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D32D7C:
    ctx->pc = 0x80D32D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D7Cu)) return;
    // 80D32D7C: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D32D80:
    ctx->pc = 0x80D32D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D80u)) return;
    // 80D32D80: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D32D84:
    ctx->pc = 0x80D32D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D84u)) return;
    // 80D32D84: addi    r6, r6, -10348
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10348);

label_80D32D88:
    ctx->pc = 0x80D32D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32D88: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32D88u)) return;
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
label_80D32D8C:
    ctx->pc = 0x80D32D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D8Cu)) return;
    // 80D32D8C: lis     r6, -27329
    ctx->gpr[6] = ((u32)(s32)(-27329) << 16);

label_80D32D90:
    ctx->pc = 0x80D32D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D90u)) return;
    // 80D32D90: addi    r6, r6, -10344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10344);

label_80D32D94:
    ctx->pc = 0x80D32D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32D94: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D32D94u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80D32D98:
    ctx->pc = 0x80D32D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D98u)) return;
    // 80D32D98: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D32D98u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D32D9C:
    ctx->pc = 0x80D32D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32D9Cu)) return;
    // 80D32D9C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D32DA0:
    ctx->pc = 0x80D32DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DA0u)) return;
    // 80D32DA0: addi    r6, r6, -3072
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3072);

label_80D32DA4:
    ctx->pc = 0x80D32DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DA4u)) return;
    // 80D32DA4: bl      0x8045C3C0
    {
            ctx->lr = 0x80D32DA8u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D32DA8:
    ctx->pc = 0x80D32DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32DA8: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80D32DAC:
    ctx->pc = 0x80D32DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DACu)) return;
    // 80D32DAC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32DB0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32DB0:
    ctx->pc = 0x80D32DB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32DB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D32DB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32DB4:
    ctx->pc = 0x80D32DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DB4u)) return;
    // 80D32DB4: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80D32DB8:
    ctx->pc = 0x80D32DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DB8u)) return;
    // 80D32DB8: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32DBC:
    ctx->pc = 0x80D32DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DBCu)) return;
    // 80D32DBC: addi    r5, r5, -10360
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10360);

label_80D32DC0:
    ctx->pc = 0x80D32DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32DC0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32DC0u)) return;
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
label_80D32DC4:
    ctx->pc = 0x80D32DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DC4u)) return;
    // 80D32DC4: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32DC8:
    ctx->pc = 0x80D32DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DC8u)) return;
    // 80D32DC8: addi    r5, r5, -10340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10340);

label_80D32DCC:
    ctx->pc = 0x80D32DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32DCC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32DCCu)) return;
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
label_80D32DD0:
    ctx->pc = 0x80D32DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DD0u)) return;
    // 80D32DD0: lis     r5, -27329
    ctx->gpr[5] = ((u32)(s32)(-27329) << 16);

label_80D32DD4:
    ctx->pc = 0x80D32DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DD4u)) return;
    // 80D32DD4: addi    r5, r5, -10352
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10352);

label_80D32DD8:
    ctx->pc = 0x80D32DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32DD8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D32DD8u)) return;
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
label_80D32DDC:
    ctx->pc = 0x80D32DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DDCu)) return;
    // 80D32DDC: bl      0x8045C750
    {
            ctx->lr = 0x80D32DE0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D32DE0:
    ctx->pc = 0x80D32DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32DE0: li      r3, 1531
    ctx->gpr[3] = (u32)(s32)(1531);

label_80D32DE4:
    ctx->pc = 0x80D32DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DE4u)) return;
    // 80D32DE4: bl      0x8045BFA0
    {
            ctx->lr = 0x80D32DE8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D32DE8:
    ctx->pc = 0x80D32DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32DE8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32DEC:
    ctx->pc = 0x80D32DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DECu)) return;
    // 80D32DEC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32DF0:
    ctx->pc = 0x80D32DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32DF0: lwz     r0, 0(r3)
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
label_80D32DF4:
    ctx->pc = 0x80D32DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DF4u)) return;
    // 80D32DF4: cmpwi   r0, 0
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

label_80D32DF8:
    ctx->pc = 0x80D32DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32DF8u)) return;
    // 80D32DF8: bc    4, 2, 0x80D32E10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32E10;
        }
    }

label_80D32DFC:
    ctx->pc = 0x80D32DFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32DFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32DFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32E00:
    ctx->pc = 0x80D32E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E00u)) return;
    // 80D32E00: bl      0x8045F220
    {
            ctx->lr = 0x80D32E04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32E04:
    ctx->pc = 0x80D32E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D32E04: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32E08:
    ctx->pc = 0x80D32E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E08u)) return;
    // 80D32E08: addi    r4, r4, -9580
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9580);

label_80D32E0C:
    ctx->pc = 0x80D32E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E0Cu)) return;
    // 80D32E0C: bl      0x8045C060
    {
            ctx->lr = 0x80D32E10u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32E10:
    ctx->pc = 0x80D32E10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32E10: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32E14:
    ctx->pc = 0x80D32E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E14u)) return;
    // 80D32E14: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32E18:
    ctx->pc = 0x80D32E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32E18: lwz     r0, 0(r3)
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
label_80D32E1C:
    ctx->pc = 0x80D32E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E1Cu)) return;
    // 80D32E1C: cmpwi   r0, 1
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

label_80D32E20:
    ctx->pc = 0x80D32E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E20u)) return;
    // 80D32E20: bc    4, 2, 0x80D32E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32E38;
        }
    }

label_80D32E24:
    ctx->pc = 0x80D32E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32E24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32E28:
    ctx->pc = 0x80D32E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E28u)) return;
    // 80D32E28: bl      0x8045F220
    {
            ctx->lr = 0x80D32E2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32E2C:
    ctx->pc = 0x80D32E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D32E2C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32E30:
    ctx->pc = 0x80D32E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E30u)) return;
    // 80D32E30: addi    r4, r4, -9576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9576);

label_80D32E34:
    ctx->pc = 0x80D32E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E34u)) return;
    // 80D32E34: bl      0x8045C060
    {
            ctx->lr = 0x80D32E38u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32E38:
    ctx->pc = 0x80D32E38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D32E38: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80D32E3C:
    ctx->pc = 0x80D32E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E3Cu)) return;
    // 80D32E3C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D32E40:
    ctx->pc = 0x80D32E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E40u)) return;
    // 80D32E40: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D32E44:
    ctx->pc = 0x80D32E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32E44: lwz     r0, 0(r4)
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
label_80D32E48:
    ctx->pc = 0x80D32E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E48u)) return;
    // 80D32E48: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D32E4C:
    ctx->pc = 0x80D32E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E4Cu)) return;
    // 80D32E4C: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32E50:
    ctx->pc = 0x80D32E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E50u)) return;
    // 80D32E50: addi    r4, r4, -9608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9608);

label_80D32E54:
    ctx->pc = 0x80D32E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32E54: lwzx    r4, r4, r0
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
label_80D32E58:
    ctx->pc = 0x80D32E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32E58: lwz     r4, 0(r4)
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
label_80D32E5C:
    ctx->pc = 0x80D32E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E5Cu)) return;
    // 80D32E5C: bl      0x8045F608
    {
            ctx->lr = 0x80D32E60u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D32E60:
    ctx->pc = 0x80D32E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32E60: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80D32E64:
    ctx->pc = 0x80D32E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E64u)) return;
    // 80D32E64: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32E68u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32E68:
    ctx->pc = 0x80D32E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32E68: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32E6C:
    ctx->pc = 0x80D32E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E6Cu)) return;
    // 80D32E6C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32E70:
    ctx->pc = 0x80D32E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32E70: lwz     r0, 0(r3)
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
label_80D32E74:
    ctx->pc = 0x80D32E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E74u)) return;
    // 80D32E74: cmpwi   r0, 0
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

label_80D32E78:
    ctx->pc = 0x80D32E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E78u)) return;
    // 80D32E78: bc    4, 2, 0x80D32E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32E88;
        }
    }

label_80D32E7C:
    ctx->pc = 0x80D32E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32E7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32E80:
    ctx->pc = 0x80D32E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E80u)) return;
    // 80D32E80: bl      0x8045F220
    {
            ctx->lr = 0x80D32E84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32E84:
    ctx->pc = 0x80D32E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32E84: bl      0x8045C034
    {
            ctx->lr = 0x80D32E88u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D32E88:
    ctx->pc = 0x80D32E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32E88: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32E8C:
    ctx->pc = 0x80D32E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E8Cu)) return;
    // 80D32E8C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32E90:
    ctx->pc = 0x80D32E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32E90: lwz     r0, 0(r3)
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
label_80D32E94:
    ctx->pc = 0x80D32E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E94u)) return;
    // 80D32E94: cmpwi   r0, 1
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

label_80D32E98:
    ctx->pc = 0x80D32E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32E98u)) return;
    // 80D32E98: bc    4, 2, 0x80D32EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32EA8;
        }
    }

label_80D32E9C:
    ctx->pc = 0x80D32E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32E9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32EA0:
    ctx->pc = 0x80D32EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EA0u)) return;
    // 80D32EA0: bl      0x8045F220
    {
            ctx->lr = 0x80D32EA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32EA4:
    ctx->pc = 0x80D32EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32EA4: bl      0x8045C034
    {
            ctx->lr = 0x80D32EA8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D32EA8:
    ctx->pc = 0x80D32EA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32EA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32EA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32EAC:
    ctx->pc = 0x80D32EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EACu)) return;
    // 80D32EAC: bl      0x8045F220
    {
            ctx->lr = 0x80D32EB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32EB0:
    ctx->pc = 0x80D32EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D32EB0: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32EB4:
    ctx->pc = 0x80D32EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EB4u)) return;
    // 80D32EB4: addi    r4, r4, -10336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10336);

label_80D32EB8:
    ctx->pc = 0x80D32EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D32EB8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32EB8u)) return;
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
label_80D32EBC:
    ctx->pc = 0x80D32EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EBCu)) return;
    // 80D32EBC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32EC0:
    ctx->pc = 0x80D32EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EC0u)) return;
    // 80D32EC0: addi    r4, r4, -10332
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10332);

label_80D32EC4:
    ctx->pc = 0x80D32EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32EC4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32EC4u)) return;
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
label_80D32EC8:
    ctx->pc = 0x80D32EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EC8u)) return;
    // 80D32EC8: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32ECC:
    ctx->pc = 0x80D32ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32ECCu)) return;
    // 80D32ECC: addi    r4, r4, -10328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10328);

label_80D32ED0:
    ctx->pc = 0x80D32ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32ED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32ED0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D32ED0u)) return;
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
label_80D32ED4:
    ctx->pc = 0x80D32ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32ED4u)) return;
    // 80D32ED4: bl      0x8045E70C
    {
            ctx->lr = 0x80D32ED8u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D32ED8:
    ctx->pc = 0x80D32ED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32ED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32ED8: li      r3, 1532
    ctx->gpr[3] = (u32)(s32)(1532);

label_80D32EDC:
    ctx->pc = 0x80D32EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EDCu)) return;
    // 80D32EDC: bl      0x8045BFA0
    {
            ctx->lr = 0x80D32EE0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D32EE0:
    ctx->pc = 0x80D32EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32EE0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32EE4:
    ctx->pc = 0x80D32EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EE4u)) return;
    // 80D32EE4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32EE8:
    ctx->pc = 0x80D32EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32EE8: lwz     r0, 0(r3)
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
label_80D32EEC:
    ctx->pc = 0x80D32EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EECu)) return;
    // 80D32EEC: cmpwi   r0, 0
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

label_80D32EF0:
    ctx->pc = 0x80D32EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EF0u)) return;
    // 80D32EF0: bc    4, 2, 0x80D32F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32F08;
        }
    }

label_80D32EF4:
    ctx->pc = 0x80D32EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32EF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32EF8:
    ctx->pc = 0x80D32EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32EF8u)) return;
    // 80D32EF8: bl      0x8045F220
    {
            ctx->lr = 0x80D32EFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32EFC:
    ctx->pc = 0x80D32EFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32EFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D32EFC: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32F00:
    ctx->pc = 0x80D32F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F00u)) return;
    // 80D32F00: addi    r4, r4, -9568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9568);

label_80D32F04:
    ctx->pc = 0x80D32F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F04u)) return;
    // 80D32F04: bl      0x8045C060
    {
            ctx->lr = 0x80D32F08u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32F08:
    ctx->pc = 0x80D32F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32F08: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32F0C:
    ctx->pc = 0x80D32F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F0Cu)) return;
    // 80D32F0C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32F10:
    ctx->pc = 0x80D32F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32F10: lwz     r0, 0(r3)
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
label_80D32F14:
    ctx->pc = 0x80D32F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F14u)) return;
    // 80D32F14: cmpwi   r0, 1
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

label_80D32F18:
    ctx->pc = 0x80D32F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F18u)) return;
    // 80D32F18: bc    4, 2, 0x80D32F30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32F30;
        }
    }

label_80D32F1C:
    ctx->pc = 0x80D32F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32F1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32F20:
    ctx->pc = 0x80D32F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F20u)) return;
    // 80D32F20: bl      0x8045F220
    {
            ctx->lr = 0x80D32F24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32F24:
    ctx->pc = 0x80D32F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D32F24: lis     r4, -27329
    ctx->gpr[4] = ((u32)(s32)(-27329) << 16);

label_80D32F28:
    ctx->pc = 0x80D32F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F28u)) return;
    // 80D32F28: addi    r4, r4, -9560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9560);

label_80D32F2C:
    ctx->pc = 0x80D32F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F2Cu)) return;
    // 80D32F2C: bl      0x8045C060
    {
            ctx->lr = 0x80D32F30u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D32F30:
    ctx->pc = 0x80D32F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D32F30: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32F34:
    ctx->pc = 0x80D32F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F34u)) return;
    // 80D32F34: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D32F38:
    ctx->pc = 0x80D32F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D32F38: lwz     r0, 0(r3)
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
label_80D32F3C:
    ctx->pc = 0x80D32F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F3Cu)) return;
    // 80D32F3C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D32F40:
    ctx->pc = 0x80D32F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F40u)) return;
    // 80D32F40: lis     r3, -27329
    ctx->gpr[3] = ((u32)(s32)(-27329) << 16);

label_80D32F44:
    ctx->pc = 0x80D32F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F44u)) return;
    // 80D32F44: addi    r3, r3, -9608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9608);

label_80D32F48:
    ctx->pc = 0x80D32F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32F48: lwzx    r3, r3, r0
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
label_80D32F4C:
    ctx->pc = 0x80D32F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D32F4C: lwz     r3, 4(r3)
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
label_80D32F50:
    ctx->pc = 0x80D32F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F50u)) return;
    // 80D32F50: bl      0x8045F6FC
    {
            ctx->lr = 0x80D32F54u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D32F54:
    ctx->pc = 0x80D32F54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32F54: li      r3, 150
    ctx->gpr[3] = (u32)(s32)(150);

label_80D32F58:
    ctx->pc = 0x80D32F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F58u)) return;
    // 80D32F58: bl      0x8045F7C8
    {
            ctx->lr = 0x80D32F5Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D32F5C:
    ctx->pc = 0x80D32F5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32F5C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32F60:
    ctx->pc = 0x80D32F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F60u)) return;
    // 80D32F60: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32F64:
    ctx->pc = 0x80D32F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32F64: lwz     r0, 0(r3)
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
label_80D32F68:
    ctx->pc = 0x80D32F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F68u)) return;
    // 80D32F68: cmpwi   r0, 0
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

label_80D32F6C:
    ctx->pc = 0x80D32F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F6Cu)) return;
    // 80D32F6C: bc    4, 2, 0x80D32F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32F7C;
        }
    }

label_80D32F70:
    ctx->pc = 0x80D32F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32F70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32F74:
    ctx->pc = 0x80D32F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F74u)) return;
    // 80D32F74: bl      0x8045F220
    {
            ctx->lr = 0x80D32F78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32F78:
    ctx->pc = 0x80D32F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32F78: bl      0x8045C034
    {
            ctx->lr = 0x80D32F7Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D32F7C:
    ctx->pc = 0x80D32F7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D32F7C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D32F80:
    ctx->pc = 0x80D32F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F80u)) return;
    // 80D32F80: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D32F84:
    ctx->pc = 0x80D32F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32F84: lwz     r0, 0(r3)
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
label_80D32F88:
    ctx->pc = 0x80D32F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F88u)) return;
    // 80D32F88: cmpwi   r0, 1
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

label_80D32F8C:
    ctx->pc = 0x80D32F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F8Cu)) return;
    // 80D32F8C: bc    4, 2, 0x80D32F9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D32F9C;
        }
    }

label_80D32F90:
    ctx->pc = 0x80D32F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32F90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32F94:
    ctx->pc = 0x80D32F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32F94u)) return;
    // 80D32F94: bl      0x8045F220
    {
            ctx->lr = 0x80D32F98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32F98:
    ctx->pc = 0x80D32F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32F98: bl      0x8045C034
    {
            ctx->lr = 0x80D32F9Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D32F9C:
    ctx->pc = 0x80D32F9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32F9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32F9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32FA0:
    ctx->pc = 0x80D32FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32FA0u)) return;
    // 80D32FA0: bl      0x8045F220
    {
            ctx->lr = 0x80D32FA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D32FA4:
    ctx->pc = 0x80D32FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32FA4: bl      0x8045E760
    {
            ctx->lr = 0x80D32FA8u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D32FA8:
    ctx->pc = 0x80D32FA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32FA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32FA8: bl      0x8045F300
    {
            ctx->lr = 0x80D32FACu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80D32FAC:
    ctx->pc = 0x80D32FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32FAC: b       0x80D32FC0
    {
            goto label_80D32FC0;
    }

label_80D32FB0:
    ctx->pc = 0x80D32FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D32FB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D32FB4:
    ctx->pc = 0x80D32FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32FB4u)) return;
    // 80D32FB4: bl      0x8045EC10
    {
            ctx->lr = 0x80D32FB8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D32FB8:
    ctx->pc = 0x80D32FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32FB8: bl      0x8045DE34
    {
            ctx->lr = 0x80D32FBCu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D32FBC:
    ctx->pc = 0x80D32FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D32FBC: bl      0x80460A80
    {
            ctx->lr = 0x80D32FC0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D32FC0:
    ctx->pc = 0x80D32FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D32FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D32FC0: lwz     r0, 20(r1)
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
label_80D32FC4:
    ctx->pc = 0x80D32FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D32FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D32FC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D32FC8:
    ctx->pc = 0x80D32FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32FC8u)) return;
    // 80D32FC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D32FCC:
    ctx->pc = 0x80D32FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D32FCCu)) return;
    // 80D32FCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D32C60;
        }
    }

    ctx->pc = 0x80D32FD0u;
    return;
return_dispatch_80D32C60:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D32C98u: goto label_80D32C98;
    case 0x80D32C9Cu: goto label_80D32C9C;
    case 0x80D32CA0u: goto label_80D32CA0;
    case 0x80D32CA4u: goto label_80D32CA4;
    case 0x80D32CACu: goto label_80D32CAC;
    case 0x80D32CD4u: goto label_80D32CD4;
    case 0x80D32CDCu: goto label_80D32CDC;
    case 0x80D32CF0u: goto label_80D32CF0;
    case 0x80D32D20u: goto label_80D32D20;
    case 0x80D32D3Cu: goto label_80D32D3C;
    case 0x80D32D6Cu: goto label_80D32D6C;
    case 0x80D32D74u: goto label_80D32D74;
    case 0x80D32DA8u: goto label_80D32DA8;
    case 0x80D32DB0u: goto label_80D32DB0;
    case 0x80D32DE0u: goto label_80D32DE0;
    case 0x80D32DE8u: goto label_80D32DE8;
    case 0x80D32E04u: goto label_80D32E04;
    case 0x80D32E10u: goto label_80D32E10;
    case 0x80D32E2Cu: goto label_80D32E2C;
    case 0x80D32E38u: goto label_80D32E38;
    case 0x80D32E60u: goto label_80D32E60;
    case 0x80D32E68u: goto label_80D32E68;
    case 0x80D32E84u: goto label_80D32E84;
    case 0x80D32E88u: goto label_80D32E88;
    case 0x80D32EA4u: goto label_80D32EA4;
    case 0x80D32EA8u: goto label_80D32EA8;
    case 0x80D32EB0u: goto label_80D32EB0;
    case 0x80D32ED8u: goto label_80D32ED8;
    case 0x80D32EE0u: goto label_80D32EE0;
    case 0x80D32EFCu: goto label_80D32EFC;
    case 0x80D32F08u: goto label_80D32F08;
    case 0x80D32F24u: goto label_80D32F24;
    case 0x80D32F30u: goto label_80D32F30;
    case 0x80D32F54u: goto label_80D32F54;
    case 0x80D32F5Cu: goto label_80D32F5C;
    case 0x80D32F78u: goto label_80D32F78;
    case 0x80D32F7Cu: goto label_80D32F7C;
    case 0x80D32F98u: goto label_80D32F98;
    case 0x80D32F9Cu: goto label_80D32F9C;
    case 0x80D32FA4u: goto label_80D32FA4;
    case 0x80D32FA8u: goto label_80D32FA8;
    case 0x80D32FACu: goto label_80D32FAC;
    case 0x80D32FB8u: goto label_80D32FB8;
    case 0x80D32FBCu: goto label_80D32FBC;
    case 0x80D32FC0u: goto label_80D32FC0;
    default: return;
    }
}

