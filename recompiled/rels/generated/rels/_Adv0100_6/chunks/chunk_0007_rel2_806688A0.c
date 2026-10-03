// DolRecomp output
#include "../generated.h"

void func_806688A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_806688A0[310] = {
        &&label_806688A0,
        &&label_806688A4,
        &&label_806688A8,
        &&label_806688AC,
        &&label_806688B0,
        &&label_806688B4,
        &&label_806688B8,
        &&label_806688BC,
        &&label_806688C0,
        &&label_806688C4,
        &&label_806688C8,
        &&label_806688CC,
        &&label_806688D0,
        &&label_806688D4,
        &&label_806688D8,
        &&label_806688DC,
        &&label_806688E0,
        &&label_806688E4,
        &&label_806688E8,
        &&label_806688EC,
        &&label_806688F0,
        &&label_806688F4,
        &&label_806688F8,
        &&label_806688FC,
        &&label_80668900,
        &&label_80668904,
        &&label_80668908,
        &&label_8066890C,
        &&label_80668910,
        &&label_80668914,
        &&label_80668918,
        &&label_8066891C,
        &&label_80668920,
        &&label_80668924,
        &&label_80668928,
        &&label_8066892C,
        &&label_80668930,
        &&label_80668934,
        &&label_80668938,
        &&label_8066893C,
        &&label_80668940,
        &&label_80668944,
        &&label_80668948,
        &&label_8066894C,
        &&label_80668950,
        &&label_80668954,
        &&label_80668958,
        &&label_8066895C,
        &&label_80668960,
        &&label_80668964,
        &&label_80668968,
        &&label_8066896C,
        &&label_80668970,
        &&label_80668974,
        &&label_80668978,
        &&label_8066897C,
        &&label_80668980,
        &&label_80668984,
        &&label_80668988,
        &&label_8066898C,
        &&label_80668990,
        &&label_80668994,
        &&label_80668998,
        &&label_8066899C,
        &&label_806689A0,
        &&label_806689A4,
        &&label_806689A8,
        &&label_806689AC,
        &&label_806689B0,
        &&label_806689B4,
        &&label_806689B8,
        &&label_806689BC,
        &&label_806689C0,
        &&label_806689C4,
        &&label_806689C8,
        &&label_806689CC,
        &&label_806689D0,
        &&label_806689D4,
        &&label_806689D8,
        &&label_806689DC,
        &&label_806689E0,
        &&label_806689E4,
        &&label_806689E8,
        &&label_806689EC,
        &&label_806689F0,
        &&label_806689F4,
        &&label_806689F8,
        &&label_806689FC,
        &&label_80668A00,
        &&label_80668A04,
        &&label_80668A08,
        &&label_80668A0C,
        &&label_80668A10,
        &&label_80668A14,
        &&label_80668A18,
        &&label_80668A1C,
        &&label_80668A20,
        &&label_80668A24,
        &&label_80668A28,
        &&label_80668A2C,
        &&label_80668A30,
        &&label_80668A34,
        &&label_80668A38,
        &&label_80668A3C,
        &&label_80668A40,
        &&label_80668A44,
        &&label_80668A48,
        &&label_80668A4C,
        &&label_80668A50,
        &&label_80668A54,
        &&label_80668A58,
        &&label_80668A5C,
        &&label_80668A60,
        &&label_80668A64,
        &&label_80668A68,
        &&label_80668A6C,
        &&label_80668A70,
        &&label_80668A74,
        &&label_80668A78,
        &&label_80668A7C,
        &&label_80668A80,
        &&label_80668A84,
        &&label_80668A88,
        &&label_80668A8C,
        &&label_80668A90,
        &&label_80668A94,
        &&label_80668A98,
        &&label_80668A9C,
        &&label_80668AA0,
        &&label_80668AA4,
        &&label_80668AA8,
        &&label_80668AAC,
        &&label_80668AB0,
        &&label_80668AB4,
        &&label_80668AB8,
        &&label_80668ABC,
        &&label_80668AC0,
        &&label_80668AC4,
        &&label_80668AC8,
        &&label_80668ACC,
        &&label_80668AD0,
        &&label_80668AD4,
        &&label_80668AD8,
        &&label_80668ADC,
        &&label_80668AE0,
        &&label_80668AE4,
        &&label_80668AE8,
        &&label_80668AEC,
        &&label_80668AF0,
        &&label_80668AF4,
        &&label_80668AF8,
        &&label_80668AFC,
        &&label_80668B00,
        &&label_80668B04,
        &&label_80668B08,
        &&label_80668B0C,
        &&label_80668B10,
        &&label_80668B14,
        &&label_80668B18,
        &&label_80668B1C,
        &&label_80668B20,
        &&label_80668B24,
        &&label_80668B28,
        &&label_80668B2C,
        &&label_80668B30,
        &&label_80668B34,
        &&label_80668B38,
        &&label_80668B3C,
        &&label_80668B40,
        &&label_80668B44,
        &&label_80668B48,
        &&label_80668B4C,
        &&label_80668B50,
        &&label_80668B54,
        &&label_80668B58,
        &&label_80668B5C,
        &&label_80668B60,
        &&label_80668B64,
        &&label_80668B68,
        &&label_80668B6C,
        &&label_80668B70,
        &&label_80668B74,
        &&label_80668B78,
        &&label_80668B7C,
        &&label_80668B80,
        &&label_80668B84,
        &&label_80668B88,
        &&label_80668B8C,
        &&label_80668B90,
        &&label_80668B94,
        &&label_80668B98,
        &&label_80668B9C,
        &&label_80668BA0,
        &&label_80668BA4,
        &&label_80668BA8,
        &&label_80668BAC,
        &&label_80668BB0,
        &&label_80668BB4,
        &&label_80668BB8,
        &&label_80668BBC,
        &&label_80668BC0,
        &&label_80668BC4,
        &&label_80668BC8,
        &&label_80668BCC,
        &&label_80668BD0,
        &&label_80668BD4,
        &&label_80668BD8,
        &&label_80668BDC,
        &&label_80668BE0,
        &&label_80668BE4,
        &&label_80668BE8,
        &&label_80668BEC,
        &&label_80668BF0,
        &&label_80668BF4,
        &&label_80668BF8,
        &&label_80668BFC,
        &&label_80668C00,
        &&label_80668C04,
        &&label_80668C08,
        &&label_80668C0C,
        &&label_80668C10,
        &&label_80668C14,
        &&label_80668C18,
        &&label_80668C1C,
        &&label_80668C20,
        &&label_80668C24,
        &&label_80668C28,
        &&label_80668C2C,
        &&label_80668C30,
        &&label_80668C34,
        &&label_80668C38,
        &&label_80668C3C,
        &&label_80668C40,
        &&label_80668C44,
        &&label_80668C48,
        &&label_80668C4C,
        &&label_80668C50,
        &&label_80668C54,
        &&label_80668C58,
        &&label_80668C5C,
        &&label_80668C60,
        &&label_80668C64,
        &&label_80668C68,
        &&label_80668C6C,
        &&label_80668C70,
        &&label_80668C74,
        &&label_80668C78,
        &&label_80668C7C,
        &&label_80668C80,
        &&label_80668C84,
        &&label_80668C88,
        &&label_80668C8C,
        &&label_80668C90,
        &&label_80668C94,
        &&label_80668C98,
        &&label_80668C9C,
        &&label_80668CA0,
        &&label_80668CA4,
        &&label_80668CA8,
        &&label_80668CAC,
        &&label_80668CB0,
        &&label_80668CB4,
        &&label_80668CB8,
        &&label_80668CBC,
        &&label_80668CC0,
        &&label_80668CC4,
        &&label_80668CC8,
        &&label_80668CCC,
        &&label_80668CD0,
        &&label_80668CD4,
        &&label_80668CD8,
        &&label_80668CDC,
        &&label_80668CE0,
        &&label_80668CE4,
        &&label_80668CE8,
        &&label_80668CEC,
        &&label_80668CF0,
        &&label_80668CF4,
        &&label_80668CF8,
        &&label_80668CFC,
        &&label_80668D00,
        &&label_80668D04,
        &&label_80668D08,
        &&label_80668D0C,
        &&label_80668D10,
        &&label_80668D14,
        &&label_80668D18,
        &&label_80668D1C,
        &&label_80668D20,
        &&label_80668D24,
        &&label_80668D28,
        &&label_80668D2C,
        &&label_80668D30,
        &&label_80668D34,
        &&label_80668D38,
        &&label_80668D3C,
        &&label_80668D40,
        &&label_80668D44,
        &&label_80668D48,
        &&label_80668D4C,
        &&label_80668D50,
        &&label_80668D54,
        &&label_80668D58,
        &&label_80668D5C,
        &&label_80668D60,
        &&label_80668D64,
        &&label_80668D68,
        &&label_80668D6C,
        &&label_80668D70,
        &&label_80668D74
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x806688A0u && pc <= 0x80668D74u && ((pc - 0x806688A0u) & 3u) == 0u)
            goto *pc_table_806688A0[(pc - 0x806688A0u) >> 2];
    }
    return;
label_806688A0:
    ctx->pc = 0x806688A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806688A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806688A0: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_806688A4:
    ctx->pc = 0x806688A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688A4u)) return;
    // 806688A4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_806688A8:
    ctx->pc = 0x806688A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688A8u)) return;
    // 806688A8: bl      0x8003768C
    {
            ctx->lr = 0x806688ACu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_806688AC:
    ctx->pc = 0x806688ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 60u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806688ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 60u : 1u;
    // 806688AC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_806688B0:
    ctx->pc = 0x806688B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688B0u)) return;
    // 806688B0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_806688B4:
    ctx->pc = 0x806688B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688B4u)) return;
    // 806688B4: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_806688B8:
    ctx->pc = 0x806688B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688B8u)) return;
    // 806688B8: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_806688BC:
    ctx->pc = 0x806688BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 806688BC: lwz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806688C0:
    ctx->pc = 0x806688C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688C0u)) return;
    // 806688C0: addi    r7, r3, -3520
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-3520);

label_806688C4:
    ctx->pc = 0x806688C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688C4u)) return;
    // 806688C4: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_806688C8:
    ctx->pc = 0x806688C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688C8u)) return;
    // 806688C8: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_806688CC:
    ctx->pc = 0x806688CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 806688CC: stw     r8, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806688D0:
    ctx->pc = 0x806688D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688D0u)) return;
    // 806688D0: addi    r6, r4, -3460
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-3460);

label_806688D4:
    ctx->pc = 0x806688D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688D4u)) return;
    // 806688D4: addi    r5, r3, -3456
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-3456);

label_806688D8:
    ctx->pc = 0x806688D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688D8u)) return;
    // 806688D8: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_806688DC:
    ctx->pc = 0x806688DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 806688DC: stw     r0, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806688E0:
    ctx->pc = 0x806688E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688E0u)) return;
    // 806688E0: addi    r4, r3, -3584
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3584);

label_806688E4:
    ctx->pc = 0x806688E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 806688E4: lfd     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x806688E4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806688E8:
    ctx->pc = 0x806688E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688E8u)) return;
    // 806688E8: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_806688EC:
    ctx->pc = 0x806688ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 806688EC: lfd     f0, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x806688ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806688F0:
    ctx->pc = 0x806688F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 806688F0: stw     r8, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806688F4:
    ctx->pc = 0x806688F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688F4u)) return;
    // 806688F4: fsubs   f3, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x806688F4u)) return;
    ppc_fsubs(ctx, 3, 0, 4);

label_806688F8:
    ctx->pc = 0x806688F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 806688F8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x806688F8u)) return;
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
label_806688FC:
    ctx->pc = 0x806688FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806688FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 806688FC: stw     r0, 256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668900:
    ctx->pc = 0x80668900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80668900: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80668900u)) return;
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
label_80668904:
    ctx->pc = 0x80668904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80668904: lfd     f2, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668908:
    ctx->pc = 0x80668908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80668908u)) return;
    // 80668908: fdivs   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80668908u)) return;
    ppc_fdivs(ctx, 1, 3, 1);

label_8066890C:
    ctx->pc = 0x8066890Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066890Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8066890C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8066890Cu)) return;
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
label_80668910:
    ctx->pc = 0x80668910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668910u)) return;
    // 80668910: fsubs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x80668910u)) return;
    ppc_fsubs(ctx, 2, 2, 4);

label_80668914:
    ctx->pc = 0x80668914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80668914u)) return;
    // 80668914: fdivs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80668914u)) return;
    ppc_fdivs(ctx, 2, 2, 0);

label_80668918:
    ctx->pc = 0x80668918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668918u)) return;
    // 80668918: bl      0x8003A888
    {
            ctx->lr = 0x8066891Cu;
            ctx->pc = 0x8003A888u;
            return;
    }

label_8066891C:
    ctx->pc = 0x8066891Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8066891Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 8066891C: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_80668920:
    ctx->pc = 0x80668920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668920: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668920u)) return;
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
label_80668924:
    ctx->pc = 0x80668924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80668924: lfs     f2, -3452(r4)
    if (!ppc_fp_available_inline(ctx, 0x80668924u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3452);
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
label_80668928:
    ctx->pc = 0x80668928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668928u)) return;
    // 80668928: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_8066892C:
    ctx->pc = 0x8066892Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066892Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8066892C: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x8066892Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
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
label_80668930:
    ctx->pc = 0x80668930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668930u)) return;
    // 80668930: addi    r4, r3, -3576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3576);

label_80668934:
    ctx->pc = 0x80668934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668934u)) return;
    // 80668934: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80668934u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_80668938:
    ctx->pc = 0x80668938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80668938: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80668938u)) return;
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
label_8066893C:
    ctx->pc = 0x8066893Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066893Cu)) return;
    // 8066893C: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8066893Cu)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_80668940:
    ctx->pc = 0x80668940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668940u)) return;
    // 80668940: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80668944:
    ctx->pc = 0x80668944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668944u)) return;
    // 80668944: bl      0x8003A8BC
    {
            ctx->lr = 0x80668948u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80668948:
    ctx->pc = 0x80668948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80668948: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_8066894C:
    ctx->pc = 0x8066894Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066894Cu)) return;
    // 8066894C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80668950:
    ctx->pc = 0x80668950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668950u)) return;
    // 80668950: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80668954:
    ctx->pc = 0x80668954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668954u)) return;
    // 80668954: bl      0x8003A434
    {
            ctx->lr = 0x80668958u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80668958:
    ctx->pc = 0x80668958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80668958: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_8066895C:
    ctx->pc = 0x8066895Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066895Cu)) return;
    // 8066895C: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80668960:
    ctx->pc = 0x80668960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668960u)) return;
    // 80668960: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80668964:
    ctx->pc = 0x80668964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668964u)) return;
    // 80668964: bl      0x8003768C
    {
            ctx->lr = 0x80668968u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80668968:
    ctx->pc = 0x80668968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    // 80668968: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8066896C:
    ctx->pc = 0x8066896Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066896Cu)) return;
    // 8066896C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_80668970:
    ctx->pc = 0x80668970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668970u)) return;
    // 80668970: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80668974:
    ctx->pc = 0x80668974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668974u)) return;
    // 80668974: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668978:
    ctx->pc = 0x80668978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80668978: lwz     r0, 0(r4)
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
label_8066897C:
    ctx->pc = 0x8066897Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066897Cu)) return;
    // 8066897C: addi    r6, r3, -3520
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-3520);

label_80668980:
    ctx->pc = 0x80668980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668980u)) return;
    // 80668980: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668984:
    ctx->pc = 0x80668984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80668984: stw     r5, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668988:
    ctx->pc = 0x80668988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668988u)) return;
    // 80668988: rlwinm r4, r0, 18, 14, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 18u) & 0x0003FFFFu;
    }

label_8066898C:
    ctx->pc = 0x8066898Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066898Cu)) return;
    // 8066898C: rlwinm r0, r0, 19, 13, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 19u) & 0x0007FFFFu;
    }

label_80668990:
    ctx->pc = 0x80668990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80668990: stw     r4, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668994:
    ctx->pc = 0x80668994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668994u)) return;
    // 80668994: addi    r4, r3, -3584
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3584);

label_80668998:
    ctx->pc = 0x80668998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668998: lfd     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80668998u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8066899C:
    ctx->pc = 0x8066899Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8066899Cu)) return;
    // 8066899C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_806689A0:
    ctx->pc = 0x806689A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 806689A0: lfd     f0, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x806689A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806689A4:
    ctx->pc = 0x806689A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 806689A4: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806689A8:
    ctx->pc = 0x806689A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689A8u)) return;
    // 806689A8: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x806689A8u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_806689AC:
    ctx->pc = 0x806689ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806689AC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x806689ACu)) return;
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
label_806689B0:
    ctx->pc = 0x806689B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806689B0: stw     r5, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806689B4:
    ctx->pc = 0x806689B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806689B4: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x806689B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806689B8:
    ctx->pc = 0x806689B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689B8u)) return;
    // 806689B8: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x806689B8u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_806689BC:
    ctx->pc = 0x806689BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689BCu)) return;
    // 806689BC: bl      0x8003A888
    {
            ctx->lr = 0x806689C0u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_806689C0:
    ctx->pc = 0x806689C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806689C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 806689C0: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_806689C4:
    ctx->pc = 0x806689C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 806689C4: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x806689C4u)) return;
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
label_806689C8:
    ctx->pc = 0x806689C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 806689C8: lfs     f2, -3448(r4)
    if (!ppc_fp_available_inline(ctx, 0x806689C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3448);
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
label_806689CC:
    ctx->pc = 0x806689CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689CCu)) return;
    // 806689CC: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_806689D0:
    ctx->pc = 0x806689D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 806689D0: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x806689D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
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
label_806689D4:
    ctx->pc = 0x806689D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689D4u)) return;
    // 806689D4: addi    r4, r3, -3576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3576);

label_806689D8:
    ctx->pc = 0x806689D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689D8u)) return;
    // 806689D8: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x806689D8u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_806689DC:
    ctx->pc = 0x806689DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806689DC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x806689DCu)) return;
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
label_806689E0:
    ctx->pc = 0x806689E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689E0u)) return;
    // 806689E0: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x806689E0u)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_806689E4:
    ctx->pc = 0x806689E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689E4u)) return;
    // 806689E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_806689E8:
    ctx->pc = 0x806689E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689E8u)) return;
    // 806689E8: bl      0x8003A8BC
    {
            ctx->lr = 0x806689ECu;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_806689EC:
    ctx->pc = 0x806689ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806689ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 806689EC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_806689F0:
    ctx->pc = 0x806689F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689F0u)) return;
    // 806689F0: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_806689F4:
    ctx->pc = 0x806689F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689F4u)) return;
    // 806689F4: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_806689F8:
    ctx->pc = 0x806689F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806689F8u)) return;
    // 806689F8: bl      0x8003A434
    {
            ctx->lr = 0x806689FCu;
            ctx->pc = 0x8003A434u;
            return;
    }

label_806689FC:
    ctx->pc = 0x806689FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806689FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 806689FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80668A00:
    ctx->pc = 0x80668A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A00u)) return;
    // 80668A00: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_80668A04:
    ctx->pc = 0x80668A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A04u)) return;
    // 80668A04: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80668A08:
    ctx->pc = 0x80668A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A08u)) return;
    // 80668A08: bl      0x8003768C
    {
            ctx->lr = 0x80668A0Cu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80668A0C:
    ctx->pc = 0x80668A0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668A0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80668A0C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80668A10:
    ctx->pc = 0x80668A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A10u)) return;
    // 80668A10: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80668A14:
    ctx->pc = 0x80668A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A14u)) return;
    // 80668A14: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80668A18:
    ctx->pc = 0x80668A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A18u)) return;
    // 80668A18: lis     r5, -28491
    ctx->gpr[5] = ((u32)(s32)(-28491) << 16);

label_80668A1C:
    ctx->pc = 0x80668A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80668A1C: lwz     r4, 0(r4)
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
label_80668A20:
    ctx->pc = 0x80668A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A20u)) return;
    // 80668A20: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668A24:
    ctx->pc = 0x80668A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668A24: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A28:
    ctx->pc = 0x80668A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A28u)) return;
    // 80668A28: rlwinm r0, r4, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 6u) & 0xFFFFFFC0u;
    }

label_80668A2C:
    ctx->pc = 0x80668A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80668A2C: lfd     f1, -3520(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668A2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3520);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A30:
    ctx->pc = 0x80668A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80668A30: stw     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A34:
    ctx->pc = 0x80668A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668A34: lfd     f2, -3536(r5)
    if (!ppc_fp_available_inline(ctx, 0x80668A34u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-3536);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A38:
    ctx->pc = 0x80668A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668A38: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668A38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A3C:
    ctx->pc = 0x80668A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A3Cu)) return;
    // 80668A3C: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80668A3Cu)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80668A40:
    ctx->pc = 0x80668A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A40u)) return;
    // 80668A40: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80668A40u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80668A44:
    ctx->pc = 0x80668A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A44u)) return;
    // 80668A44: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80668A44u)) return;
    ppc_frsp(ctx, 1, 1);

label_80668A48:
    ctx->pc = 0x80668A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A48u)) return;
    // 80668A48: bl      0x80014034
    {
            ctx->lr = 0x80668A4Cu;
            ctx->pc = 0x80014034u;
            return;
    }

label_80668A4C:
    ctx->pc = 0x80668A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 54u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 54u : 1u;
    // 80668A4C: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668A50:
    ctx->pc = 0x80668A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A50u)) return;
    // 80668A50: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80668A50u)) return;
    ppc_frsp(ctx, 1, 1);

label_80668A54:
    ctx->pc = 0x80668A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80668A54: lfs     f0, -3444(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668A54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3444);
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
label_80668A58:
    ctx->pc = 0x80668A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A58u)) return;
    // 80668A58: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_80668A5C:
    ctx->pc = 0x80668A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80668A5C: lfs     f2, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668A5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80668A60:
    ctx->pc = 0x80668A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A60u)) return;
    // 80668A60: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668A64:
    ctx->pc = 0x80668A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A64u)) return;
    // 80668A64: fmuls   f3, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80668A64u)) return;
    ppc_fmuls(ctx, 3, 0, 1);

label_80668A68:
    ctx->pc = 0x80668A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80668A68: lfs     f1, -3584(r4)
    if (!ppc_fp_available_inline(ctx, 0x80668A68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3584);
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
label_80668A6C:
    ctx->pc = 0x80668A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A6Cu)) return;
    // 80668A6C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80668A70:
    ctx->pc = 0x80668A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80668A70: lfs     f0, -3576(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668A70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3576);
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
label_80668A74:
    ctx->pc = 0x80668A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A74u)) return;
    // 80668A74: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_80668A78:
    ctx->pc = 0x80668A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A78u)) return;
    // 80668A78: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668A78u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668A7C:
    ctx->pc = 0x80668A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A7Cu)) return;
    // 80668A7C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80668A80:
    ctx->pc = 0x80668A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80668A80: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668A80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A84:
    ctx->pc = 0x80668A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80668A84: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668A84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_80668A88:
    ctx->pc = 0x80668A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A88u)) return;
    // 80668A88: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668A88u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668A8C:
    ctx->pc = 0x80668A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80668A8C: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A90:
    ctx->pc = 0x80668A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80668A90: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668A90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80668A94:
    ctx->pc = 0x80668A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A94u)) return;
    // 80668A94: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668A94u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668A98:
    ctx->pc = 0x80668A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80668A98: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668A98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668A9C:
    ctx->pc = 0x80668A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80668A9C: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668A9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80668AA0:
    ctx->pc = 0x80668AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AA0u)) return;
    // 80668AA0: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668AA0u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668AA4:
    ctx->pc = 0x80668AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80668AA4: stfs     f2, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AA8:
    ctx->pc = 0x80668AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80668AA8: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668AA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
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
label_80668AAC:
    ctx->pc = 0x80668AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80668AAC: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AB0:
    ctx->pc = 0x80668AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80668AB0: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AB4:
    ctx->pc = 0x80668AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80668AB4: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668AB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
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
label_80668AB8:
    ctx->pc = 0x80668AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80668AB8: stfs     f2, 228(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668ABC:
    ctx->pc = 0x80668ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80668ABC: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668ABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AC0:
    ctx->pc = 0x80668AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80668AC0: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668AC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
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
label_80668AC4:
    ctx->pc = 0x80668AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AC4u)) return;
    // 80668AC4: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668AC4u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668AC8:
    ctx->pc = 0x80668AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80668AC8: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668ACC:
    ctx->pc = 0x80668ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80668ACC: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668ACCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
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
label_80668AD0:
    ctx->pc = 0x80668AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AD0u)) return;
    // 80668AD0: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668AD0u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668AD4:
    ctx->pc = 0x80668AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80668AD4: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AD8:
    ctx->pc = 0x80668AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80668AD8: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668AD8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80668ADC:
    ctx->pc = 0x80668ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668ADCu)) return;
    // 80668ADC: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668ADCu)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668AE0:
    ctx->pc = 0x80668AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80668AE0: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AE4:
    ctx->pc = 0x80668AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80668AE4: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668AE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80668AE8:
    ctx->pc = 0x80668AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AE8u)) return;
    // 80668AE8: fadds   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80668AE8u)) return;
    ppc_fadds(ctx, 2, 2, 3);

label_80668AEC:
    ctx->pc = 0x80668AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80668AEC: stfs     f1, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AF0:
    ctx->pc = 0x80668AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80668AF0: stfs     f1, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AF4:
    ctx->pc = 0x80668AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80668AF4: stfs     f2, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AF8:
    ctx->pc = 0x80668AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80668AF8: stfs     f1, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668AFC:
    ctx->pc = 0x80668AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668AFC: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668AFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B00:
    ctx->pc = 0x80668B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80668B00: stfs     f0, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B04:
    ctx->pc = 0x80668B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80668B04: stfs     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B08:
    ctx->pc = 0x80668B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80668B08: stfs     f0, 236(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B0C:
    ctx->pc = 0x80668B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668B0C: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B10:
    ctx->pc = 0x80668B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668B10: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B14:
    ctx->pc = 0x80668B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80668B14: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B18:
    ctx->pc = 0x80668B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80668B18: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B1C:
    ctx->pc = 0x80668B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80668B1C: stw     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B20:
    ctx->pc = 0x80668B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B20u)) return;
    // 80668B20: bl      0x80050070
    {
            ctx->lr = 0x80668B24u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80668B24:
    ctx->pc = 0x80668B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80668B24: bl      0x80050050
    {
            ctx->lr = 0x80668B28u;
            ctx->pc = 0x80050050u;
            return;
    }

label_80668B28:
    ctx->pc = 0x80668B28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80668B28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80668B2C:
    ctx->pc = 0x80668B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B2Cu)) return;
    // 80668B2C: bl      0x8004B504
    {
            ctx->lr = 0x80668B30u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80668B30:
    ctx->pc = 0x80668B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80668B30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80668B34:
    ctx->pc = 0x80668B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B34u)) return;
    // 80668B34: bl      0x80036C00
    {
            ctx->lr = 0x80668B38u;
            ctx->pc = 0x80036C00u;
            return;
    }

label_80668B38:
    ctx->pc = 0x80668B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80668B38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80668B3C:
    ctx->pc = 0x80668B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B3Cu)) return;
    // 80668B3C: bl      0x800336E8
    {
            ctx->lr = 0x80668B40u;
            ctx->pc = 0x800336E8u;
            return;
    }

label_80668B40:
    ctx->pc = 0x80668B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80668B40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80668B44:
    ctx->pc = 0x80668B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B44u)) return;
    // 80668B44: bl      0x8004B504
    {
            ctx->lr = 0x80668B48u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80668B48:
    ctx->pc = 0x80668B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80668B48: bl      0x8046C930
    {
            ctx->lr = 0x80668B4Cu;
            ctx->pc = 0x8046C930u;
            return;
    }

label_80668B4C:
    ctx->pc = 0x80668B4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80668B4C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80668B50:
    ctx->pc = 0x80668B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80668B50: lfsu     f1, -25500(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668B50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25500);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B54:
    ctx->pc = 0x80668B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80668B54: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668B54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80668B58:
    ctx->pc = 0x80668B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B58u)) return;
    // 80668B58: bl      0x8060F438
    {
            ctx->lr = 0x80668B5Cu;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80668B5C:
    ctx->pc = 0x80668B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668B5C: lwz     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B60:
    ctx->pc = 0x80668B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668B60: lwz     r31, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B64:
    ctx->pc = 0x80668B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80668B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80668B64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B68:
    ctx->pc = 0x80668B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B68u)) return;
    // 80668B68: addi    r1, r1, 304
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(304);

label_80668B6C:
    ctx->pc = 0x80668B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B6Cu)) return;
    // 80668B6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806688A0;
        }
    }

label_80668B70:
    ctx->pc = 0x80668B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80668B70: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B74:
    ctx->pc = 0x80668B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80668B74: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B78:
    ctx->pc = 0x80668B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80668B78: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B7C:
    ctx->pc = 0x80668B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80668B7C: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B80:
    ctx->pc = 0x80668B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80668B80: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80668B80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80668B80u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B84:
    ctx->pc = 0x80668B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80668B84: stw     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B88:
    ctx->pc = 0x80668B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B88u)) return;
    // 80668B88: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_80668B8C:
    ctx->pc = 0x80668B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80668B8C: lfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668B8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
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
label_80668B90:
    ctx->pc = 0x80668B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80668B90: lfs     f0, -3584(r4)
    if (!ppc_fp_available_inline(ctx, 0x80668B90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-3584);
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
label_80668B94:
    ctx->pc = 0x80668B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B94u)) return;
    // 80668B94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80668B98:
    ctx->pc = 0x80668B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668B98: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668B98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668B9C:
    ctx->pc = 0x80668B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668B9Cu)) return;
    // 80668B9C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80668BA0:
    ctx->pc = 0x80668BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BA0u)) return;
    // 80668BA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80668BA4:
    ctx->pc = 0x80668BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BA4u)) return;
    // 80668BA4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80668BA8:
    ctx->pc = 0x80668BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668BA8: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668BA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BAC:
    ctx->pc = 0x80668BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668BAC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668BACu)) return;
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
label_80668BB0:
    ctx->pc = 0x80668BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80668BB0: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668BB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BB4:
    ctx->pc = 0x80668BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80668BB4: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668BB4u)) return;
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
label_80668BB8:
    ctx->pc = 0x80668BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80668BB8: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668BB8u)) return;
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
label_80668BBC:
    ctx->pc = 0x80668BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BBCu)) return;
    // 80668BBC: bl      0x80035FF4
    {
            ctx->lr = 0x80668BC0u;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_80668BC0:
    ctx->pc = 0x80668BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80668BC0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80668BC4:
    ctx->pc = 0x80668BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BC4u)) return;
    // 80668BC4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80668BC8:
    ctx->pc = 0x80668BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BC8u)) return;
    // 80668BC8: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80668BCC:
    ctx->pc = 0x80668BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BCCu)) return;
    // 80668BCC: lis     r6, -28491
    ctx->gpr[6] = ((u32)(s32)(-28491) << 16);

label_80668BD0:
    ctx->pc = 0x80668BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80668BD0: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BD4:
    ctx->pc = 0x80668BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BD4u)) return;
    // 80668BD4: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668BD8:
    ctx->pc = 0x80668BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80668BD8: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BDC:
    ctx->pc = 0x80668BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668BDC: stw     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BE0:
    ctx->pc = 0x80668BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BE0u)) return;
    // 80668BE0: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80668BE4:
    ctx->pc = 0x80668BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80668BE4: lfd     f1, -3520(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668BE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3520);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BE8:
    ctx->pc = 0x80668BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80668BE8: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BEC:
    ctx->pc = 0x80668BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668BEC: lfd     f2, -3536(r6)
    if (!ppc_fp_available_inline(ctx, 0x80668BECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-3536);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BF0:
    ctx->pc = 0x80668BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668BF0: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668BF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668BF4:
    ctx->pc = 0x80668BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BF4u)) return;
    // 80668BF4: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80668BF4u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80668BF8:
    ctx->pc = 0x80668BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BF8u)) return;
    // 80668BF8: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80668BF8u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80668BFC:
    ctx->pc = 0x80668BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668BFCu)) return;
    // 80668BFC: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80668BFCu)) return;
    ppc_frsp(ctx, 1, 1);

label_80668C00:
    ctx->pc = 0x80668C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C00u)) return;
    // 80668C00: bl      0x80014034
    {
            ctx->lr = 0x80668C04u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80668C04:
    ctx->pc = 0x80668C04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668C04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80668C04: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80668C08:
    ctx->pc = 0x80668C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C08u)) return;
    // 80668C08: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80668C0C:
    ctx->pc = 0x80668C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C0Cu)) return;
    // 80668C0C: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80668C10:
    ctx->pc = 0x80668C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80668C10: stw     r0, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668C14:
    ctx->pc = 0x80668C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80668C14: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668C18:
    ctx->pc = 0x80668C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C18u)) return;
    // 80668C18: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668C1C:
    ctx->pc = 0x80668C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80668C1C: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668C20:
    ctx->pc = 0x80668C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C20u)) return;
    // 80668C20: lis     r6, -28491
    ctx->gpr[6] = ((u32)(s32)(-28491) << 16);

label_80668C24:
    ctx->pc = 0x80668C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C24u)) return;
    // 80668C24: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80668C24u)) return;
    ppc_frsp(ctx, 31, 1);

label_80668C28:
    ctx->pc = 0x80668C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80668C28: lfd     f2, -3520(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668C28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3520);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668C2C:
    ctx->pc = 0x80668C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C2Cu)) return;
    // 80668C2C: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80668C30:
    ctx->pc = 0x80668C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80668C30: lfd     f1, -3536(r6)
    if (!ppc_fp_available_inline(ctx, 0x80668C30u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-3536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668C34:
    ctx->pc = 0x80668C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668C34: stw     r0, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668C38:
    ctx->pc = 0x80668C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668C38: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668C38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668C3C:
    ctx->pc = 0x80668C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C3Cu)) return;
    // 80668C3C: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80668C3Cu)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_80668C40:
    ctx->pc = 0x80668C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C40u)) return;
    // 80668C40: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80668C40u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80668C44:
    ctx->pc = 0x80668C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C44u)) return;
    // 80668C44: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80668C44u)) return;
    ppc_frsp(ctx, 1, 1);

label_80668C48:
    ctx->pc = 0x80668C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C48u)) return;
    // 80668C48: bl      0x80013948
    {
            ctx->lr = 0x80668C4Cu;
            ctx->pc = 0x80013948u;
            return;
    }

label_80668C4C:
    ctx->pc = 0x80668C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80668C4C: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668C50:
    ctx->pc = 0x80668C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C50u)) return;
    // 80668C50: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80668C50u)) return;
    ppc_frsp(ctx, 1, 1);

label_80668C54:
    ctx->pc = 0x80668C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80668C54: lfs     f3, -3584(r3)
    if (!ppc_fp_available_inline(ctx, 0x80668C54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3584);
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
label_80668C58:
    ctx->pc = 0x80668C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C58u)) return;
    // 80668C58: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80668C58u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80668C5C:
    ctx->pc = 0x80668C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C5Cu)) return;
    // 80668C5C: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80668C60:
    ctx->pc = 0x80668C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C60u)) return;
    // 80668C60: bl      0x8003A888
    {
            ctx->lr = 0x80668C64u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80668C64:
    ctx->pc = 0x80668C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668C64: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668C64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
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
label_80668C68:
    ctx->pc = 0x80668C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C68u)) return;
    // 80668C68: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668C6C:
    ctx->pc = 0x80668C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80668C6C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668C6Cu)) return;
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
label_80668C70:
    ctx->pc = 0x80668C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C70u)) return;
    // 80668C70: addi    r4, r3, -3584
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3584);

label_80668C74:
    ctx->pc = 0x80668C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668C74: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668C74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
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
label_80668C78:
    ctx->pc = 0x80668C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C78u)) return;
    // 80668C78: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80668C7C:
    ctx->pc = 0x80668C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C7Cu)) return;
    // 80668C7C: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80668C7Cu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80668C80:
    ctx->pc = 0x80668C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80668C80: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80668C80u)) return;
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
label_80668C84:
    ctx->pc = 0x80668C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C84u)) return;
    // 80668C84: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80668C84u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80668C88:
    ctx->pc = 0x80668C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C88u)) return;
    // 80668C88: bl      0x8003A8BC
    {
            ctx->lr = 0x80668C8Cu;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80668C8C:
    ctx->pc = 0x80668C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80668C8C: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80668C90:
    ctx->pc = 0x80668C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C90u)) return;
    // 80668C90: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80668C94:
    ctx->pc = 0x80668C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C94u)) return;
    // 80668C94: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80668C98:
    ctx->pc = 0x80668C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668C98u)) return;
    // 80668C98: bl      0x8003A434
    {
            ctx->lr = 0x80668C9Cu;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80668C9C:
    ctx->pc = 0x80668C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80668C9C: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80668CA0:
    ctx->pc = 0x80668CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CA0u)) return;
    // 80668CA0: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80668CA4:
    ctx->pc = 0x80668CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CA4u)) return;
    // 80668CA4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80668CA8:
    ctx->pc = 0x80668CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CA8u)) return;
    // 80668CA8: bl      0x8003768C
    {
            ctx->lr = 0x80668CACu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80668CAC:
    ctx->pc = 0x80668CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80668CAC: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668CACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80668CB0:
    ctx->pc = 0x80668CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CB0u)) return;
    // 80668CB0: lis     r4, -28491
    ctx->gpr[4] = ((u32)(s32)(-28491) << 16);

label_80668CB4:
    ctx->pc = 0x80668CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CB4u)) return;
    // 80668CB4: lis     r3, -28491
    ctx->gpr[3] = ((u32)(s32)(-28491) << 16);

label_80668CB8:
    ctx->pc = 0x80668CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CB8u)) return;
    // 80668CB8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80668CBC:
    ctx->pc = 0x80668CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80668CBC: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668CBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668CC0:
    ctx->pc = 0x80668CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CC0u)) return;
    // 80668CC0: addi    r5, r4, -3584
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3584);

label_80668CC4:
    ctx->pc = 0x80668CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CC4u)) return;
    // 80668CC4: addi    r4, r3, -3576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3576);

label_80668CC8:
    ctx->pc = 0x80668CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80668CC8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80668CC8u)) return;
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
label_80668CCC:
    ctx->pc = 0x80668CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80668CCC: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668CCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_80668CD0:
    ctx->pc = 0x80668CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CD0u)) return;
    // 80668CD0: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80668CD4:
    ctx->pc = 0x80668CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80668CD4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80668CD4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80668CD8:
    ctx->pc = 0x80668CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CD8u)) return;
    // 80668CD8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80668CDC:
    ctx->pc = 0x80668CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80668CDC: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668CDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668CE0:
    ctx->pc = 0x80668CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80668CE0: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668CE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80668CE4:
    ctx->pc = 0x80668CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80668CE4: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668CE8:
    ctx->pc = 0x80668CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80668CE8: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668CE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80668CEC:
    ctx->pc = 0x80668CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80668CEC: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668CECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668CF0:
    ctx->pc = 0x80668CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80668CF0: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668CF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
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
label_80668CF4:
    ctx->pc = 0x80668CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80668CF4: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668CF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668CF8:
    ctx->pc = 0x80668CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80668CF8: stfs     f2, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668CF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668CFC:
    ctx->pc = 0x80668CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80668CFC: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668CFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
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
label_80668D00:
    ctx->pc = 0x80668D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80668D00: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D04:
    ctx->pc = 0x80668D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80668D04: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D08:
    ctx->pc = 0x80668D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80668D08: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668D08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
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
label_80668D0C:
    ctx->pc = 0x80668D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80668D0C: stfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D10:
    ctx->pc = 0x80668D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80668D10: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668D10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
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
label_80668D14:
    ctx->pc = 0x80668D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80668D14: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D18:
    ctx->pc = 0x80668D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80668D18: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668D18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80668D1C:
    ctx->pc = 0x80668D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80668D1C: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D20:
    ctx->pc = 0x80668D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80668D20: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80668D20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80668D24:
    ctx->pc = 0x80668D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80668D24: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D28:
    ctx->pc = 0x80668D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80668D28: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D2C:
    ctx->pc = 0x80668D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80668D2C: stfs     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D30:
    ctx->pc = 0x80668D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80668D30: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D34:
    ctx->pc = 0x80668D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80668D34: stfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D38:
    ctx->pc = 0x80668D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80668D38: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D3C:
    ctx->pc = 0x80668D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80668D3C: stfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D40:
    ctx->pc = 0x80668D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80668D40: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D44:
    ctx->pc = 0x80668D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668D44: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D48:
    ctx->pc = 0x80668D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668D48: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D4C:
    ctx->pc = 0x80668D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80668D4C: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D50:
    ctx->pc = 0x80668D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80668D50: stw     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D54:
    ctx->pc = 0x80668D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80668D54: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D58:
    ctx->pc = 0x80668D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D58u)) return;
    // 80668D58: bl      0x80050070
    {
            ctx->lr = 0x80668D5Cu;
            ctx->pc = 0x80050070u;
            return;
    }

label_80668D5C:
    ctx->pc = 0x80668D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80668D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80668D5C: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80668D5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80668D5Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D60:
    ctx->pc = 0x80668D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80668D60: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D64:
    ctx->pc = 0x80668D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80668D64: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80668D64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D68:
    ctx->pc = 0x80668D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80668D68: lwz     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D6C:
    ctx->pc = 0x80668D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80668D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80668D6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80668D70:
    ctx->pc = 0x80668D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D70u)) return;
    // 80668D70: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_80668D74:
    ctx->pc = 0x80668D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80668D74u)) return;
    // 80668D74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_806688A0;
        }
    }

    ctx->pc = 0x80668D78u;
    return;
return_dispatch_806688A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x806688ACu: goto label_806688AC;
    case 0x8066891Cu: goto label_8066891C;
    case 0x80668948u: goto label_80668948;
    case 0x80668958u: goto label_80668958;
    case 0x80668968u: goto label_80668968;
    case 0x806689C0u: goto label_806689C0;
    case 0x806689ECu: goto label_806689EC;
    case 0x806689FCu: goto label_806689FC;
    case 0x80668A0Cu: goto label_80668A0C;
    case 0x80668A4Cu: goto label_80668A4C;
    case 0x80668B24u: goto label_80668B24;
    case 0x80668B28u: goto label_80668B28;
    case 0x80668B30u: goto label_80668B30;
    case 0x80668B38u: goto label_80668B38;
    case 0x80668B40u: goto label_80668B40;
    case 0x80668B48u: goto label_80668B48;
    case 0x80668B4Cu: goto label_80668B4C;
    case 0x80668B5Cu: goto label_80668B5C;
    case 0x80668BC0u: goto label_80668BC0;
    case 0x80668C04u: goto label_80668C04;
    case 0x80668C4Cu: goto label_80668C4C;
    case 0x80668C64u: goto label_80668C64;
    case 0x80668C8Cu: goto label_80668C8C;
    case 0x80668C9Cu: goto label_80668C9C;
    case 0x80668CACu: goto label_80668CAC;
    case 0x80668D5Cu: goto label_80668D5C;
    default: return;
    }
}

