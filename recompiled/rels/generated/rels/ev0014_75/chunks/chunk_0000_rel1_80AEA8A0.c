// DolRecomp output
#include "../generated.h"

void func_80AEA8A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80AEA8A0[336] = {
        &&label_80AEA8A0,
        &&label_80AEA8A4,
        &&label_80AEA8A8,
        &&label_80AEA8AC,
        &&label_80AEA8B0,
        &&label_80AEA8B4,
        &&label_80AEA8B8,
        &&label_80AEA8BC,
        &&label_80AEA8C0,
        &&label_80AEA8C4,
        &&label_80AEA8C8,
        &&label_80AEA8CC,
        &&label_80AEA8D0,
        &&label_80AEA8D4,
        &&label_80AEA8D8,
        &&label_80AEA8DC,
        &&label_80AEA8E0,
        &&label_80AEA8E4,
        &&label_80AEA8E8,
        &&label_80AEA8EC,
        &&label_80AEA8F0,
        &&label_80AEA8F4,
        &&label_80AEA8F8,
        &&label_80AEA8FC,
        &&label_80AEA900,
        &&label_80AEA904,
        &&label_80AEA908,
        &&label_80AEA90C,
        &&label_80AEA910,
        &&label_80AEA914,
        &&label_80AEA918,
        &&label_80AEA91C,
        &&label_80AEA920,
        &&label_80AEA924,
        &&label_80AEA928,
        &&label_80AEA92C,
        &&label_80AEA930,
        &&label_80AEA934,
        &&label_80AEA938,
        &&label_80AEA93C,
        &&label_80AEA940,
        &&label_80AEA944,
        &&label_80AEA948,
        &&label_80AEA94C,
        &&label_80AEA950,
        &&label_80AEA954,
        &&label_80AEA958,
        &&label_80AEA95C,
        &&label_80AEA960,
        &&label_80AEA964,
        &&label_80AEA968,
        &&label_80AEA96C,
        &&label_80AEA970,
        &&label_80AEA974,
        &&label_80AEA978,
        &&label_80AEA97C,
        &&label_80AEA980,
        &&label_80AEA984,
        &&label_80AEA988,
        &&label_80AEA98C,
        &&label_80AEA990,
        &&label_80AEA994,
        &&label_80AEA998,
        &&label_80AEA99C,
        &&label_80AEA9A0,
        &&label_80AEA9A4,
        &&label_80AEA9A8,
        &&label_80AEA9AC,
        &&label_80AEA9B0,
        &&label_80AEA9B4,
        &&label_80AEA9B8,
        &&label_80AEA9BC,
        &&label_80AEA9C0,
        &&label_80AEA9C4,
        &&label_80AEA9C8,
        &&label_80AEA9CC,
        &&label_80AEA9D0,
        &&label_80AEA9D4,
        &&label_80AEA9D8,
        &&label_80AEA9DC,
        &&label_80AEA9E0,
        &&label_80AEA9E4,
        &&label_80AEA9E8,
        &&label_80AEA9EC,
        &&label_80AEA9F0,
        &&label_80AEA9F4,
        &&label_80AEA9F8,
        &&label_80AEA9FC,
        &&label_80AEAA00,
        &&label_80AEAA04,
        &&label_80AEAA08,
        &&label_80AEAA0C,
        &&label_80AEAA10,
        &&label_80AEAA14,
        &&label_80AEAA18,
        &&label_80AEAA1C,
        &&label_80AEAA20,
        &&label_80AEAA24,
        &&label_80AEAA28,
        &&label_80AEAA2C,
        &&label_80AEAA30,
        &&label_80AEAA34,
        &&label_80AEAA38,
        &&label_80AEAA3C,
        &&label_80AEAA40,
        &&label_80AEAA44,
        &&label_80AEAA48,
        &&label_80AEAA4C,
        &&label_80AEAA50,
        &&label_80AEAA54,
        &&label_80AEAA58,
        &&label_80AEAA5C,
        &&label_80AEAA60,
        &&label_80AEAA64,
        &&label_80AEAA68,
        &&label_80AEAA6C,
        &&label_80AEAA70,
        &&label_80AEAA74,
        &&label_80AEAA78,
        &&label_80AEAA7C,
        &&label_80AEAA80,
        &&label_80AEAA84,
        &&label_80AEAA88,
        &&label_80AEAA8C,
        &&label_80AEAA90,
        &&label_80AEAA94,
        &&label_80AEAA98,
        &&label_80AEAA9C,
        &&label_80AEAAA0,
        &&label_80AEAAA4,
        &&label_80AEAAA8,
        &&label_80AEAAAC,
        &&label_80AEAAB0,
        &&label_80AEAAB4,
        &&label_80AEAAB8,
        &&label_80AEAABC,
        &&label_80AEAAC0,
        &&label_80AEAAC4,
        &&label_80AEAAC8,
        &&label_80AEAACC,
        &&label_80AEAAD0,
        &&label_80AEAAD4,
        &&label_80AEAAD8,
        &&label_80AEAADC,
        &&label_80AEAAE0,
        &&label_80AEAAE4,
        &&label_80AEAAE8,
        &&label_80AEAAEC,
        &&label_80AEAAF0,
        &&label_80AEAAF4,
        &&label_80AEAAF8,
        &&label_80AEAAFC,
        &&label_80AEAB00,
        &&label_80AEAB04,
        &&label_80AEAB08,
        &&label_80AEAB0C,
        &&label_80AEAB10,
        &&label_80AEAB14,
        &&label_80AEAB18,
        &&label_80AEAB1C,
        &&label_80AEAB20,
        &&label_80AEAB24,
        &&label_80AEAB28,
        &&label_80AEAB2C,
        &&label_80AEAB30,
        &&label_80AEAB34,
        &&label_80AEAB38,
        &&label_80AEAB3C,
        &&label_80AEAB40,
        &&label_80AEAB44,
        &&label_80AEAB48,
        &&label_80AEAB4C,
        &&label_80AEAB50,
        &&label_80AEAB54,
        &&label_80AEAB58,
        &&label_80AEAB5C,
        &&label_80AEAB60,
        &&label_80AEAB64,
        &&label_80AEAB68,
        &&label_80AEAB6C,
        &&label_80AEAB70,
        &&label_80AEAB74,
        &&label_80AEAB78,
        &&label_80AEAB7C,
        &&label_80AEAB80,
        &&label_80AEAB84,
        &&label_80AEAB88,
        &&label_80AEAB8C,
        &&label_80AEAB90,
        &&label_80AEAB94,
        &&label_80AEAB98,
        &&label_80AEAB9C,
        &&label_80AEABA0,
        &&label_80AEABA4,
        &&label_80AEABA8,
        &&label_80AEABAC,
        &&label_80AEABB0,
        &&label_80AEABB4,
        &&label_80AEABB8,
        &&label_80AEABBC,
        &&label_80AEABC0,
        &&label_80AEABC4,
        &&label_80AEABC8,
        &&label_80AEABCC,
        &&label_80AEABD0,
        &&label_80AEABD4,
        &&label_80AEABD8,
        &&label_80AEABDC,
        &&label_80AEABE0,
        &&label_80AEABE4,
        &&label_80AEABE8,
        &&label_80AEABEC,
        &&label_80AEABF0,
        &&label_80AEABF4,
        &&label_80AEABF8,
        &&label_80AEABFC,
        &&label_80AEAC00,
        &&label_80AEAC04,
        &&label_80AEAC08,
        &&label_80AEAC0C,
        &&label_80AEAC10,
        &&label_80AEAC14,
        &&label_80AEAC18,
        &&label_80AEAC1C,
        &&label_80AEAC20,
        &&label_80AEAC24,
        &&label_80AEAC28,
        &&label_80AEAC2C,
        &&label_80AEAC30,
        &&label_80AEAC34,
        &&label_80AEAC38,
        &&label_80AEAC3C,
        &&label_80AEAC40,
        &&label_80AEAC44,
        &&label_80AEAC48,
        &&label_80AEAC4C,
        &&label_80AEAC50,
        &&label_80AEAC54,
        &&label_80AEAC58,
        &&label_80AEAC5C,
        &&label_80AEAC60,
        &&label_80AEAC64,
        &&label_80AEAC68,
        &&label_80AEAC6C,
        &&label_80AEAC70,
        &&label_80AEAC74,
        &&label_80AEAC78,
        &&label_80AEAC7C,
        &&label_80AEAC80,
        &&label_80AEAC84,
        &&label_80AEAC88,
        &&label_80AEAC8C,
        &&label_80AEAC90,
        &&label_80AEAC94,
        &&label_80AEAC98,
        &&label_80AEAC9C,
        &&label_80AEACA0,
        &&label_80AEACA4,
        &&label_80AEACA8,
        &&label_80AEACAC,
        &&label_80AEACB0,
        &&label_80AEACB4,
        &&label_80AEACB8,
        &&label_80AEACBC,
        &&label_80AEACC0,
        &&label_80AEACC4,
        &&label_80AEACC8,
        &&label_80AEACCC,
        &&label_80AEACD0,
        &&label_80AEACD4,
        &&label_80AEACD8,
        &&label_80AEACDC,
        &&label_80AEACE0,
        &&label_80AEACE4,
        &&label_80AEACE8,
        &&label_80AEACEC,
        &&label_80AEACF0,
        &&label_80AEACF4,
        &&label_80AEACF8,
        &&label_80AEACFC,
        &&label_80AEAD00,
        &&label_80AEAD04,
        &&label_80AEAD08,
        &&label_80AEAD0C,
        &&label_80AEAD10,
        &&label_80AEAD14,
        &&label_80AEAD18,
        &&label_80AEAD1C,
        &&label_80AEAD20,
        &&label_80AEAD24,
        &&label_80AEAD28,
        &&label_80AEAD2C,
        &&label_80AEAD30,
        &&label_80AEAD34,
        &&label_80AEAD38,
        &&label_80AEAD3C,
        &&label_80AEAD40,
        &&label_80AEAD44,
        &&label_80AEAD48,
        &&label_80AEAD4C,
        &&label_80AEAD50,
        &&label_80AEAD54,
        &&label_80AEAD58,
        &&label_80AEAD5C,
        &&label_80AEAD60,
        &&label_80AEAD64,
        &&label_80AEAD68,
        &&label_80AEAD6C,
        &&label_80AEAD70,
        &&label_80AEAD74,
        &&label_80AEAD78,
        &&label_80AEAD7C,
        &&label_80AEAD80,
        &&label_80AEAD84,
        &&label_80AEAD88,
        &&label_80AEAD8C,
        &&label_80AEAD90,
        &&label_80AEAD94,
        &&label_80AEAD98,
        &&label_80AEAD9C,
        &&label_80AEADA0,
        &&label_80AEADA4,
        &&label_80AEADA8,
        &&label_80AEADAC,
        &&label_80AEADB0,
        &&label_80AEADB4,
        &&label_80AEADB8,
        &&label_80AEADBC,
        &&label_80AEADC0,
        &&label_80AEADC4,
        &&label_80AEADC8,
        &&label_80AEADCC,
        &&label_80AEADD0,
        &&label_80AEADD4,
        &&label_80AEADD8,
        &&label_80AEADDC
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80AEA8A0u && pc <= 0x80AEADDCu && ((pc - 0x80AEA8A0u) & 3u) == 0u)
            goto *pc_table_80AEA8A0[(pc - 0x80AEA8A0u) >> 2];
    }
    return;
label_80AEA8A0:
    ctx->pc = 0x80AEA8A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA8A0: stwu     r1, -16(r1)
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
label_80AEA8A4:
    ctx->pc = 0x80AEA8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AEA8A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEA8A8:
    ctx->pc = 0x80AEA8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEA8A8: stw     r0, 20(r1)
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
label_80AEA8AC:
    ctx->pc = 0x80AEA8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8ACu)) return;
    // 80AEA8AC: cmpwi   r3, 2
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

label_80AEA8B0:
    ctx->pc = 0x80AEA8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8B0u)) return;
    // 80AEA8B0: bc    12, 2, 0x80AEAD6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AEAD6C;
        }
    }

label_80AEA8B4:
    ctx->pc = 0x80AEA8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEA8B4: bc    4, 0, 0x80AEA8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEA8C8;
        }
    }

label_80AEA8B8:
    ctx->pc = 0x80AEA8B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA8B8: cmpwi   r3, 0
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

label_80AEA8BC:
    ctx->pc = 0x80AEA8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8BCu)) return;
    // 80AEA8BC: bc    12, 2, 0x80AEADD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AEADD0;
        }
    }

label_80AEA8C0:
    ctx->pc = 0x80AEA8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEA8C0: bc    4, 0, 0x80AEA8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEA8D0;
        }
    }

label_80AEA8C4:
    ctx->pc = 0x80AEA8C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEA8C4: b       0x80AEADD0
    {
            goto label_80AEADD0;
    }

label_80AEA8C8:
    ctx->pc = 0x80AEA8C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA8C8: cmpwi   r3, 4
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

label_80AEA8CC:
    ctx->pc = 0x80AEA8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8CCu)) return;
    // 80AEA8CC: b       0x80AEADD0
    {
            goto label_80AEADD0;
    }

label_80AEA8D0:
    ctx->pc = 0x80AEA8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEA8D0: bl      0x8045DE7C
    {
            ctx->lr = 0x80AEA8D4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80AEA8D4:
    ctx->pc = 0x80AEA8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEA8D4: bl      0x80460A60
    {
            ctx->lr = 0x80AEA8D8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80AEA8D8:
    ctx->pc = 0x80AEA8D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEA8D8: bl      0x80460A24
    {
            ctx->lr = 0x80AEA8DCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80AEA8DC:
    ctx->pc = 0x80AEA8DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA8DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA8E0:
    ctx->pc = 0x80AEA8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8E0u)) return;
    // 80AEA8E0: bl      0x8045EC10
    {
            ctx->lr = 0x80AEA8E4u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AEA8E4:
    ctx->pc = 0x80AEA8E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA8E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA8E8:
    ctx->pc = 0x80AEA8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8E8u)) return;
    // 80AEA8E8: bl      0x8045F220
    {
            ctx->lr = 0x80AEA8ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEA8EC:
    ctx->pc = 0x80AEA8ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA8ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AEA8EC: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEA8F0:
    ctx->pc = 0x80AEA8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8F0u)) return;
    // 80AEA8F0: addi    r4, r4, 14256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14256);

label_80AEA8F4:
    ctx->pc = 0x80AEA8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEA8F4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEA8F4u)) return;
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
label_80AEA8F8:
    ctx->pc = 0x80AEA8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8F8u)) return;
    // 80AEA8F8: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEA8FC:
    ctx->pc = 0x80AEA8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA8FCu)) return;
    // 80AEA8FC: addi    r4, r4, 14260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14260);

label_80AEA900:
    ctx->pc = 0x80AEA900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA900: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEA900u)) return;
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
label_80AEA904:
    ctx->pc = 0x80AEA904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA904u)) return;
    // 80AEA904: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEA908:
    ctx->pc = 0x80AEA908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA908u)) return;
    // 80AEA908: addi    r4, r4, 14264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14264);

label_80AEA90C:
    ctx->pc = 0x80AEA90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA90Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEA90C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEA90Cu)) return;
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
label_80AEA910:
    ctx->pc = 0x80AEA910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA910u)) return;
    // 80AEA910: bl      0x8045EF2C
    {
            ctx->lr = 0x80AEA914u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AEA914:
    ctx->pc = 0x80AEA914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA914: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA918:
    ctx->pc = 0x80AEA918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA918u)) return;
    // 80AEA918: bl      0x8045F220
    {
            ctx->lr = 0x80AEA91Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEA91C:
    ctx->pc = 0x80AEA91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEA91C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AEA920:
    ctx->pc = 0x80AEA920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA920u)) return;
    // 80AEA920: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AEA924:
    ctx->pc = 0x80AEA924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA924u)) return;
    // 80AEA924: addi    r5, r5, -15547
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15547);

label_80AEA928:
    ctx->pc = 0x80AEA928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA928u)) return;
    // 80AEA928: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AEA92C:
    ctx->pc = 0x80AEA92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA92Cu)) return;
    // 80AEA92C: bl      0x8045EEA8
    {
            ctx->lr = 0x80AEA930u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AEA930:
    ctx->pc = 0x80AEA930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA930: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AEA934:
    ctx->pc = 0x80AEA934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA934u)) return;
    // 80AEA934: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEA938u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEA938:
    ctx->pc = 0x80AEA938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA938: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA93C:
    ctx->pc = 0x80AEA93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA93Cu)) return;
    // 80AEA93C: bl      0x8045F220
    {
            ctx->lr = 0x80AEA940u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEA940:
    ctx->pc = 0x80AEA940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEA940: bl      0x8045EB8C
    {
            ctx->lr = 0x80AEA944u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AEA944:
    ctx->pc = 0x80AEA944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEA944: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA948:
    ctx->pc = 0x80AEA948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA948u)) return;
    // 80AEA948: bl      0x8045F220
    {
            ctx->lr = 0x80AEA94Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEA94C:
    ctx->pc = 0x80AEA94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AEA94C: lis     r4, -28586
    ctx->gpr[4] = ((u32)(s32)(-28586) << 16);

label_80AEA950:
    ctx->pc = 0x80AEA950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA950u)) return;
    // 80AEA950: addi    r4, r4, -5912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5912);

label_80AEA954:
    ctx->pc = 0x80AEA954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA954u)) return;
    // 80AEA954: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AEA958:
    ctx->pc = 0x80AEA958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA958u)) return;
    // 80AEA958: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AEA95C:
    ctx->pc = 0x80AEA95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA95Cu)) return;
    // 80AEA95C: lis     r6, -27614
    ctx->gpr[6] = ((u32)(s32)(-27614) << 16);

label_80AEA960:
    ctx->pc = 0x80AEA960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA960u)) return;
    // 80AEA960: addi    r6, r6, 14268
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(14268);

label_80AEA964:
    ctx->pc = 0x80AEA964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AEA964: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AEA964u)) return;
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
label_80AEA968:
    ctx->pc = 0x80AEA968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA968u)) return;
    // 80AEA968: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AEA96C:
    ctx->pc = 0x80AEA96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA96Cu)) return;
    // 80AEA96C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AEA970:
    ctx->pc = 0x80AEA970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA970u)) return;
    // 80AEA970: bl      0x8045EBE4
    {
            ctx->lr = 0x80AEA974u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AEA974:
    ctx->pc = 0x80AEA974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AEA974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA978:
    ctx->pc = 0x80AEA978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA978u)) return;
    // 80AEA978: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AEA97C:
    ctx->pc = 0x80AEA97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA97Cu)) return;
    // 80AEA97C: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEA980:
    ctx->pc = 0x80AEA980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA980u)) return;
    // 80AEA980: addi    r5, r5, 14272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14272);

label_80AEA984:
    ctx->pc = 0x80AEA984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEA984: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEA984u)) return;
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
label_80AEA988:
    ctx->pc = 0x80AEA988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA988u)) return;
    // 80AEA988: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEA98C:
    ctx->pc = 0x80AEA98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA98Cu)) return;
    // 80AEA98C: addi    r5, r5, 14276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14276);

label_80AEA990:
    ctx->pc = 0x80AEA990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA990: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEA990u)) return;
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
label_80AEA994:
    ctx->pc = 0x80AEA994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA994u)) return;
    // 80AEA994: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEA998:
    ctx->pc = 0x80AEA998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA998u)) return;
    // 80AEA998: addi    r5, r5, 14280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14280);

label_80AEA99C:
    ctx->pc = 0x80AEA99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEA99C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEA99Cu)) return;
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
label_80AEA9A0:
    ctx->pc = 0x80AEA9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9A0u)) return;
    // 80AEA9A0: bl      0x8045C750
    {
            ctx->lr = 0x80AEA9A4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AEA9A4:
    ctx->pc = 0x80AEA9A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA9A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AEA9A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA9A8:
    ctx->pc = 0x80AEA9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9A8u)) return;
    // 80AEA9A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AEA9AC:
    ctx->pc = 0x80AEA9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9ACu)) return;
    // 80AEA9AC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AEA9B0:
    ctx->pc = 0x80AEA9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9B0u)) return;
    // 80AEA9B0: addi    r5, r6, -4411
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4411);

label_80AEA9B4:
    ctx->pc = 0x80AEA9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9B4u)) return;
    // 80AEA9B4: addi    r6, r6, -18906
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18906);

label_80AEA9B8:
    ctx->pc = 0x80AEA9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9B8u)) return;
    // 80AEA9B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AEA9BC:
    ctx->pc = 0x80AEA9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9BCu)) return;
    // 80AEA9BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80AEA9C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AEA9C0:
    ctx->pc = 0x80AEA9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AEA9C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA9C4:
    ctx->pc = 0x80AEA9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9C4u)) return;
    // 80AEA9C4: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80AEA9C8:
    ctx->pc = 0x80AEA9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9C8u)) return;
    // 80AEA9C8: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEA9CC:
    ctx->pc = 0x80AEA9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9CCu)) return;
    // 80AEA9CC: addi    r5, r5, 14284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14284);

label_80AEA9D0:
    ctx->pc = 0x80AEA9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEA9D0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEA9D0u)) return;
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
label_80AEA9D4:
    ctx->pc = 0x80AEA9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9D4u)) return;
    // 80AEA9D4: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEA9D8:
    ctx->pc = 0x80AEA9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9D8u)) return;
    // 80AEA9D8: addi    r5, r5, 14288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14288);

label_80AEA9DC:
    ctx->pc = 0x80AEA9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEA9DC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEA9DCu)) return;
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
label_80AEA9E0:
    ctx->pc = 0x80AEA9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9E0u)) return;
    // 80AEA9E0: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEA9E4:
    ctx->pc = 0x80AEA9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9E4u)) return;
    // 80AEA9E4: addi    r5, r5, 14292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14292);

label_80AEA9E8:
    ctx->pc = 0x80AEA9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEA9E8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEA9E8u)) return;
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
label_80AEA9EC:
    ctx->pc = 0x80AEA9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9ECu)) return;
    // 80AEA9EC: bl      0x8045C750
    {
            ctx->lr = 0x80AEA9F0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AEA9F0:
    ctx->pc = 0x80AEA9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEA9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AEA9F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEA9F4:
    ctx->pc = 0x80AEA9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9F4u)) return;
    // 80AEA9F4: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80AEA9F8:
    ctx->pc = 0x80AEA9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9F8u)) return;
    // 80AEA9F8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AEA9FC:
    ctx->pc = 0x80AEA9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEA9FCu)) return;
    // 80AEA9FC: addi    r5, r6, -1595
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1595);

label_80AEAA00:
    ctx->pc = 0x80AEAA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA00u)) return;
    // 80AEAA00: addi    r6, r6, -21210
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21210);

label_80AEAA04:
    ctx->pc = 0x80AEAA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA04u)) return;
    // 80AEAA04: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AEAA08:
    ctx->pc = 0x80AEAA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA08u)) return;
    // 80AEAA08: bl      0x8045C7B4
    {
            ctx->lr = 0x80AEAA0Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AEAA0C:
    ctx->pc = 0x80AEAA0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAA0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAA0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAA10:
    ctx->pc = 0x80AEAA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA10u)) return;
    // 80AEAA10: bl      0x8045F220
    {
            ctx->lr = 0x80AEAA14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAA14:
    ctx->pc = 0x80AEAA14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAA14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AEAA14: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAA18:
    ctx->pc = 0x80AEAA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA18u)) return;
    // 80AEAA18: addi    r4, r4, 14296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14296);

label_80AEAA1C:
    ctx->pc = 0x80AEAA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AEAA1C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAA1Cu)) return;
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
label_80AEAA20:
    ctx->pc = 0x80AEAA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA20u)) return;
    // 80AEAA20: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAA24:
    ctx->pc = 0x80AEAA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA24u)) return;
    // 80AEAA24: addi    r4, r4, 14300
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14300);

label_80AEAA28:
    ctx->pc = 0x80AEAA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AEAA28: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAA28u)) return;
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
label_80AEAA2C:
    ctx->pc = 0x80AEAA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA2Cu)) return;
    // 80AEAA2C: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAA30:
    ctx->pc = 0x80AEAA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA30u)) return;
    // 80AEAA30: addi    r4, r4, 14304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14304);

label_80AEAA34:
    ctx->pc = 0x80AEAA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEAA34: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAA34u)) return;
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
label_80AEAA38:
    ctx->pc = 0x80AEAA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA38u)) return;
    // 80AEAA38: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAA3C:
    ctx->pc = 0x80AEAA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA3Cu)) return;
    // 80AEAA3C: addi    r4, r4, 14308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14308);

label_80AEAA40:
    ctx->pc = 0x80AEAA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEAA40: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAA40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80AEAA44:
    ctx->pc = 0x80AEAA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA44u)) return;
    // 80AEAA44: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAA48:
    ctx->pc = 0x80AEAA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA48u)) return;
    // 80AEAA48: addi    r4, r4, 14312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14312);

label_80AEAA4C:
    ctx->pc = 0x80AEAA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEAA4C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAA4Cu)) return;
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
label_80AEAA50:
    ctx->pc = 0x80AEAA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA50u)) return;
    // 80AEAA50: bl      0x8045E570
    {
            ctx->lr = 0x80AEAA54u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AEAA54:
    ctx->pc = 0x80AEAA54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAA54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAA54: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80AEAA58:
    ctx->pc = 0x80AEAA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA58u)) return;
    // 80AEAA58: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEAA5Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEAA5C:
    ctx->pc = 0x80AEAA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAA5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAA60:
    ctx->pc = 0x80AEAA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA60u)) return;
    // 80AEAA60: bl      0x8045F220
    {
            ctx->lr = 0x80AEAA64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAA64:
    ctx->pc = 0x80AEAA64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAA64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AEAA64: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAA68:
    ctx->pc = 0x80AEAA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA68u)) return;
    // 80AEAA68: addi    r4, r4, 30648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30648);

label_80AEAA6C:
    ctx->pc = 0x80AEAA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA6Cu)) return;
    // 80AEAA6C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AEAA70:
    ctx->pc = 0x80AEAA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA70u)) return;
    // 80AEAA70: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AEAA74:
    ctx->pc = 0x80AEAA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA74u)) return;
    // 80AEAA74: lis     r6, -27614
    ctx->gpr[6] = ((u32)(s32)(-27614) << 16);

label_80AEAA78:
    ctx->pc = 0x80AEAA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA78u)) return;
    // 80AEAA78: addi    r6, r6, 14316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(14316);

label_80AEAA7C:
    ctx->pc = 0x80AEAA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AEAA7C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AEAA7Cu)) return;
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
label_80AEAA80:
    ctx->pc = 0x80AEAA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA80u)) return;
    // 80AEAA80: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AEAA84:
    ctx->pc = 0x80AEAA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA84u)) return;
    // 80AEAA84: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80AEAA88:
    ctx->pc = 0x80AEAA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA88u)) return;
    // 80AEAA88: bl      0x8045EBE4
    {
            ctx->lr = 0x80AEAA8Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AEAA8C:
    ctx->pc = 0x80AEAA8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAA8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAA8C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80AEAA90:
    ctx->pc = 0x80AEAA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA90u)) return;
    // 80AEAA90: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEAA94u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEAA94:
    ctx->pc = 0x80AEAA94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAA94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AEAA94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAA98:
    ctx->pc = 0x80AEAA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA98u)) return;
    // 80AEAA98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AEAA9C:
    ctx->pc = 0x80AEAA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAA9Cu)) return;
    // 80AEAA9C: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEAAA0:
    ctx->pc = 0x80AEAAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAA0u)) return;
    // 80AEAAA0: addi    r5, r5, 14320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14320);

label_80AEAAA4:
    ctx->pc = 0x80AEAAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEAAA4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEAAA4u)) return;
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
label_80AEAAA8:
    ctx->pc = 0x80AEAAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAA8u)) return;
    // 80AEAAA8: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEAAAC:
    ctx->pc = 0x80AEAAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAACu)) return;
    // 80AEAAAC: addi    r5, r5, 14324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14324);

label_80AEAAB0:
    ctx->pc = 0x80AEAAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEAAB0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEAAB0u)) return;
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
label_80AEAAB4:
    ctx->pc = 0x80AEAAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAB4u)) return;
    // 80AEAAB4: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEAAB8:
    ctx->pc = 0x80AEAAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAB8u)) return;
    // 80AEAAB8: addi    r5, r5, 14328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14328);

label_80AEAABC:
    ctx->pc = 0x80AEAABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEAABC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEAABCu)) return;
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
label_80AEAAC0:
    ctx->pc = 0x80AEAAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAC0u)) return;
    // 80AEAAC0: bl      0x8045C750
    {
            ctx->lr = 0x80AEAAC4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AEAAC4:
    ctx->pc = 0x80AEAAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AEAAC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAAC8:
    ctx->pc = 0x80AEAAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAC8u)) return;
    // 80AEAAC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AEAACC:
    ctx->pc = 0x80AEAACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAACCu)) return;
    // 80AEAACC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AEAAD0:
    ctx->pc = 0x80AEAAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAD0u)) return;
    // 80AEAAD0: addi    r5, r6, -1083
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1083);

label_80AEAAD4:
    ctx->pc = 0x80AEAAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAD4u)) return;
    // 80AEAAD4: addi    r6, r6, -9178
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9178);

label_80AEAAD8:
    ctx->pc = 0x80AEAAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAD8u)) return;
    // 80AEAAD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AEAADC:
    ctx->pc = 0x80AEAADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAADCu)) return;
    // 80AEAADC: bl      0x8045C7B4
    {
            ctx->lr = 0x80AEAAE0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AEAAE0:
    ctx->pc = 0x80AEAAE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAAE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AEAAE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAAE4:
    ctx->pc = 0x80AEAAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAE4u)) return;
    // 80AEAAE4: li      r4, 270
    ctx->gpr[4] = (u32)(s32)(270);

label_80AEAAE8:
    ctx->pc = 0x80AEAAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAE8u)) return;
    // 80AEAAE8: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEAAEC:
    ctx->pc = 0x80AEAAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAECu)) return;
    // 80AEAAEC: addi    r5, r5, 14332
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14332);

label_80AEAAF0:
    ctx->pc = 0x80AEAAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEAAF0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEAAF0u)) return;
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
label_80AEAAF4:
    ctx->pc = 0x80AEAAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAF4u)) return;
    // 80AEAAF4: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEAAF8:
    ctx->pc = 0x80AEAAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAF8u)) return;
    // 80AEAAF8: addi    r5, r5, 14336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14336);

label_80AEAAFC:
    ctx->pc = 0x80AEAAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAAFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEAAFC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEAAFCu)) return;
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
label_80AEAB00:
    ctx->pc = 0x80AEAB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB00u)) return;
    // 80AEAB00: lis     r5, -27614
    ctx->gpr[5] = ((u32)(s32)(-27614) << 16);

label_80AEAB04:
    ctx->pc = 0x80AEAB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB04u)) return;
    // 80AEAB04: addi    r5, r5, 14340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14340);

label_80AEAB08:
    ctx->pc = 0x80AEAB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEAB08: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AEAB08u)) return;
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
label_80AEAB0C:
    ctx->pc = 0x80AEAB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB0Cu)) return;
    // 80AEAB0C: bl      0x8045C750
    {
            ctx->lr = 0x80AEAB10u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AEAB10:
    ctx->pc = 0x80AEAB10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AEAB10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAB14:
    ctx->pc = 0x80AEAB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB14u)) return;
    // 80AEAB14: li      r4, 270
    ctx->gpr[4] = (u32)(s32)(270);

label_80AEAB18:
    ctx->pc = 0x80AEAB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB18u)) return;
    // 80AEAB18: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AEAB1C:
    ctx->pc = 0x80AEAB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB1Cu)) return;
    // 80AEAB1C: addi    r5, r6, -571
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-571);

label_80AEAB20:
    ctx->pc = 0x80AEAB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB20u)) return;
    // 80AEAB20: addi    r6, r6, -22470
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22470);

label_80AEAB24:
    ctx->pc = 0x80AEAB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB24u)) return;
    // 80AEAB24: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AEAB28:
    ctx->pc = 0x80AEAB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB28u)) return;
    // 80AEAB28: bl      0x8045C7B4
    {
            ctx->lr = 0x80AEAB2Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AEAB2C:
    ctx->pc = 0x80AEAB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAB2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAB30:
    ctx->pc = 0x80AEAB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB30u)) return;
    // 80AEAB30: bl      0x8045F220
    {
            ctx->lr = 0x80AEAB34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAB34:
    ctx->pc = 0x80AEAB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEAB34: bl      0x8045C034
    {
            ctx->lr = 0x80AEAB38u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AEAB38:
    ctx->pc = 0x80AEAB38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEAB38: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEAB3C:
    ctx->pc = 0x80AEAB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB3Cu)) return;
    // 80AEAB3C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AEAB40:
    ctx->pc = 0x80AEAB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEAB40: lwz     r0, 0(r3)
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
label_80AEAB44:
    ctx->pc = 0x80AEAB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB44u)) return;
    // 80AEAB44: cmpwi   r0, 1
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

label_80AEAB48:
    ctx->pc = 0x80AEAB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB48u)) return;
    // 80AEAB48: bc    4, 2, 0x80AEAB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEAB60;
        }
    }

label_80AEAB4C:
    ctx->pc = 0x80AEAB4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAB4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAB50:
    ctx->pc = 0x80AEAB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB50u)) return;
    // 80AEAB50: bl      0x8045F220
    {
            ctx->lr = 0x80AEAB54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAB54:
    ctx->pc = 0x80AEAB54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEAB54: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAB58:
    ctx->pc = 0x80AEAB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB58u)) return;
    // 80AEAB58: addi    r4, r4, 15048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15048);

label_80AEAB5C:
    ctx->pc = 0x80AEAB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB5Cu)) return;
    // 80AEAB5C: bl      0x8045C060
    {
            ctx->lr = 0x80AEAB60u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AEAB60:
    ctx->pc = 0x80AEAB60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAB60: li      r3, 513
    ctx->gpr[3] = (u32)(s32)(513);

label_80AEAB64:
    ctx->pc = 0x80AEAB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB64u)) return;
    // 80AEAB64: bl      0x8045BFA0
    {
            ctx->lr = 0x80AEAB68u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AEAB68:
    ctx->pc = 0x80AEAB68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEAB68: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEAB6C:
    ctx->pc = 0x80AEAB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB6Cu)) return;
    // 80AEAB6C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AEAB70:
    ctx->pc = 0x80AEAB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEAB70: lwz     r0, 0(r3)
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
label_80AEAB74:
    ctx->pc = 0x80AEAB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB74u)) return;
    // 80AEAB74: cmpwi   r0, 0
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

label_80AEAB78:
    ctx->pc = 0x80AEAB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB78u)) return;
    // 80AEAB78: bc    4, 2, 0x80AEAB90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEAB90;
        }
    }

label_80AEAB7C:
    ctx->pc = 0x80AEAB7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAB7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAB80:
    ctx->pc = 0x80AEAB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB80u)) return;
    // 80AEAB80: bl      0x8045F220
    {
            ctx->lr = 0x80AEAB84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAB84:
    ctx->pc = 0x80AEAB84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEAB84: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAB88:
    ctx->pc = 0x80AEAB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB88u)) return;
    // 80AEAB88: addi    r4, r4, 15052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15052);

label_80AEAB8C:
    ctx->pc = 0x80AEAB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB8Cu)) return;
    // 80AEAB8C: bl      0x8045C060
    {
            ctx->lr = 0x80AEAB90u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AEAB90:
    ctx->pc = 0x80AEAB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AEAB90: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEAB94:
    ctx->pc = 0x80AEAB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB94u)) return;
    // 80AEAB94: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AEAB98:
    ctx->pc = 0x80AEAB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AEAB98: lwz     r0, 0(r3)
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
label_80AEAB9C:
    ctx->pc = 0x80AEAB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAB9Cu)) return;
    // 80AEAB9C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AEABA0:
    ctx->pc = 0x80AEABA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABA0u)) return;
    // 80AEABA0: lis     r3, -27614
    ctx->gpr[3] = ((u32)(s32)(-27614) << 16);

label_80AEABA4:
    ctx->pc = 0x80AEABA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABA4u)) return;
    // 80AEABA4: addi    r3, r3, 15020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15020);

label_80AEABA8:
    ctx->pc = 0x80AEABA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEABA8: lwzx    r3, r3, r0
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
label_80AEABAC:
    ctx->pc = 0x80AEABACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEABAC: lwz     r3, 0(r3)
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
label_80AEABB0:
    ctx->pc = 0x80AEABB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABB0u)) return;
    // 80AEABB0: bl      0x8045F6FC
    {
            ctx->lr = 0x80AEABB4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AEABB4:
    ctx->pc = 0x80AEABB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEABB4: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80AEABB8:
    ctx->pc = 0x80AEABB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABB8u)) return;
    // 80AEABB8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEABBCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEABBC:
    ctx->pc = 0x80AEABBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEABBC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEABC0:
    ctx->pc = 0x80AEABC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABC0u)) return;
    // 80AEABC0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AEABC4:
    ctx->pc = 0x80AEABC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEABC4: lwz     r0, 0(r3)
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
label_80AEABC8:
    ctx->pc = 0x80AEABC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABC8u)) return;
    // 80AEABC8: cmpwi   r0, 0
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

label_80AEABCC:
    ctx->pc = 0x80AEABCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABCCu)) return;
    // 80AEABCC: bc    4, 2, 0x80AEABDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEABDC;
        }
    }

label_80AEABD0:
    ctx->pc = 0x80AEABD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEABD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEABD4:
    ctx->pc = 0x80AEABD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABD4u)) return;
    // 80AEABD4: bl      0x8045F220
    {
            ctx->lr = 0x80AEABD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEABD8:
    ctx->pc = 0x80AEABD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEABD8: bl      0x8045C034
    {
            ctx->lr = 0x80AEABDCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AEABDC:
    ctx->pc = 0x80AEABDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEABDC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEABE0:
    ctx->pc = 0x80AEABE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABE0u)) return;
    // 80AEABE0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AEABE4:
    ctx->pc = 0x80AEABE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEABE4: lwz     r0, 0(r3)
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
label_80AEABE8:
    ctx->pc = 0x80AEABE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABE8u)) return;
    // 80AEABE8: cmpwi   r0, 1
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

label_80AEABEC:
    ctx->pc = 0x80AEABECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABECu)) return;
    // 80AEABEC: bc    4, 2, 0x80AEABFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEABFC;
        }
    }

label_80AEABF0:
    ctx->pc = 0x80AEABF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEABF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEABF4:
    ctx->pc = 0x80AEABF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEABF4u)) return;
    // 80AEABF4: bl      0x8045F220
    {
            ctx->lr = 0x80AEABF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEABF8:
    ctx->pc = 0x80AEABF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEABF8: bl      0x8045C034
    {
            ctx->lr = 0x80AEABFCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AEABFC:
    ctx->pc = 0x80AEABFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEABFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEABFC: li      r3, 514
    ctx->gpr[3] = (u32)(s32)(514);

label_80AEAC00:
    ctx->pc = 0x80AEAC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC00u)) return;
    // 80AEAC00: bl      0x8045BFA0
    {
            ctx->lr = 0x80AEAC04u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AEAC04:
    ctx->pc = 0x80AEAC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAC04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAC08:
    ctx->pc = 0x80AEAC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC08u)) return;
    // 80AEAC08: bl      0x8045F220
    {
            ctx->lr = 0x80AEAC0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAC0C:
    ctx->pc = 0x80AEAC0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEAC0C: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAC10:
    ctx->pc = 0x80AEAC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC10u)) return;
    // 80AEAC10: addi    r4, r4, 15056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15056);

label_80AEAC14:
    ctx->pc = 0x80AEAC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC14u)) return;
    // 80AEAC14: bl      0x8045C060
    {
            ctx->lr = 0x80AEAC18u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AEAC18:
    ctx->pc = 0x80AEAC18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AEAC18: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEAC1C:
    ctx->pc = 0x80AEAC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC1Cu)) return;
    // 80AEAC1C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AEAC20:
    ctx->pc = 0x80AEAC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AEAC20: lwz     r0, 0(r3)
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
label_80AEAC24:
    ctx->pc = 0x80AEAC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC24u)) return;
    // 80AEAC24: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AEAC28:
    ctx->pc = 0x80AEAC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC28u)) return;
    // 80AEAC28: lis     r3, -27614
    ctx->gpr[3] = ((u32)(s32)(-27614) << 16);

label_80AEAC2C:
    ctx->pc = 0x80AEAC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC2Cu)) return;
    // 80AEAC2C: addi    r3, r3, 15020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15020);

label_80AEAC30:
    ctx->pc = 0x80AEAC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEAC30: lwzx    r3, r3, r0
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
label_80AEAC34:
    ctx->pc = 0x80AEAC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEAC34: lwz     r3, 4(r3)
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
label_80AEAC38:
    ctx->pc = 0x80AEAC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC38u)) return;
    // 80AEAC38: bl      0x8045F6FC
    {
            ctx->lr = 0x80AEAC3Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AEAC3C:
    ctx->pc = 0x80AEAC3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAC3C: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80AEAC40:
    ctx->pc = 0x80AEAC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC40u)) return;
    // 80AEAC40: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEAC44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEAC44:
    ctx->pc = 0x80AEAC44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAC44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAC48:
    ctx->pc = 0x80AEAC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC48u)) return;
    // 80AEAC48: bl      0x8045F220
    {
            ctx->lr = 0x80AEAC4Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAC4C:
    ctx->pc = 0x80AEAC4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AEAC4C: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAC50:
    ctx->pc = 0x80AEAC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC50u)) return;
    // 80AEAC50: addi    r4, r4, 22516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22516);

label_80AEAC54:
    ctx->pc = 0x80AEAC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC54u)) return;
    // 80AEAC54: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AEAC58:
    ctx->pc = 0x80AEAC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC58u)) return;
    // 80AEAC58: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AEAC5C:
    ctx->pc = 0x80AEAC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC5Cu)) return;
    // 80AEAC5C: lis     r6, -27614
    ctx->gpr[6] = ((u32)(s32)(-27614) << 16);

label_80AEAC60:
    ctx->pc = 0x80AEAC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC60u)) return;
    // 80AEAC60: addi    r6, r6, 14344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(14344);

label_80AEAC64:
    ctx->pc = 0x80AEAC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AEAC64: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AEAC64u)) return;
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
label_80AEAC68:
    ctx->pc = 0x80AEAC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC68u)) return;
    // 80AEAC68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AEAC6C:
    ctx->pc = 0x80AEAC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC6Cu)) return;
    // 80AEAC6C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80AEAC70:
    ctx->pc = 0x80AEAC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC70u)) return;
    // 80AEAC70: bl      0x8045EBE4
    {
            ctx->lr = 0x80AEAC74u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AEAC74:
    ctx->pc = 0x80AEAC74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAC74: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80AEAC78:
    ctx->pc = 0x80AEAC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC78u)) return;
    // 80AEAC78: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEAC7Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEAC7C:
    ctx->pc = 0x80AEAC7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAC7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAC80:
    ctx->pc = 0x80AEAC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC80u)) return;
    // 80AEAC80: bl      0x8045F220
    {
            ctx->lr = 0x80AEAC84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAC84:
    ctx->pc = 0x80AEAC84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEAC84: bl      0x8045C034
    {
            ctx->lr = 0x80AEAC88u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AEAC88:
    ctx->pc = 0x80AEAC88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAC88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAC8C:
    ctx->pc = 0x80AEAC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC8Cu)) return;
    // 80AEAC8C: bl      0x8045F220
    {
            ctx->lr = 0x80AEAC90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAC90:
    ctx->pc = 0x80AEAC90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEAC90: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAC94:
    ctx->pc = 0x80AEAC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC94u)) return;
    // 80AEAC94: addi    r4, r4, 15060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15060);

label_80AEAC98:
    ctx->pc = 0x80AEAC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAC98u)) return;
    // 80AEAC98: bl      0x8045C060
    {
            ctx->lr = 0x80AEAC9Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AEAC9C:
    ctx->pc = 0x80AEAC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAC9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEACA0:
    ctx->pc = 0x80AEACA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACA0u)) return;
    // 80AEACA0: bl      0x8045F220
    {
            ctx->lr = 0x80AEACA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEACA4:
    ctx->pc = 0x80AEACA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEACA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AEACA4: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80AEACA8:
    ctx->pc = 0x80AEACA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACA8u)) return;
    // 80AEACA8: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80AEACAC:
    ctx->pc = 0x80AEACACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACACu)) return;
    // 80AEACAC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AEACB0:
    ctx->pc = 0x80AEACB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACB0u)) return;
    // 80AEACB0: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AEACB4:
    ctx->pc = 0x80AEACB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACB4u)) return;
    // 80AEACB4: lis     r6, -27614
    ctx->gpr[6] = ((u32)(s32)(-27614) << 16);

label_80AEACB8:
    ctx->pc = 0x80AEACB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACB8u)) return;
    // 80AEACB8: addi    r6, r6, 14348
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(14348);

label_80AEACBC:
    ctx->pc = 0x80AEACBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AEACBC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AEACBCu)) return;
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
label_80AEACC0:
    ctx->pc = 0x80AEACC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACC0u)) return;
    // 80AEACC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AEACC4:
    ctx->pc = 0x80AEACC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACC4u)) return;
    // 80AEACC4: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80AEACC8:
    ctx->pc = 0x80AEACC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACC8u)) return;
    // 80AEACC8: bl      0x8045EBE4
    {
            ctx->lr = 0x80AEACCCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AEACCC:
    ctx->pc = 0x80AEACCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEACCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEACCC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AEACD0:
    ctx->pc = 0x80AEACD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACD0u)) return;
    // 80AEACD0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEACD4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEACD4:
    ctx->pc = 0x80AEACD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEACD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEACD4: li      r3, 515
    ctx->gpr[3] = (u32)(s32)(515);

label_80AEACD8:
    ctx->pc = 0x80AEACD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACD8u)) return;
    // 80AEACD8: bl      0x8045BFA0
    {
            ctx->lr = 0x80AEACDCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AEACDC:
    ctx->pc = 0x80AEACDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEACDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEACDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEACE0:
    ctx->pc = 0x80AEACE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACE0u)) return;
    // 80AEACE0: bl      0x8045F220
    {
            ctx->lr = 0x80AEACE4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEACE4:
    ctx->pc = 0x80AEACE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEACE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEACE4: bl      0x8045C034
    {
            ctx->lr = 0x80AEACE8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AEACE8:
    ctx->pc = 0x80AEACE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEACE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEACE8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEACEC:
    ctx->pc = 0x80AEACECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACECu)) return;
    // 80AEACEC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AEACF0:
    ctx->pc = 0x80AEACF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEACF0: lwz     r0, 0(r3)
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
label_80AEACF4:
    ctx->pc = 0x80AEACF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACF4u)) return;
    // 80AEACF4: cmpwi   r0, 0
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

label_80AEACF8:
    ctx->pc = 0x80AEACF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEACF8u)) return;
    // 80AEACF8: bc    4, 2, 0x80AEAD10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEAD10;
        }
    }

label_80AEACFC:
    ctx->pc = 0x80AEACFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEACFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEACFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAD00:
    ctx->pc = 0x80AEAD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD00u)) return;
    // 80AEAD00: bl      0x8045F220
    {
            ctx->lr = 0x80AEAD04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAD04:
    ctx->pc = 0x80AEAD04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEAD04: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAD08:
    ctx->pc = 0x80AEAD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD08u)) return;
    // 80AEAD08: addi    r4, r4, 15064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15064);

label_80AEAD0C:
    ctx->pc = 0x80AEAD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD0Cu)) return;
    // 80AEAD0C: bl      0x8045C060
    {
            ctx->lr = 0x80AEAD10u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AEAD10:
    ctx->pc = 0x80AEAD10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEAD10: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEAD14:
    ctx->pc = 0x80AEAD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD14u)) return;
    // 80AEAD14: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AEAD18:
    ctx->pc = 0x80AEAD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEAD18: lwz     r0, 0(r3)
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
label_80AEAD1C:
    ctx->pc = 0x80AEAD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD1Cu)) return;
    // 80AEAD1C: cmpwi   r0, 1
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

label_80AEAD20:
    ctx->pc = 0x80AEAD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD20u)) return;
    // 80AEAD20: bc    4, 2, 0x80AEAD38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AEAD38;
        }
    }

label_80AEAD24:
    ctx->pc = 0x80AEAD24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAD24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAD28:
    ctx->pc = 0x80AEAD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD28u)) return;
    // 80AEAD28: bl      0x8045F220
    {
            ctx->lr = 0x80AEAD2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAD2C:
    ctx->pc = 0x80AEAD2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AEAD2C: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAD30:
    ctx->pc = 0x80AEAD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD30u)) return;
    // 80AEAD30: addi    r4, r4, 15068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15068);

label_80AEAD34:
    ctx->pc = 0x80AEAD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD34u)) return;
    // 80AEAD34: bl      0x8045C060
    {
            ctx->lr = 0x80AEAD38u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AEAD38:
    ctx->pc = 0x80AEAD38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AEAD38: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AEAD3C:
    ctx->pc = 0x80AEAD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD3Cu)) return;
    // 80AEAD3C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AEAD40:
    ctx->pc = 0x80AEAD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AEAD40: lwz     r0, 0(r3)
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
label_80AEAD44:
    ctx->pc = 0x80AEAD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD44u)) return;
    // 80AEAD44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AEAD48:
    ctx->pc = 0x80AEAD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD48u)) return;
    // 80AEAD48: lis     r3, -27614
    ctx->gpr[3] = ((u32)(s32)(-27614) << 16);

label_80AEAD4C:
    ctx->pc = 0x80AEAD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD4Cu)) return;
    // 80AEAD4C: addi    r3, r3, 15020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15020);

label_80AEAD50:
    ctx->pc = 0x80AEAD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEAD50: lwzx    r3, r3, r0
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
label_80AEAD54:
    ctx->pc = 0x80AEAD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEAD54: lwz     r3, 8(r3)
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
label_80AEAD58:
    ctx->pc = 0x80AEAD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD58u)) return;
    // 80AEAD58: bl      0x8045F6FC
    {
            ctx->lr = 0x80AEAD5Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AEAD5C:
    ctx->pc = 0x80AEAD5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAD5C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80AEAD60:
    ctx->pc = 0x80AEAD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD60u)) return;
    // 80AEAD60: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEAD64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEAD64:
    ctx->pc = 0x80AEAD64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEAD64: bl      0x8045F32C
    {
            ctx->lr = 0x80AEAD68u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AEAD68:
    ctx->pc = 0x80AEAD68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEAD68: b       0x80AEADD0
    {
            goto label_80AEADD0;
    }

label_80AEAD6C:
    ctx->pc = 0x80AEAD6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAD6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEAD70:
    ctx->pc = 0x80AEAD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD70u)) return;
    // 80AEAD70: bl      0x8045F220
    {
            ctx->lr = 0x80AEAD74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEAD74:
    ctx->pc = 0x80AEAD74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AEAD74: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAD78:
    ctx->pc = 0x80AEAD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD78u)) return;
    // 80AEAD78: addi    r4, r4, 14296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14296);

label_80AEAD7C:
    ctx->pc = 0x80AEAD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AEAD7C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAD7Cu)) return;
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
label_80AEAD80:
    ctx->pc = 0x80AEAD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD80u)) return;
    // 80AEAD80: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAD84:
    ctx->pc = 0x80AEAD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD84u)) return;
    // 80AEAD84: addi    r4, r4, 14300
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14300);

label_80AEAD88:
    ctx->pc = 0x80AEAD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEAD88: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAD88u)) return;
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
label_80AEAD8C:
    ctx->pc = 0x80AEAD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD8Cu)) return;
    // 80AEAD8C: lis     r4, -27614
    ctx->gpr[4] = ((u32)(s32)(-27614) << 16);

label_80AEAD90:
    ctx->pc = 0x80AEAD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD90u)) return;
    // 80AEAD90: addi    r4, r4, 14304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14304);

label_80AEAD94:
    ctx->pc = 0x80AEAD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AEAD94: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AEAD94u)) return;
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
label_80AEAD98:
    ctx->pc = 0x80AEAD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEAD98u)) return;
    // 80AEAD98: bl      0x8045EF2C
    {
            ctx->lr = 0x80AEAD9Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AEAD9C:
    ctx->pc = 0x80AEAD9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEAD9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEAD9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEADA0:
    ctx->pc = 0x80AEADA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADA0u)) return;
    // 80AEADA0: bl      0x8045F220
    {
            ctx->lr = 0x80AEADA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AEADA4:
    ctx->pc = 0x80AEADA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEADA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AEADA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AEADA8:
    ctx->pc = 0x80AEADA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADA8u)) return;
    // 80AEADA8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AEADAC:
    ctx->pc = 0x80AEADACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADACu)) return;
    // 80AEADAC: addi    r5, r5, -15547
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15547);

label_80AEADB0:
    ctx->pc = 0x80AEADB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADB0u)) return;
    // 80AEADB0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AEADB4:
    ctx->pc = 0x80AEADB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADB4u)) return;
    // 80AEADB4: bl      0x8045EEA8
    {
            ctx->lr = 0x80AEADB8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AEADB8:
    ctx->pc = 0x80AEADB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEADB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEADB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AEADBC:
    ctx->pc = 0x80AEADBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADBCu)) return;
    // 80AEADBC: bl      0x8045F7C8
    {
            ctx->lr = 0x80AEADC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AEADC0:
    ctx->pc = 0x80AEADC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEADC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AEADC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AEADC4:
    ctx->pc = 0x80AEADC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADC4u)) return;
    // 80AEADC4: bl      0x8045EC10
    {
            ctx->lr = 0x80AEADC8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AEADC8:
    ctx->pc = 0x80AEADC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEADC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEADC8: bl      0x8045DE34
    {
            ctx->lr = 0x80AEADCCu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80AEADCC:
    ctx->pc = 0x80AEADCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEADCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AEADCC: bl      0x80460A80
    {
            ctx->lr = 0x80AEADD0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80AEADD0:
    ctx->pc = 0x80AEADD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AEADD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AEADD0: lwz     r0, 20(r1)
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
label_80AEADD4:
    ctx->pc = 0x80AEADD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AEADD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AEADD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AEADD8:
    ctx->pc = 0x80AEADD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADD8u)) return;
    // 80AEADD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AEADDC:
    ctx->pc = 0x80AEADDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AEADDCu)) return;
    // 80AEADDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AEA8A0;
        }
    }

    ctx->pc = 0x80AEADE0u;
    return;
return_dispatch_80AEA8A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80AEA8D4u: goto label_80AEA8D4;
    case 0x80AEA8D8u: goto label_80AEA8D8;
    case 0x80AEA8DCu: goto label_80AEA8DC;
    case 0x80AEA8E4u: goto label_80AEA8E4;
    case 0x80AEA8ECu: goto label_80AEA8EC;
    case 0x80AEA914u: goto label_80AEA914;
    case 0x80AEA91Cu: goto label_80AEA91C;
    case 0x80AEA930u: goto label_80AEA930;
    case 0x80AEA938u: goto label_80AEA938;
    case 0x80AEA940u: goto label_80AEA940;
    case 0x80AEA944u: goto label_80AEA944;
    case 0x80AEA94Cu: goto label_80AEA94C;
    case 0x80AEA974u: goto label_80AEA974;
    case 0x80AEA9A4u: goto label_80AEA9A4;
    case 0x80AEA9C0u: goto label_80AEA9C0;
    case 0x80AEA9F0u: goto label_80AEA9F0;
    case 0x80AEAA0Cu: goto label_80AEAA0C;
    case 0x80AEAA14u: goto label_80AEAA14;
    case 0x80AEAA54u: goto label_80AEAA54;
    case 0x80AEAA5Cu: goto label_80AEAA5C;
    case 0x80AEAA64u: goto label_80AEAA64;
    case 0x80AEAA8Cu: goto label_80AEAA8C;
    case 0x80AEAA94u: goto label_80AEAA94;
    case 0x80AEAAC4u: goto label_80AEAAC4;
    case 0x80AEAAE0u: goto label_80AEAAE0;
    case 0x80AEAB10u: goto label_80AEAB10;
    case 0x80AEAB2Cu: goto label_80AEAB2C;
    case 0x80AEAB34u: goto label_80AEAB34;
    case 0x80AEAB38u: goto label_80AEAB38;
    case 0x80AEAB54u: goto label_80AEAB54;
    case 0x80AEAB60u: goto label_80AEAB60;
    case 0x80AEAB68u: goto label_80AEAB68;
    case 0x80AEAB84u: goto label_80AEAB84;
    case 0x80AEAB90u: goto label_80AEAB90;
    case 0x80AEABB4u: goto label_80AEABB4;
    case 0x80AEABBCu: goto label_80AEABBC;
    case 0x80AEABD8u: goto label_80AEABD8;
    case 0x80AEABDCu: goto label_80AEABDC;
    case 0x80AEABF8u: goto label_80AEABF8;
    case 0x80AEABFCu: goto label_80AEABFC;
    case 0x80AEAC04u: goto label_80AEAC04;
    case 0x80AEAC0Cu: goto label_80AEAC0C;
    case 0x80AEAC18u: goto label_80AEAC18;
    case 0x80AEAC3Cu: goto label_80AEAC3C;
    case 0x80AEAC44u: goto label_80AEAC44;
    case 0x80AEAC4Cu: goto label_80AEAC4C;
    case 0x80AEAC74u: goto label_80AEAC74;
    case 0x80AEAC7Cu: goto label_80AEAC7C;
    case 0x80AEAC84u: goto label_80AEAC84;
    case 0x80AEAC88u: goto label_80AEAC88;
    case 0x80AEAC90u: goto label_80AEAC90;
    case 0x80AEAC9Cu: goto label_80AEAC9C;
    case 0x80AEACA4u: goto label_80AEACA4;
    case 0x80AEACCCu: goto label_80AEACCC;
    case 0x80AEACD4u: goto label_80AEACD4;
    case 0x80AEACDCu: goto label_80AEACDC;
    case 0x80AEACE4u: goto label_80AEACE4;
    case 0x80AEACE8u: goto label_80AEACE8;
    case 0x80AEAD04u: goto label_80AEAD04;
    case 0x80AEAD10u: goto label_80AEAD10;
    case 0x80AEAD2Cu: goto label_80AEAD2C;
    case 0x80AEAD38u: goto label_80AEAD38;
    case 0x80AEAD5Cu: goto label_80AEAD5C;
    case 0x80AEAD64u: goto label_80AEAD64;
    case 0x80AEAD68u: goto label_80AEAD68;
    case 0x80AEAD74u: goto label_80AEAD74;
    case 0x80AEAD9Cu: goto label_80AEAD9C;
    case 0x80AEADA4u: goto label_80AEADA4;
    case 0x80AEADB8u: goto label_80AEADB8;
    case 0x80AEADC0u: goto label_80AEADC0;
    case 0x80AEADC8u: goto label_80AEADC8;
    case 0x80AEADCCu: goto label_80AEADCC;
    case 0x80AEADD0u: goto label_80AEADD0;
    default: return;
    }
}

