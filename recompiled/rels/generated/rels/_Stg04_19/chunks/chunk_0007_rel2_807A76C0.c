// DolRecomp output
#include "../generated.h"

void func_807A76C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_807A76C0[609] = {
        &&label_807A76C0,
        &&label_807A76C4,
        &&label_807A76C8,
        &&label_807A76CC,
        &&label_807A76D0,
        &&label_807A76D4,
        &&label_807A76D8,
        &&label_807A76DC,
        &&label_807A76E0,
        &&label_807A76E4,
        &&label_807A76E8,
        &&label_807A76EC,
        &&label_807A76F0,
        &&label_807A76F4,
        &&label_807A76F8,
        &&label_807A76FC,
        &&label_807A7700,
        &&label_807A7704,
        &&label_807A7708,
        &&label_807A770C,
        &&label_807A7710,
        &&label_807A7714,
        &&label_807A7718,
        &&label_807A771C,
        &&label_807A7720,
        &&label_807A7724,
        &&label_807A7728,
        &&label_807A772C,
        &&label_807A7730,
        &&label_807A7734,
        &&label_807A7738,
        &&label_807A773C,
        &&label_807A7740,
        &&label_807A7744,
        &&label_807A7748,
        &&label_807A774C,
        &&label_807A7750,
        &&label_807A7754,
        &&label_807A7758,
        &&label_807A775C,
        &&label_807A7760,
        &&label_807A7764,
        &&label_807A7768,
        &&label_807A776C,
        &&label_807A7770,
        &&label_807A7774,
        &&label_807A7778,
        &&label_807A777C,
        &&label_807A7780,
        &&label_807A7784,
        &&label_807A7788,
        &&label_807A778C,
        &&label_807A7790,
        &&label_807A7794,
        &&label_807A7798,
        &&label_807A779C,
        &&label_807A77A0,
        &&label_807A77A4,
        &&label_807A77A8,
        &&label_807A77AC,
        &&label_807A77B0,
        &&label_807A77B4,
        &&label_807A77B8,
        &&label_807A77BC,
        &&label_807A77C0,
        &&label_807A77C4,
        &&label_807A77C8,
        &&label_807A77CC,
        &&label_807A77D0,
        &&label_807A77D4,
        &&label_807A77D8,
        &&label_807A77DC,
        &&label_807A77E0,
        &&label_807A77E4,
        &&label_807A77E8,
        &&label_807A77EC,
        &&label_807A77F0,
        &&label_807A77F4,
        &&label_807A77F8,
        &&label_807A77FC,
        &&label_807A7800,
        &&label_807A7804,
        &&label_807A7808,
        &&label_807A780C,
        &&label_807A7810,
        &&label_807A7814,
        &&label_807A7818,
        &&label_807A781C,
        &&label_807A7820,
        &&label_807A7824,
        &&label_807A7828,
        &&label_807A782C,
        &&label_807A7830,
        &&label_807A7834,
        &&label_807A7838,
        &&label_807A783C,
        &&label_807A7840,
        &&label_807A7844,
        &&label_807A7848,
        &&label_807A784C,
        &&label_807A7850,
        &&label_807A7854,
        &&label_807A7858,
        &&label_807A785C,
        &&label_807A7860,
        &&label_807A7864,
        &&label_807A7868,
        &&label_807A786C,
        &&label_807A7870,
        &&label_807A7874,
        &&label_807A7878,
        &&label_807A787C,
        &&label_807A7880,
        &&label_807A7884,
        &&label_807A7888,
        &&label_807A788C,
        &&label_807A7890,
        &&label_807A7894,
        &&label_807A7898,
        &&label_807A789C,
        &&label_807A78A0,
        &&label_807A78A4,
        &&label_807A78A8,
        &&label_807A78AC,
        &&label_807A78B0,
        &&label_807A78B4,
        &&label_807A78B8,
        &&label_807A78BC,
        &&label_807A78C0,
        &&label_807A78C4,
        &&label_807A78C8,
        &&label_807A78CC,
        &&label_807A78D0,
        &&label_807A78D4,
        &&label_807A78D8,
        &&label_807A78DC,
        &&label_807A78E0,
        &&label_807A78E4,
        &&label_807A78E8,
        &&label_807A78EC,
        &&label_807A78F0,
        &&label_807A78F4,
        &&label_807A78F8,
        &&label_807A78FC,
        &&label_807A7900,
        &&label_807A7904,
        &&label_807A7908,
        &&label_807A790C,
        &&label_807A7910,
        &&label_807A7914,
        &&label_807A7918,
        &&label_807A791C,
        &&label_807A7920,
        &&label_807A7924,
        &&label_807A7928,
        &&label_807A792C,
        &&label_807A7930,
        &&label_807A7934,
        &&label_807A7938,
        &&label_807A793C,
        &&label_807A7940,
        &&label_807A7944,
        &&label_807A7948,
        &&label_807A794C,
        &&label_807A7950,
        &&label_807A7954,
        &&label_807A7958,
        &&label_807A795C,
        &&label_807A7960,
        &&label_807A7964,
        &&label_807A7968,
        &&label_807A796C,
        &&label_807A7970,
        &&label_807A7974,
        &&label_807A7978,
        &&label_807A797C,
        &&label_807A7980,
        &&label_807A7984,
        &&label_807A7988,
        &&label_807A798C,
        &&label_807A7990,
        &&label_807A7994,
        &&label_807A7998,
        &&label_807A799C,
        &&label_807A79A0,
        &&label_807A79A4,
        &&label_807A79A8,
        &&label_807A79AC,
        &&label_807A79B0,
        &&label_807A79B4,
        &&label_807A79B8,
        &&label_807A79BC,
        &&label_807A79C0,
        &&label_807A79C4,
        &&label_807A79C8,
        &&label_807A79CC,
        &&label_807A79D0,
        &&label_807A79D4,
        &&label_807A79D8,
        &&label_807A79DC,
        &&label_807A79E0,
        &&label_807A79E4,
        &&label_807A79E8,
        &&label_807A79EC,
        &&label_807A79F0,
        &&label_807A79F4,
        &&label_807A79F8,
        &&label_807A79FC,
        &&label_807A7A00,
        &&label_807A7A04,
        &&label_807A7A08,
        &&label_807A7A0C,
        &&label_807A7A10,
        &&label_807A7A14,
        &&label_807A7A18,
        &&label_807A7A1C,
        &&label_807A7A20,
        &&label_807A7A24,
        &&label_807A7A28,
        &&label_807A7A2C,
        &&label_807A7A30,
        &&label_807A7A34,
        &&label_807A7A38,
        &&label_807A7A3C,
        &&label_807A7A40,
        &&label_807A7A44,
        &&label_807A7A48,
        &&label_807A7A4C,
        &&label_807A7A50,
        &&label_807A7A54,
        &&label_807A7A58,
        &&label_807A7A5C,
        &&label_807A7A60,
        &&label_807A7A64,
        &&label_807A7A68,
        &&label_807A7A6C,
        &&label_807A7A70,
        &&label_807A7A74,
        &&label_807A7A78,
        &&label_807A7A7C,
        &&label_807A7A80,
        &&label_807A7A84,
        &&label_807A7A88,
        &&label_807A7A8C,
        &&label_807A7A90,
        &&label_807A7A94,
        &&label_807A7A98,
        &&label_807A7A9C,
        &&label_807A7AA0,
        &&label_807A7AA4,
        &&label_807A7AA8,
        &&label_807A7AAC,
        &&label_807A7AB0,
        &&label_807A7AB4,
        &&label_807A7AB8,
        &&label_807A7ABC,
        &&label_807A7AC0,
        &&label_807A7AC4,
        &&label_807A7AC8,
        &&label_807A7ACC,
        &&label_807A7AD0,
        &&label_807A7AD4,
        &&label_807A7AD8,
        &&label_807A7ADC,
        &&label_807A7AE0,
        &&label_807A7AE4,
        &&label_807A7AE8,
        &&label_807A7AEC,
        &&label_807A7AF0,
        &&label_807A7AF4,
        &&label_807A7AF8,
        &&label_807A7AFC,
        &&label_807A7B00,
        &&label_807A7B04,
        &&label_807A7B08,
        &&label_807A7B0C,
        &&label_807A7B10,
        &&label_807A7B14,
        &&label_807A7B18,
        &&label_807A7B1C,
        &&label_807A7B20,
        &&label_807A7B24,
        &&label_807A7B28,
        &&label_807A7B2C,
        &&label_807A7B30,
        &&label_807A7B34,
        &&label_807A7B38,
        &&label_807A7B3C,
        &&label_807A7B40,
        &&label_807A7B44,
        &&label_807A7B48,
        &&label_807A7B4C,
        &&label_807A7B50,
        &&label_807A7B54,
        &&label_807A7B58,
        &&label_807A7B5C,
        &&label_807A7B60,
        &&label_807A7B64,
        &&label_807A7B68,
        &&label_807A7B6C,
        &&label_807A7B70,
        &&label_807A7B74,
        &&label_807A7B78,
        &&label_807A7B7C,
        &&label_807A7B80,
        &&label_807A7B84,
        &&label_807A7B88,
        &&label_807A7B8C,
        &&label_807A7B90,
        &&label_807A7B94,
        &&label_807A7B98,
        &&label_807A7B9C,
        &&label_807A7BA0,
        &&label_807A7BA4,
        &&label_807A7BA8,
        &&label_807A7BAC,
        &&label_807A7BB0,
        &&label_807A7BB4,
        &&label_807A7BB8,
        &&label_807A7BBC,
        &&label_807A7BC0,
        &&label_807A7BC4,
        &&label_807A7BC8,
        &&label_807A7BCC,
        &&label_807A7BD0,
        &&label_807A7BD4,
        &&label_807A7BD8,
        &&label_807A7BDC,
        &&label_807A7BE0,
        &&label_807A7BE4,
        &&label_807A7BE8,
        &&label_807A7BEC,
        &&label_807A7BF0,
        &&label_807A7BF4,
        &&label_807A7BF8,
        &&label_807A7BFC,
        &&label_807A7C00,
        &&label_807A7C04,
        &&label_807A7C08,
        &&label_807A7C0C,
        &&label_807A7C10,
        &&label_807A7C14,
        &&label_807A7C18,
        &&label_807A7C1C,
        &&label_807A7C20,
        &&label_807A7C24,
        &&label_807A7C28,
        &&label_807A7C2C,
        &&label_807A7C30,
        &&label_807A7C34,
        &&label_807A7C38,
        &&label_807A7C3C,
        &&label_807A7C40,
        &&label_807A7C44,
        &&label_807A7C48,
        &&label_807A7C4C,
        &&label_807A7C50,
        &&label_807A7C54,
        &&label_807A7C58,
        &&label_807A7C5C,
        &&label_807A7C60,
        &&label_807A7C64,
        &&label_807A7C68,
        &&label_807A7C6C,
        &&label_807A7C70,
        &&label_807A7C74,
        &&label_807A7C78,
        &&label_807A7C7C,
        &&label_807A7C80,
        &&label_807A7C84,
        &&label_807A7C88,
        &&label_807A7C8C,
        &&label_807A7C90,
        &&label_807A7C94,
        &&label_807A7C98,
        &&label_807A7C9C,
        &&label_807A7CA0,
        &&label_807A7CA4,
        &&label_807A7CA8,
        &&label_807A7CAC,
        &&label_807A7CB0,
        &&label_807A7CB4,
        &&label_807A7CB8,
        &&label_807A7CBC,
        &&label_807A7CC0,
        &&label_807A7CC4,
        &&label_807A7CC8,
        &&label_807A7CCC,
        &&label_807A7CD0,
        &&label_807A7CD4,
        &&label_807A7CD8,
        &&label_807A7CDC,
        &&label_807A7CE0,
        &&label_807A7CE4,
        &&label_807A7CE8,
        &&label_807A7CEC,
        &&label_807A7CF0,
        &&label_807A7CF4,
        &&label_807A7CF8,
        &&label_807A7CFC,
        &&label_807A7D00,
        &&label_807A7D04,
        &&label_807A7D08,
        &&label_807A7D0C,
        &&label_807A7D10,
        &&label_807A7D14,
        &&label_807A7D18,
        &&label_807A7D1C,
        &&label_807A7D20,
        &&label_807A7D24,
        &&label_807A7D28,
        &&label_807A7D2C,
        &&label_807A7D30,
        &&label_807A7D34,
        &&label_807A7D38,
        &&label_807A7D3C,
        &&label_807A7D40,
        &&label_807A7D44,
        &&label_807A7D48,
        &&label_807A7D4C,
        &&label_807A7D50,
        &&label_807A7D54,
        &&label_807A7D58,
        &&label_807A7D5C,
        &&label_807A7D60,
        &&label_807A7D64,
        &&label_807A7D68,
        &&label_807A7D6C,
        &&label_807A7D70,
        &&label_807A7D74,
        &&label_807A7D78,
        &&label_807A7D7C,
        &&label_807A7D80,
        &&label_807A7D84,
        &&label_807A7D88,
        &&label_807A7D8C,
        &&label_807A7D90,
        &&label_807A7D94,
        &&label_807A7D98,
        &&label_807A7D9C,
        &&label_807A7DA0,
        &&label_807A7DA4,
        &&label_807A7DA8,
        &&label_807A7DAC,
        &&label_807A7DB0,
        &&label_807A7DB4,
        &&label_807A7DB8,
        &&label_807A7DBC,
        &&label_807A7DC0,
        &&label_807A7DC4,
        &&label_807A7DC8,
        &&label_807A7DCC,
        &&label_807A7DD0,
        &&label_807A7DD4,
        &&label_807A7DD8,
        &&label_807A7DDC,
        &&label_807A7DE0,
        &&label_807A7DE4,
        &&label_807A7DE8,
        &&label_807A7DEC,
        &&label_807A7DF0,
        &&label_807A7DF4,
        &&label_807A7DF8,
        &&label_807A7DFC,
        &&label_807A7E00,
        &&label_807A7E04,
        &&label_807A7E08,
        &&label_807A7E0C,
        &&label_807A7E10,
        &&label_807A7E14,
        &&label_807A7E18,
        &&label_807A7E1C,
        &&label_807A7E20,
        &&label_807A7E24,
        &&label_807A7E28,
        &&label_807A7E2C,
        &&label_807A7E30,
        &&label_807A7E34,
        &&label_807A7E38,
        &&label_807A7E3C,
        &&label_807A7E40,
        &&label_807A7E44,
        &&label_807A7E48,
        &&label_807A7E4C,
        &&label_807A7E50,
        &&label_807A7E54,
        &&label_807A7E58,
        &&label_807A7E5C,
        &&label_807A7E60,
        &&label_807A7E64,
        &&label_807A7E68,
        &&label_807A7E6C,
        &&label_807A7E70,
        &&label_807A7E74,
        &&label_807A7E78,
        &&label_807A7E7C,
        &&label_807A7E80,
        &&label_807A7E84,
        &&label_807A7E88,
        &&label_807A7E8C,
        &&label_807A7E90,
        &&label_807A7E94,
        &&label_807A7E98,
        &&label_807A7E9C,
        &&label_807A7EA0,
        &&label_807A7EA4,
        &&label_807A7EA8,
        &&label_807A7EAC,
        &&label_807A7EB0,
        &&label_807A7EB4,
        &&label_807A7EB8,
        &&label_807A7EBC,
        &&label_807A7EC0,
        &&label_807A7EC4,
        &&label_807A7EC8,
        &&label_807A7ECC,
        &&label_807A7ED0,
        &&label_807A7ED4,
        &&label_807A7ED8,
        &&label_807A7EDC,
        &&label_807A7EE0,
        &&label_807A7EE4,
        &&label_807A7EE8,
        &&label_807A7EEC,
        &&label_807A7EF0,
        &&label_807A7EF4,
        &&label_807A7EF8,
        &&label_807A7EFC,
        &&label_807A7F00,
        &&label_807A7F04,
        &&label_807A7F08,
        &&label_807A7F0C,
        &&label_807A7F10,
        &&label_807A7F14,
        &&label_807A7F18,
        &&label_807A7F1C,
        &&label_807A7F20,
        &&label_807A7F24,
        &&label_807A7F28,
        &&label_807A7F2C,
        &&label_807A7F30,
        &&label_807A7F34,
        &&label_807A7F38,
        &&label_807A7F3C,
        &&label_807A7F40,
        &&label_807A7F44,
        &&label_807A7F48,
        &&label_807A7F4C,
        &&label_807A7F50,
        &&label_807A7F54,
        &&label_807A7F58,
        &&label_807A7F5C,
        &&label_807A7F60,
        &&label_807A7F64,
        &&label_807A7F68,
        &&label_807A7F6C,
        &&label_807A7F70,
        &&label_807A7F74,
        &&label_807A7F78,
        &&label_807A7F7C,
        &&label_807A7F80,
        &&label_807A7F84,
        &&label_807A7F88,
        &&label_807A7F8C,
        &&label_807A7F90,
        &&label_807A7F94,
        &&label_807A7F98,
        &&label_807A7F9C,
        &&label_807A7FA0,
        &&label_807A7FA4,
        &&label_807A7FA8,
        &&label_807A7FAC,
        &&label_807A7FB0,
        &&label_807A7FB4,
        &&label_807A7FB8,
        &&label_807A7FBC,
        &&label_807A7FC0,
        &&label_807A7FC4,
        &&label_807A7FC8,
        &&label_807A7FCC,
        &&label_807A7FD0,
        &&label_807A7FD4,
        &&label_807A7FD8,
        &&label_807A7FDC,
        &&label_807A7FE0,
        &&label_807A7FE4,
        &&label_807A7FE8,
        &&label_807A7FEC,
        &&label_807A7FF0,
        &&label_807A7FF4,
        &&label_807A7FF8,
        &&label_807A7FFC,
        &&label_807A8000,
        &&label_807A8004,
        &&label_807A8008,
        &&label_807A800C,
        &&label_807A8010,
        &&label_807A8014,
        &&label_807A8018,
        &&label_807A801C,
        &&label_807A8020,
        &&label_807A8024,
        &&label_807A8028,
        &&label_807A802C,
        &&label_807A8030,
        &&label_807A8034,
        &&label_807A8038,
        &&label_807A803C,
        &&label_807A8040
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x807A76C0u && pc <= 0x807A8040u && ((pc - 0x807A76C0u) & 3u) == 0u)
            goto *pc_table_807A76C0[(pc - 0x807A76C0u) >> 2];
    }
    return;
label_807A76C0:
    ctx->pc = 0x807A76C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A76C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A76C0: bl      0x804060B0
    {
            ctx->lr = 0x807A76C4u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_807A76C4:
    ctx->pc = 0x807A76C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A76C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A76C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A76C8:
    ctx->pc = 0x807A76C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76C8u)) return;
    // 807A76C8: bl      0x804802CC
    {
            ctx->lr = 0x807A76CCu;
            ctx->pc = 0x804802CCu;
            return;
    }

label_807A76CC:
    ctx->pc = 0x807A76CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A76CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A76CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A76D0:
    ctx->pc = 0x807A76D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76D0u)) return;
    // 807A76D0: bl      0x80505684
    {
            ctx->lr = 0x807A76D4u;
            ctx->pc = 0x80505684u;
            return;
    }

label_807A76D4:
    ctx->pc = 0x807A76D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A76D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A76D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A76D8:
    ctx->pc = 0x807A76D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76D8u)) return;
    // 807A76D8: bl      0x804270C0
    {
            ctx->lr = 0x807A76DCu;
            ctx->pc = 0x804270C0u;
            return;
    }

label_807A76DC:
    ctx->pc = 0x807A76DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A76DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A76DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A76E0:
    ctx->pc = 0x807A76E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76E0u)) return;
    // 807A76E0: bl      0x8046F03C
    {
            ctx->lr = 0x807A76E4u;
            ctx->pc = 0x8046F03Cu;
            return;
    }

label_807A76E4:
    ctx->pc = 0x807A76E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A76E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A76E4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807A76E8:
    ctx->pc = 0x807A76E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76E8u)) return;
    // 807A76E8: bl      0x8046EB6C
    {
            ctx->lr = 0x807A76ECu;
            ctx->pc = 0x8046EB6Cu;
            return;
    }

label_807A76EC:
    ctx->pc = 0x807A76ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A76ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A76EC: li      r3, 963
    ctx->gpr[3] = (u32)(s32)(963);

label_807A76F0:
    ctx->pc = 0x807A76F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76F0u)) return;
    // 807A76F0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807A76F4:
    ctx->pc = 0x807A76F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76F4u)) return;
    // 807A76F4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807A76F8:
    ctx->pc = 0x807A76F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76F8u)) return;
    // 807A76F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807A76FC:
    ctx->pc = 0x807A76FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A76FCu)) return;
    // 807A76FC: bl      0x8050A21C
    {
            ctx->lr = 0x807A7700u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807A7700:
    ctx->pc = 0x807A7700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7700: lwz     r0, 36(r1)
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
label_807A7704:
    ctx->pc = 0x807A7704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7704: lwz     r31, 28(r1)
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
label_807A7708:
    ctx->pc = 0x807A7708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7708: lwz     r30, 24(r1)
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
label_807A770C:
    ctx->pc = 0x807A770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807A770Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A770C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7710:
    ctx->pc = 0x807A7710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7710u)) return;
    // 807A7710: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_807A7714:
    ctx->pc = 0x807A7714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7714u)) return;
    // 807A7714: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7718:
    ctx->pc = 0x807A7718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807A7718: stwu     r1, -16(r1)
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
label_807A771C:
    ctx->pc = 0x807A771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A771Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A771C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7720:
    ctx->pc = 0x807A7720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7720: stw     r0, 20(r1)
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
label_807A7724:
    ctx->pc = 0x807A7724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7724: stw     r31, 12(r1)
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
label_807A7728:
    ctx->pc = 0x807A7728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7728u)) return;
    // 807A7728: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807A772C:
    ctx->pc = 0x807A772Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A772Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A772C: stw     r30, 8(r1)
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
label_807A7730:
    ctx->pc = 0x807A7730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7730: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7734:
    ctx->pc = 0x807A7734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7734u)) return;
    // 807A7734: bl      0x80424330
    {
            ctx->lr = 0x807A7738u;
            ctx->pc = 0x80424330u;
            return;
    }

label_807A7738:
    ctx->pc = 0x807A7738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 807A7738: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A773C:
    ctx->pc = 0x807A773Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A773Cu)) return;
    // 807A773C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807A7740:
    ctx->pc = 0x807A7740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7740u)) return;
    // 807A7740: addi    r5, r3, -5402
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5402);

label_807A7744:
    ctx->pc = 0x807A7744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7744u)) return;
    // 807A7744: addi    r4, r4, -5404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5404);

label_807A7748:
    ctx->pc = 0x807A7748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807A7748: lha     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A774C:
    ctx->pc = 0x807A774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A774Cu)) return;
    // 807A774C: lis     r3, -32646
    ctx->gpr[3] = ((u32)(s32)(-32646) << 16);

label_807A7750:
    ctx->pc = 0x807A7750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7750: lha     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7754:
    ctx->pc = 0x807A7754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7754u)) return;
    // 807A7754: addi    r0, r3, 32512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32512);

label_807A7758:
    ctx->pc = 0x807A7758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7758u)) return;
    // 807A7758: rlwinm r3, r5, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_807A775C:
    ctx->pc = 0x807A775Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A775Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A775C: stw     r0, 24(r31)
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
label_807A7760:
    ctx->pc = 0x807A7760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7760u)) return;
    // 807A7760: or   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[4];
    }

label_807A7764:
    ctx->pc = 0x807A7764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7764u)) return;
    // 807A7764: rlwinm. r31, r3, 0, 24, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_807A7768:
    ctx->pc = 0x807A7768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7768u)) return;
    // 807A7768: bc    4, 2, 0x807A7790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7790;
        }
    }

label_807A776C:
    ctx->pc = 0x807A776Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A776Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A776C: bl      0x8046F3E8
    {
            ctx->lr = 0x807A7770u;
            ctx->pc = 0x8046F3E8u;
            return;
    }

label_807A7770:
    ctx->pc = 0x807A7770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7770: cmpwi   r3, 2
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

label_807A7774:
    ctx->pc = 0x807A7774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7774u)) return;
    // 807A7774: bc    4, 2, 0x807A7790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7790;
        }
    }

label_807A7778:
    ctx->pc = 0x807A7778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7778: lis     r4, -32695
    ctx->gpr[4] = ((u32)(s32)(-32695) << 16);

label_807A777C:
    ctx->pc = 0x807A777Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A777Cu)) return;
    // 807A777C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807A7780:
    ctx->pc = 0x807A7780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7780u)) return;
    // 807A7780: addi    r5, r4, 14752
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(14752);

label_807A7784:
    ctx->pc = 0x807A7784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7784u)) return;
    // 807A7784: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_807A7788:
    ctx->pc = 0x807A7788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7788u)) return;
    // 807A7788: bl      0x8050FD60
    {
            ctx->lr = 0x807A778Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_807A778C:
    ctx->pc = 0x807A778Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A778Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A778C: b       0x807A7818
    {
            goto label_807A7818;
    }

label_807A7790:
    ctx->pc = 0x807A7790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7790: cmplwi  r31, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A7794:
    ctx->pc = 0x807A7794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7794u)) return;
    // 807A7794: bc    4, 2, 0x807A77C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A77C4;
        }
    }

label_807A7798:
    ctx->pc = 0x807A7798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7798: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_807A779C:
    ctx->pc = 0x807A779Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A779Cu)) return;
    // 807A779C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_807A77A0:
    ctx->pc = 0x807A77A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A77A0: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A77A4:
    ctx->pc = 0x807A77A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77A4u)) return;
    // 807A77A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807A77A8:
    ctx->pc = 0x807A77A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77A8u)) return;
    // 807A77A8: bl      0x8044FCC4
    {
            ctx->lr = 0x807A77ACu;
            ctx->pc = 0x8044FCC4u;
            return;
    }

label_807A77AC:
    ctx->pc = 0x807A77ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A77ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A77AC: li      r3, 963
    ctx->gpr[3] = (u32)(s32)(963);

label_807A77B0:
    ctx->pc = 0x807A77B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77B0u)) return;
    // 807A77B0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807A77B4:
    ctx->pc = 0x807A77B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77B4u)) return;
    // 807A77B4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807A77B8:
    ctx->pc = 0x807A77B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77B8u)) return;
    // 807A77B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807A77BC:
    ctx->pc = 0x807A77BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77BCu)) return;
    // 807A77BC: bl      0x8050A21C
    {
            ctx->lr = 0x807A77C0u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807A77C0:
    ctx->pc = 0x807A77C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A77C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A77C0: b       0x807A786C
    {
            goto label_807A786C;
    }

label_807A77C4:
    ctx->pc = 0x807A77C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A77C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A77C4: cmplwi  r31, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A77C8:
    ctx->pc = 0x807A77C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77C8u)) return;
    // 807A77C8: bc    4, 2, 0x807A7818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7818;
        }
    }

label_807A77CC:
    ctx->pc = 0x807A77CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A77CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 807A77CC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_807A77D0:
    ctx->pc = 0x807A77D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77D0u)) return;
    // 807A77D0: li      r3, 961
    ctx->gpr[3] = (u32)(s32)(961);

label_807A77D4:
    ctx->pc = 0x807A77D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A77D4: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A77D8:
    ctx->pc = 0x807A77D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77D8u)) return;
    // 807A77D8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807A77DC:
    ctx->pc = 0x807A77DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77DCu)) return;
    // 807A77DC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807A77E0:
    ctx->pc = 0x807A77E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77E0u)) return;
    // 807A77E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807A77E4:
    ctx->pc = 0x807A77E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77E4u)) return;
    // 807A77E4: bl      0x8050A21C
    {
            ctx->lr = 0x807A77E8u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807A77E8:
    ctx->pc = 0x807A77E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A77E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A77E8: lis     r4, -32646
    ctx->gpr[4] = ((u32)(s32)(-32646) << 16);

label_807A77EC:
    ctx->pc = 0x807A77ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77ECu)) return;
    // 807A77EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807A77F0:
    ctx->pc = 0x807A77F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77F0u)) return;
    // 807A77F0: addi    r5, r4, 30852
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(30852);

label_807A77F4:
    ctx->pc = 0x807A77F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77F4u)) return;
    // 807A77F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807A77F8:
    ctx->pc = 0x807A77F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A77F8u)) return;
    // 807A77F8: bl      0x8050FD60
    {
            ctx->lr = 0x807A77FCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_807A77FC:
    ctx->pc = 0x807A77FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A77FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A77FC: lwz     r4, 32(r3)
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
label_807A7800:
    ctx->pc = 0x807A7800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7800u)) return;
    // 807A7800: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_807A7804:
    ctx->pc = 0x807A7804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7804u)) return;
    // 807A7804: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807A7808:
    ctx->pc = 0x807A7808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7808: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A780C:
    ctx->pc = 0x807A780Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A780Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A780C: lwz     r3, 32(r3)
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
label_807A7810:
    ctx->pc = 0x807A7810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7810: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7814:
    ctx->pc = 0x807A7814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7814u)) return;
    // 807A7814: b       0x807A786C
    {
            goto label_807A786C;
    }

label_807A7818:
    ctx->pc = 0x807A7818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7818: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_807A781C:
    ctx->pc = 0x807A781Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A781Cu)) return;
    // 807A781C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_807A7820:
    ctx->pc = 0x807A7820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7820: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7824:
    ctx->pc = 0x807A7824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7824u)) return;
    // 807A7824: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807A7828:
    ctx->pc = 0x807A7828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7828u)) return;
    // 807A7828: bl      0x8044FCC4
    {
            ctx->lr = 0x807A782Cu;
            ctx->pc = 0x8044FCC4u;
            return;
    }

label_807A782C:
    ctx->pc = 0x807A782Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A782Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A782C: li      r3, 963
    ctx->gpr[3] = (u32)(s32)(963);

label_807A7830:
    ctx->pc = 0x807A7830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7830u)) return;
    // 807A7830: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807A7834:
    ctx->pc = 0x807A7834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7834u)) return;
    // 807A7834: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807A7838:
    ctx->pc = 0x807A7838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7838u)) return;
    // 807A7838: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807A783C:
    ctx->pc = 0x807A783Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A783Cu)) return;
    // 807A783C: bl      0x8050A21C
    {
            ctx->lr = 0x807A7840u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807A7840:
    ctx->pc = 0x807A7840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7840: lis     r4, -32646
    ctx->gpr[4] = ((u32)(s32)(-32646) << 16);

label_807A7844:
    ctx->pc = 0x807A7844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7844u)) return;
    // 807A7844: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807A7848:
    ctx->pc = 0x807A7848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7848u)) return;
    // 807A7848: addi    r5, r4, 30852
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(30852);

label_807A784C:
    ctx->pc = 0x807A784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A784Cu)) return;
    // 807A784C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807A7850:
    ctx->pc = 0x807A7850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7850u)) return;
    // 807A7850: bl      0x8050FD60
    {
            ctx->lr = 0x807A7854u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_807A7854:
    ctx->pc = 0x807A7854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7854: lwz     r4, 32(r3)
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
label_807A7858:
    ctx->pc = 0x807A7858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7858u)) return;
    // 807A7858: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_807A785C:
    ctx->pc = 0x807A785Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A785Cu)) return;
    // 807A785C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807A7860:
    ctx->pc = 0x807A7860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7860: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7864:
    ctx->pc = 0x807A7864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7864: lwz     r3, 32(r3)
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
label_807A7868:
    ctx->pc = 0x807A7868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807A7868: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A786C:
    ctx->pc = 0x807A786Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A786Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A786C: lwz     r0, 20(r1)
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
label_807A7870:
    ctx->pc = 0x807A7870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7870: lwz     r31, 12(r1)
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
label_807A7874:
    ctx->pc = 0x807A7874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7874: lwz     r30, 8(r1)
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
label_807A7878:
    ctx->pc = 0x807A7878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807A7878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7878: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A787C:
    ctx->pc = 0x807A787Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A787Cu)) return;
    // 807A787C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807A7880:
    ctx->pc = 0x807A7880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7880u)) return;
    // 807A7880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7884:
    ctx->pc = 0x807A7884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807A7884: stwu     r1, -16(r1)
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
label_807A7888:
    ctx->pc = 0x807A7888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807A7888: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A788C:
    ctx->pc = 0x807A788Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A788Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807A788C: stw     r0, 20(r1)
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
label_807A7890:
    ctx->pc = 0x807A7890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807A7890: stw     r31, 12(r1)
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
label_807A7894:
    ctx->pc = 0x807A7894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807A7894: stw     r30, 8(r1)
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
label_807A7898:
    ctx->pc = 0x807A7898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7898u)) return;
    // 807A7898: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807A789C:
    ctx->pc = 0x807A789Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A789Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A789C: lwz     r31, 32(r3)
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
label_807A78A0:
    ctx->pc = 0x807A78A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A78A0: lhz     r3, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A78A4:
    ctx->pc = 0x807A78A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78A4u)) return;
    // 807A78A4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_807A78A8:
    ctx->pc = 0x807A78A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A78A8: sth     r0, 6(r31)
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
label_807A78AC:
    ctx->pc = 0x807A78ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A78AC: lhz     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A78B0:
    ctx->pc = 0x807A78B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78B0u)) return;
    // 807A78B0: extsh. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_807A78B4:
    ctx->pc = 0x807A78B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78B4u)) return;
    // 807A78B4: bc    4, 0, 0x807A78D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A78D0;
        }
    }

label_807A78B8:
    ctx->pc = 0x807A78B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A78B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A78B8: bl      0x80405C38
    {
            ctx->lr = 0x807A78BCu;
            ctx->pc = 0x80405C38u;
            return;
    }

label_807A78BC:
    ctx->pc = 0x807A78BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A78BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A78BC: lbz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A78C0:
    ctx->pc = 0x807A78C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78C0u)) return;
    // 807A78C0: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_807A78C4:
    ctx->pc = 0x807A78C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78C4u)) return;
    // 807A78C4: bl      0x80406090
    {
            ctx->lr = 0x807A78C8u;
            ctx->pc = 0x80406090u;
            return;
    }

label_807A78C8:
    ctx->pc = 0x807A78C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A78C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A78C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807A78CC:
    ctx->pc = 0x807A78CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78CCu)) return;
    // 807A78CC: bl      0x8050F9F0
    {
            ctx->lr = 0x807A78D0u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_807A78D0:
    ctx->pc = 0x807A78D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A78D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A78D0: lwz     r0, 20(r1)
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
label_807A78D4:
    ctx->pc = 0x807A78D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A78D4: lwz     r31, 12(r1)
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
label_807A78D8:
    ctx->pc = 0x807A78D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A78D8: lwz     r30, 8(r1)
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
label_807A78DC:
    ctx->pc = 0x807A78DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807A78DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A78DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A78E0:
    ctx->pc = 0x807A78E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78E0u)) return;
    // 807A78E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807A78E4:
    ctx->pc = 0x807A78E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78E4u)) return;
    // 807A78E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A78E8:
    ctx->pc = 0x807A78E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A78E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 807A78E8: lis     r4, -28643
    ctx->gpr[4] = ((u32)(s32)(-28643) << 16);

label_807A78EC:
    ctx->pc = 0x807A78ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78ECu)) return;
    // 807A78EC: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A78F0:
    ctx->pc = 0x807A78F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78F0u)) return;
    // 807A78F0: addi    r4, r4, -30768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30768);

label_807A78F4:
    ctx->pc = 0x807A78F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A78F4: lfs     f0, 16440(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A78F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16440);
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
label_807A78F8:
    ctx->pc = 0x807A78F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A78F8: lwz     r4, 0(r4)
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
label_807A78FC:
    ctx->pc = 0x807A78FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A78FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A78FC: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A78FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_807A7900:
    ctx->pc = 0x807A7900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7900u)) return;
    // 807A7900: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7900u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7904:
    ctx->pc = 0x807A7904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7904u)) return;
    // 807A7904: bc    4, 0, 0x807A7918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7918;
        }
    }

label_807A7908:
    ctx->pc = 0x807A7908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7908: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A790C:
    ctx->pc = 0x807A790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A790Cu)) return;
    // 807A790C: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_807A7910:
    ctx->pc = 0x807A7910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7910: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7914:
    ctx->pc = 0x807A7914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7914u)) return;
    // 807A7914: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7918:
    ctx->pc = 0x807A7918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7918: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A791C:
    ctx->pc = 0x807A791Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A791Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A791C: lfs     f0, 16444(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A791Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16444);
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
label_807A7920:
    ctx->pc = 0x807A7920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7920u)) return;
    // 807A7920: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7920u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7924:
    ctx->pc = 0x807A7924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7924u)) return;
    // 807A7924: bc    4, 0, 0x807A7938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7938;
        }
    }

label_807A7928:
    ctx->pc = 0x807A7928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7928: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A792C:
    ctx->pc = 0x807A792Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A792Cu)) return;
    // 807A792C: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_807A7930:
    ctx->pc = 0x807A7930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7930: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7934:
    ctx->pc = 0x807A7934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7934u)) return;
    // 807A7934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7938:
    ctx->pc = 0x807A7938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7938: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A793C:
    ctx->pc = 0x807A793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A793Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A793C: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A793Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_807A7940:
    ctx->pc = 0x807A7940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7940: lfs     f0, 16448(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7940u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16448);
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
label_807A7944:
    ctx->pc = 0x807A7944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7944u)) return;
    // 807A7944: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7944u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7948:
    ctx->pc = 0x807A7948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7948u)) return;
    // 807A7948: bc    4, 0, 0x807A795C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A795C;
        }
    }

label_807A794C:
    ctx->pc = 0x807A794Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A794Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A794C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7950:
    ctx->pc = 0x807A7950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7950u)) return;
    // 807A7950: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_807A7954:
    ctx->pc = 0x807A7954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7954: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7958:
    ctx->pc = 0x807A7958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7958u)) return;
    // 807A7958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A795C:
    ctx->pc = 0x807A795Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A795Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A795C: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7960:
    ctx->pc = 0x807A7960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7960: lfs     f0, 16452(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7960u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16452);
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
label_807A7964:
    ctx->pc = 0x807A7964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7964u)) return;
    // 807A7964: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7964u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7968:
    ctx->pc = 0x807A7968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7968u)) return;
    // 807A7968: bc    4, 0, 0x807A797C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A797C;
        }
    }

label_807A796C:
    ctx->pc = 0x807A796Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A796Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A796C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7970:
    ctx->pc = 0x807A7970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7970u)) return;
    // 807A7970: li      r0, 61
    ctx->gpr[0] = (u32)(s32)(61);

label_807A7974:
    ctx->pc = 0x807A7974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7974: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7978:
    ctx->pc = 0x807A7978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7978u)) return;
    // 807A7978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A797C:
    ctx->pc = 0x807A797Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A797Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A797C: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7980:
    ctx->pc = 0x807A7980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7980: lfs     f0, 16456(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7980u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16456);
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
label_807A7984:
    ctx->pc = 0x807A7984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7984u)) return;
    // 807A7984: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7984u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7988:
    ctx->pc = 0x807A7988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7988u)) return;
    // 807A7988: bc    4, 0, 0x807A799C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A799C;
        }
    }

label_807A798C:
    ctx->pc = 0x807A798Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A798Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A798C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7990:
    ctx->pc = 0x807A7990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7990u)) return;
    // 807A7990: li      r0, 45
    ctx->gpr[0] = (u32)(s32)(45);

label_807A7994:
    ctx->pc = 0x807A7994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7994: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7998:
    ctx->pc = 0x807A7998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7998u)) return;
    // 807A7998: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A799C:
    ctx->pc = 0x807A799Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A799Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A799C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A79A0:
    ctx->pc = 0x807A79A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79A0u)) return;
    // 807A79A0: li      r0, 41
    ctx->gpr[0] = (u32)(s32)(41);

label_807A79A4:
    ctx->pc = 0x807A79A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A79A4: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A79A8:
    ctx->pc = 0x807A79A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79A8u)) return;
    // 807A79A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A79AC:
    ctx->pc = 0x807A79ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A79ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807A79AC: stwu     r1, -64(r1)
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
label_807A79B0:
    ctx->pc = 0x807A79B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807A79B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A79B4:
    ctx->pc = 0x807A79B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807A79B4: stw     r0, 68(r1)
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
label_807A79B8:
    ctx->pc = 0x807A79B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807A79B8: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x807A79B8u)) return;
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
label_807A79BC:
    ctx->pc = 0x807A79BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807A79BC: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807A79BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x807A79BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A79C0:
    ctx->pc = 0x807A79C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807A79C0: stw     r31, 44(r1)
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
label_807A79C4:
    ctx->pc = 0x807A79C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A79C4: stw     r30, 40(r1)
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
label_807A79C8:
    ctx->pc = 0x807A79C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79C8u)) return;
    // 807A79C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807A79CC:
    ctx->pc = 0x807A79CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A79CC: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A79D0:
    ctx->pc = 0x807A79D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A79D0: lbz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A79D4:
    ctx->pc = 0x807A79D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79D4u)) return;
    // 807A79D4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_807A79D8:
    ctx->pc = 0x807A79D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79D8u)) return;
    // 807A79D8: cmplwi  r0, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A79DC:
    ctx->pc = 0x807A79DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79DCu)) return;
    // 807A79DC: bc    12, 1, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A79E0:
    ctx->pc = 0x807A79E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A79E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 807A79E0: lis     r4, -28173
    ctx->gpr[4] = ((u32)(s32)(-28173) << 16);

label_807A79E4:
    ctx->pc = 0x807A79E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79E4u)) return;
    // 807A79E4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_807A79E8:
    ctx->pc = 0x807A79E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79E8u)) return;
    // 807A79E8: addi    r4, r4, -13652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13652);

label_807A79EC:
    ctx->pc = 0x807A79ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A79EC: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A79F0:
    ctx->pc = 0x807A79F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807A79F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A79F0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A79F4:
    ctx->pc = 0x807A79F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A79F4u)) return;
    // 807A79F4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_807A79F8:
    ctx->pc = 0x807A79F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A79F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A79F8: bl      0x807A7718
    {
            ctx->lr = 0x807A79FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x807A7718u;
                return;
            }
            goto label_807A7718;
    }

label_807A79FC:
    ctx->pc = 0x807A79FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A79FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A79FC: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7A00:
    ctx->pc = 0x807A7A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7A00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7A04:
    ctx->pc = 0x807A7A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A04u)) return;
    // 807A7A04: bl      0x804C9040
    {
            ctx->lr = 0x807A7A08u;
            ctx->pc = 0x804C9040u;
            return;
    }

label_807A7A08:
    ctx->pc = 0x807A7A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7A08: cmplwi  r3, 0x0000
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

label_807A7A0C:
    ctx->pc = 0x807A7A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A0Cu)) return;
    // 807A7A0C: bc    12, 2, 0x807A7AF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7AF0;
        }
    }

label_807A7A10:
    ctx->pc = 0x807A7A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807A7A10: lis     r4, -28204
    ctx->gpr[4] = ((u32)(s32)(-28204) << 16);

label_807A7A14:
    ctx->pc = 0x807A7A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7A14: lfs     f31, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7A14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
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
label_807A7A18:
    ctx->pc = 0x807A7A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7A18: lfs     f0, 16400(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7A18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16400);
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
label_807A7A1C:
    ctx->pc = 0x807A7A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A1Cu)) return;
    // 807A7A1C: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7A1Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_807A7A20:
    ctx->pc = 0x807A7A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A20u)) return;
    // 807A7A20: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7A24:
    ctx->pc = 0x807A7A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A24u)) return;
    // 807A7A24: bc    4, 2, 0x807A7A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7A34;
        }
    }

label_807A7A28:
    ctx->pc = 0x807A7A28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7A28: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7A2C:
    ctx->pc = 0x807A7A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7A2C: lfs     f31, 16312(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7A2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16312);
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
label_807A7A30:
    ctx->pc = 0x807A7A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A30u)) return;
    // 807A7A30: b       0x807A7A60
    {
            goto label_807A7A60;
    }

label_807A7A34:
    ctx->pc = 0x807A7A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7A34: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7A38:
    ctx->pc = 0x807A7A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7A38: lfs     f0, 16404(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7A38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16404);
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
label_807A7A3C:
    ctx->pc = 0x807A7A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A3Cu)) return;
    // 807A7A3C: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7A3Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_807A7A40:
    ctx->pc = 0x807A7A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A40u)) return;
    // 807A7A40: bc    4, 1, 0x807A7A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7A58;
        }
    }

label_807A7A44:
    ctx->pc = 0x807A7A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 807A7A44: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7A48:
    ctx->pc = 0x807A7A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A48u)) return;
    // 807A7A48: fsubs   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7A48u)) return;
    ppc_fsubs(ctx, 31, 31, 0);

label_807A7A4C:
    ctx->pc = 0x807A7A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807A7A4C: lfs     f0, 16408(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7A4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16408);
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
label_807A7A50:
    ctx->pc = 0x807A7A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x807A7A50u)) return;
    // 807A7A50: fdivs   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7A50u)) return;
    ppc_fdivs(ctx, 31, 31, 0);

label_807A7A54:
    ctx->pc = 0x807A7A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A54u)) return;
    // 807A7A54: b       0x807A7A60
    {
            goto label_807A7A60;
    }

label_807A7A58:
    ctx->pc = 0x807A7A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7A58: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7A5C:
    ctx->pc = 0x807A7A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807A7A5C: lfs     f31, 16324(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7A5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16324);
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
label_807A7A60:
    ctx->pc = 0x807A7A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7A60: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7A64:
    ctx->pc = 0x807A7A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7A64: lfs     f0, 16324(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7A64u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16324);
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
label_807A7A68:
    ctx->pc = 0x807A7A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A68u)) return;
    // 807A7A68: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7A68u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_807A7A6C:
    ctx->pc = 0x807A7A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A6Cu)) return;
    // 807A7A6C: bc    4, 1, 0x807A7AC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7AC4;
        }
    }

label_807A7A70:
    ctx->pc = 0x807A7A70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7A70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 807A7A70: frsqrte    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x807A7A70u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[31], &result)) ctx->fpr[1] = result; }

label_807A7A74:
    ctx->pc = 0x807A7A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A74u)) return;
    // 807A7A74: lis     r4, -28204
    ctx->gpr[4] = ((u32)(s32)(-28204) << 16);

label_807A7A78:
    ctx->pc = 0x807A7A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A78u)) return;
    // 807A7A78: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7A7C:
    ctx->pc = 0x807A7A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807A7A7C: lfd     f3, 16416(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7A7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16416);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7A80:
    ctx->pc = 0x807A7A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807A7A80: lfd     f2, 16424(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7A80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16424);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7A84:
    ctx->pc = 0x807A7A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A84u)) return;
    // 807A7A84: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x807A7A84u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_807A7A88:
    ctx->pc = 0x807A7A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A88u)) return;
    // 807A7A88: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x807A7A88u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_807A7A8C:
    ctx->pc = 0x807A7A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A8Cu)) return;
    // 807A7A8C: fnmsub f0, f31, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x807A7A8Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_807A7A90:
    ctx->pc = 0x807A7A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A90u)) return;
    // 807A7A90: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7A90u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_807A7A94:
    ctx->pc = 0x807A7A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A94u)) return;
    // 807A7A94: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x807A7A94u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_807A7A98:
    ctx->pc = 0x807A7A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A98u)) return;
    // 807A7A98: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x807A7A98u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_807A7A9C:
    ctx->pc = 0x807A7A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7A9Cu)) return;
    // 807A7A9C: fnmsub f0, f31, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x807A7A9Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_807A7AA0:
    ctx->pc = 0x807A7AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AA0u)) return;
    // 807A7AA0: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7AA0u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_807A7AA4:
    ctx->pc = 0x807A7AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AA4u)) return;
    // 807A7AA4: fmul   f0, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x807A7AA4u)) return;
    ppc_fmul(ctx, 0, 1, 1);

label_807A7AA8:
    ctx->pc = 0x807A7AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AA8u)) return;
    // 807A7AA8: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x807A7AA8u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_807A7AAC:
    ctx->pc = 0x807A7AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AACu)) return;
    // 807A7AAC: fnmsub f0, f31, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x807A7AACu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[0], ctx->fpr[2], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_807A7AB0:
    ctx->pc = 0x807A7AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AB0u)) return;
    // 807A7AB0: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7AB0u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_807A7AB4:
    ctx->pc = 0x807A7AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AB4u)) return;
    // 807A7AB4: fmul   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7AB4u)) return;
    ppc_fmul(ctx, 0, 31, 0);

label_807A7AB8:
    ctx->pc = 0x807A7AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AB8u)) return;
    // 807A7AB8: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7AB8u)) return;
    ppc_frsp(ctx, 0, 0);

label_807A7ABC:
    ctx->pc = 0x807A7ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7ABC: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x807A7ABCu)) return;
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
label_807A7AC0:
    ctx->pc = 0x807A7AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807A7AC0: lfs     f31, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x807A7AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_807A7AC4:
    ctx->pc = 0x807A7AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A7AC4: bl      0x804279BC
    {
            ctx->lr = 0x807A7AC8u;
            ctx->pc = 0x804279BCu;
            return;
    }

label_807A7AC8:
    ctx->pc = 0x807A7AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 807A7AC8: lis     r4, -28204
    ctx->gpr[4] = ((u32)(s32)(-28204) << 16);

label_807A7ACC:
    ctx->pc = 0x807A7ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7ACCu)) return;
    // 807A7ACC: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_807A7AD0:
    ctx->pc = 0x807A7AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7AD0: lfs     f0, 16432(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7AD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16432);
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
label_807A7AD4:
    ctx->pc = 0x807A7AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AD4u)) return;
    // 807A7AD4: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x807A7AD4u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_807A7AD8:
    ctx->pc = 0x807A7AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AD8u)) return;
    // 807A7AD8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7AD8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_807A7ADC:
    ctx->pc = 0x807A7ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7ADC: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x807A7ADCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7AE0:
    ctx->pc = 0x807A7AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7AE0: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7AE4:
    ctx->pc = 0x807A7AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AE4u)) return;
    // 807A7AE4: addi    r4, r4, 12743
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12743);

label_807A7AE8:
    ctx->pc = 0x807A7AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AE8u)) return;
    // 807A7AE8: bl      0x8048EBF8
    {
            ctx->lr = 0x807A7AECu;
            ctx->pc = 0x8048EBF8u;
            return;
    }

label_807A7AEC:
    ctx->pc = 0x807A7AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A7AEC: bl      0x80427910
    {
            ctx->lr = 0x807A7AF0u;
            ctx->pc = 0x80427910u;
            return;
    }

label_807A7AF0:
    ctx->pc = 0x807A7AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 807A7AF0: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7AF4:
    ctx->pc = 0x807A7AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AF4u)) return;
    // 807A7AF4: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_807A7AF8:
    ctx->pc = 0x807A7AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AF8u)) return;
    // 807A7AF8: addi    r5, r3, 16288
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(16288);

label_807A7AFC:
    ctx->pc = 0x807A7AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807A7AFC: lwz     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B00:
    ctx->pc = 0x807A7B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807A7B00: lwz     r31, -14944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-14944);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B04:
    ctx->pc = 0x807A7B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807A7B04: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B08:
    ctx->pc = 0x807A7B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7B08: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B0C:
    ctx->pc = 0x807A7B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B0Cu)) return;
    // 807A7B0C: cmplwi  r31, 0x0000
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

label_807A7B10:
    ctx->pc = 0x807A7B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7B10: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B14:
    ctx->pc = 0x807A7B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7B14: stw     r4, 12(r1)
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
label_807A7B18:
    ctx->pc = 0x807A7B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7B18: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B1C:
    ctx->pc = 0x807A7B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7B1C: stw     r0, 20(r1)
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
label_807A7B20:
    ctx->pc = 0x807A7B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B20u)) return;
    // 807A7B20: bc    12, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7B24:
    ctx->pc = 0x807A7B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7B24: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_807A7B28:
    ctx->pc = 0x807A7B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B28u)) return;
    // 807A7B28: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_807A7B2C:
    ctx->pc = 0x807A7B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B2Cu)) return;
    // 807A7B2C: bl      0x8004ED20
    {
            ctx->lr = 0x807A7B30u;
            ctx->pc = 0x8004ED20u;
            return;
    }

label_807A7B30:
    ctx->pc = 0x807A7B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7B30: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7B34:
    ctx->pc = 0x807A7B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7B34: lfs     f0, 16436(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7B34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16436);
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
label_807A7B38:
    ctx->pc = 0x807A7B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B38u)) return;
    // 807A7B38: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7B38u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7B3C:
    ctx->pc = 0x807A7B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B3Cu)) return;
    // 807A7B3C: bc    4, 0, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7B40:
    ctx->pc = 0x807A7B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7B40: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_807A7B44:
    ctx->pc = 0x807A7B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7B44: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B48:
    ctx->pc = 0x807A7B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B48u)) return;
    // 807A7B48: bl      0x804060B0
    {
            ctx->lr = 0x807A7B4Cu;
            ctx->pc = 0x804060B0u;
            return;
    }

label_807A7B4C:
    ctx->pc = 0x807A7B4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7B4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7B50:
    ctx->pc = 0x807A7B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B50u)) return;
    // 807A7B50: bl      0x804802CC
    {
            ctx->lr = 0x807A7B54u;
            ctx->pc = 0x804802CCu;
            return;
    }

label_807A7B54:
    ctx->pc = 0x807A7B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7B54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7B58:
    ctx->pc = 0x807A7B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B58u)) return;
    // 807A7B58: bl      0x80505684
    {
            ctx->lr = 0x807A7B5Cu;
            ctx->pc = 0x80505684u;
            return;
    }

label_807A7B5C:
    ctx->pc = 0x807A7B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7B5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7B60:
    ctx->pc = 0x807A7B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B60u)) return;
    // 807A7B60: bl      0x804270C0
    {
            ctx->lr = 0x807A7B64u;
            ctx->pc = 0x804270C0u;
            return;
    }

label_807A7B64:
    ctx->pc = 0x807A7B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7B64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7B68:
    ctx->pc = 0x807A7B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B68u)) return;
    // 807A7B68: bl      0x8046F03C
    {
            ctx->lr = 0x807A7B6Cu;
            ctx->pc = 0x8046F03Cu;
            return;
    }

label_807A7B6C:
    ctx->pc = 0x807A7B6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7B6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_807A7B70:
    ctx->pc = 0x807A7B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B70u)) return;
    // 807A7B70: bl      0x8046EB6C
    {
            ctx->lr = 0x807A7B74u;
            ctx->pc = 0x8046EB6Cu;
            return;
    }

label_807A7B74:
    ctx->pc = 0x807A7B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7B74: li      r3, 963
    ctx->gpr[3] = (u32)(s32)(963);

label_807A7B78:
    ctx->pc = 0x807A7B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B78u)) return;
    // 807A7B78: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807A7B7C:
    ctx->pc = 0x807A7B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B7Cu)) return;
    // 807A7B7C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807A7B80:
    ctx->pc = 0x807A7B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B80u)) return;
    // 807A7B80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807A7B84:
    ctx->pc = 0x807A7B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B84u)) return;
    // 807A7B84: bl      0x8050A21C
    {
            ctx->lr = 0x807A7B88u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807A7B88:
    ctx->pc = 0x807A7B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A7B88: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7B8C:
    ctx->pc = 0x807A7B8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7B8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7B90:
    ctx->pc = 0x807A7B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B90u)) return;
    // 807A7B90: bl      0x804242E8
    {
            ctx->lr = 0x807A7B94u;
            ctx->pc = 0x804242E8u;
            return;
    }

label_807A7B94:
    ctx->pc = 0x807A7B94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7B94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7B94: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_807A7B98:
    ctx->pc = 0x807A7B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7B98: lwz     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7B9C:
    ctx->pc = 0x807A7B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7B9C: lwz     r4, -14944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-14944);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7BA0:
    ctx->pc = 0x807A7BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BA0u)) return;
    // 807A7BA0: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A7BA4:
    ctx->pc = 0x807A7BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BA4u)) return;
    // 807A7BA4: bc    12, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7BA8:
    ctx->pc = 0x807A7BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807A7BA8: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7BAC:
    ctx->pc = 0x807A7BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7BAC: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7BACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_807A7BB0:
    ctx->pc = 0x807A7BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7BB0: lfs     f0, 16324(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7BB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16324);
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
label_807A7BB4:
    ctx->pc = 0x807A7BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BB4u)) return;
    // 807A7BB4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7BB4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7BB8:
    ctx->pc = 0x807A7BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BB8u)) return;
    // 807A7BB8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7BBC:
    ctx->pc = 0x807A7BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BBCu)) return;
    // 807A7BBC: bc    4, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7BC0:
    ctx->pc = 0x807A7BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7BC0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_807A7BC4:
    ctx->pc = 0x807A7BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BC4u)) return;
    // 807A7BC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7BC8:
    ctx->pc = 0x807A7BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7BC8: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7BCC:
    ctx->pc = 0x807A7BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BCCu)) return;
    // 807A7BCC: bl      0x8047A150
    {
            ctx->lr = 0x807A7BD0u;
            ctx->pc = 0x8047A150u;
            return;
    }

label_807A7BD0:
    ctx->pc = 0x807A7BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7BD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_807A7BD4:
    ctx->pc = 0x807A7BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7BD4: sth     r0, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7BD8:
    ctx->pc = 0x807A7BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BD8u)) return;
    // 807A7BD8: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7BDC:
    ctx->pc = 0x807A7BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7BDC: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_807A7BE0:
    ctx->pc = 0x807A7BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7BE0: lwz     r31, -14944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-14944);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7BE4:
    ctx->pc = 0x807A7BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BE4u)) return;
    // 807A7BE4: cmplwi  r31, 0x0000
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

label_807A7BE8:
    ctx->pc = 0x807A7BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BE8u)) return;
    // 807A7BE8: bc    12, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7BEC:
    ctx->pc = 0x807A7BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7BEC: lhz     r3, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7BF0:
    ctx->pc = 0x807A7BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BF0u)) return;
    // 807A7BF0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_807A7BF4:
    ctx->pc = 0x807A7BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BF4u)) return;
    // 807A7BF4: cmplwi  r3, 0x012C
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x012Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A7BF8:
    ctx->pc = 0x807A7BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7BF8: sth     r0, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7BFC:
    ctx->pc = 0x807A7BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7BFCu)) return;
    // 807A7BFC: bc    4, 2, 0x807A7C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7C28;
        }
    }

label_807A7C00:
    ctx->pc = 0x807A7C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7C00: lha     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7C04:
    ctx->pc = 0x807A7C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C04u)) return;
    // 807A7C04: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_807A7C08:
    ctx->pc = 0x807A7C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C08u)) return;
    // 807A7C08: bc    12, 2, 0x807A7C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7C28;
        }
    }

label_807A7C0C:
    ctx->pc = 0x807A7C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 807A7C0C: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7C10:
    ctx->pc = 0x807A7C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C10u)) return;
    // 807A7C10: lis     r4, -28204
    ctx->gpr[4] = ((u32)(s32)(-28204) << 16);

label_807A7C14:
    ctx->pc = 0x807A7C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C14u)) return;
    // 807A7C14: addi    r5, r3, 16384
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(16384);

label_807A7C18:
    ctx->pc = 0x807A7C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7C18: lfs     f2, 16324(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7C18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16324);
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
label_807A7C1C:
    ctx->pc = 0x807A7C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7C1C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x807A7C1Cu)) return;
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
label_807A7C20:
    ctx->pc = 0x807A7C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C20u)) return;
    // 807A7C20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7C24:
    ctx->pc = 0x807A7C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C24u)) return;
    // 807A7C24: bl      0x804CB1C8
    {
            ctx->lr = 0x807A7C28u;
            ctx->pc = 0x804CB1C8u;
            return;
    }

label_807A7C28:
    ctx->pc = 0x807A7C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807A7C28: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7C2C:
    ctx->pc = 0x807A7C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7C2C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x807A7C2Cu)) return;
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
label_807A7C30:
    ctx->pc = 0x807A7C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7C30: lfs     f0, 16388(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7C30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16388);
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
label_807A7C34:
    ctx->pc = 0x807A7C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C34u)) return;
    // 807A7C34: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7C34u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7C38:
    ctx->pc = 0x807A7C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C38u)) return;
    // 807A7C38: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7C3C:
    ctx->pc = 0x807A7C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C3Cu)) return;
    // 807A7C3C: bc    4, 2, 0x807A7C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7C80;
        }
    }

label_807A7C40:
    ctx->pc = 0x807A7C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7C40: lha     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7C44:
    ctx->pc = 0x807A7C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C44u)) return;
    // 807A7C44: rlwinm. r0, r3, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_807A7C48:
    ctx->pc = 0x807A7C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C48u)) return;
    // 807A7C48: bc    4, 2, 0x807A7C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7C80;
        }
    }

label_807A7C4C:
    ctx->pc = 0x807A7C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 807A7C4C: ori     r0, r3, 0x0008
    ctx->gpr[0] = ctx->gpr[3] | 0x0008u;

label_807A7C50:
    ctx->pc = 0x807A7C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C50u)) return;
    // 807A7C50: lis     r3, -32646
    ctx->gpr[3] = ((u32)(s32)(-32646) << 16);

label_807A7C54:
    ctx->pc = 0x807A7C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7C54: sth     r0, 4(r30)
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
label_807A7C58:
    ctx->pc = 0x807A7C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C58u)) return;
    // 807A7C58: addi    r5, r3, 30852
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(30852);

label_807A7C5C:
    ctx->pc = 0x807A7C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C5Cu)) return;
    // 807A7C5C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807A7C60:
    ctx->pc = 0x807A7C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C60u)) return;
    // 807A7C60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807A7C64:
    ctx->pc = 0x807A7C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C64u)) return;
    // 807A7C64: bl      0x8050FD60
    {
            ctx->lr = 0x807A7C68u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_807A7C68:
    ctx->pc = 0x807A7C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7C68: lwz     r4, 32(r3)
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
label_807A7C6C:
    ctx->pc = 0x807A7C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C6Cu)) return;
    // 807A7C6C: li      r5, 49
    ctx->gpr[5] = (u32)(s32)(49);

label_807A7C70:
    ctx->pc = 0x807A7C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C70u)) return;
    // 807A7C70: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_807A7C74:
    ctx->pc = 0x807A7C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7C74: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7C78:
    ctx->pc = 0x807A7C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7C78: lwz     r3, 32(r3)
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
label_807A7C7C:
    ctx->pc = 0x807A7C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807A7C7C: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7C80:
    ctx->pc = 0x807A7C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807A7C80: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7C84:
    ctx->pc = 0x807A7C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7C84: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x807A7C84u)) return;
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
label_807A7C88:
    ctx->pc = 0x807A7C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7C88: lfs     f0, 16392(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7C88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16392);
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
label_807A7C8C:
    ctx->pc = 0x807A7C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C8Cu)) return;
    // 807A7C8C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7C8Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7C90:
    ctx->pc = 0x807A7C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C90u)) return;
    // 807A7C90: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7C94:
    ctx->pc = 0x807A7C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C94u)) return;
    // 807A7C94: bc    4, 2, 0x807A7CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7CB8;
        }
    }

label_807A7C98:
    ctx->pc = 0x807A7C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7C98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7C9C:
    ctx->pc = 0x807A7C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7C9Cu)) return;
    // 807A7C9C: li      r4, 43
    ctx->gpr[4] = (u32)(s32)(43);

label_807A7CA0:
    ctx->pc = 0x807A7CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CA0u)) return;
    // 807A7CA0: bl      0x804CA6BC
    {
            ctx->lr = 0x807A7CA4u;
            ctx->pc = 0x804CA6BCu;
            return;
    }

label_807A7CA4:
    ctx->pc = 0x807A7CA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7CA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7CA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7CA8:
    ctx->pc = 0x807A7CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CA8u)) return;
    // 807A7CA8: bl      0x8047A18C
    {
            ctx->lr = 0x807A7CACu;
            ctx->pc = 0x8047A18Cu;
            return;
    }

label_807A7CAC:
    ctx->pc = 0x807A7CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7CAC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_807A7CB0:
    ctx->pc = 0x807A7CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7CB0: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7CB4:
    ctx->pc = 0x807A7CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CB4u)) return;
    // 807A7CB4: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7CB8:
    ctx->pc = 0x807A7CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7CB8: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7CBC:
    ctx->pc = 0x807A7CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7CBC: lfs     f0, 16396(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7CBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16396);
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
label_807A7CC0:
    ctx->pc = 0x807A7CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CC0u)) return;
    // 807A7CC0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7CC0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7CC4:
    ctx->pc = 0x807A7CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CC4u)) return;
    // 807A7CC4: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7CC8:
    ctx->pc = 0x807A7CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CC8u)) return;
    // 807A7CC8: bc    4, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7CCC:
    ctx->pc = 0x807A7CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7CCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7CD0:
    ctx->pc = 0x807A7CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CD0u)) return;
    // 807A7CD0: bl      0x804CB0A8
    {
            ctx->lr = 0x807A7CD4u;
            ctx->pc = 0x804CB0A8u;
            return;
    }

label_807A7CD4:
    ctx->pc = 0x807A7CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A7CD4: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7CD8:
    ctx->pc = 0x807A7CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7CD8: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_807A7CDC:
    ctx->pc = 0x807A7CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7CDC: lwz     r4, -14944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-14944);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7CE0:
    ctx->pc = 0x807A7CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CE0u)) return;
    // 807A7CE0: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A7CE4:
    ctx->pc = 0x807A7CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CE4u)) return;
    // 807A7CE4: bc    12, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7CE8:
    ctx->pc = 0x807A7CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807A7CE8: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7CEC:
    ctx->pc = 0x807A7CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7CEC: lfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7CECu)) return;
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
label_807A7CF0:
    ctx->pc = 0x807A7CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7CF0: lfs     f0, 16372(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7CF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16372);
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
label_807A7CF4:
    ctx->pc = 0x807A7CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CF4u)) return;
    // 807A7CF4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7CF4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7CF8:
    ctx->pc = 0x807A7CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CF8u)) return;
    // 807A7CF8: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7CFC:
    ctx->pc = 0x807A7CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7CFCu)) return;
    // 807A7CFC: bc    4, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7D00:
    ctx->pc = 0x807A7D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7D00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7D04:
    ctx->pc = 0x807A7D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D04u)) return;
    // 807A7D04: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_807A7D08:
    ctx->pc = 0x807A7D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D08u)) return;
    // 807A7D08: bl      0x804CA6BC
    {
            ctx->lr = 0x807A7D0Cu;
            ctx->pc = 0x804CA6BCu;
            return;
    }

label_807A7D0C:
    ctx->pc = 0x807A7D0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 807A7D0C: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_807A7D10:
    ctx->pc = 0x807A7D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D10u)) return;
    // 807A7D10: lis     r6, -28204
    ctx->gpr[6] = ((u32)(s32)(-28204) << 16);

label_807A7D14:
    ctx->pc = 0x807A7D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7D14: lwz     r4, -14976(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-14976);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7D18:
    ctx->pc = 0x807A7D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D18u)) return;
    // 807A7D18: lis     r5, -28204
    ctx->gpr[5] = ((u32)(s32)(-28204) << 16);

label_807A7D1C:
    ctx->pc = 0x807A7D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7D1C: lfs     f1, 16376(r6)
    if (!ppc_fp_available_inline(ctx, 0x807A7D1Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16376);
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
label_807A7D20:
    ctx->pc = 0x807A7D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D20u)) return;
    // 807A7D20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807A7D24:
    ctx->pc = 0x807A7D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7D24: lfs     f2, 16380(r5)
    if (!ppc_fp_available_inline(ctx, 0x807A7D24u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16380);
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
label_807A7D28:
    ctx->pc = 0x807A7D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7D28: lfs     f3, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7D28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
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
label_807A7D2C:
    ctx->pc = 0x807A7D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D2Cu)) return;
    // 807A7D2C: bl      0x804CA4F0
    {
            ctx->lr = 0x807A7D30u;
            ctx->pc = 0x804CA4F0u;
            return;
    }

label_807A7D30:
    ctx->pc = 0x807A7D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7D30: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_807A7D34:
    ctx->pc = 0x807A7D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7D34: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7D38:
    ctx->pc = 0x807A7D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D38u)) return;
    // 807A7D38: bl      0x8044FC84
    {
            ctx->lr = 0x807A7D3Cu;
            ctx->pc = 0x8044FC84u;
            return;
    }

label_807A7D3C:
    ctx->pc = 0x807A7D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807A7D3C: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7D40:
    ctx->pc = 0x807A7D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7D40: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_807A7D44:
    ctx->pc = 0x807A7D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7D44: lwz     r4, -14944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-14944);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7D48:
    ctx->pc = 0x807A7D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D48u)) return;
    // 807A7D48: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A7D4C:
    ctx->pc = 0x807A7D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D4Cu)) return;
    // 807A7D4C: bc    12, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7D50:
    ctx->pc = 0x807A7D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807A7D50: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7D54:
    ctx->pc = 0x807A7D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7D54: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7D54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_807A7D58:
    ctx->pc = 0x807A7D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7D58: lfs     f0, 16368(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7D58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16368);
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
label_807A7D5C:
    ctx->pc = 0x807A7D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D5Cu)) return;
    // 807A7D5C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7D5Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7D60:
    ctx->pc = 0x807A7D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D60u)) return;
    // 807A7D60: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7D64:
    ctx->pc = 0x807A7D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D64u)) return;
    // 807A7D64: bc    4, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7D68:
    ctx->pc = 0x807A7D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7D68: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_807A7D6C:
    ctx->pc = 0x807A7D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7D6C: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7D70:
    ctx->pc = 0x807A7D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D70u)) return;
    // 807A7D70: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7D74:
    ctx->pc = 0x807A7D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7D74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7D78:
    ctx->pc = 0x807A7D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D78u)) return;
    // 807A7D78: bl      0x804242E8
    {
            ctx->lr = 0x807A7D7Cu;
            ctx->pc = 0x804242E8u;
            return;
    }

label_807A7D7C:
    ctx->pc = 0x807A7D7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7D7C: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_807A7D80:
    ctx->pc = 0x807A7D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7D80: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7D84:
    ctx->pc = 0x807A7D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7D84: lwz     r30, -14944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-14944);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7D88:
    ctx->pc = 0x807A7D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D88u)) return;
    // 807A7D88: cmplwi  r30, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A7D8C:
    ctx->pc = 0x807A7D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D8Cu)) return;
    // 807A7D8C: bc    12, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7D90:
    ctx->pc = 0x807A7D90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7D90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807A7D90: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7D94:
    ctx->pc = 0x807A7D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7D94: lfs     f1, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x807A7D94u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
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
label_807A7D98:
    ctx->pc = 0x807A7D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7D98: lfs     f0, 16364(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7D98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16364);
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
label_807A7D9C:
    ctx->pc = 0x807A7D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7D9Cu)) return;
    // 807A7D9C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7D9Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7DA0:
    ctx->pc = 0x807A7DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DA0u)) return;
    // 807A7DA0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_807A7DA4:
    ctx->pc = 0x807A7DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DA4u)) return;
    // 807A7DA4: bc    4, 2, 0x807A7EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7EE0;
        }
    }

label_807A7DA8:
    ctx->pc = 0x807A7DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7DA8: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_807A7DAC:
    ctx->pc = 0x807A7DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7DAC: stb     r0, 0(r4)
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
label_807A7DB0:
    ctx->pc = 0x807A7DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DB0u)) return;
    // 807A7DB0: bl      0x804060B0
    {
            ctx->lr = 0x807A7DB4u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_807A7DB4:
    ctx->pc = 0x807A7DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7DB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7DB8:
    ctx->pc = 0x807A7DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DB8u)) return;
    // 807A7DB8: bl      0x804802CC
    {
            ctx->lr = 0x807A7DBCu;
            ctx->pc = 0x804802CCu;
            return;
    }

label_807A7DBC:
    ctx->pc = 0x807A7DBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7DBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7DC0:
    ctx->pc = 0x807A7DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DC0u)) return;
    // 807A7DC0: bl      0x80505684
    {
            ctx->lr = 0x807A7DC4u;
            ctx->pc = 0x80505684u;
            return;
    }

label_807A7DC4:
    ctx->pc = 0x807A7DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7DC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7DC8:
    ctx->pc = 0x807A7DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DC8u)) return;
    // 807A7DC8: bl      0x804270C0
    {
            ctx->lr = 0x807A7DCCu;
            ctx->pc = 0x804270C0u;
            return;
    }

label_807A7DCC:
    ctx->pc = 0x807A7DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7DCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807A7DD0:
    ctx->pc = 0x807A7DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DD0u)) return;
    // 807A7DD0: bl      0x8046F03C
    {
            ctx->lr = 0x807A7DD4u;
            ctx->pc = 0x8046F03Cu;
            return;
    }

label_807A7DD4:
    ctx->pc = 0x807A7DD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807A7DD4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807A7DD8:
    ctx->pc = 0x807A7DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DD8u)) return;
    // 807A7DD8: bl      0x8046EB6C
    {
            ctx->lr = 0x807A7DDCu;
            ctx->pc = 0x8046EB6Cu;
            return;
    }

label_807A7DDC:
    ctx->pc = 0x807A7DDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7DDC: li      r3, 961
    ctx->gpr[3] = (u32)(s32)(961);

label_807A7DE0:
    ctx->pc = 0x807A7DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DE0u)) return;
    // 807A7DE0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807A7DE4:
    ctx->pc = 0x807A7DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DE4u)) return;
    // 807A7DE4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807A7DE8:
    ctx->pc = 0x807A7DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DE8u)) return;
    // 807A7DE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807A7DEC:
    ctx->pc = 0x807A7DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DECu)) return;
    // 807A7DEC: bl      0x8050A21C
    {
            ctx->lr = 0x807A7DF0u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807A7DF0:
    ctx->pc = 0x807A7DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7DF0: lis     r4, -32646
    ctx->gpr[4] = ((u32)(s32)(-32646) << 16);

label_807A7DF4:
    ctx->pc = 0x807A7DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DF4u)) return;
    // 807A7DF4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807A7DF8:
    ctx->pc = 0x807A7DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DF8u)) return;
    // 807A7DF8: addi    r5, r4, 30852
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(30852);

label_807A7DFC:
    ctx->pc = 0x807A7DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7DFCu)) return;
    // 807A7DFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807A7E00:
    ctx->pc = 0x807A7E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E00u)) return;
    // 807A7E00: bl      0x8050FD60
    {
            ctx->lr = 0x807A7E04u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_807A7E04:
    ctx->pc = 0x807A7E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7E04: lwz     r4, 32(r3)
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
label_807A7E08:
    ctx->pc = 0x807A7E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E08u)) return;
    // 807A7E08: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_807A7E0C:
    ctx->pc = 0x807A7E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E0Cu)) return;
    // 807A7E0C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807A7E10:
    ctx->pc = 0x807A7E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7E10: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7E14:
    ctx->pc = 0x807A7E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7E14: lwz     r3, 32(r3)
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
label_807A7E18:
    ctx->pc = 0x807A7E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7E18: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7E1C:
    ctx->pc = 0x807A7E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E1Cu)) return;
    // 807A7E1C: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7E20:
    ctx->pc = 0x807A7E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 807A7E20: lis     r4, -28643
    ctx->gpr[4] = ((u32)(s32)(-28643) << 16);

label_807A7E24:
    ctx->pc = 0x807A7E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E24u)) return;
    // 807A7E24: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7E28:
    ctx->pc = 0x807A7E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E28u)) return;
    // 807A7E28: addi    r4, r4, -30768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30768);

label_807A7E2C:
    ctx->pc = 0x807A7E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7E2C: lfs     f0, 16440(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7E2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16440);
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
label_807A7E30:
    ctx->pc = 0x807A7E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7E30: lwz     r4, 0(r4)
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
label_807A7E34:
    ctx->pc = 0x807A7E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7E34: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7E34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_807A7E38:
    ctx->pc = 0x807A7E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E38u)) return;
    // 807A7E38: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7E38u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7E3C:
    ctx->pc = 0x807A7E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E3Cu)) return;
    // 807A7E3C: bc    4, 0, 0x807A7E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7E50;
        }
    }

label_807A7E40:
    ctx->pc = 0x807A7E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7E40: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7E44:
    ctx->pc = 0x807A7E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E44u)) return;
    // 807A7E44: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_807A7E48:
    ctx->pc = 0x807A7E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7E48: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7E4C:
    ctx->pc = 0x807A7E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E4Cu)) return;
    // 807A7E4C: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7E50:
    ctx->pc = 0x807A7E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7E50: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7E54:
    ctx->pc = 0x807A7E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7E54: lfs     f0, 16444(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7E54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16444);
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
label_807A7E58:
    ctx->pc = 0x807A7E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E58u)) return;
    // 807A7E58: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7E58u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7E5C:
    ctx->pc = 0x807A7E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E5Cu)) return;
    // 807A7E5C: bc    4, 0, 0x807A7E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7E70;
        }
    }

label_807A7E60:
    ctx->pc = 0x807A7E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7E60: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7E64:
    ctx->pc = 0x807A7E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E64u)) return;
    // 807A7E64: li      r0, 55
    ctx->gpr[0] = (u32)(s32)(55);

label_807A7E68:
    ctx->pc = 0x807A7E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7E68: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7E6C:
    ctx->pc = 0x807A7E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E6Cu)) return;
    // 807A7E6C: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7E70:
    ctx->pc = 0x807A7E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7E70: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7E74:
    ctx->pc = 0x807A7E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7E74: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x807A7E74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_807A7E78:
    ctx->pc = 0x807A7E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7E78: lfs     f0, 16448(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7E78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16448);
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
label_807A7E7C:
    ctx->pc = 0x807A7E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E7Cu)) return;
    // 807A7E7C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7E7Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7E80:
    ctx->pc = 0x807A7E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E80u)) return;
    // 807A7E80: bc    4, 0, 0x807A7E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7E94;
        }
    }

label_807A7E84:
    ctx->pc = 0x807A7E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7E84: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7E88:
    ctx->pc = 0x807A7E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E88u)) return;
    // 807A7E88: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_807A7E8C:
    ctx->pc = 0x807A7E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7E8C: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7E90:
    ctx->pc = 0x807A7E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E90u)) return;
    // 807A7E90: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7E94:
    ctx->pc = 0x807A7E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7E94: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7E98:
    ctx->pc = 0x807A7E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7E98: lfs     f0, 16452(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7E98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16452);
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
label_807A7E9C:
    ctx->pc = 0x807A7E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7E9Cu)) return;
    // 807A7E9C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7E9Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7EA0:
    ctx->pc = 0x807A7EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EA0u)) return;
    // 807A7EA0: bc    4, 0, 0x807A7EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7EB4;
        }
    }

label_807A7EA4:
    ctx->pc = 0x807A7EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7EA4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7EA8:
    ctx->pc = 0x807A7EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EA8u)) return;
    // 807A7EA8: li      r0, 61
    ctx->gpr[0] = (u32)(s32)(61);

label_807A7EAC:
    ctx->pc = 0x807A7EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7EAC: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7EB0:
    ctx->pc = 0x807A7EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EB0u)) return;
    // 807A7EB0: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7EB4:
    ctx->pc = 0x807A7EB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7EB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7EB4: lis     r3, -28204
    ctx->gpr[3] = ((u32)(s32)(-28204) << 16);

label_807A7EB8:
    ctx->pc = 0x807A7EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7EB8: lfs     f0, 16456(r3)
    if (!ppc_fp_available_inline(ctx, 0x807A7EB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16456);
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
label_807A7EBC:
    ctx->pc = 0x807A7EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EBCu)) return;
    // 807A7EBC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x807A7EBCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_807A7EC0:
    ctx->pc = 0x807A7EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EC0u)) return;
    // 807A7EC0: bc    4, 0, 0x807A7ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7ED4;
        }
    }

label_807A7EC4:
    ctx->pc = 0x807A7EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 807A7EC4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7EC8:
    ctx->pc = 0x807A7EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EC8u)) return;
    // 807A7EC8: li      r0, 45
    ctx->gpr[0] = (u32)(s32)(45);

label_807A7ECC:
    ctx->pc = 0x807A7ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7ECC: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7ED0:
    ctx->pc = 0x807A7ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7ED0u)) return;
    // 807A7ED0: b       0x807A7EE0
    {
            goto label_807A7EE0;
    }

label_807A7ED4:
    ctx->pc = 0x807A7ED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7ED4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7ED8:
    ctx->pc = 0x807A7ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7ED8u)) return;
    // 807A7ED8: li      r0, 41
    ctx->gpr[0] = (u32)(s32)(41);

label_807A7EDC:
    ctx->pc = 0x807A7EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807A7EDC: stw     r0, 4236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7EE0:
    ctx->pc = 0x807A7EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807A7EE0: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x807A7EE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x807A7EE0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7EE4:
    ctx->pc = 0x807A7EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807A7EE4: lwz     r0, 68(r1)
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
label_807A7EE8:
    ctx->pc = 0x807A7EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7EE8: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x807A7EE8u)) return;
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
label_807A7EEC:
    ctx->pc = 0x807A7EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7EEC: lwz     r31, 44(r1)
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
label_807A7EF0:
    ctx->pc = 0x807A7EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7EF0: lwz     r30, 40(r1)
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
label_807A7EF4:
    ctx->pc = 0x807A7EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807A7EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7EF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7EF8:
    ctx->pc = 0x807A7EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EF8u)) return;
    // 807A7EF8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_807A7EFC:
    ctx->pc = 0x807A7EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7EFCu)) return;
    // 807A7EFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7F00:
    ctx->pc = 0x807A7F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7F00: lwz     r3, 32(r3)
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
label_807A7F04:
    ctx->pc = 0x807A7F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7F04: lwz     r3, 8(r3)
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
label_807A7F08:
    ctx->pc = 0x807A7F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F08u)) return;
    // 807A7F08: cmplwi  r3, 0x0000
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

label_807A7F0C:
    ctx->pc = 0x807A7F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F0Cu)) return;
    // 807A7F0C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7F10:
    ctx->pc = 0x807A7F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7F10: lwz     r3, 32(r3)
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
label_807A7F14:
    ctx->pc = 0x807A7F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F14u)) return;
    // 807A7F14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_807A7F18:
    ctx->pc = 0x807A7F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7F18: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7F1C:
    ctx->pc = 0x807A7F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F1Cu)) return;
    // 807A7F1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7F20:
    ctx->pc = 0x807A7F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807A7F20: stwu     r1, -16(r1)
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
label_807A7F24:
    ctx->pc = 0x807A7F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7F24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7F28:
    ctx->pc = 0x807A7F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7F28: stw     r0, 20(r1)
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
label_807A7F2C:
    ctx->pc = 0x807A7F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7F2C: stw     r31, 12(r1)
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
label_807A7F30:
    ctx->pc = 0x807A7F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7F30: lwz     r31, 32(r3)
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
label_807A7F34:
    ctx->pc = 0x807A7F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7F34: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7F38:
    ctx->pc = 0x807A7F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F38u)) return;
    // 807A7F38: cmplwi  r3, 0x0000
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

label_807A7F3C:
    ctx->pc = 0x807A7F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F3Cu)) return;
    // 807A7F3C: bc    12, 2, 0x807A7F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7F58;
        }
    }

label_807A7F40:
    ctx->pc = 0x807A7F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7F40: lwz     r4, 32(r3)
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
label_807A7F44:
    ctx->pc = 0x807A7F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F44u)) return;
    // 807A7F44: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807A7F48:
    ctx->pc = 0x807A7F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F48u)) return;
    // 807A7F48: bc    12, 2, 0x807A7F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A7F58;
        }
    }

label_807A7F4C:
    ctx->pc = 0x807A7F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7F4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_807A7F50:
    ctx->pc = 0x807A7F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7F50: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7F54:
    ctx->pc = 0x807A7F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F54u)) return;
    // 807A7F54: bl      0x8050F9F0
    {
            ctx->lr = 0x807A7F58u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_807A7F58:
    ctx->pc = 0x807A7F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7F58: lbz     r0, 0(r31)
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
label_807A7F5C:
    ctx->pc = 0x807A7F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F5Cu)) return;
    // 807A7F5C: cmpwi   r0, 3
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

label_807A7F60:
    ctx->pc = 0x807A7F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F60u)) return;
    // 807A7F60: bc    4, 2, 0x807A7F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7F70;
        }
    }

label_807A7F64:
    ctx->pc = 0x807A7F64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A7F64: lis     r3, -28174
    ctx->gpr[3] = ((u32)(s32)(-28174) << 16);

label_807A7F68:
    ctx->pc = 0x807A7F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F68u)) return;
    // 807A7F68: addi    r3, r3, 24952
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24952);

label_807A7F6C:
    ctx->pc = 0x807A7F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F6Cu)) return;
    // 807A7F6C: bl      0x8060F2FC
    {
            ctx->lr = 0x807A7F70u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_807A7F70:
    ctx->pc = 0x807A7F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7F70: lwz     r0, 20(r1)
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
label_807A7F74:
    ctx->pc = 0x807A7F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A7F74: lwz     r31, 12(r1)
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
label_807A7F78:
    ctx->pc = 0x807A7F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807A7F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7F78: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7F7C:
    ctx->pc = 0x807A7F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F7Cu)) return;
    // 807A7F7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807A7F80:
    ctx->pc = 0x807A7F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F80u)) return;
    // 807A7F80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

label_807A7F84:
    ctx->pc = 0x807A7F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807A7F84: stwu     r1, -16(r1)
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
label_807A7F88:
    ctx->pc = 0x807A7F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807A7F88: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7F8C:
    ctx->pc = 0x807A7F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807A7F8C: stw     r0, 20(r1)
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
label_807A7F90:
    ctx->pc = 0x807A7F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7F90: stw     r31, 12(r1)
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
label_807A7F94:
    ctx->pc = 0x807A7F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7F94: stw     r30, 8(r1)
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
label_807A7F98:
    ctx->pc = 0x807A7F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F98u)) return;
    // 807A7F98: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807A7F9C:
    ctx->pc = 0x807A7F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807A7F9C: lwz     r31, 32(r3)
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
label_807A7FA0:
    ctx->pc = 0x807A7FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7FA0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7FA4:
    ctx->pc = 0x807A7FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FA4u)) return;
    // 807A7FA4: cmplwi  r0, 0x0000
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

label_807A7FA8:
    ctx->pc = 0x807A7FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FA8u)) return;
    // 807A7FA8: bc    4, 2, 0x807A7FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A7FD8;
        }
    }

label_807A7FAC:
    ctx->pc = 0x807A7FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A7FAC: lis     r4, -32646
    ctx->gpr[4] = ((u32)(s32)(-32646) << 16);

label_807A7FB0:
    ctx->pc = 0x807A7FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FB0u)) return;
    // 807A7FB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807A7FB4:
    ctx->pc = 0x807A7FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FB4u)) return;
    // 807A7FB4: addi    r5, r4, 31148
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(31148);

label_807A7FB8:
    ctx->pc = 0x807A7FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FB8u)) return;
    // 807A7FB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807A7FBC:
    ctx->pc = 0x807A7FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FBCu)) return;
    // 807A7FBC: bl      0x8050FD60
    {
            ctx->lr = 0x807A7FC0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_807A7FC0:
    ctx->pc = 0x807A7FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7FC0: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7FC4:
    ctx->pc = 0x807A7FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FC4u)) return;
    // 807A7FC4: lis     r4, -32646
    ctx->gpr[4] = ((u32)(s32)(-32646) << 16);

label_807A7FC8:
    ctx->pc = 0x807A7FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FC8u)) return;
    // 807A7FC8: addi    r0, r4, 32544
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32544);

label_807A7FCC:
    ctx->pc = 0x807A7FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A7FCC: lwz     r3, 32(r3)
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
label_807A7FD0:
    ctx->pc = 0x807A7FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A7FD0: stw     r30, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7FD4:
    ctx->pc = 0x807A7FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 807A7FD4: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7FD8:
    ctx->pc = 0x807A7FD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A7FD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 807A7FD8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807A7FDC:
    ctx->pc = 0x807A7FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FDCu)) return;
    // 807A7FDC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807A7FE0:
    ctx->pc = 0x807A7FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FE0u)) return;
    // 807A7FE0: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_807A7FE4:
    ctx->pc = 0x807A7FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A7FE4: lha     r0, -5404(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5404);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7FE8:
    ctx->pc = 0x807A7FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A7FE8: lha     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A7FEC:
    ctx->pc = 0x807A7FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FECu)) return;
    // 807A7FEC: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_807A7FF0:
    ctx->pc = 0x807A7FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FF0u)) return;
    // 807A7FF0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_807A7FF4:
    ctx->pc = 0x807A7FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FF4u)) return;
    // 807A7FF4: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_807A7FF8:
    ctx->pc = 0x807A7FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FF8u)) return;
    // 807A7FF8: cmpwi   r0, 2
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

label_807A7FFC:
    ctx->pc = 0x807A7FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A7FFCu)) return;
    // 807A7FFC: bc    4, 2, 0x807A802C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807A802C;
        }
    }

label_807A8000:
    ctx->pc = 0x807A8000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A8000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A8000: lbz     r0, 0(r31)
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
label_807A8004:
    ctx->pc = 0x807A8004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8004u)) return;
    // 807A8004: cmpwi   r0, 3
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

label_807A8008:
    ctx->pc = 0x807A8008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8008u)) return;
    // 807A8008: bc    12, 2, 0x807A802C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807A802C;
        }
    }

label_807A800C:
    ctx->pc = 0x807A800Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A800Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807A800C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_807A8010:
    ctx->pc = 0x807A8010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807A8010: stb     r0, 0(r31)
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
label_807A8014:
    ctx->pc = 0x807A8014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8014u)) return;
    // 807A8014: bl      0x804060B0
    {
            ctx->lr = 0x807A8018u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_807A8018:
    ctx->pc = 0x807A8018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A8018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807A8018: lis     r3, -28173
    ctx->gpr[3] = ((u32)(s32)(-28173) << 16);

label_807A801C:
    ctx->pc = 0x807A801Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A801Cu)) return;
    // 807A801C: lis     r4, -28174
    ctx->gpr[4] = ((u32)(s32)(-28174) << 16);

label_807A8020:
    ctx->pc = 0x807A8020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8020u)) return;
    // 807A8020: addi    r3, r3, -13616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13616);

label_807A8024:
    ctx->pc = 0x807A8024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8024u)) return;
    // 807A8024: addi    r4, r4, 24952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24952);

label_807A8028:
    ctx->pc = 0x807A8028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8028u)) return;
    // 807A8028: bl      0x8051028C
    {
            ctx->lr = 0x807A802Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_807A802C:
    ctx->pc = 0x807A802Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807A802Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807A802C: lwz     r0, 20(r1)
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
label_807A8030:
    ctx->pc = 0x807A8030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807A8030: lwz     r31, 12(r1)
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
label_807A8034:
    ctx->pc = 0x807A8034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807A8034: lwz     r30, 8(r1)
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
label_807A8038:
    ctx->pc = 0x807A8038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807A8038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807A8038: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807A803C:
    ctx->pc = 0x807A803Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A803Cu)) return;
    // 807A803C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807A8040:
    ctx->pc = 0x807A8040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807A8040u)) return;
    // 807A8040: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807A76C0;
        }
    }

    ctx->pc = 0x807A8044u;
    return;
return_dispatch_807A76C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x807A76C4u: goto label_807A76C4;
    case 0x807A76CCu: goto label_807A76CC;
    case 0x807A76D4u: goto label_807A76D4;
    case 0x807A76DCu: goto label_807A76DC;
    case 0x807A76E4u: goto label_807A76E4;
    case 0x807A76ECu: goto label_807A76EC;
    case 0x807A7700u: goto label_807A7700;
    case 0x807A7738u: goto label_807A7738;
    case 0x807A7770u: goto label_807A7770;
    case 0x807A778Cu: goto label_807A778C;
    case 0x807A77ACu: goto label_807A77AC;
    case 0x807A77C0u: goto label_807A77C0;
    case 0x807A77E8u: goto label_807A77E8;
    case 0x807A77FCu: goto label_807A77FC;
    case 0x807A782Cu: goto label_807A782C;
    case 0x807A7840u: goto label_807A7840;
    case 0x807A7854u: goto label_807A7854;
    case 0x807A78BCu: goto label_807A78BC;
    case 0x807A78C8u: goto label_807A78C8;
    case 0x807A78D0u: goto label_807A78D0;
    case 0x807A79FCu: goto label_807A79FC;
    case 0x807A7A08u: goto label_807A7A08;
    case 0x807A7AC8u: goto label_807A7AC8;
    case 0x807A7AECu: goto label_807A7AEC;
    case 0x807A7AF0u: goto label_807A7AF0;
    case 0x807A7B30u: goto label_807A7B30;
    case 0x807A7B4Cu: goto label_807A7B4C;
    case 0x807A7B54u: goto label_807A7B54;
    case 0x807A7B5Cu: goto label_807A7B5C;
    case 0x807A7B64u: goto label_807A7B64;
    case 0x807A7B6Cu: goto label_807A7B6C;
    case 0x807A7B74u: goto label_807A7B74;
    case 0x807A7B88u: goto label_807A7B88;
    case 0x807A7B94u: goto label_807A7B94;
    case 0x807A7BD0u: goto label_807A7BD0;
    case 0x807A7C28u: goto label_807A7C28;
    case 0x807A7C68u: goto label_807A7C68;
    case 0x807A7CA4u: goto label_807A7CA4;
    case 0x807A7CACu: goto label_807A7CAC;
    case 0x807A7CD4u: goto label_807A7CD4;
    case 0x807A7D0Cu: goto label_807A7D0C;
    case 0x807A7D30u: goto label_807A7D30;
    case 0x807A7D3Cu: goto label_807A7D3C;
    case 0x807A7D7Cu: goto label_807A7D7C;
    case 0x807A7DB4u: goto label_807A7DB4;
    case 0x807A7DBCu: goto label_807A7DBC;
    case 0x807A7DC4u: goto label_807A7DC4;
    case 0x807A7DCCu: goto label_807A7DCC;
    case 0x807A7DD4u: goto label_807A7DD4;
    case 0x807A7DDCu: goto label_807A7DDC;
    case 0x807A7DF0u: goto label_807A7DF0;
    case 0x807A7E04u: goto label_807A7E04;
    case 0x807A7F58u: goto label_807A7F58;
    case 0x807A7F70u: goto label_807A7F70;
    case 0x807A7FC0u: goto label_807A7FC0;
    case 0x807A8018u: goto label_807A8018;
    case 0x807A802Cu: goto label_807A802C;
    default: return;
    }
}

