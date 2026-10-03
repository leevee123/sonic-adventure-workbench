// DolRecomp output
#include "../generated.h"

void func_80999C00(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80999C00[367] = {
        &&label_80999C00,
        &&label_80999C04,
        &&label_80999C08,
        &&label_80999C0C,
        &&label_80999C10,
        &&label_80999C14,
        &&label_80999C18,
        &&label_80999C1C,
        &&label_80999C20,
        &&label_80999C24,
        &&label_80999C28,
        &&label_80999C2C,
        &&label_80999C30,
        &&label_80999C34,
        &&label_80999C38,
        &&label_80999C3C,
        &&label_80999C40,
        &&label_80999C44,
        &&label_80999C48,
        &&label_80999C4C,
        &&label_80999C50,
        &&label_80999C54,
        &&label_80999C58,
        &&label_80999C5C,
        &&label_80999C60,
        &&label_80999C64,
        &&label_80999C68,
        &&label_80999C6C,
        &&label_80999C70,
        &&label_80999C74,
        &&label_80999C78,
        &&label_80999C7C,
        &&label_80999C80,
        &&label_80999C84,
        &&label_80999C88,
        &&label_80999C8C,
        &&label_80999C90,
        &&label_80999C94,
        &&label_80999C98,
        &&label_80999C9C,
        &&label_80999CA0,
        &&label_80999CA4,
        &&label_80999CA8,
        &&label_80999CAC,
        &&label_80999CB0,
        &&label_80999CB4,
        &&label_80999CB8,
        &&label_80999CBC,
        &&label_80999CC0,
        &&label_80999CC4,
        &&label_80999CC8,
        &&label_80999CCC,
        &&label_80999CD0,
        &&label_80999CD4,
        &&label_80999CD8,
        &&label_80999CDC,
        &&label_80999CE0,
        &&label_80999CE4,
        &&label_80999CE8,
        &&label_80999CEC,
        &&label_80999CF0,
        &&label_80999CF4,
        &&label_80999CF8,
        &&label_80999CFC,
        &&label_80999D00,
        &&label_80999D04,
        &&label_80999D08,
        &&label_80999D0C,
        &&label_80999D10,
        &&label_80999D14,
        &&label_80999D18,
        &&label_80999D1C,
        &&label_80999D20,
        &&label_80999D24,
        &&label_80999D28,
        &&label_80999D2C,
        &&label_80999D30,
        &&label_80999D34,
        &&label_80999D38,
        &&label_80999D3C,
        &&label_80999D40,
        &&label_80999D44,
        &&label_80999D48,
        &&label_80999D4C,
        &&label_80999D50,
        &&label_80999D54,
        &&label_80999D58,
        &&label_80999D5C,
        &&label_80999D60,
        &&label_80999D64,
        &&label_80999D68,
        &&label_80999D6C,
        &&label_80999D70,
        &&label_80999D74,
        &&label_80999D78,
        &&label_80999D7C,
        &&label_80999D80,
        &&label_80999D84,
        &&label_80999D88,
        &&label_80999D8C,
        &&label_80999D90,
        &&label_80999D94,
        &&label_80999D98,
        &&label_80999D9C,
        &&label_80999DA0,
        &&label_80999DA4,
        &&label_80999DA8,
        &&label_80999DAC,
        &&label_80999DB0,
        &&label_80999DB4,
        &&label_80999DB8,
        &&label_80999DBC,
        &&label_80999DC0,
        &&label_80999DC4,
        &&label_80999DC8,
        &&label_80999DCC,
        &&label_80999DD0,
        &&label_80999DD4,
        &&label_80999DD8,
        &&label_80999DDC,
        &&label_80999DE0,
        &&label_80999DE4,
        &&label_80999DE8,
        &&label_80999DEC,
        &&label_80999DF0,
        &&label_80999DF4,
        &&label_80999DF8,
        &&label_80999DFC,
        &&label_80999E00,
        &&label_80999E04,
        &&label_80999E08,
        &&label_80999E0C,
        &&label_80999E10,
        &&label_80999E14,
        &&label_80999E18,
        &&label_80999E1C,
        &&label_80999E20,
        &&label_80999E24,
        &&label_80999E28,
        &&label_80999E2C,
        &&label_80999E30,
        &&label_80999E34,
        &&label_80999E38,
        &&label_80999E3C,
        &&label_80999E40,
        &&label_80999E44,
        &&label_80999E48,
        &&label_80999E4C,
        &&label_80999E50,
        &&label_80999E54,
        &&label_80999E58,
        &&label_80999E5C,
        &&label_80999E60,
        &&label_80999E64,
        &&label_80999E68,
        &&label_80999E6C,
        &&label_80999E70,
        &&label_80999E74,
        &&label_80999E78,
        &&label_80999E7C,
        &&label_80999E80,
        &&label_80999E84,
        &&label_80999E88,
        &&label_80999E8C,
        &&label_80999E90,
        &&label_80999E94,
        &&label_80999E98,
        &&label_80999E9C,
        &&label_80999EA0,
        &&label_80999EA4,
        &&label_80999EA8,
        &&label_80999EAC,
        &&label_80999EB0,
        &&label_80999EB4,
        &&label_80999EB8,
        &&label_80999EBC,
        &&label_80999EC0,
        &&label_80999EC4,
        &&label_80999EC8,
        &&label_80999ECC,
        &&label_80999ED0,
        &&label_80999ED4,
        &&label_80999ED8,
        &&label_80999EDC,
        &&label_80999EE0,
        &&label_80999EE4,
        &&label_80999EE8,
        &&label_80999EEC,
        &&label_80999EF0,
        &&label_80999EF4,
        &&label_80999EF8,
        &&label_80999EFC,
        &&label_80999F00,
        &&label_80999F04,
        &&label_80999F08,
        &&label_80999F0C,
        &&label_80999F10,
        &&label_80999F14,
        &&label_80999F18,
        &&label_80999F1C,
        &&label_80999F20,
        &&label_80999F24,
        &&label_80999F28,
        &&label_80999F2C,
        &&label_80999F30,
        &&label_80999F34,
        &&label_80999F38,
        &&label_80999F3C,
        &&label_80999F40,
        &&label_80999F44,
        &&label_80999F48,
        &&label_80999F4C,
        &&label_80999F50,
        &&label_80999F54,
        &&label_80999F58,
        &&label_80999F5C,
        &&label_80999F60,
        &&label_80999F64,
        &&label_80999F68,
        &&label_80999F6C,
        &&label_80999F70,
        &&label_80999F74,
        &&label_80999F78,
        &&label_80999F7C,
        &&label_80999F80,
        &&label_80999F84,
        &&label_80999F88,
        &&label_80999F8C,
        &&label_80999F90,
        &&label_80999F94,
        &&label_80999F98,
        &&label_80999F9C,
        &&label_80999FA0,
        &&label_80999FA4,
        &&label_80999FA8,
        &&label_80999FAC,
        &&label_80999FB0,
        &&label_80999FB4,
        &&label_80999FB8,
        &&label_80999FBC,
        &&label_80999FC0,
        &&label_80999FC4,
        &&label_80999FC8,
        &&label_80999FCC,
        &&label_80999FD0,
        &&label_80999FD4,
        &&label_80999FD8,
        &&label_80999FDC,
        &&label_80999FE0,
        &&label_80999FE4,
        &&label_80999FE8,
        &&label_80999FEC,
        &&label_80999FF0,
        &&label_80999FF4,
        &&label_80999FF8,
        &&label_80999FFC,
        &&label_8099A000,
        &&label_8099A004,
        &&label_8099A008,
        &&label_8099A00C,
        &&label_8099A010,
        &&label_8099A014,
        &&label_8099A018,
        &&label_8099A01C,
        &&label_8099A020,
        &&label_8099A024,
        &&label_8099A028,
        &&label_8099A02C,
        &&label_8099A030,
        &&label_8099A034,
        &&label_8099A038,
        &&label_8099A03C,
        &&label_8099A040,
        &&label_8099A044,
        &&label_8099A048,
        &&label_8099A04C,
        &&label_8099A050,
        &&label_8099A054,
        &&label_8099A058,
        &&label_8099A05C,
        &&label_8099A060,
        &&label_8099A064,
        &&label_8099A068,
        &&label_8099A06C,
        &&label_8099A070,
        &&label_8099A074,
        &&label_8099A078,
        &&label_8099A07C,
        &&label_8099A080,
        &&label_8099A084,
        &&label_8099A088,
        &&label_8099A08C,
        &&label_8099A090,
        &&label_8099A094,
        &&label_8099A098,
        &&label_8099A09C,
        &&label_8099A0A0,
        &&label_8099A0A4,
        &&label_8099A0A8,
        &&label_8099A0AC,
        &&label_8099A0B0,
        &&label_8099A0B4,
        &&label_8099A0B8,
        &&label_8099A0BC,
        &&label_8099A0C0,
        &&label_8099A0C4,
        &&label_8099A0C8,
        &&label_8099A0CC,
        &&label_8099A0D0,
        &&label_8099A0D4,
        &&label_8099A0D8,
        &&label_8099A0DC,
        &&label_8099A0E0,
        &&label_8099A0E4,
        &&label_8099A0E8,
        &&label_8099A0EC,
        &&label_8099A0F0,
        &&label_8099A0F4,
        &&label_8099A0F8,
        &&label_8099A0FC,
        &&label_8099A100,
        &&label_8099A104,
        &&label_8099A108,
        &&label_8099A10C,
        &&label_8099A110,
        &&label_8099A114,
        &&label_8099A118,
        &&label_8099A11C,
        &&label_8099A120,
        &&label_8099A124,
        &&label_8099A128,
        &&label_8099A12C,
        &&label_8099A130,
        &&label_8099A134,
        &&label_8099A138,
        &&label_8099A13C,
        &&label_8099A140,
        &&label_8099A144,
        &&label_8099A148,
        &&label_8099A14C,
        &&label_8099A150,
        &&label_8099A154,
        &&label_8099A158,
        &&label_8099A15C,
        &&label_8099A160,
        &&label_8099A164,
        &&label_8099A168,
        &&label_8099A16C,
        &&label_8099A170,
        &&label_8099A174,
        &&label_8099A178,
        &&label_8099A17C,
        &&label_8099A180,
        &&label_8099A184,
        &&label_8099A188,
        &&label_8099A18C,
        &&label_8099A190,
        &&label_8099A194,
        &&label_8099A198,
        &&label_8099A19C,
        &&label_8099A1A0,
        &&label_8099A1A4,
        &&label_8099A1A8,
        &&label_8099A1AC,
        &&label_8099A1B0,
        &&label_8099A1B4,
        &&label_8099A1B8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80999C00u && pc <= 0x8099A1B8u && ((pc - 0x80999C00u) & 3u) == 0u)
            goto *pc_table_80999C00[(pc - 0x80999C00u) >> 2];
    }
    return;
label_80999C00:
    ctx->pc = 0x80999C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80999C00: addi    r4, r3, -17712
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-17712);

label_80999C04:
    ctx->pc = 0x80999C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C04u)) return;
    // 80999C04: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_80999C08:
    ctx->pc = 0x80999C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999C08: lbz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999C0C:
    ctx->pc = 0x80999C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999C0C: stb     r0, -2896(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2896);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999C10:
    ctx->pc = 0x80999C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C10u)) return;
    // 80999C10: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80999C14:
    ctx->pc = 0x80999C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C14u)) return;
    // 80999C14: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80999C18:
    ctx->pc = 0x80999C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999C18: stb     r3, 0(r4)
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
label_80999C1C:
    ctx->pc = 0x80999C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C1Cu)) return;
    // 80999C1C: cmplwi  r0, 0x0050
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0050u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80999C20:
    ctx->pc = 0x80999C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C20u)) return;
    // 80999C20: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999C24:
    ctx->pc = 0x80999C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80999C24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80999C28:
    ctx->pc = 0x80999C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80999C28: stb     r0, 0(r4)
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
label_80999C2C:
    ctx->pc = 0x80999C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C2Cu)) return;
    // 80999C2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999C30:
    ctx->pc = 0x80999C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999C30: stwu     r1, -16(r1)
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
label_80999C34:
    ctx->pc = 0x80999C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999C34: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999C38:
    ctx->pc = 0x80999C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C38u)) return;
    // 80999C38: lis     r4, -32614
    ctx->gpr[4] = ((u32)(s32)(-32614) << 16);

label_80999C3C:
    ctx->pc = 0x80999C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C3Cu)) return;
    // 80999C3C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80999C40:
    ctx->pc = 0x80999C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999C40: stw     r0, 20(r1)
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
label_80999C44:
    ctx->pc = 0x80999C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C44u)) return;
    // 80999C44: addi    r5, r4, -25480
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25480);

label_80999C48:
    ctx->pc = 0x80999C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C48u)) return;
    // 80999C48: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80999C4C:
    ctx->pc = 0x80999C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C4Cu)) return;
    // 80999C4C: bl      0x8050FD60
    {
            ctx->lr = 0x80999C50u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80999C50:
    ctx->pc = 0x80999C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80999C50: lis     r5, -32614
    ctx->gpr[5] = ((u32)(s32)(-32614) << 16);

label_80999C54:
    ctx->pc = 0x80999C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C54u)) return;
    // 80999C54: lis     r4, -32614
    ctx->gpr[4] = ((u32)(s32)(-32614) << 16);

label_80999C58:
    ctx->pc = 0x80999C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C58u)) return;
    // 80999C58: addi    r0, r5, -25228
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-25228);

label_80999C5C:
    ctx->pc = 0x80999C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999C5C: stw     r0, 24(r3)
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
label_80999C60:
    ctx->pc = 0x80999C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C60u)) return;
    // 80999C60: addi    r0, r4, -25324
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25324);

label_80999C64:
    ctx->pc = 0x80999C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999C64: stw     r0, 20(r3)
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
label_80999C68:
    ctx->pc = 0x80999C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999C68: lwz     r0, 20(r1)
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
label_80999C6C:
    ctx->pc = 0x80999C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999C6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999C70:
    ctx->pc = 0x80999C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C70u)) return;
    // 80999C70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80999C74:
    ctx->pc = 0x80999C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C74u)) return;
    // 80999C74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999C78:
    ctx->pc = 0x80999C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80999C78: stwu     r1, -16(r1)
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
label_80999C7C:
    ctx->pc = 0x80999C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80999C7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999C80:
    ctx->pc = 0x80999C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C80u)) return;
    // 80999C80: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999C84:
    ctx->pc = 0x80999C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80999C84: stw     r0, 20(r1)
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
label_80999C88:
    ctx->pc = 0x80999C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C88u)) return;
    // 80999C88: addi    r5, r4, -4544
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4544);

label_80999C8C:
    ctx->pc = 0x80999C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C8Cu)) return;
    // 80999C8C: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999C90:
    ctx->pc = 0x80999C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80999C90: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80999C90u)) return;
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
label_80999C94:
    ctx->pc = 0x80999C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80999C94: stw     r31, 12(r1)
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
label_80999C98:
    ctx->pc = 0x80999C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999C98: lfs     f0, -4540(r4)
    if (!ppc_fp_available_inline(ctx, 0x80999C98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4540);
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
label_80999C9C:
    ctx->pc = 0x80999C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999C9C: lwz     r6, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999CA0:
    ctx->pc = 0x80999CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999CA0: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80999CA0u)) return;
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
label_80999CA4:
    ctx->pc = 0x80999CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CA4u)) return;
    // 80999CA4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80999CA4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80999CA8:
    ctx->pc = 0x80999CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CA8u)) return;
    // 80999CA8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80999CA8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80999CAC:
    ctx->pc = 0x80999CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999CAC: stfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80999CACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999CB0:
    ctx->pc = 0x80999CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CB0u)) return;
    // 80999CB0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80999CB4:
    ctx->pc = 0x80999CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CB4u)) return;
    // 80999CB4: bc    4, 2, 0x80999CC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999CC4;
        }
    }

label_80999CB8:
    ctx->pc = 0x80999CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80999CB8: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999CBC:
    ctx->pc = 0x80999CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80999CBC: lfs     f0, -4536(r4)
    if (!ppc_fp_available_inline(ctx, 0x80999CBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4536);
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
label_80999CC0:
    ctx->pc = 0x80999CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80999CC0: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80999CC0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999CC4:
    ctx->pc = 0x80999CC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999CC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80999CC4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80999CC8:
    ctx->pc = 0x80999CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999CC8: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999CCC:
    ctx->pc = 0x80999CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CCCu)) return;
    // 80999CCC: cmpwi   r0, 0
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

label_80999CD0:
    ctx->pc = 0x80999CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CD0u)) return;
    // 80999CD0: bc    4, 2, 0x80999D00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999D00;
        }
    }

label_80999CD4:
    ctx->pc = 0x80999CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80999CD4: lwz     r31, 44(r3)
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
label_80999CD8:
    ctx->pc = 0x80999CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CD8u)) return;
    // 80999CD8: bl      0x806095A0
    {
            ctx->lr = 0x80999CDCu;
            ctx->pc = 0x806095A0u;
            return;
    }

label_80999CDC:
    ctx->pc = 0x80999CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80999CDC: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80999CE0:
    ctx->pc = 0x80999CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CE0u)) return;
    // 80999CE0: addi    r3, r3, -2068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2068);

label_80999CE4:
    ctx->pc = 0x80999CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CE4u)) return;
    // 80999CE4: bl      0x8060F594
    {
            ctx->lr = 0x80999CE8u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80999CE8:
    ctx->pc = 0x80999CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80999CE8: lis     r3, -27768
    ctx->gpr[3] = ((u32)(s32)(-27768) << 16);

label_80999CEC:
    ctx->pc = 0x80999CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CECu)) return;
    // 80999CEC: lis     r4, -27767
    ctx->gpr[4] = ((u32)(s32)(-27767) << 16);

label_80999CF0:
    ctx->pc = 0x80999CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999CF0: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80999CF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80999CF4:
    ctx->pc = 0x80999CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CF4u)) return;
    // 80999CF4: addi    r3, r3, 32504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32504);

label_80999CF8:
    ctx->pc = 0x80999CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CF8u)) return;
    // 80999CF8: addi    r4, r4, -32600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32600);

label_80999CFC:
    ctx->pc = 0x80999CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999CFCu)) return;
    // 80999CFC: bl      0x805FC378
    {
            ctx->lr = 0x80999D00u;
            ctx->pc = 0x805FC378u;
            return;
    }

label_80999D00:
    ctx->pc = 0x80999D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999D00: lwz     r0, 20(r1)
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
label_80999D04:
    ctx->pc = 0x80999D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999D04: lwz     r31, 12(r1)
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
label_80999D08:
    ctx->pc = 0x80999D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999D08: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999D0C:
    ctx->pc = 0x80999D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D0Cu)) return;
    // 80999D0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80999D10:
    ctx->pc = 0x80999D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D10u)) return;
    // 80999D10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999D14:
    ctx->pc = 0x80999D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999D14: stwu     r1, -16(r1)
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
label_80999D18:
    ctx->pc = 0x80999D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999D18: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999D1C:
    ctx->pc = 0x80999D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D1Cu)) return;
    // 80999D1C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80999D20:
    ctx->pc = 0x80999D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999D20: stw     r0, 20(r1)
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
label_80999D24:
    ctx->pc = 0x80999D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999D24: stw     r31, 12(r1)
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
label_80999D28:
    ctx->pc = 0x80999D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999D28: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999D2C:
    ctx->pc = 0x80999D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D2Cu)) return;
    // 80999D2C: cmpwi   r0, 0
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

label_80999D30:
    ctx->pc = 0x80999D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D30u)) return;
    // 80999D30: bc    4, 2, 0x80999D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999D60;
        }
    }

label_80999D34:
    ctx->pc = 0x80999D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80999D34: lwz     r31, 44(r3)
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
label_80999D38:
    ctx->pc = 0x80999D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D38u)) return;
    // 80999D38: bl      0x806095A0
    {
            ctx->lr = 0x80999D3Cu;
            ctx->pc = 0x806095A0u;
            return;
    }

label_80999D3C:
    ctx->pc = 0x80999D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80999D3C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_80999D40:
    ctx->pc = 0x80999D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D40u)) return;
    // 80999D40: addi    r3, r3, -2068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2068);

label_80999D44:
    ctx->pc = 0x80999D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D44u)) return;
    // 80999D44: bl      0x8060F594
    {
            ctx->lr = 0x80999D48u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80999D48:
    ctx->pc = 0x80999D48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80999D48: lis     r3, -27768
    ctx->gpr[3] = ((u32)(s32)(-27768) << 16);

label_80999D4C:
    ctx->pc = 0x80999D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D4Cu)) return;
    // 80999D4C: lis     r4, -27767
    ctx->gpr[4] = ((u32)(s32)(-27767) << 16);

label_80999D50:
    ctx->pc = 0x80999D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999D50: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80999D50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80999D54:
    ctx->pc = 0x80999D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D54u)) return;
    // 80999D54: addi    r3, r3, 32504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32504);

label_80999D58:
    ctx->pc = 0x80999D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D58u)) return;
    // 80999D58: addi    r4, r4, -32600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32600);

label_80999D5C:
    ctx->pc = 0x80999D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D5Cu)) return;
    // 80999D5C: bl      0x805FC378
    {
            ctx->lr = 0x80999D60u;
            ctx->pc = 0x805FC378u;
            return;
    }

label_80999D60:
    ctx->pc = 0x80999D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999D60: lwz     r0, 20(r1)
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
label_80999D64:
    ctx->pc = 0x80999D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999D64: lwz     r31, 12(r1)
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
label_80999D68:
    ctx->pc = 0x80999D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999D68: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999D6C:
    ctx->pc = 0x80999D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D6Cu)) return;
    // 80999D6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80999D70:
    ctx->pc = 0x80999D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D70u)) return;
    // 80999D70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999D74:
    ctx->pc = 0x80999D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80999D74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999D78:
    ctx->pc = 0x80999D78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80999D78: lis     r3, -27767
    ctx->gpr[3] = ((u32)(s32)(-27767) << 16);

label_80999D7C:
    ctx->pc = 0x80999D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D7Cu)) return;
    // 80999D7C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80999D80:
    ctx->pc = 0x80999D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D80u)) return;
    // 80999D80: addi    r3, r3, -17704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17704);

label_80999D84:
    ctx->pc = 0x80999D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999D84: lwz     r3, 0(r3)
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
label_80999D88:
    ctx->pc = 0x80999D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999D88: lwz     r3, 44(r3)
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
label_80999D8C:
    ctx->pc = 0x80999D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80999D8C: stb     r0, 15(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999D90:
    ctx->pc = 0x80999D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D90u)) return;
    // 80999D90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999D94:
    ctx->pc = 0x80999D94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999D94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999D94: stwu     r1, -16(r1)
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
label_80999D98:
    ctx->pc = 0x80999D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999D98: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999D9C:
    ctx->pc = 0x80999D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999D9Cu)) return;
    // 80999D9C: lis     r4, -32614
    ctx->gpr[4] = ((u32)(s32)(-32614) << 16);

label_80999DA0:
    ctx->pc = 0x80999DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DA0u)) return;
    // 80999DA0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80999DA4:
    ctx->pc = 0x80999DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999DA4: stw     r0, 20(r1)
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
label_80999DA8:
    ctx->pc = 0x80999DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DA8u)) return;
    // 80999DA8: addi    r5, r4, -25116
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-25116);

label_80999DAC:
    ctx->pc = 0x80999DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DACu)) return;
    // 80999DAC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80999DB0:
    ctx->pc = 0x80999DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DB0u)) return;
    // 80999DB0: bl      0x8050FD60
    {
            ctx->lr = 0x80999DB4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80999DB4:
    ctx->pc = 0x80999DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80999DB4: lis     r4, -32614
    ctx->gpr[4] = ((u32)(s32)(-32614) << 16);

label_80999DB8:
    ctx->pc = 0x80999DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DB8u)) return;
    // 80999DB8: lis     r5, -32614
    ctx->gpr[5] = ((u32)(s32)(-32614) << 16);

label_80999DBC:
    ctx->pc = 0x80999DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DBCu)) return;
    // 80999DBC: addi    r0, r4, -24800
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-24800);

label_80999DC0:
    ctx->pc = 0x80999DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80999DC0: stw     r0, 24(r3)
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
label_80999DC4:
    ctx->pc = 0x80999DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DC4u)) return;
    // 80999DC4: addi    r0, r5, -24892
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-24892);

label_80999DC8:
    ctx->pc = 0x80999DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DC8u)) return;
    // 80999DC8: lis     r4, -27767
    ctx->gpr[4] = ((u32)(s32)(-27767) << 16);

label_80999DCC:
    ctx->pc = 0x80999DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999DCC: stw     r0, 20(r3)
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
label_80999DD0:
    ctx->pc = 0x80999DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999DD0: stw     r3, -17704(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-17704);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999DD4:
    ctx->pc = 0x80999DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999DD4: lwz     r0, 20(r1)
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
label_80999DD8:
    ctx->pc = 0x80999DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999DD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999DDC:
    ctx->pc = 0x80999DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DDCu)) return;
    // 80999DDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80999DE0:
    ctx->pc = 0x80999DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DE0u)) return;
    // 80999DE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999DE4:
    ctx->pc = 0x80999DE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999DE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999DE4: stwu     r1, -32(r1)
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
label_80999DE8:
    ctx->pc = 0x80999DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999DE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999DEC:
    ctx->pc = 0x80999DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999DEC: stw     r0, 36(r1)
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
label_80999DF0:
    ctx->pc = 0x80999DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999DF0: stw     r31, 28(r1)
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
label_80999DF4:
    ctx->pc = 0x80999DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999DF4: lwz     r7, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999DF8:
    ctx->pc = 0x80999DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999DF8: lbz     r0, 15(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999DFC:
    ctx->pc = 0x80999DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999DFCu)) return;
    // 80999DFC: cmplwi  r0, 0x0000
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

label_80999E00:
    ctx->pc = 0x80999E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E00u)) return;
    // 80999E00: bc    12, 2, 0x80999E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80999E78;
        }
    }

label_80999E04:
    ctx->pc = 0x80999E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80999E04: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999E08:
    ctx->pc = 0x80999E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E08u)) return;
    // 80999E08: lis     r6, -27768
    ctx->gpr[6] = ((u32)(s32)(-27768) << 16);

label_80999E0C:
    ctx->pc = 0x80999E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E0Cu)) return;
    // 80999E0C: addi    r5, r4, -4528
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4528);

label_80999E10:
    ctx->pc = 0x80999E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E10u)) return;
    // 80999E10: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80999E14:
    ctx->pc = 0x80999E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80999E14: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80999E14u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80999E18:
    ctx->pc = 0x80999E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E18u)) return;
    // 80999E18: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999E1C:
    ctx->pc = 0x80999E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80999E1C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80999E1Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80999E20:
    ctx->pc = 0x80999E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E20u)) return;
    // 80999E20: addi    r5, r4, -4520
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4520);

label_80999E24:
    ctx->pc = 0x80999E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E24u)) return;
    // 80999E24: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999E28:
    ctx->pc = 0x80999E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E28u)) return;
    // 80999E28: addi    r6, r6, 22004
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22004);

label_80999E2C:
    ctx->pc = 0x80999E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E2Cu)) return;
    // 80999E2C: fadds   f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80999E2Cu)) return;
    ppc_fadds(ctx, 3, 1, 0);

label_80999E30:
    ctx->pc = 0x80999E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80999E30: lfs     f1, -4524(r4)
    if (!ppc_fp_available_inline(ctx, 0x80999E30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4524);
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
label_80999E34:
    ctx->pc = 0x80999E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80999E34: stw     r0, 8(r1)
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
label_80999E38:
    ctx->pc = 0x80999E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80999E38: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80999E38u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999E3C:
    ctx->pc = 0x80999E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80999E3C: stfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80999E3Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999E40:
    ctx->pc = 0x80999E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999E40: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999E44:
    ctx->pc = 0x80999E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999E44: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999E48:
    ctx->pc = 0x80999E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999E48: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80999E48u)) return;
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
label_80999E4C:
    ctx->pc = 0x80999E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E4Cu)) return;
    // 80999E4C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80999E4Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80999E50:
    ctx->pc = 0x80999E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E50u)) return;
    // 80999E50: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80999E50u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80999E54:
    ctx->pc = 0x80999E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E54u)) return;
    // 80999E54: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80999E54u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_80999E58:
    ctx->pc = 0x80999E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E58u)) return;
    // 80999E58: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80999E5C:
    ctx->pc = 0x80999E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E5Cu)) return;
    // 80999E5C: bc    4, 2, 0x80999E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999E78;
        }
    }

label_80999E60:
    ctx->pc = 0x80999E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999E60: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999E64:
    ctx->pc = 0x80999E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999E64: stw     r0, 8(r1)
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
label_80999E68:
    ctx->pc = 0x80999E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999E68: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80999E68u)) return;
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
label_80999E6C:
    ctx->pc = 0x80999E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E6Cu)) return;
    // 80999E6C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80999E6Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80999E70:
    ctx->pc = 0x80999E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E70u)) return;
    // 80999E70: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80999E70u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80999E74:
    ctx->pc = 0x80999E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80999E74: stfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80999E74u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999E78:
    ctx->pc = 0x80999E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80999E78: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80999E7C:
    ctx->pc = 0x80999E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999E7C: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999E80:
    ctx->pc = 0x80999E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E80u)) return;
    // 80999E80: cmpwi   r0, 0
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

label_80999E84:
    ctx->pc = 0x80999E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E84u)) return;
    // 80999E84: bc    4, 2, 0x80999EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999EB0;
        }
    }

label_80999E88:
    ctx->pc = 0x80999E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80999E88: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999E8C:
    ctx->pc = 0x80999E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999E8C: lwz     r31, 44(r3)
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
label_80999E90:
    ctx->pc = 0x80999E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E90u)) return;
    // 80999E90: addi    r3, r4, -2068
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-2068);

label_80999E94:
    ctx->pc = 0x80999E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E94u)) return;
    // 80999E94: bl      0x8060F594
    {
            ctx->lr = 0x80999E98u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80999E98:
    ctx->pc = 0x80999E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80999E98: lis     r3, -27768
    ctx->gpr[3] = ((u32)(s32)(-27768) << 16);

label_80999E9C:
    ctx->pc = 0x80999E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999E9Cu)) return;
    // 80999E9C: lis     r4, -27768
    ctx->gpr[4] = ((u32)(s32)(-27768) << 16);

label_80999EA0:
    ctx->pc = 0x80999EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999EA0: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80999EA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80999EA4:
    ctx->pc = 0x80999EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EA4u)) return;
    // 80999EA4: addi    r3, r3, 21748
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21748);

label_80999EA8:
    ctx->pc = 0x80999EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EA8u)) return;
    // 80999EA8: addi    r4, r4, 22004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22004);

label_80999EAC:
    ctx->pc = 0x80999EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EACu)) return;
    // 80999EAC: bl      0x805FC378
    {
            ctx->lr = 0x80999EB0u;
            ctx->pc = 0x805FC378u;
            return;
    }

label_80999EB0:
    ctx->pc = 0x80999EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999EB0: lwz     r0, 36(r1)
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
label_80999EB4:
    ctx->pc = 0x80999EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999EB4: lwz     r31, 28(r1)
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
label_80999EB8:
    ctx->pc = 0x80999EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999EB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999EBC:
    ctx->pc = 0x80999EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EBCu)) return;
    // 80999EBC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80999EC0:
    ctx->pc = 0x80999EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EC0u)) return;
    // 80999EC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999EC4:
    ctx->pc = 0x80999EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999EC4: stwu     r1, -16(r1)
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
label_80999EC8:
    ctx->pc = 0x80999EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999EC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999ECC:
    ctx->pc = 0x80999ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999ECCu)) return;
    // 80999ECC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80999ED0:
    ctx->pc = 0x80999ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999ED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999ED0: stw     r0, 20(r1)
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
label_80999ED4:
    ctx->pc = 0x80999ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999ED4: stw     r31, 12(r1)
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
label_80999ED8:
    ctx->pc = 0x80999ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999ED8: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999EDC:
    ctx->pc = 0x80999EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EDCu)) return;
    // 80999EDC: cmpwi   r0, 0
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

label_80999EE0:
    ctx->pc = 0x80999EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EE0u)) return;
    // 80999EE0: bc    4, 2, 0x80999F0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999F0C;
        }
    }

label_80999EE4:
    ctx->pc = 0x80999EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80999EE4: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_80999EE8:
    ctx->pc = 0x80999EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999EE8: lwz     r31, 44(r3)
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
label_80999EEC:
    ctx->pc = 0x80999EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EECu)) return;
    // 80999EEC: addi    r3, r4, -2068
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-2068);

label_80999EF0:
    ctx->pc = 0x80999EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EF0u)) return;
    // 80999EF0: bl      0x8060F594
    {
            ctx->lr = 0x80999EF4u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80999EF4:
    ctx->pc = 0x80999EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80999EF4: lis     r3, -27768
    ctx->gpr[3] = ((u32)(s32)(-27768) << 16);

label_80999EF8:
    ctx->pc = 0x80999EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EF8u)) return;
    // 80999EF8: lis     r4, -27768
    ctx->gpr[4] = ((u32)(s32)(-27768) << 16);

label_80999EFC:
    ctx->pc = 0x80999EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999EFC: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80999EFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80999F00:
    ctx->pc = 0x80999F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F00u)) return;
    // 80999F00: addi    r3, r3, 21748
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21748);

label_80999F04:
    ctx->pc = 0x80999F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F04u)) return;
    // 80999F04: addi    r4, r4, 22004
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22004);

label_80999F08:
    ctx->pc = 0x80999F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F08u)) return;
    // 80999F08: bl      0x805FC378
    {
            ctx->lr = 0x80999F0Cu;
            ctx->pc = 0x805FC378u;
            return;
    }

label_80999F0C:
    ctx->pc = 0x80999F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999F0C: lwz     r0, 20(r1)
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
label_80999F10:
    ctx->pc = 0x80999F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999F10: lwz     r31, 12(r1)
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
label_80999F14:
    ctx->pc = 0x80999F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999F14: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999F18:
    ctx->pc = 0x80999F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F18u)) return;
    // 80999F18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80999F1C:
    ctx->pc = 0x80999F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F1Cu)) return;
    // 80999F1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999F20:
    ctx->pc = 0x80999F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999F20: stwu     r1, -16(r1)
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
label_80999F24:
    ctx->pc = 0x80999F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999F24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999F28:
    ctx->pc = 0x80999F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999F28: stw     r0, 20(r1)
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
label_80999F2C:
    ctx->pc = 0x80999F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999F2C: stw     r31, 12(r1)
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
label_80999F30:
    ctx->pc = 0x80999F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F30u)) return;
    // 80999F30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80999F34:
    ctx->pc = 0x80999F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80999F34: lwz     r3, 44(r3)
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
label_80999F38:
    ctx->pc = 0x80999F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F38u)) return;
    // 80999F38: bl      0x8050ED40
    {
            ctx->lr = 0x80999F3Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80999F3C:
    ctx->pc = 0x80999F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80999F3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80999F40:
    ctx->pc = 0x80999F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999F40: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999F44:
    ctx->pc = 0x80999F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999F44: lwz     r0, 20(r1)
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
label_80999F48:
    ctx->pc = 0x80999F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999F48: lwz     r31, 12(r1)
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
label_80999F4C:
    ctx->pc = 0x80999F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999F4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999F50:
    ctx->pc = 0x80999F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F50u)) return;
    // 80999F50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80999F54:
    ctx->pc = 0x80999F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F54u)) return;
    // 80999F54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999F58:
    ctx->pc = 0x80999F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999F58: stwu     r1, -16(r1)
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
label_80999F5C:
    ctx->pc = 0x80999F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999F5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999F60:
    ctx->pc = 0x80999F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F60u)) return;
    // 80999F60: lis     r4, -32614
    ctx->gpr[4] = ((u32)(s32)(-32614) << 16);

label_80999F64:
    ctx->pc = 0x80999F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F64u)) return;
    // 80999F64: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80999F68:
    ctx->pc = 0x80999F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80999F68: stw     r0, 20(r1)
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
label_80999F6C:
    ctx->pc = 0x80999F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F6Cu)) return;
    // 80999F6C: addi    r5, r4, -24672
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-24672);

label_80999F70:
    ctx->pc = 0x80999F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F70u)) return;
    // 80999F70: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80999F74:
    ctx->pc = 0x80999F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F74u)) return;
    // 80999F74: bl      0x8050FD60
    {
            ctx->lr = 0x80999F78u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80999F78:
    ctx->pc = 0x80999F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80999F78: lis     r5, -32614
    ctx->gpr[5] = ((u32)(s32)(-32614) << 16);

label_80999F7C:
    ctx->pc = 0x80999F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F7Cu)) return;
    // 80999F7C: lis     r4, -32614
    ctx->gpr[4] = ((u32)(s32)(-32614) << 16);

label_80999F80:
    ctx->pc = 0x80999F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F80u)) return;
    // 80999F80: addi    r0, r5, -24136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-24136);

label_80999F84:
    ctx->pc = 0x80999F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999F84: stw     r0, 24(r3)
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
label_80999F88:
    ctx->pc = 0x80999F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F88u)) return;
    // 80999F88: addi    r0, r4, -24372
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-24372);

label_80999F8C:
    ctx->pc = 0x80999F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999F8C: stw     r0, 20(r3)
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
label_80999F90:
    ctx->pc = 0x80999F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80999F90: lwz     r0, 20(r1)
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
label_80999F94:
    ctx->pc = 0x80999F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80999F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999F94: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999F98:
    ctx->pc = 0x80999F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F98u)) return;
    // 80999F98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80999F9C:
    ctx->pc = 0x80999F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999F9Cu)) return;
    // 80999F9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_80999FA0:
    ctx->pc = 0x80999FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80999FA0: stwu     r1, -32(r1)
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
label_80999FA4:
    ctx->pc = 0x80999FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80999FA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FA8:
    ctx->pc = 0x80999FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80999FA8: stw     r0, 36(r1)
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
label_80999FAC:
    ctx->pc = 0x80999FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80999FAC: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80999FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FB0:
    ctx->pc = 0x80999FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80999FB0: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80999FB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80999FB0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FB4:
    ctx->pc = 0x80999FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999FB4: lwz     r6, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FB8:
    ctx->pc = 0x80999FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999FB8: lbz     r4, 15(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(15);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FBC:
    ctx->pc = 0x80999FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FBCu)) return;
    // 80999FBC: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80999FC0:
    ctx->pc = 0x80999FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FC0u)) return;
    // 80999FC0: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80999FC4:
    ctx->pc = 0x80999FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999FC4: stb     r4, 15(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FC8:
    ctx->pc = 0x80999FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FC8u)) return;
    // 80999FC8: cmplwi  r0, 0x000F
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80999FCC:
    ctx->pc = 0x80999FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FCCu)) return;
    // 80999FCC: bc    4, 2, 0x80999FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999FF4;
        }
    }

label_80999FD0:
    ctx->pc = 0x80999FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80999FD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80999FD4:
    ctx->pc = 0x80999FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80999FD4: stb     r5, 15(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FD8:
    ctx->pc = 0x80999FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80999FD8: lbz     r4, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FDC:
    ctx->pc = 0x80999FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FDCu)) return;
    // 80999FDC: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80999FE0:
    ctx->pc = 0x80999FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FE0u)) return;
    // 80999FE0: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80999FE4:
    ctx->pc = 0x80999FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999FE4: stb     r4, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FE8:
    ctx->pc = 0x80999FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FE8u)) return;
    // 80999FE8: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80999FEC:
    ctx->pc = 0x80999FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FECu)) return;
    // 80999FEC: bc    4, 2, 0x80999FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80999FF4;
        }
    }

label_80999FF0:
    ctx->pc = 0x80999FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80999FF0: stb     r5, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FF4:
    ctx->pc = 0x80999FF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80999FF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80999FF4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80999FF8:
    ctx->pc = 0x80999FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80999FF8: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80999FFC:
    ctx->pc = 0x80999FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80999FFCu)) return;
    // 80999FFC: cmpwi   r0, 0
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

label_8099A000:
    ctx->pc = 0x8099A000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A000u)) return;
    // 8099A000: bc    4, 2, 0x8099A0B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099A0B4;
        }
    }

label_8099A004:
    ctx->pc = 0x8099A004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8099A004: lwz     r4, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A008:
    ctx->pc = 0x8099A008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A008u)) return;
    // 8099A008: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8099A00C:
    ctx->pc = 0x8099A00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A00Cu)) return;
    // 8099A00C: lis     r6, -27769
    ctx->gpr[6] = ((u32)(s32)(-27769) << 16);

label_8099A010:
    ctx->pc = 0x8099A010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A010u)) return;
    // 8099A010: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A014:
    ctx->pc = 0x8099A014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8099A014: lbz     r5, 14(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A018:
    ctx->pc = 0x8099A018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A018u)) return;
    // 8099A018: addi    r4, r3, -4488
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4488);

label_8099A01C:
    ctx->pc = 0x8099A01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A01Cu)) return;
    // 8099A01C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A020:
    ctx->pc = 0x8099A020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8099A020: stw     r0, 8(r1)
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
label_8099A024:
    ctx->pc = 0x8099A024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8099A024: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8099A024u)) return;
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
label_8099A028:
    ctx->pc = 0x8099A028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A028u)) return;
    // 8099A028: addi    r3, r3, -2068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2068);

label_8099A02C:
    ctx->pc = 0x8099A02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099A02C: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A030:
    ctx->pc = 0x8099A030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099A030: lfs     f2, -4512(r6)
    if (!ppc_fp_available_inline(ctx, 0x8099A030u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4512);
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
label_8099A034:
    ctx->pc = 0x8099A034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099A034: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8099A034u)) return;
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
label_8099A038:
    ctx->pc = 0x8099A038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A038u)) return;
    // 8099A038: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8099A038u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_8099A03C:
    ctx->pc = 0x8099A03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A03Cu)) return;
    // 8099A03C: fmuls   f31, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8099A03Cu)) return;
    ppc_fmuls(ctx, 31, 2, 0);

label_8099A040:
    ctx->pc = 0x8099A040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A040u)) return;
    // 8099A040: bl      0x8060F594
    {
            ctx->lr = 0x8099A044u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_8099A044:
    ctx->pc = 0x8099A044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8099A044: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8099A044u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8099A048:
    ctx->pc = 0x8099A048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A048u)) return;
    // 8099A048: lis     r3, -27767
    ctx->gpr[3] = ((u32)(s32)(-27767) << 16);

label_8099A04C:
    ctx->pc = 0x8099A04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A04Cu)) return;
    // 8099A04C: lis     r4, -27767
    ctx->gpr[4] = ((u32)(s32)(-27767) << 16);

label_8099A050:
    ctx->pc = 0x8099A050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A050u)) return;
    // 8099A050: addi    r3, r3, -27104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27104);

label_8099A054:
    ctx->pc = 0x8099A054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A054u)) return;
    // 8099A054: addi    r4, r4, -26456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26456);

label_8099A058:
    ctx->pc = 0x8099A058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A058u)) return;
    // 8099A058: bl      0x805FC378
    {
            ctx->lr = 0x8099A05Cu;
            ctx->pc = 0x805FC378u;
            return;
    }

label_8099A05C:
    ctx->pc = 0x8099A05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8099A05C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8099A05Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8099A060:
    ctx->pc = 0x8099A060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A060u)) return;
    // 8099A060: lis     r3, -27767
    ctx->gpr[3] = ((u32)(s32)(-27767) << 16);

label_8099A064:
    ctx->pc = 0x8099A064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A064u)) return;
    // 8099A064: lis     r4, -27767
    ctx->gpr[4] = ((u32)(s32)(-27767) << 16);

label_8099A068:
    ctx->pc = 0x8099A068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A068u)) return;
    // 8099A068: addi    r3, r3, -20960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20960);

label_8099A06C:
    ctx->pc = 0x8099A06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A06Cu)) return;
    // 8099A06C: addi    r4, r4, -20312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20312);

label_8099A070:
    ctx->pc = 0x8099A070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A070u)) return;
    // 8099A070: bl      0x805FC378
    {
            ctx->lr = 0x8099A074u;
            ctx->pc = 0x805FC378u;
            return;
    }

label_8099A074:
    ctx->pc = 0x8099A074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099A074: bl      0x809691B8
    {
            ctx->lr = 0x8099A078u;
            ctx->pc = 0x809691B8u;
            return;
    }

label_8099A078:
    ctx->pc = 0x8099A078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 8099A078: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A07C:
    ctx->pc = 0x8099A07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A07Cu)) return;
    // 8099A07C: lis     r5, -27769
    ctx->gpr[5] = ((u32)(s32)(-27769) << 16);

label_8099A080:
    ctx->pc = 0x8099A080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8099A080: lfs     f1, -4508(r3)
    if (!ppc_fp_available_inline(ctx, 0x8099A080u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4508);
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
label_8099A084:
    ctx->pc = 0x8099A084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A084u)) return;
    // 8099A084: addi    r6, r5, -4504
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-4504);

label_8099A088:
    ctx->pc = 0x8099A088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A088u)) return;
    // 8099A088: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_8099A08C:
    ctx->pc = 0x8099A08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A08Cu)) return;
    // 8099A08C: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A090:
    ctx->pc = 0x8099A090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A090u)) return;
    // 8099A090: addi    r5, r4, -4500
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4500);

label_8099A094:
    ctx->pc = 0x8099A094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A094u)) return;
    // 8099A094: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8099A094u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_8099A098:
    ctx->pc = 0x8099A098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A098u)) return;
    // 8099A098: addi    r4, r3, -4496
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4496);

label_8099A09C:
    ctx->pc = 0x8099A09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099A09C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x8099A09Cu)) return;
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
label_8099A0A0:
    ctx->pc = 0x8099A0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099A0A0: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8099A0A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_8099A0A4:
    ctx->pc = 0x8099A0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0A4u)) return;
    // 8099A0A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8099A0A8:
    ctx->pc = 0x8099A0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8099A0A8: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8099A0A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_8099A0AC:
    ctx->pc = 0x8099A0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0ACu)) return;
    // 8099A0AC: bl      0x809690D4
    {
            ctx->lr = 0x8099A0B0u;
            ctx->pc = 0x809690D4u;
            return;
    }

label_8099A0B0:
    ctx->pc = 0x8099A0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099A0B0: bl      0x809691B4
    {
            ctx->lr = 0x8099A0B4u;
            ctx->pc = 0x809691B4u;
            return;
    }

label_8099A0B4:
    ctx->pc = 0x8099A0B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A0B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8099A0B4: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8099A0B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8099A0B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0B8:
    ctx->pc = 0x8099A0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099A0B8: lwz     r0, 36(r1)
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
label_8099A0BC:
    ctx->pc = 0x8099A0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099A0BC: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8099A0BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0C0:
    ctx->pc = 0x8099A0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8099A0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099A0C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0C4:
    ctx->pc = 0x8099A0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0C4u)) return;
    // 8099A0C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8099A0C8:
    ctx->pc = 0x8099A0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0C8u)) return;
    // 8099A0C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_8099A0CC:
    ctx->pc = 0x8099A0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8099A0CC: stwu     r1, -32(r1)
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
label_8099A0D0:
    ctx->pc = 0x8099A0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8099A0D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0D4:
    ctx->pc = 0x8099A0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8099A0D4: stw     r0, 36(r1)
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
label_8099A0D8:
    ctx->pc = 0x8099A0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099A0D8: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8099A0D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0DC:
    ctx->pc = 0x8099A0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099A0DC: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8099A0DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8099A0DCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0E0:
    ctx->pc = 0x8099A0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0E0u)) return;
    // 8099A0E0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_8099A0E4:
    ctx->pc = 0x8099A0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099A0E4: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0E8:
    ctx->pc = 0x8099A0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0E8u)) return;
    // 8099A0E8: cmpwi   r0, 0
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

label_8099A0EC:
    ctx->pc = 0x8099A0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0ECu)) return;
    // 8099A0EC: bc    4, 2, 0x8099A1A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8099A1A0;
        }
    }

label_8099A0F0:
    ctx->pc = 0x8099A0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8099A0F0: lwz     r4, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A0F4:
    ctx->pc = 0x8099A0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0F4u)) return;
    // 8099A0F4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8099A0F8:
    ctx->pc = 0x8099A0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0F8u)) return;
    // 8099A0F8: lis     r6, -27769
    ctx->gpr[6] = ((u32)(s32)(-27769) << 16);

label_8099A0FC:
    ctx->pc = 0x8099A0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A0FCu)) return;
    // 8099A0FC: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A100:
    ctx->pc = 0x8099A100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8099A100: lbz     r5, 14(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A104:
    ctx->pc = 0x8099A104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A104u)) return;
    // 8099A104: addi    r4, r3, -4488
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4488);

label_8099A108:
    ctx->pc = 0x8099A108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A108u)) return;
    // 8099A108: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A10C:
    ctx->pc = 0x8099A10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8099A10C: stw     r0, 8(r1)
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
label_8099A110:
    ctx->pc = 0x8099A110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8099A110: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8099A110u)) return;
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
label_8099A114:
    ctx->pc = 0x8099A114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A114u)) return;
    // 8099A114: addi    r3, r3, -2068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2068);

label_8099A118:
    ctx->pc = 0x8099A118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099A118: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A11C:
    ctx->pc = 0x8099A11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099A11C: lfs     f2, -4512(r6)
    if (!ppc_fp_available_inline(ctx, 0x8099A11Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-4512);
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
label_8099A120:
    ctx->pc = 0x8099A120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099A120: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8099A120u)) return;
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
label_8099A124:
    ctx->pc = 0x8099A124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A124u)) return;
    // 8099A124: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8099A124u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_8099A128:
    ctx->pc = 0x8099A128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A128u)) return;
    // 8099A128: fmuls   f31, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8099A128u)) return;
    ppc_fmuls(ctx, 31, 2, 0);

label_8099A12C:
    ctx->pc = 0x8099A12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A12Cu)) return;
    // 8099A12C: bl      0x8060F594
    {
            ctx->lr = 0x8099A130u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_8099A130:
    ctx->pc = 0x8099A130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8099A130: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8099A130u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8099A134:
    ctx->pc = 0x8099A134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A134u)) return;
    // 8099A134: lis     r3, -27767
    ctx->gpr[3] = ((u32)(s32)(-27767) << 16);

label_8099A138:
    ctx->pc = 0x8099A138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A138u)) return;
    // 8099A138: lis     r4, -27767
    ctx->gpr[4] = ((u32)(s32)(-27767) << 16);

label_8099A13C:
    ctx->pc = 0x8099A13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A13Cu)) return;
    // 8099A13C: addi    r3, r3, -27104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27104);

label_8099A140:
    ctx->pc = 0x8099A140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A140u)) return;
    // 8099A140: addi    r4, r4, -26456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26456);

label_8099A144:
    ctx->pc = 0x8099A144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A144u)) return;
    // 8099A144: bl      0x805FC378
    {
            ctx->lr = 0x8099A148u;
            ctx->pc = 0x805FC378u;
            return;
    }

label_8099A148:
    ctx->pc = 0x8099A148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8099A148: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8099A148u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8099A14C:
    ctx->pc = 0x8099A14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A14Cu)) return;
    // 8099A14C: lis     r3, -27767
    ctx->gpr[3] = ((u32)(s32)(-27767) << 16);

label_8099A150:
    ctx->pc = 0x8099A150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A150u)) return;
    // 8099A150: lis     r4, -27767
    ctx->gpr[4] = ((u32)(s32)(-27767) << 16);

label_8099A154:
    ctx->pc = 0x8099A154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A154u)) return;
    // 8099A154: addi    r3, r3, -20960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20960);

label_8099A158:
    ctx->pc = 0x8099A158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A158u)) return;
    // 8099A158: addi    r4, r4, -20312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20312);

label_8099A15C:
    ctx->pc = 0x8099A15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A15Cu)) return;
    // 8099A15C: bl      0x805FC378
    {
            ctx->lr = 0x8099A160u;
            ctx->pc = 0x805FC378u;
            return;
    }

label_8099A160:
    ctx->pc = 0x8099A160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099A160: bl      0x809691B8
    {
            ctx->lr = 0x8099A164u;
            ctx->pc = 0x809691B8u;
            return;
    }

label_8099A164:
    ctx->pc = 0x8099A164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 8099A164: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A168:
    ctx->pc = 0x8099A168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A168u)) return;
    // 8099A168: lis     r5, -27769
    ctx->gpr[5] = ((u32)(s32)(-27769) << 16);

label_8099A16C:
    ctx->pc = 0x8099A16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8099A16C: lfs     f1, -4508(r3)
    if (!ppc_fp_available_inline(ctx, 0x8099A16Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4508);
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
label_8099A170:
    ctx->pc = 0x8099A170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A170u)) return;
    // 8099A170: addi    r6, r5, -4504
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-4504);

label_8099A174:
    ctx->pc = 0x8099A174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A174u)) return;
    // 8099A174: lis     r4, -27769
    ctx->gpr[4] = ((u32)(s32)(-27769) << 16);

label_8099A178:
    ctx->pc = 0x8099A178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A178u)) return;
    // 8099A178: lis     r3, -27769
    ctx->gpr[3] = ((u32)(s32)(-27769) << 16);

label_8099A17C:
    ctx->pc = 0x8099A17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A17Cu)) return;
    // 8099A17C: addi    r5, r4, -4500
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-4500);

label_8099A180:
    ctx->pc = 0x8099A180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A180u)) return;
    // 8099A180: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8099A180u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_8099A184:
    ctx->pc = 0x8099A184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A184u)) return;
    // 8099A184: addi    r4, r3, -4496
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4496);

label_8099A188:
    ctx->pc = 0x8099A188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099A188: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x8099A188u)) return;
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
label_8099A18C:
    ctx->pc = 0x8099A18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8099A18C: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8099A18Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_8099A190:
    ctx->pc = 0x8099A190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A190u)) return;
    // 8099A190: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8099A194:
    ctx->pc = 0x8099A194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8099A194: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8099A194u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_8099A198:
    ctx->pc = 0x8099A198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A198u)) return;
    // 8099A198: bl      0x809690D4
    {
            ctx->lr = 0x8099A19Cu;
            ctx->pc = 0x809690D4u;
            return;
    }

label_8099A19C:
    ctx->pc = 0x8099A19Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A19Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099A19C: bl      0x809691B4
    {
            ctx->lr = 0x8099A1A0u;
            ctx->pc = 0x809691B4u;
            return;
    }

label_8099A1A0:
    ctx->pc = 0x8099A1A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A1A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8099A1A0: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8099A1A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8099A1A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A1A4:
    ctx->pc = 0x8099A1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8099A1A4: lwz     r0, 36(r1)
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
label_8099A1A8:
    ctx->pc = 0x8099A1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8099A1A8: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8099A1A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A1AC:
    ctx->pc = 0x8099A1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8099A1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8099A1AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8099A1B0:
    ctx->pc = 0x8099A1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A1B0u)) return;
    // 8099A1B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8099A1B4:
    ctx->pc = 0x8099A1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8099A1B4u)) return;
    // 8099A1B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

label_8099A1B8:
    ctx->pc = 0x8099A1B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8099A1B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8099A1B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80999C00;
        }
    }

    ctx->pc = 0x8099A1BCu;
    return;
return_dispatch_80999C00:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80999C50u: goto label_80999C50;
    case 0x80999CDCu: goto label_80999CDC;
    case 0x80999CE8u: goto label_80999CE8;
    case 0x80999D00u: goto label_80999D00;
    case 0x80999D3Cu: goto label_80999D3C;
    case 0x80999D48u: goto label_80999D48;
    case 0x80999D60u: goto label_80999D60;
    case 0x80999DB4u: goto label_80999DB4;
    case 0x80999E98u: goto label_80999E98;
    case 0x80999EB0u: goto label_80999EB0;
    case 0x80999EF4u: goto label_80999EF4;
    case 0x80999F0Cu: goto label_80999F0C;
    case 0x80999F3Cu: goto label_80999F3C;
    case 0x80999F78u: goto label_80999F78;
    case 0x8099A044u: goto label_8099A044;
    case 0x8099A05Cu: goto label_8099A05C;
    case 0x8099A074u: goto label_8099A074;
    case 0x8099A078u: goto label_8099A078;
    case 0x8099A0B0u: goto label_8099A0B0;
    case 0x8099A0B4u: goto label_8099A0B4;
    case 0x8099A130u: goto label_8099A130;
    case 0x8099A148u: goto label_8099A148;
    case 0x8099A160u: goto label_8099A160;
    case 0x8099A164u: goto label_8099A164;
    case 0x8099A19Cu: goto label_8099A19C;
    case 0x8099A1A0u: goto label_8099A1A0;
    default: return;
    }
}

